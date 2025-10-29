/**
 * @file lv_draw_ppe_fill.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_draw_private.h"
#if LV_USE_DRAW_PPE_RTL8773G
#if LV_USE_PPE_BLEND
#include "../../../misc/lv_area_private.h"
#include "../../sw/lv_draw_sw_mask_private.h"
#include "lv_draw_ppe_rtl8773g.h"
#include "../../sw/blend/lv_draw_sw_blend_private.h"
#include "../../sw/lv_draw_sw_gradient_private.h"
#include "../../../misc/lv_math.h"
#include "../../../misc/lv_text_ap.h"
#include "../../../core/lv_refr.h"
#include "../../../misc/lv_assert.h"
#include "../../../stdlib/lv_string.h"
#include "../../lv_draw_mask.h"
#include "rtl_ppe.h"
#include "lv_ppe_rtl8773g_utils.h"
#include "string.h"
#include "lv_draw_ppe_rtl8773g_blend.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_draw_ppe_blend(lv_draw_task_t *t, const lv_draw_sw_blend_dsc_t *blend_dsc,
                              PPE_PIXEL_FORMAT format);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
lv_result_t lv_color_blend_to_rgb565_ppe(lv_draw_sw_blend_fill_dsc_t *dsc)
{
    int32_t w = dsc->dest_w;
    int32_t h = dsc->dest_h;
    uint16_t color16 = lv_color_to_u16(dsc->color);
    lv_opa_t opa = dsc->opa;
    const lv_opa_t *mask = dsc->mask_buf;
    int32_t mask_stride = dsc->mask_stride;
    uint16_t *dest_buf_u16 = dsc->dest_buf;
    int32_t dest_stride = dsc->dest_stride;

    uint32_t ppe_color = lv_ppe_get_color(dsc->color, dsc->opa);
    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)dest_buf_u16;
    target.width = w;
    target.height = h;
    target.stride = dest_stride / 2;
    target.format = PPE_RGB565;
    target.const_color = ppe_color;

    /*Simple fill*/
    if (!mask)
    {
        ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
        PPE_Finish();
        PPE_Mask(&target, ppe_color, &draw_rect);
    }

    /*Masked with full opacity*/
    else if (mask)
    {
        ppe_buffer_t source;
        memset(&source, 0, sizeof(ppe_buffer_t));
        source.address = (uint32_t)mask;
        source.width = w;
        source.height = h;
        source.stride = mask_stride;
        source.opacity = 0xFF;
        source.win_x_min = 0;
        source.win_x_max = w - 1;
        source.win_y_min = 0;
        source.win_y_max = h - 1;
        source.const_color = ppe_color;
        source.format = PPE_A8;
        source.high_quality = false;

        ppe_matrix_t inv;
        ppe_get_identity(&inv);
        ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
        PPE_Finish();
        PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv, &draw_rect, PPE_BLEND_PREMULTIPLY);
    }
    PPE_Finish();
    return LV_RESULT_OK;
}

