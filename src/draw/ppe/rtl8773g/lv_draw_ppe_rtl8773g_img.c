/**
 * @file lv_draw_ppe_img.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_draw_private.h"
#if LV_USE_DRAW_PPE_RTL8773G
#include "../../../misc/lv_area_private.h"
#include "../../sw/blend/lv_draw_sw_blend_private.h"
#include "../../lv_image_decoder_private.h"
#include "../../lv_draw_image_private.h"
#include "../../../display/lv_display.h"
#include "../../../display/lv_display_private.h"
#include "../../../misc/lv_log.h"
#include "../../../core/lv_refr_private.h"
#include "../../../stdlib/lv_mem.h"
#include "../../../misc/lv_math.h"
#include "../../../misc/lv_color.h"
#include "../../../stdlib/lv_string.h"
#include "../../../core/lv_global.h"
#include "../../../draw/lv_image_decoder.h"

#include "lv_ppe_rtl8773g_utils.h"
#include "rtl_idu.h"
#include "string.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void img_draw_core(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                          const lv_image_decoder_dsc_t *decoder_dsc, lv_draw_image_sup_t *sup,
                          const lv_area_t *img_coords, const lv_area_t *clipped_img_area);

static void lv_draw_ppe_normal(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                               const lv_area_t *coords);
static void lv_draw_ppe_tile(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                             const lv_area_t *coords);
#if LV_DRAW_TRANSFORM_USE_MATRIX
static void lv_draw_ppe_matrix(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                               const lv_area_t *coords, lv_matrix_t *matrix);
#endif

/**********************
 *  STATIC VARIABLES
 **********************/
static uint8_t *cache_buffer = NULL;
/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
#if LV_DRAW_TRANSFORM_USE_MATRIX
void lv_draw_ppe_image_use_matrix(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                                  const lv_area_t *coords, lv_matrix_t *matrix)
{
    if (draw_dsc->opa <= (lv_opa_t)LV_OPA_MIN)
    {
        return;
    }

    lv_draw_ppe_matrix(draw_unit, draw_dsc, coords, matrix);
}

void lv_draw_ppe_layer_use_matrix(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                                  const lv_area_t *coords, lv_matrix_t *matrix)
{
    if (draw_dsc->opa <= (lv_opa_t)LV_OPA_MIN)
    {
        return;
    }
    lv_layer_t *layer_to_draw = (lv_layer_t *)draw_dsc->src;

    /*It can happen that nothing was draw on a layer and therefore its buffer is not allocated.
     *In this case just return. */
    if (layer_to_draw->draw_buf == NULL) { return; }

    lv_draw_image_dsc_t new_draw_dsc = *draw_dsc;
    new_draw_dsc.src = layer_to_draw->draw_buf;
    lv_draw_ppe_matrix(draw_unit, &new_draw_dsc, coords, matrix);
}
#endif

void lv_draw_ppe_image(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                       const lv_area_t *coords)
{
    if (draw_dsc->opa <= (lv_opa_t)LV_OPA_MIN)
    {
        return;
    }

    if (!draw_dsc->tile)
    {
        lv_draw_image_normal_helper(draw_unit, draw_dsc, coords, img_draw_core);
    }
    else
    {
        lv_draw_ppe_tile(draw_unit, draw_dsc, coords);
    }
}