lv_result_t lv_blend_image_to_rgb565_ppe(lv_draw_sw_blend_image_dsc_t *dsc)
{
    if (dsc->mask_buf)
    {
        return LV_RESULT_INVALID;
    }
    int32_t w = dsc->dest_w;
    int32_t h = dsc->dest_h;
    lv_opa_t opa = dsc->opa;
    uint16_t *dest_buf_u16 = dsc->dest_buf;
    int32_t dest_stride = dsc->dest_stride;
    int32_t src_stride = dsc->src_stride;
    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)dest_buf_u16;
    target.width = w;
    target.height = h;
    target.stride = dest_stride / 2;
    target.format = PPE_RGB565;
    target.const_color = 0xFFFFFFFF;

    ppe_buffer_t source;
    memset(&source, 0, sizeof(ppe_buffer_t));
    source.address = (uint32_t)dsc->src_buf;
    source.width = w;
    source.height = h;
    source.opacity = 0xFF;
    source.win_x_min = 0;
    source.win_x_max = w - 1;
    source.win_y_min = 0;
    source.win_y_max = h - 1;
    source.const_color = (dsc->opa << 24) + 0xFFFFFF;
    source.high_quality = false;
    switch (dsc->src_color_format)
    {
    case LV_COLOR_FORMAT_RGB565:
        source.format = PPE_RGB565;
        break;
#if LV_DRAW_SW_SUPPORT_RGB888
    case LV_COLOR_FORMAT_RGB888:
        source.format = PPE_RGB888;
        break;
#endif
#if LV_DRAW_SW_SUPPORT_XRGB8888
    case LV_COLOR_FORMAT_XRGB8888:
        source.format = PPE_XRGB8888;
        break;
#endif
#if LV_DRAW_SW_SUPPORT_ARGB8888
    case LV_COLOR_FORMAT_ARGB8888:
        source.format = PPE_ARGB8888;
        break;
#endif
#if LV_DRWA_SW_SUPPORT_I1
    case LV_COLOR_FORMAT_I1:
        if (src_stride % 8)
        {
            return LV_RESULT_INVALID;
        }
        source.format = PPE_I1;
        PPE->CLUT_INDEX = 0;
        PPE->CLUT_CONT = 0x0;
        PPE->CLUT_CONT = 0xFFFFFFFF;
        break;
#endif
    default:
        return LV_RESULT_INVALID;
    }
    source.stride = src_stride / (PPE_Get_Pixel_Size(source.format) >> 3);
    PPE_BLEND_METHOD method = PPE_BLEND_SRC;
    switch (dsc->blend_mode)
    {
    case LV_BLEND_MODE_NORMAL:
        if (source.format == PPE_RGB565 || source.format == PPE_RGB888)
        {
            method = PPE_BLEND_BYPASS;
        }
        else
        {
            method = PPE_BLEND_PREMULTIPLY;
        }
        break;
    case LV_BLEND_MODE_ADDITIVE:
        method = PPE_BLEND_ADD;
        break;
    case LV_BLEND_MODE_SUBTRACTIVE:
        method = PPE_BLEND_SUBSTRACT;
        break;
    case LV_BLEND_MODE_MULTIPLY:
        method = PPE_BLEND_MULTIPLY;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    ppe_matrix_t inv;
    ppe_get_identity(&inv);
    ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
    PPE_Finish();
    PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv, &draw_rect, method);
    PPE_Finish();
    return LV_RESULT_OK;
}