void lv_draw_ppe_layer(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                       const lv_area_t *coords)
{
    lv_layer_t *layer_to_draw = (lv_layer_t *)draw_dsc->src;
    /*It can happen that nothing was draw on a layer and therefore its buffer is not allocated.
     *In this case just return. */
    if (layer_to_draw->draw_buf == NULL) { return; }

    lv_draw_image_dsc_t new_draw_dsc = *draw_dsc;
    new_draw_dsc.src = layer_to_draw->draw_buf;
    lv_draw_ppe_image(draw_unit, &new_draw_dsc, coords);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void lv_draw_ppe_normal(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                               const lv_area_t *coords)
{
    LV_PROFILER_DRAW_BEGIN;
    lv_layer_t *layer = draw_unit->target_layer;
    const lv_image_dsc_t *img_dsc = draw_dsc->src;
    lv_area_t area_rot;
    lv_area_copy(&area_rot, coords);
    lv_area_t constraint_area;
    bool compressed = false;
    if (!lv_area_intersect(&constraint_area, &draw_unit->target_layer->buf_area, draw_unit->clip_area))
    {
        LV_PROFILER_DRAW_END;
        return;
    }
    bool transform = (draw_dsc->scale_x != LV_SCALE_NONE || draw_dsc->scale_y != LV_SCALE_NONE\
                      || draw_dsc->rotation != 0 || draw_dsc->skew_x != 0 || draw_dsc->skew_y != 0);
    ppe_buffer_t target, source;
    memset(&target, 0, sizeof(ppe_buffer_t));
    memset(&source, 0, sizeof(ppe_buffer_t));
    if (img_dsc->header.flags & LV_IMAGE_FLAGS_USER1)
    {
        compressed = true;
    }


    target.format = PPE_ABGR8888;
    switch (draw_unit->target_layer->color_format)
    {
    case LV_COLOR_FORMAT_RGB565:
        target.format = PPE_RGB565;
        break;
    case LV_COLOR_FORMAT_ARGB8888:
        target.format = PPE_ARGB8888;
        break;
    case LV_COLOR_FORMAT_RGB888:
        target.format = PPE_RGB888;
        break;
    case LV_COLOR_FORMAT_XRGB8888:
        target.format = PPE_XRGB8888;
        break;
    default:
        lv_draw_sw_image(draw_unit, draw_dsc, coords);
        LV_PROFILER_DRAW_END;
        return;
    }
    target.address = (uint32_t)draw_unit->target_layer->draw_buf->data;
    target.width = lv_area_get_width(&draw_unit->target_layer->buf_area);
    target.height = lv_area_get_height(&draw_unit->target_layer->buf_area);
    target.stride = target.width;
    target.win_x_min = 0;
    target.win_x_max = target.width - 1;
    target.win_y_min = 0;
    target.win_y_max = target.height - 1;

    PPE_BLEND_METHOD method = PPE_BLEND_PREMULTIPLY;

    source.format = lv_ppe_get_format(img_dsc->header.cf);
    uint8_t pixel_byte = PPE_Get_Pixel_Size(source.format) / PPE_BYTE_SIZE;

    source.address = (uint32_t)img_dsc->data;
    source.width = img_dsc->header.w;
    source.height = img_dsc->header.h;
    source.high_quality = false;
    if (img_dsc->header.stride != 0)
    {
        source.stride = img_dsc->header.stride / pixel_byte;
    }
    else
    {
        source.stride = img_dsc->header.w;
    }
    source.opacity = draw_dsc->opa;
    source.win_x_min = target.win_x_min;
    source.win_x_max = target.win_x_max;
    source.win_y_min = target.win_y_min;
    source.win_y_max = target.win_y_max;
    source.const_color = 0xFFFFFFFF;

    if ((source.format == PPE_RGB565 || source.format == PPE_RGB888) && \
        draw_dsc->opa == 0xFF && draw_dsc->rotation == 0)
    {
        method = PPE_BLEND_BYPASS;
    }

    ppe_matrix_t matrix, inverse, pre_trans;

    area_rot = lv_ppe_get_matrix_area(&matrix, coords, draw_dsc);
    if (!lv_area_intersect(&constraint_area, &constraint_area, &area_rot))
    {
        LV_PROFILER_DRAW_END;
        return;
    }
    uint32_t src_stride = 0;
    if (!transform && draw_dsc->opa >= LV_OPA_MAX && draw_dsc->recolor_opa == 0 &&
        target.format == source.format && (target.format == PPE_RGB565 || target.format == PPE_RGB888))
    {
        int16_t target_x = constraint_area.x1 - draw_unit->target_layer->buf_area.x1;
        int16_t target_y = constraint_area.y1 - draw_unit->target_layer->buf_area.y1;
        uint32_t length = lv_area_get_width(&constraint_area) * pixel_byte;
        uint32_t height = lv_area_get_height(&constraint_area);
        if (img_dsc->header.stride != 0)
        {
            src_stride = img_dsc->header.stride;
        }
        else
        {
            src_stride = img_dsc->header.w * pixel_byte;
        }
        uint32_t dst_stride = target.width * pixel_byte;
        uint32_t dst_addr = target.address + (target.stride * target_y + target_x) * pixel_byte;
        if (compressed)
        {
            if (length == dst_stride || length % 4 == 0)
            {
                IDU_decode_range range = {.start_column = constraint_area.x1 - coords->x1,
                                          .end_column = constraint_area.x2 - coords->x1,
                                          .start_line = constraint_area.y1 - coords->y1,
                                          .end_line = constraint_area.y2 - coords->y1,
                                          .target_stride = dst_stride
                                         };
                IDU_DMA_Config dma_cfg;
                dma_cfg.output_buf = (uint32_t *)dst_addr;
                dma_cfg.RX_DMA_channel_num = lv_acc_get_high_speed_channel();
                dma_cfg.TX_DMA_channel_num = lv_acc_get_low_speed_channel();
                PPE_Finish();
                IDU_ERROR err_code = IDU_Decode((uint8_t *)source.address, &range, &dma_cfg);
                if (err_code == IDU_SUCCESS)
                {
                    LV_PROFILER_DRAW_END;
                    return;
                }
            }
        }
        else
        {
            uint32_t src_addr = source.address + (source.stride * (constraint_area.y1 - coords->y1) +
                                                  (constraint_area.x1 - coords->x1)) *
                                pixel_byte;
            lv_acc_dma_copy(length, height, src_stride, dst_stride, (uint8_t *)src_addr, (uint8_t *)dst_addr);
            LV_PROFILER_DRAW_END;
            return;
        }
    }
    ppe_rect_t image_area;
    memcpy(&inverse, &matrix, sizeof(ppe_matrix_t));
    ppe_matrix_inverse(&inverse);
    if (!ppe_get_area(&image_area, (ppe_rect_t *)&constraint_area, &inverse, &source))
    {
        LV_PROFILER_DRAW_END;
        return;
    }

    uint8_t *pic_buffer = NULL;
    uint16_t image_width = image_area.x2 - image_area.x1 + 1;
    uint16_t image_height = image_area.y2 - image_area.y1 + 1;

    if (!compressed)
    {
#if 0
        uint32_t length = image_width * pixel_byte;
        uint32_t height = image_height;
        if (img_dsc->header.stride != 0)
        {
            src_stride = img_dsc->header.stride;
        }
        else
        {
            src_stride = img_dsc->header.w * pixel_byte;
        }
        uint32_t dst_stride = length;
        uint32_t src_addr = source.address + (source.stride * image_area.y1 + image_area.x1) * pixel_byte;
        lv_acc_dma_copy(length, height, src_stride, dst_stride, (uint8_t *)src_addr, (uint8_t *)pic_buffer);
#else
        ppe_translate(draw_unit->target_layer->buf_area.x1, draw_unit->target_layer->buf_area.y1, &inverse);
#endif
    }
    else
    {
        if (image_width * image_height * pixel_byte <= LV_PPE_MAX_BUFFER_SIZE)
        {
            pic_buffer = lv_ppe_get_buffer(0);
            if (cache_buffer == pic_buffer)
            {
                PPE_Finish();
            }

        }
        else
        {
            pic_buffer = lv_malloc(image_width * image_height * pixel_byte + 4);
            if (cache_buffer != lv_ppe_get_buffer(0))
            {
                if (cache_buffer != NULL)
                {
                    PPE_Finish();
                    lv_free(cache_buffer);
                    cache_buffer = NULL;
                }
            }
        }
        IDU_decode_range range;
        range.start_column = image_area.x1;
        range.end_column = image_area.x2;
        range.start_line = image_area.y1;
        range.end_line = image_area.y2;
        range.target_stride = image_width * pixel_byte;
        IDU_DMA_config dma_cfg;
        dma_cfg.output_buf = (uint32_t *)pic_buffer;
        dma_cfg.RX_DMA_channel_num = lv_acc_get_high_speed_channel();
        dma_cfg.TX_DMA_channel_num = lv_acc_get_low_speed_channel();
//        uint32_t idu1 = sys_timestamp_get_us();
        IDU_ERROR err_code = IDU_Decode((uint8_t *)img_dsc->data, &range, &dma_cfg);
//        uint32_t idu2 = sys_timestamp_get_us();
        source.address = (uint32_t)pic_buffer;
        source.width = image_width;
        source.height = image_height;
        source.stride = image_width;
        ppe_get_identity(&pre_trans);
        pre_trans.m[0][2] = image_area.x1 * -1.0f;
        pre_trans.m[1][2] = image_area.y1 * -1.0f;
        ppe_mat_multiply(&pre_trans, &inverse);

        ppe_translate(draw_unit->target_layer->buf_area.x1, draw_unit->target_layer->buf_area.y1,
                      &pre_trans);
        memcpy(&inverse, &pre_trans, sizeof(float) * 9);
//        if(err_code != IDU_SUCCESS)
//        {
//            DBG_DIRECT("err code %d", err_code);
//            DBG_DIRECT("range x %d -> %d, y %d -> %d",constraint_area.x1, constraint_area.x2, constraint_area.y1, constraint_area.y2);
//        }
    }

    if (draw_dsc->recolor_opa >= LV_OPA_MIN)
    {
        uint32_t recolor_value = lv_ppe_get_color(draw_dsc->recolor, draw_dsc->recolor_opa);
        ppe_rect_t recolor_rect = {.x1 = 0, .y1 = 0, .x2 = source.width - 1, .y2 = source.height - 1};
        PPE_Finish();
        PPE_Mask(&source, recolor_value, &recolor_rect);
    }

    lv_area_move(&constraint_area, -draw_unit->target_layer->buf_area.x1,
                 -draw_unit->target_layer->buf_area.y1);

    if (draw_dsc->antialias && ppe_matrix_is_complex(&inverse))
    {
        source.high_quality = true;
    }
//    DBG_DIRECT("%s", source.high_quality?"use AA" : "no AA");
//    uint32_t ppe1 = sys_timestamp_get_us();
    PPE_Finish();
    if (cache_buffer != lv_ppe_get_buffer(0))
    {
        if (cache_buffer != NULL)
        {
            lv_free(cache_buffer);
            cache_buffer = NULL;
        }
    }

    PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inverse, (ppe_rect_t *)&constraint_area,
                                   method);
//    PPE_Finish();
//    uint32_t ppe2 = sys_timestamp_get_us();
//    DBG_DIRECT("PPE consume %d us || %d ms", ppe2 - ppe1, (ppe2 - ppe1) / 1000);
    cache_buffer = pic_buffer;
    if (err == PPE_SUCCESS)
    {

        LV_PROFILER_DRAW_END;
        return;
    }
    LV_PROFILER_DRAW_END;
    return;
}