lv_result_t lv_blend_rgb888_image_to_rgb565_ppe(lv_draw_sw_blend_image_dsc_t *dsc,
                                                const uint8_t pixel_size)
{
    if (dsc->mask_buf)
    {
        return LV_RESULT_INVALID;
    }
    int32_t w = dsc->dest_w;
    int32_t h = dsc->dest_h;
    lv_opa_t opa = dsc->opa;
    uint16_t *dest_buf_u16 = dsc->dest_buf;
    int32_t dest_stride = dsc->dest_stride;
    int32_t src_stride = dsc->src_stride;
    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)dest_buf_u16;
    target.width = w;
    target.height = h;
    target.stride = dest_stride / 2;
    target.format = PPE_RGB565;
    target.const_color = 0xFFFFFFFF;

    ppe_buffer_t source;
    memset(&source, 0, sizeof(ppe_buffer_t));
    source.address = (uint32_t)dsc->src_buf;
    source.width = w;
    source.height = h;
    source.stride = src_stride / pixel_size;
    source.opacity = 0xFF;
    source.win_x_min = 0;
    source.win_x_max = w - 1;
    source.win_y_min = 0;
    source.win_y_max = h - 1;
    source.const_color = (dsc->opa << 24) + 0xFFFFFF;;
    source.high_quality = false;
    switch (pixel_size)
    {
    case 3:
        source.format = PPE_RGB888;
        break;
    case 4:
        source.format = PPE_XRGB8888;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    PPE_BLEND_METHOD method = PPE_BLEND_SRC;
    switch (dsc->blend_mode)
    {
    case LV_BLEND_MODE_NORMAL:
        method = PPE_BLEND_BYPASS;
        break;
    case LV_BLEND_MODE_ADDITIVE:
        method = PPE_BLEND_ADD;
        break;
    case LV_BLEND_MODE_SUBTRACTIVE:
        method = PPE_BLEND_SUBSTRACT;
        break;
    case LV_BLEND_MODE_MULTIPLY:
        method = PPE_BLEND_MULTIPLY;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    ppe_matrix_t inv;
    ppe_get_identity(&inv);
    ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
    PPE_Finish();
    PPE_Blit_Inverse(&target, &source, NULL, &inv, &draw_rect, method);
    return LV_RESULT_OK;
}

lv_result_t lv_color_blend_to_rgb888_ppe(lv_draw_sw_blend_fill_dsc_t *dsc, const uint8_t pixel_size)
{
    int32_t w = dsc->dest_w;
    int32_t h = dsc->dest_h;
    uint16_t color16 = lv_color_to_u16(dsc->color);
    lv_opa_t opa = dsc->opa;
    const lv_opa_t *mask = dsc->mask_buf;
    int32_t mask_stride = dsc->mask_stride;
    uint16_t *dest_buf_u16 = dsc->dest_buf;
    int32_t dest_stride = dsc->dest_stride;

    uint32_t ppe_color = lv_ppe_get_color(dsc->color, dsc->opa);
    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)dest_buf_u16;
    target.width = w;
    target.height = h;
    target.stride = dest_stride / pixel_size;
    switch (pixel_size)
    {
    case 3:
        target.format = PPE_RGB888;
        break;
    case 4:
        target.format = PPE_XRGB8888;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    target.const_color = ppe_color;

    /*Simple fill*/
    if (!mask)
    {
        ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
        PPE_Finish();
        PPE_Mask(&target, ppe_color, &draw_rect);
    }

    /*Masked with full opacity*/
    else if (mask)
    {
        ppe_buffer_t source;
        memset(&source, 0, sizeof(ppe_buffer_t));
        source.address = (uint32_t)mask;
        source.width = w;
        source.height = h;
        source.stride = mask_stride;
        source.opacity = 0xFF;
        source.win_x_min = 0;
        source.win_x_max = w - 1;
        source.win_y_min = 0;
        source.win_y_max = h - 1;
        source.const_color = ppe_color;
        source.format = PPE_A8;
        source.high_quality = false;

        ppe_matrix_t inv;
        ppe_get_identity(&inv);
        ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
        PPE_Finish();
        PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv, &draw_rect, PPE_BLEND_PREMULTIPLY);
    }
    PPE_Finish();
    return LV_RESULT_OK;
}

lv_result_t lv_blend_image_to_rgb888_ppe(lv_draw_sw_blend_image_dsc_t *dsc,
                                         const uint8_t pixel_size)
{
    if (dsc->mask_buf)
    {
        return LV_RESULT_INVALID;
    }
    int32_t w = dsc->dest_w;
    int32_t h = dsc->dest_h;
    lv_opa_t opa = dsc->opa;
    uint16_t *dest_buf_u16 = dsc->dest_buf;
    int32_t dest_stride = dsc->dest_stride;
    int32_t src_stride = dsc->src_stride;
    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)dest_buf_u16;
    target.width = w;
    target.height = h;
    target.stride = dest_stride / 3;
    target.const_color = 0xFFFFFFFF;
    switch (pixel_size)
    {
    case 3:
        target.format = PPE_RGB888;
        break;
    case 4:
        target.format = PPE_XRGB8888;
        break;
    default:
        return LV_RESULT_INVALID;
    }

    ppe_buffer_t source;
    memset(&source, 0, sizeof(ppe_buffer_t));
    source.address = (uint32_t)dsc->src_buf;
    source.width = w;
    source.height = h;
    source.opacity = 0xFF;
    source.win_x_min = 0;
    source.win_x_max = w - 1;
    source.win_y_min = 0;
    source.win_y_max = h - 1;
    source.const_color = (dsc->opa << 24) + 0xFFFFFF;
    source.high_quality = false;
    switch (dsc->src_color_format)
    {
    case LV_COLOR_FORMAT_RGB565:
        source.format = PPE_RGB565;
        break;
#if LV_DRAW_SW_SUPPORT_RGB888
    case LV_COLOR_FORMAT_RGB888:
        source.format = PPE_RGB888;
        break;
#endif
#if LV_DRAW_SW_SUPPORT_XRGB8888
    case LV_COLOR_FORMAT_XRGB8888:
        source.format = PPE_XRGB8888;
        break;
#endif
#if LV_DRAW_SW_SUPPORT_ARGB8888
    case LV_COLOR_FORMAT_ARGB8888:
        source.format = PPE_ARGB8888;
        break;
#endif
#if LV_DRWA_SW_SUPPORT_I1
    case LV_COLOR_FORMAT_I1:
        if (src_stride % 8)
        {
            return LV_RESULT_INVALID;
        }
        source.format = PPE_I1;
        PPE->CLUT_INDEX = 0;
        PPE->CLUT_CONT = 0x0;
        PPE->CLUT_CONT = 0xFFFFFFFF;
        break;
#endif
    default:
        return LV_RESULT_INVALID;
    }
    source.stride = src_stride / (PPE_Get_Pixel_Size(source.format) >> 3);
    PPE_BLEND_METHOD method = PPE_BLEND_SRC;
    switch (dsc->blend_mode)
    {
    case LV_BLEND_MODE_NORMAL:
        if (source.format == PPE_RGB565 || source.format == PPE_RGB888)
        {
            method = PPE_BLEND_BYPASS;
        }
        else
        {
            method = PPE_BLEND_PREMULTIPLY;
        }
        break;
    case LV_BLEND_MODE_ADDITIVE:
        method = PPE_BLEND_ADD;
        break;
    case LV_BLEND_MODE_SUBTRACTIVE:
        method = PPE_BLEND_SUBSTRACT;
        break;
    case LV_BLEND_MODE_MULTIPLY:
        method = PPE_BLEND_MULTIPLY;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    ppe_matrix_t inv;
    ppe_get_identity(&inv);
    ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
    PPE_Finish();
    PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv, &draw_rect, method);
    PPE_Finish();
    return LV_RESULT_OK;
}