static void lv_draw_ppe_tile(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                             const lv_area_t *coords)
{
    LV_PROFILER_DRAW_BEGIN;
    const lv_image_dsc_t *img_dsc = draw_dsc->src;
    bool compressed = false;
    int32_t img_w = img_dsc->header.w;
    int32_t img_h = img_dsc->header.h;

    lv_area_t tile_area;
    if (lv_area_get_width(&draw_dsc->image_area) >= 0)
    {
        tile_area = draw_dsc->image_area;
    }
    else
    {
        tile_area = *coords;
    }
    lv_area_set_width(&tile_area, img_w);
    lv_area_set_height(&tile_area, img_h);

    int32_t tile_x_start = tile_area.x1;
    lv_area_t relative_decoded_area =
    {
        .x1 = LV_COORD_MIN,
        .y1 = LV_COORD_MIN,
        .x2 = LV_COORD_MIN,
        .y2 = LV_COORD_MIN,
    };

    uint32_t recolor = lv_ppe_get_color(draw_dsc->recolor, 0);
    ppe_buffer_t target, source;
    memset(&target, 0, sizeof(ppe_buffer_t));
    memset(&source, 0, sizeof(ppe_buffer_t));
    source.format = lv_ppe_get_format(img_dsc->header.cf);
    uint8_t pixel_byte = PPE_Get_Pixel_Size(source.format) / PPE_BYTE_SIZE;
    if (img_dsc->header.cf == LV_COLOR_FORMAT_RAW)
    {
        compressed = true;
    }
    if (source.format == PPE_FORMAT_NOT_SUPPORT || (source.format == PPE_A8 && recolor != 0))
    {
        lv_draw_sw_image(draw_unit, draw_dsc, coords);
        LV_PROFILER_DRAW_END;
        return;
    }
    target.format = PPE_ABGR8888;
    switch (draw_unit->target_layer->color_format)
    {
    case LV_COLOR_FORMAT_RGB565:
        target.format = PPE_RGB565;
        break;
    case LV_COLOR_FORMAT_ARGB8888:
        target.format = PPE_ARGB8888;
        break;
    case LV_COLOR_FORMAT_RGB888:
        target.format = PPE_RGB888;
        break;
    case LV_COLOR_FORMAT_XRGB8888:
        target.format = PPE_XRGB8888;
        break;
    default:
        lv_draw_sw_image(draw_unit, draw_dsc, coords);
        LV_PROFILER_DRAW_END;
        return;
    }
    source.address = (uint32_t)img_dsc->data;
    source.width = img_dsc->header.w;
    source.height = img_dsc->header.h;
    if (img_dsc->header.stride != 0)
    {
        source.stride = img_dsc->header.stride / pixel_byte;
    }
    else
    {
        source.stride = img_dsc->header.w;
    }
    source.opacity = draw_dsc->opa;
    target.address = (uint32_t)draw_unit->target_layer->draw_buf->data;
    target.width = lv_area_get_width(&draw_unit->target_layer->buf_area);
    target.height = lv_area_get_height(&draw_unit->target_layer->buf_area);
    target.stride = target.width;
    target.win_x_min = 0;
    target.win_x_max = target.width - 1;
    target.win_y_min = 0;
    target.win_y_max = target.height - 1;

    source.win_x_min = target.win_x_min;
    source.win_x_max = target.win_x_max;
    source.win_y_min = target.win_y_min;
    source.win_y_max = target.win_y_max;
    source.const_color = 0xFFFFFFFF;
    PPE_BLEND_METHOD method = PPE_BLEND_PREMULTIPLY;
    if ((source.format == PPE_RGB565 || source.format == PPE_RGB888) && \
        draw_dsc->opa >= LV_OPA_MAX)
    {
        method = PPE_BLEND_BYPASS;
    }
    uint8_t *pic_buffer = lv_ppe_get_buffer(0);
    uint16_t last_image_x = 0;
    uint16_t last_image_y = 0;
    uint16_t last_image_w = 0;
    uint16_t last_image_h = 0;
    while (tile_area.y1 <= coords->y2)
    {
        while (tile_area.x1 <= coords->x2)
        {
            lv_area_t clipped_img_area;
            if (lv_area_intersect(&clipped_img_area, &tile_area, coords))
            {
                if (lv_area_intersect(&clipped_img_area, &clipped_img_area, &draw_unit->target_layer->buf_area))
                {
                    uint16_t draw_w = lv_area_get_width(&clipped_img_area);
                    uint16_t draw_h = lv_area_get_height(&clipped_img_area);
                    uint16_t image_x = clipped_img_area.x1 - tile_area.x1;
                    uint16_t image_y = clipped_img_area.y1 - tile_area.y1;
                    if (draw_dsc->opa >= LV_OPA_MAX && draw_dsc->recolor_opa == 0 &&
                        target.format == source.format && \
                        (target.format == PPE_RGB565 || target.format == PPE_RGB888))
                    {
                        uint32_t length = draw_w * pixel_byte;
                        uint32_t dst_stride = target.width * pixel_byte;
                        uint32_t target_x = clipped_img_area.x1 - draw_unit->target_layer->buf_area.x1;
                        uint32_t target_y = clipped_img_area.y1 - draw_unit->target_layer->buf_area.y1;
                        uint32_t dst_addr = target.address + (target.stride * target_y + target_x) * pixel_byte;
                        if (compressed)
                        {
                            if (length == dst_stride || length % 4 == 0)
                            {
                                IDU_decode_range range = {.start_column = image_x,
                                                          .end_column = image_x + draw_w - 1,
                                                          .start_line = image_y,
                                                          .end_line = image_y + draw_h - 1,
                                                          .target_stride = dst_stride
                                                         };
                                IDU_DMA_Config dma_cfg;
                                dma_cfg.output_buf = (uint32_t *)dst_addr;
                                dma_cfg.RX_DMA_channel_num = lv_acc_get_high_speed_channel();
                                dma_cfg.TX_DMA_channel_num = lv_acc_get_low_speed_channel();
                                PPE_Finish();
                                IDU_ERROR err_code = IDU_Decode((uint8_t *)source.address, &range, &dma_cfg);
                                if (err_code == IDU_SUCCESS)
                                {
                                    goto skip_ppe;
                                }
                            }
                        }
                        else
                        {
                            uint32_t src_addr = source.address + (source.stride * image_y + image_x) * pixel_byte;
                            lv_acc_dma_copy(length, draw_h, source.stride * pixel_byte, dst_stride, (uint8_t *)src_addr,
                                            (uint8_t *)dst_addr);
                            goto skip_ppe;
                        }
                    }
                    if (last_image_x != image_x || last_image_y != image_y || last_image_w != draw_w ||
                        last_image_h != draw_h)
                    {
                        if (!compressed)
                        {
                            uint32_t length = draw_w * pixel_byte;
                            uint32_t height = draw_h;
                            uint32_t src_stride = 0;
                            if (img_dsc->header.stride != 0)
                            {
                                src_stride = img_dsc->header.stride;
                            }
                            else
                            {
                                src_stride = img_dsc->header.w * pixel_byte;
                            }
                            uint32_t dst_stride = length;
                            uint32_t src_addr = (uint32_t)img_dsc->data + img_dsc->header.stride * image_y + image_x *
                                                pixel_byte;
                            lv_acc_dma_copy(length, height, src_stride, dst_stride, (uint8_t *)src_addr, (uint8_t *)pic_buffer);
                        }
                        else
                        {
                            IDU_decode_range range;
                            range.start_column = image_x;
                            range.end_column = image_x + draw_w - 1;
                            range.start_line = image_y;
                            range.end_line = image_y + draw_h - 1;
                            range.target_stride = draw_w * pixel_byte;
                            IDU_DMA_config dma_cfg;
                            dma_cfg.output_buf = (uint32_t *)pic_buffer;
                            dma_cfg.RX_DMA_channel_num = lv_acc_get_high_speed_channel();
                            dma_cfg.TX_DMA_channel_num = lv_acc_get_low_speed_channel();
                            IDU_Decode((uint8_t *)img_dsc->data, &range, &dma_cfg);
                        }
                        source.width = draw_w;
                        source.height = draw_h;
                        source.stride = draw_w;
                        source.address = (uint32_t)pic_buffer;
                        last_image_x = image_x;
                        last_image_y = image_y;
                        last_image_w = draw_w;
                        last_image_h = draw_h;
                        if (draw_dsc->recolor_opa >= LV_OPA_MIN)
                        {
                            uint32_t recolor_value = lv_ppe_get_color(draw_dsc->recolor, draw_dsc->recolor_opa);
                            ppe_rect_t recolor_rect = {.x1 = 0, .y1 = 0, .x2 = source.width - 1, .y2 = source.height - 1};
                            PPE_Finish();
                            PPE_Mask(&source, recolor_value, &recolor_rect);
                        }
                    }
                    else
                    {
                        PPE_Finish();
                    }
                    ppe_matrix_t inv_matrix;
                    ppe_get_identity(&inv_matrix);
                    inv_matrix.m[0][2] = -(clipped_img_area.x1 - draw_unit->target_layer->buf_area.x1);
                    inv_matrix.m[1][2] = -(clipped_img_area.y1 - draw_unit->target_layer->buf_area.y1);
                    lv_area_move(&clipped_img_area,  - draw_unit->target_layer->buf_area.x1,
                                 - draw_unit->target_layer->buf_area.y1);
                    if (clipped_img_area.x1 < 0)
                    {
                        clipped_img_area.x1 = 0;
                    }
                    if (clipped_img_area.y1 < 0)
                    {
                        clipped_img_area.y1 = 0;
                    }
                    PPE_Finish();
                    PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv_matrix, (ppe_rect_t *)&clipped_img_area,
                                                   method);
                }
            }
skip_ppe:
            tile_area.x1 += img_w;
            tile_area.x2 += img_w;
        }

        tile_area.y1 += img_h;
        tile_area.y2 += img_h;
        tile_area.x1 = tile_x_start;
        tile_area.x2 = tile_x_start + img_w - 1;
    }
    PPE_Finish();
    LV_PROFILER_DRAW_END;
}

static void img_draw_core(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                          const lv_image_decoder_dsc_t *decoder_dsc, lv_draw_image_sup_t *sup,
                          const lv_area_t *img_coords, const lv_area_t *clipped_img_area)
{
    const lv_draw_buf_t *decoded = decoder_dsc->decoded;
    const uint8_t *src_buf = decoded->data;
    const lv_image_header_t *header = &decoded->header;
    uint32_t img_stride = decoded->header.stride;
    lv_color_format_t cf = decoded->header.cf;

    LV_PROFILER_DRAW_BEGIN;
    lv_layer_t *layer = draw_unit->target_layer;
    const lv_image_dsc_t *img_dsc = draw_dsc->src;

    lv_area_t constraint_area;
    bool compressed = false;
    if (!lv_area_intersect(&constraint_area, &draw_unit->target_layer->buf_area, clipped_img_area))
    {
        LV_PROFILER_DRAW_END;
        return;
    }
    bool transform = (draw_dsc->scale_x != LV_SCALE_NONE || draw_dsc->scale_y != LV_SCALE_NONE\
                      || draw_dsc->rotation != 0 || draw_dsc->skew_x != 0 || draw_dsc->skew_y != 0);
    ppe_buffer_t target, source;
    memset(&target, 0, sizeof(ppe_buffer_t));
    memset(&source, 0, sizeof(ppe_buffer_t));

    target.format = PPE_ABGR8888;
    switch (draw_unit->target_layer->color_format)
    {
    case LV_COLOR_FORMAT_RGB565:
        target.format = PPE_RGB565;
        break;
    case LV_COLOR_FORMAT_ARGB8888:
        target.format = PPE_ARGB8888;
        break;
    case LV_COLOR_FORMAT_RGB888:
        target.format = PPE_RGB888;
        break;
    case LV_COLOR_FORMAT_XRGB8888:
        target.format = PPE_XRGB8888;
        break;
    default:
        lv_draw_sw_image(draw_unit, draw_dsc, img_coords);
        LV_PROFILER_DRAW_END;
        return;
    }
    target.address = (uint32_t)draw_unit->target_layer->draw_buf->data;
    target.width = lv_area_get_width(&draw_unit->target_layer->buf_area);
    target.height = lv_area_get_height(&draw_unit->target_layer->buf_area);
    target.stride = target.width;
    target.win_x_min = 0;
    target.win_x_max = target.width - 1;
    target.win_y_min = 0;
    target.win_y_max = target.height - 1;

    PPE_BLEND_METHOD method = PPE_BLEND_PREMULTIPLY;

    source.format = lv_ppe_get_format(decoded->header.cf);
    uint8_t pixel_byte = PPE_Get_Pixel_Size(source.format) / PPE_BYTE_SIZE;

    source.address = (uint32_t)src_buf;
    source.width = decoded->header.w;
    source.height = decoded->header.h;
    source.high_quality = false;
    if (img_stride != 0)
    {
        source.stride = img_stride / pixel_byte;
    }
    else
    {
        source.stride = decoded->header.w;
    }
    source.opacity = draw_dsc->opa;
    source.win_x_min = target.win_x_min;
    source.win_x_max = target.win_x_max;
    source.win_y_min = target.win_y_min;
    source.win_y_max = target.win_y_max;
    source.const_color = 0xFFFFFFFF;

    if ((source.format == PPE_RGB565 || source.format == PPE_RGB888) && \
        draw_dsc->opa == 0xFF && draw_dsc->rotation == 0)
    {
        method = PPE_BLEND_BYPASS;
    }


    uint32_t src_stride = 0;
    if (!transform && draw_dsc->opa >= LV_OPA_MAX && draw_dsc->recolor_opa == 0 &&
        target.format == source.format && (target.format == PPE_RGB565 || target.format == PPE_RGB888))
    {
        int16_t target_x = constraint_area.x1 - draw_unit->target_layer->buf_area.x1;
        int16_t target_y = constraint_area.y1 - draw_unit->target_layer->buf_area.y1;
        uint32_t length = lv_area_get_width(&constraint_area) * pixel_byte;
        uint32_t height = lv_area_get_height(&constraint_area);
        if (img_dsc->header.stride != 0)
        {
            src_stride = img_dsc->header.stride;
        }
        else
        {
            src_stride = img_dsc->header.w * pixel_byte;
        }
        uint32_t dst_stride = target.width * pixel_byte;
        uint32_t dst_addr = target.address + (target.stride * target_y + target_x) * pixel_byte;

        uint32_t src_addr = source.address + (source.stride * (constraint_area.y1 - img_coords->y1) +
                                              (constraint_area.x1 - img_coords->x1)) * pixel_byte;
        lv_acc_dma_copy(length, height, src_stride, dst_stride, (uint8_t *)src_addr, (uint8_t *)dst_addr);
        LV_PROFILER_DRAW_END;
        return;
    }
    ppe_matrix_t inverse, pre_trans;

    lv_ppe_get_inverse_matrix(&inverse, img_coords, draw_dsc);
    ppe_translate(draw_unit->target_layer->buf_area.x1, draw_unit->target_layer->buf_area.y1, &inverse);

    if (draw_dsc->recolor_opa >= LV_OPA_MIN)
    {
        uint32_t recolor_value = lv_ppe_get_color(draw_dsc->recolor, draw_dsc->recolor_opa);
        ppe_rect_t recolor_rect = {.x1 = 0, .y1 = 0, .x2 = source.width - 1, .y2 = source.height - 1};
        PPE_Finish();
        PPE_Mask(&source, recolor_value, &recolor_rect);
    }

    lv_area_move(&constraint_area, -draw_unit->target_layer->buf_area.x1,
                 -draw_unit->target_layer->buf_area.y1);

    if (draw_dsc->antialias && ppe_matrix_is_complex(&inverse))
    {
        source.high_quality = true;
    }
//    uint32_t ppe1 = sys_timestamp_get_us();

    PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inverse, (ppe_rect_t *)&constraint_area,
                                   method);
    PPE_Finish();