lv_result_t lv_blend_rgb888_image_to_rgb888_ppe(lv_draw_sw_blend_image_dsc_t *dsc,
                                                const uint8_t dst_pixel_size, const uint8_t src_pixel_size)
{
    if (dsc->mask_buf)
    {
        return LV_RESULT_INVALID;
    }
    int32_t w = dsc->dest_w;
    int32_t h = dsc->dest_h;
    lv_opa_t opa = dsc->opa;
    uint16_t *dest_buf_u16 = dsc->dest_buf;
    int32_t dest_stride = dsc->dest_stride;
    int32_t src_stride = dsc->src_stride;
    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)dest_buf_u16;
    target.width = w;
    target.height = h;
    target.stride = dest_stride / dst_pixel_size;
    switch (dst_pixel_size)
    {
    case 3:
        target.format = PPE_RGB888;
        break;
    case 4:
        target.format = PPE_XRGB8888;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    target.const_color = 0xFFFFFFFF;

    ppe_buffer_t source;
    memset(&source, 0, sizeof(ppe_buffer_t));
    source.address = (uint32_t)dsc->src_buf;
    source.width = w;
    source.height = h;
    source.stride = src_stride / src_pixel_size;
    source.opacity = 0xFF;
    source.win_x_min = 0;
    source.win_x_max = w - 1;
    source.win_y_min = 0;
    source.win_y_max = h - 1;
    source.const_color = (dsc->opa << 24) + 0xFFFFFF;;
    source.high_quality = false;
    switch (src_pixel_size)
    {
    case 3:
        source.format = PPE_RGB888;
        break;
    case 4:
        source.format = PPE_XRGB8888;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    PPE_BLEND_METHOD method = PPE_BLEND_SRC;
    switch (dsc->blend_mode)
    {
    case LV_BLEND_MODE_NORMAL:
        method = PPE_BLEND_BYPASS;
        break;
    case LV_BLEND_MODE_ADDITIVE:
        method = PPE_BLEND_ADD;
        break;
    case LV_BLEND_MODE_SUBTRACTIVE:
        method = PPE_BLEND_SUBSTRACT;
        break;
    case LV_BLEND_MODE_MULTIPLY:
        method = PPE_BLEND_MULTIPLY;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    ppe_matrix_t inv;
    ppe_get_identity(&inv);
    ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
    PPE_Finish();
    PPE_Blit_Inverse(&target, &source, NULL, &inv, &draw_rect, method);
    return LV_RESULT_OK;
}

lv_result_t lv_color_blend_to_argb8888_ppe(lv_draw_sw_blend_fill_dsc_t *dsc)
{
    int32_t w = dsc->dest_w;
    int32_t h = dsc->dest_h;
    lv_opa_t opa = dsc->opa;
    const lv_opa_t *mask = dsc->mask_buf;
    int32_t mask_stride = dsc->mask_stride;
    uint16_t *dest_buf_u16 = dsc->dest_buf;
    int32_t dest_stride = dsc->dest_stride;

    uint32_t ppe_color = lv_ppe_get_color(dsc->color, dsc->opa);
    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)dest_buf_u16;
    target.width = w;
    target.height = h;
    target.stride = dest_stride / 4;
    target.format = PPE_ARGB8888;
    target.const_color = ppe_color;

    /*Simple fill*/
    if (!mask)
    {
        ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
        PPE_Finish();
        PPE_Mask(&target, ppe_color, &draw_rect);
    }

    /*Masked with full opacity*/
    else if (mask)
    {
        ppe_buffer_t source;
        memset(&source, 0, sizeof(ppe_buffer_t));
        source.address = (uint32_t)mask;
        source.width = w;
        source.height = h;
        source.stride = mask_stride;
        source.opacity = 0xFF;
        source.win_x_min = 0;
        source.win_x_max = w - 1;
        source.win_y_min = 0;
        source.win_y_max = h - 1;
        source.const_color = ppe_color;
        source.format = PPE_A8;
        source.high_quality = false;

        ppe_matrix_t inv;
        ppe_get_identity(&inv);
        ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
        PPE_Finish();
        PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv, &draw_rect, PPE_BLEND_PREMULTIPLY);
    }
    PPE_Finish();
    return LV_RESULT_OK;
}

lv_result_t lv_blend_image_to_argb8888_ppe(lv_draw_sw_blend_image_dsc_t *dsc)
{
    if (dsc->mask_buf)
    {
        return LV_RESULT_INVALID;
    }
    int32_t w = dsc->dest_w;
    int32_t h = dsc->dest_h;
    lv_opa_t opa = dsc->opa;
    uint16_t *dest_buf_u16 = dsc->dest_buf;
    int32_t dest_stride = dsc->dest_stride;
    int32_t src_stride = dsc->src_stride;
    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)dest_buf_u16;
    target.width = w;
    target.height = h;
    target.stride = dest_stride / 4;
    target.format = PPE_ARGB8888;
    target.const_color = 0xFFFFFFFF;

    ppe_buffer_t source;
    memset(&source, 0, sizeof(ppe_buffer_t));
    source.address = (uint32_t)dsc->src_buf;
    source.width = w;
    source.height = h;
    source.opacity = 0xFF;
    source.win_x_min = 0;
    source.win_x_max = w - 1;
    source.win_y_min = 0;
    source.win_y_max = h - 1;
    source.const_color = (dsc->opa << 24) + 0xFFFFFF;
    source.high_quality = false;
    switch (dsc->src_color_format)
    {
    case LV_COLOR_FORMAT_RGB565:
        source.format = PPE_RGB565;
        break;
#if LV_DRAW_SW_SUPPORT_RGB888
    case LV_COLOR_FORMAT_RGB888:
        source.format = PPE_RGB888;
        break;
#endif
#if LV_DRAW_SW_SUPPORT_XRGB8888
    case LV_COLOR_FORMAT_XRGB8888:
        source.format = PPE_XRGB8888;
        break;
#endif
#if LV_DRAW_SW_SUPPORT_ARGB8888
    case LV_COLOR_FORMAT_ARGB8888:
        source.format = PPE_ARGB8888;
        break;
#endif
#if LV_DRWA_SW_SUPPORT_I1
    case LV_COLOR_FORMAT_I1:
        if (src_stride % 8)
        {
            return LV_RESULT_INVALID;
        }
        source.format = PPE_I1;
        PPE->CLUT_INDEX = 0;
        PPE->CLUT_CONT = 0x0;
        PPE->CLUT_CONT = 0xFFFFFFFF;
        break;
#endif
    default:
        return LV_RESULT_INVALID;
    }
    source.stride = src_stride / (PPE_Get_Pixel_Size(source.format) >> 3);
    PPE_BLEND_METHOD method = PPE_BLEND_SRC;
    switch (dsc->blend_mode)
    {
    case LV_BLEND_MODE_NORMAL:
        if (source.format == PPE_RGB565 || source.format == PPE_RGB888)
        {
            method = PPE_BLEND_BYPASS;
        }
        else
        {
            method = PPE_BLEND_PREMULTIPLY;
        }
        break;
    case LV_BLEND_MODE_ADDITIVE:
        method = PPE_BLEND_ADD;
        break;
    case LV_BLEND_MODE_SUBTRACTIVE:
        method = PPE_BLEND_SUBSTRACT;
        break;
    case LV_BLEND_MODE_MULTIPLY:
        method = PPE_BLEND_MULTIPLY;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    ppe_matrix_t inv;
    ppe_get_identity(&inv);
    ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
    PPE_Finish();
    PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv, &draw_rect, method);
    PPE_Finish();
    return LV_RESULT_OK;
}