//    uint32_t ppe2 = sys_timestamp_get_us();
    if (err == PPE_SUCCESS)
    {

        LV_PROFILER_DRAW_END;
        return;
    }
    LV_PROFILER_DRAW_END;
    return;
}

#if LV_DRAW_TRANSFORM_USE_MATRIX
static void lv_draw_ppe_matrix(lv_draw_unit_t *draw_unit, const lv_draw_image_dsc_t *draw_dsc,
                               const lv_area_t *coords, lv_matrix_t *matrix)
{
    LV_PROFILER_DRAW_BEGIN;
    lv_layer_t *layer = draw_unit->target_layer;
    const lv_image_dsc_t *img_dsc = draw_dsc->src;
    lv_area_t constraint_area;

    ppe_rect_t src_rect = {.x1 = 0, .y1 = 0, .x2 = img_dsc->header.w - 1, .y2 = img_dsc->header.h - 1};
    ppe_rect_t target_rect = {0};
    lv_display_t *disp = lv_display_get_default();
    ppe_buffer_t target, source;
    memset(&target, 0, sizeof(ppe_buffer_t));
    memset(&source, 0, sizeof(ppe_buffer_t));

    ppe_matrix_t ppe_mat, pre_trans;
    memcpy(&ppe_mat, matrix, sizeof(ppe_matrix_t));
    if (coords->x1 != 0 || coords->y1 != 0)
    {
        ppe_get_identity(&pre_trans);
        pre_trans.m[0][2] = coords->x1;
        pre_trans.m[1][2] = coords->y1;
        ppe_mat_multiply(&ppe_mat, &pre_trans);
    }
    lv_ppe_get_area(&target_rect, &src_rect, &ppe_mat);

    bool compressed = false;
    if (!lv_area_intersect(&constraint_area, &draw_unit->target_layer->buf_area,
                           (lv_area_t *)&target_rect))
    {
        LV_PROFILER_DRAW_END;
        return;
    }
    if (!lv_area_intersect(&constraint_area, &constraint_area, draw_unit->clip_area))
    {
        LV_PROFILER_DRAW_END;
        return;
    }

    bool transform = ppe_matrix_is_complex(&ppe_mat);

    if (img_dsc->header.flags & LV_IMAGE_FLAGS_USER1)
    {
        compressed = true;
    }
    switch (draw_unit->target_layer->color_format)
    {
    case LV_COLOR_FORMAT_RGB565:
        target.format = PPE_RGB565;
        break;
    case LV_COLOR_FORMAT_ARGB8888:
        target.format = PPE_ARGB8888;
        break;
    case LV_COLOR_FORMAT_RGB888:
        target.format = PPE_RGB888;
        break;
    case LV_COLOR_FORMAT_XRGB8888:
        target.format = PPE_XRGB8888;
        break;
    default:
        lv_draw_sw_image(draw_unit, draw_dsc, coords);
        LV_PROFILER_DRAW_END;
        return;
    }
    target.address = (uint32_t)draw_unit->target_layer->draw_buf->data;
    target.width = lv_area_get_width(&draw_unit->target_layer->buf_area);
    target.height = lv_area_get_height(&draw_unit->target_layer->buf_area);
    target.stride = target.width;
    target.win_x_min = 0;
    target.win_x_max = target.width - 1;
    target.win_y_min = 0;
    target.win_y_max = target.height - 1;

    PPE_BLEND_METHOD method = PPE_BLEND_PREMULTIPLY;

    source.format = lv_ppe_get_format(img_dsc->header.cf);
    uint8_t pixel_byte = PPE_Get_Pixel_Size(source.format) / PPE_BYTE_SIZE;

    source.address = (uint32_t)img_dsc->data;
    source.width = img_dsc->header.w;
    source.height = img_dsc->header.h;
    source.high_quality = false;
    if (img_dsc->header.stride != 0)
    {
        source.stride = img_dsc->header.stride / pixel_byte;
    }
    else
    {
        source.stride = img_dsc->header.w;
    }
    source.opacity = draw_dsc->opa;
    source.win_x_min = target.win_x_min;
    source.win_x_max = target.win_x_max;
    source.win_y_min = target.win_y_min;
    source.win_y_max = target.win_y_max;
    source.const_color = 0xFFFFFFFF;

    if ((source.format == PPE_RGB565 || source.format == PPE_RGB888) && \
        draw_dsc->opa == 0xFF && draw_dsc->rotation == 0)
    {
        method = PPE_BLEND_BYPASS;
    }

    uint32_t src_stride = 0;
    if (!transform && draw_dsc->opa >= LV_OPA_MAX && draw_dsc->recolor_opa == 0 &&
        target.format == source.format && (target.format == PPE_RGB565 || target.format == PPE_RGB888))
    {
        int16_t target_x = constraint_area.x1 - draw_unit->target_layer->buf_area.x1;
        int16_t target_y = constraint_area.y1 - draw_unit->target_layer->buf_area.y1;
        uint32_t length = lv_area_get_width(&constraint_area) * pixel_byte;
        uint32_t height = lv_area_get_height(&constraint_area);
        if (img_dsc->header.stride != 0)
        {
            src_stride = img_dsc->header.stride;
        }
        else
        {
            src_stride = img_dsc->header.w * pixel_byte;
        }
        uint32_t dst_stride = target.width * pixel_byte;
        uint32_t dst_addr = target.address + (target.stride * target_y + target_x) * pixel_byte;
        if (compressed)
        {
            if (length == dst_stride || length % 4 == 0)
            {
                IDU_decode_range range = {.start_column = constraint_area.x1 - coords->x1,
                                          .end_column = constraint_area.x2 - coords->x1,
                                          .start_line = constraint_area.y1 - coords->y1,
                                          .end_line = constraint_area.y2 - coords->y1,
                                          .target_stride = dst_stride
                                         };
                IDU_DMA_Config dma_cfg;
                dma_cfg.output_buf = (uint32_t *)dst_addr;
                dma_cfg.RX_DMA_channel_num = lv_acc_get_high_speed_channel();
                dma_cfg.TX_DMA_channel_num = lv_acc_get_low_speed_channel();
                PPE_Finish();
                IDU_ERROR err_code = IDU_Decode((uint8_t *)source.address, &range, &dma_cfg);
                if (err_code == IDU_SUCCESS)
                {

                    LV_PROFILER_DRAW_END;
                    return;
                }
            }
        }
        else
        {
            uint32_t src_addr = source.address + (source.stride * (constraint_area.y1 - coords->y1) +
                                                  (constraint_area.x1 - coords->x1)) *
                                pixel_byte;
            lv_acc_dma_copy(length, height, src_stride, dst_stride, (uint8_t *)src_addr, (uint8_t *)dst_addr);
            LV_PROFILER_DRAW_END;
            return;
        }
    }
    ppe_rect_t image_area;
    ppe_matrix_t inverse;
    memcpy(&inverse, &ppe_mat, sizeof(ppe_matrix_t));
    ppe_matrix_inverse(&inverse);
    if (!ppe_get_area(&image_area, (ppe_rect_t *)&constraint_area, &inverse, &source))
    {
        LV_PROFILER_DRAW_END;
        return;
    }

    uint8_t *pic_buffer = NULL;
    uint16_t image_width = image_area.x2 - image_area.x1 + 1;
    uint16_t image_height = image_area.y2 - image_area.y1 + 1;

    if (!compressed)
    {
        ppe_translate(draw_unit->target_layer->buf_area.x1, draw_unit->target_layer->buf_area.y1, &inverse);
    }
    else
    {
        if (image_width * image_height * pixel_byte <= LV_PPE_MAX_BUFFER_SIZE)
        {
            pic_buffer = lv_ppe_get_buffer(0);
            if (cache_buffer == pic_buffer)
            {
                PPE_Finish();
            }

        }
        else
        {
            pic_buffer = lv_malloc(image_width * image_height * pixel_byte + 4);
            if (cache_buffer != lv_ppe_get_buffer(0))
            {
                if (cache_buffer != NULL)
                {
                    PPE_Finish();
                    lv_free(cache_buffer);
                    cache_buffer = NULL;
                }
            }
        }
        IDU_decode_range range;
        range.start_column = image_area.x1;
        range.end_column = image_area.x2;
        range.start_line = image_area.y1;
        range.end_line = image_area.y2;
        range.target_stride = image_width * pixel_byte;
        IDU_DMA_config dma_cfg;
        dma_cfg.output_buf = (uint32_t *)pic_buffer;
        dma_cfg.RX_DMA_channel_num = lv_acc_get_high_speed_channel();
        dma_cfg.TX_DMA_channel_num = lv_acc_get_low_speed_channel();
        IDU_ERROR err_code = IDU_Decode((uint8_t *)img_dsc->data, &range, &dma_cfg);
        source.address = (uint32_t)pic_buffer;
        source.width = image_width;
        source.height = image_height;
        source.stride = image_width;
        ppe_get_identity(&pre_trans);
        pre_trans.m[0][2] = image_area.x1 * -1.0f;
        pre_trans.m[1][2] = image_area.y1 * -1.0f;
        ppe_mat_multiply(&pre_trans, &inverse);

        ppe_translate(draw_unit->target_layer->buf_area.x1, draw_unit->target_layer->buf_area.y1,
                      &pre_trans);
        memcpy(&inverse, &pre_trans, sizeof(float) * 9);
    }

    if (draw_dsc->recolor_opa >= LV_OPA_MIN)
    {
        uint32_t recolor_value = lv_ppe_get_color(draw_dsc->recolor, draw_dsc->recolor_opa);
        ppe_rect_t recolor_rect = {.x1 = 0, .y1 = 0, .x2 = source.width - 1, .y2 = source.height - 1};
        PPE_Finish();
        PPE_Mask(&source, recolor_value, &recolor_rect);
    }

    lv_area_move(&constraint_area, -draw_unit->target_layer->buf_area.x1,
                 -draw_unit->target_layer->buf_area.y1);

    if (draw_dsc->antialias && ppe_matrix_is_complex(&inverse))
    {
        source.high_quality = true;
    }
    PPE_Finish();
    if (cache_buffer != lv_ppe_get_buffer(0))
    {
        if (cache_buffer != NULL)
        {
            lv_free(cache_buffer);
            cache_buffer = NULL;
        }
    }

    PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inverse, (ppe_rect_t *)&constraint_area,
                                   method);
    cache_buffer = pic_buffer;
    if (err == PPE_SUCCESS)
    {
        LV_PROFILER_DRAW_END;
        return;
    }
    LV_PROFILER_DRAW_END;
    return;
}
#endif
#endif /*LV_USE_PPE*/