lv_result_t lv_blend_rgb888_image_to_argb8888_ppe(lv_draw_sw_blend_image_dsc_t *dsc,
                                                  const uint8_t pixel_size)
{
    if (dsc->mask_buf)
    {
        return LV_RESULT_INVALID;
    }
    int32_t w = dsc->dest_w;
    int32_t h = dsc->dest_h;
    lv_opa_t opa = dsc->opa;
    uint16_t *dest_buf_u16 = dsc->dest_buf;
    int32_t dest_stride = dsc->dest_stride;
    int32_t src_stride = dsc->src_stride;
    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)dest_buf_u16;
    target.width = dest_stride;
    target.height = h;
    target.stride = dest_stride / 4;
    target.format = PPE_ARGB8888;
    target.const_color = 0xFFFFFFFF;

    ppe_buffer_t source;
    memset(&source, 0, sizeof(ppe_buffer_t));
    source.address = (uint32_t)dsc->src_buf;
    source.width = w;
    source.height = h;
    source.stride = src_stride;
    source.opacity = 0xFF;
    source.win_x_min = 0;
    source.win_x_max = w - 1;
    source.win_y_min = 0;
    source.win_y_max = h - 1;
    source.const_color = (dsc->opa << 24) + 0xFFFFFF;;
    source.high_quality = false;
    switch (pixel_size)
    {
    case 3:
        source.format = PPE_RGB888;
        break;
    case 4:
        source.format = PPE_XRGB8888;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    PPE_BLEND_METHOD method = PPE_BLEND_SRC;
    switch (dsc->blend_mode)
    {
    case LV_BLEND_MODE_NORMAL:
        method = PPE_BLEND_BYPASS;
        break;
    case LV_BLEND_MODE_ADDITIVE:
        method = PPE_BLEND_ADD;
        break;
    case LV_BLEND_MODE_SUBTRACTIVE:
        method = PPE_BLEND_SUBSTRACT;
        break;
    case LV_BLEND_MODE_MULTIPLY:
        method = PPE_BLEND_MULTIPLY;
        break;
    default:
        return LV_RESULT_INVALID;
    }
    ppe_matrix_t inv;
    ppe_get_identity(&inv);
    ppe_rect_t draw_rect = {.x1 = 0, .y1 = 0, .x2 = w - 1, .y2 = h - 1};
    PPE_Finish();
    PPE_Blit_Inverse(&target, &source, NULL, &inv, &draw_rect, method);
    return LV_RESULT_OK;
}
#endif
#endif /*LV_USE_PPE*/

