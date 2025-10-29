/**
 * @file lv_draw_rtk_letter.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../sw/blend/lv_draw_sw_blend_private.h"
#include "../../lv_draw_label_private.h"
#include "../../sw/lv_draw_sw.h"
#if LV_USE_DRAW_PPE_RTL8773G

#include "../../../display/lv_display.h"
#include "../../../misc/lv_math.h"
#include "../../../misc/lv_assert.h"
#include "../../../misc/lv_area.h"
#include "../../../misc/lv_style.h"
#include "../../../font/lv_font.h"
#include "../../../core/lv_refr_private.h"
#include "../../../stdlib/lv_string.h"

#include "../../lv_draw_private.h"
#include "../../../font/lv_font.h"
#include "../../../font/lv_font_fmt_txt_private.h"
#include "../../../misc/lv_area_private.h"
#include "lv_draw_ppe_rtl8773g.h"
#include "lv_ppe_rtl8773g_utils.h"
#include "lvgl.h"
#include "string.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef struct draw_font
{
    uint32_t color;
    lv_area_t clip_rect;
    uint8_t *target_buf;
    lv_area_t target_rect;
    uint16_t target_buf_stride;
    lv_color_format_t target_format;
    uint8_t render_mode;
} local_draw_font_t;

typedef struct font_glyph
{
    uint8_t *data;
    int16_t pos_x;
    int16_t pos_y;
    uint16_t width;
    uint16_t height;
    uint16_t stride;
} local_font_glyph_t;
/**********************
 *  STATIC PROTOTYPES
 **********************/

static void /* LV_ATTRIBUTE_FAST_MEM */ draw_letter_cb(lv_draw_task_t *t, lv_draw_glyph_dsc_t *glyph_draw_dsc,
                                                       lv_draw_fill_dsc_t *fill_draw_dsc, const lv_area_t *fill_area);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
#include "trace.h"
void lv_draw_ppe_label(lv_draw_task_t *t, const lv_draw_label_dsc_t *dsc,
                       const lv_area_t *coords)
{
    if (dsc->opa <= LV_OPA_MIN) { return; }

    LV_PROFILER_DRAW_BEGIN;

#if LV_USE_FREETYPE && LV_USE_VECTOR_GRAPHIC && LV_USE_THORVG
    static bool is_init = false;
    if(!is_init) {
        lv_freetype_outline_add_event(freetype_outline_event_cb, LV_EVENT_ALL, t);
        is_init = true;
    }
#endif

    lv_draw_label_iterate_characters(t, dsc, coords, draw_letter_cb);
    LV_PROFILER_DRAW_END;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void hw_blit_font(local_draw_font_t *font, local_font_glyph_t *glyph)
{
    ppe_buffer_t target, source;
    memset(&target, 0, sizeof(ppe_buffer_t));
    memset(&source, 0, sizeof(ppe_buffer_t));
    PPE_BLEND_METHOD method = PPE_BLEND_PREMULTIPLY;
    switch (font->target_format)
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
        return;
    }
    uint8_t target_pixel_size = PPE_Get_Pixel_Size(target.format) / PPE_BYTE_SIZE;
    target.address = (uint32_t)font->target_buf;
    target.height = font->target_rect.y2 - font->target_rect.y1 + 1;
    target.width = font->target_rect.x2 - font->target_rect.x1 + 1;
    target.stride = font->target_buf_stride / target_pixel_size;
    target.const_color = 0xFFFFFFFF;

    switch (font->render_mode)
    {
    case 1:
        source.format = PPE_A1;
        break;
    case 2:
        source.format = PPE_A2;
        break;
    case 4:
        source.format = PPE_A4;
        break;
    case 8:
        source.format = PPE_A8;
        break;
    default:
        return;
    }
    source.address = (uint32_t)glyph->data;
    source.opacity = 0xFF;
    source.width = glyph->width;
    source.height = glyph->height;
    source.stride = glyph->stride;
    uint8_t *font_data = (uint8_t *)glyph->data;
    source.const_color = *(uint32_t *)&font->color;

    ppe_rect_t constraint = {.x1 = font->clip_rect.x1 - font->target_rect.x1,
                             .y1 = font->clip_rect.y1 - font->target_rect.y1,
                             .x2 = font->clip_rect.x2 - font->target_rect.x1,
                             .y2 = font->clip_rect.y2 - font->target_rect.y1
                            };
    source.win_x_min = constraint.x1;
    source.win_x_max = constraint.x2;
    source.win_y_min = constraint.y1;
    source.win_y_max = constraint.y2;
    ppe_matrix_t inverse;
    ppe_get_identity(&inverse);
    inverse.m[0][2] = font->target_rect.x1 - glyph->pos_x;
    inverse.m[1][2] = font->target_rect.y1 - glyph->pos_y;
    PPE_Finish();
    PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inverse, &constraint,
                                   PPE_BLEND_PREMULTIPLY);
    if (err != PPE_SUCCESS)
    {
    }
}

static void LV_ATTRIBUTE_FAST_MEM draw_letter_cb(lv_draw_task_t *t, lv_draw_glyph_dsc_t *glyph_draw_dsc,
                                                 lv_draw_fill_dsc_t *fill_draw_dsc, const lv_area_t *fill_area)
{
    if (glyph_draw_dsc)
    {
        switch (glyph_draw_dsc->format)
        {
        case LV_FONT_GLYPH_FORMAT_NONE:
        case LV_FONT_GLYPH_FORMAT_A3:
            break;

        case LV_FONT_GLYPH_FORMAT_A1:
        case LV_FONT_GLYPH_FORMAT_A2:
        case LV_FONT_GLYPH_FORMAT_A4:
        case LV_FONT_GLYPH_FORMAT_A8:
        case LV_FONT_GLYPH_FORMAT_IMAGE:
            {
                if(glyph_draw_dsc->rotation % 3600 == 0 && glyph_draw_dsc->format != LV_FONT_GLYPH_FORMAT_IMAGE)
                {
                    if(lv_font_has_static_bitmap(glyph_draw_dsc->g->resolved_font))
                    {
        //                DBG_DIRECT("ppe blit align font at %08x", t->target_layer->draw_buf->data);
                        lv_font_glyph_dsc_t *g_dsc = glyph_draw_dsc->g;
                        uint32_t gid = g_dsc->gid.index;
                        if (!gid) { return; }
                        const lv_font_t *font = g_dsc->resolved_font;
                        lv_font_fmt_txt_dsc_t *fdsc = (lv_font_fmt_txt_dsc_t *)font->dsc;
                        const lv_font_fmt_txt_glyph_dsc_t *gdsc = &fdsc->glyph_dsc[gid];
                        const uint8_t *bitmap_in = &fdsc->glyph_bitmap[gdsc->bitmap_index];
                        uint32_t font_color = lv_ppe_get_color(glyph_draw_dsc->color, glyph_draw_dsc->opa);

                        lv_area_t blend_area;
                        if (!lv_area_intersect(&blend_area, glyph_draw_dsc->letter_coords, &t->clip_area)) { return; }

                        local_draw_font_t df =
                        {
                            .color = font_color,
                            .render_mode = fdsc->bpp,
                            .target_buf = t->target_layer->draw_buf->data,
                            .target_format = t->target_layer->color_format,
                            .target_buf_stride = t->target_layer->draw_buf->header.stride,
                            .clip_rect = blend_area,
                            .target_rect = t->target_layer->buf_area
                        };

                        local_font_glyph_t glyph =
                        {
                            .data = (uint8_t *)bitmap_in,
                            .pos_x = glyph_draw_dsc->letter_coords->x1,
                            .pos_y = glyph_draw_dsc->letter_coords->y1,
                            .width = gdsc->box_w,
                            .height = gdsc->box_h,
                            .stride = g_dsc->stride * 8 / df.render_mode,
                        };
#if LV_PPE_CACHE_STRATEGY != LV_PPE_CACHE_NONE
                        lv_display_t *disp_drv = lv_display_get_default();
                        if (t->target_layer->draw_buf != disp_drv->buf_1 &&
                            t->target_layer->draw_buf != disp_drv->buf_2)
                        {
                            lv_ppe_clean_cache(t->target_layer->draw_buf->data,
                                            t->target_layer->draw_buf->data_size);
                        }
#endif
                        hw_blit_font(&df, &glyph);
                    }
                    else
                    {
                        glyph_draw_dsc->glyph_data = lv_font_get_glyph_bitmap(glyph_draw_dsc->g, glyph_draw_dsc->_draw_buf);
                        if(glyph_draw_dsc->glyph_data == NULL) {
                            LV_LOG_WARN("Couldn't get the bitmap of a glyph");
                            break;
                        }
                        lv_area_t mask_area = *glyph_draw_dsc->letter_coords;
                        mask_area.x2 = mask_area.x1 + lv_draw_buf_width_to_stride(lv_area_get_width(&mask_area), LV_COLOR_FORMAT_A8) - 1;
                        lv_draw_sw_blend_dsc_t blend_dsc;
                        lv_memzero(&blend_dsc, sizeof(blend_dsc));
                        blend_dsc.color = glyph_draw_dsc->color;
                        blend_dsc.opa = glyph_draw_dsc->opa;
                        const lv_draw_buf_t * draw_buf = glyph_draw_dsc->glyph_data;
                        blend_dsc.mask_buf = draw_buf->data;
                        blend_dsc.mask_area = &mask_area;
                        blend_dsc.mask_stride = draw_buf->header.stride;
                        blend_dsc.blend_area = glyph_draw_dsc->letter_coords;
                        blend_dsc.mask_res = LV_DRAW_SW_MASK_RES_CHANGED;
                        lv_draw_sw_blend(t, &blend_dsc);
                    }
                }
                else
                {
                    glyph_draw_dsc->glyph_data = lv_font_get_glyph_bitmap(glyph_draw_dsc->g, glyph_draw_dsc->_draw_buf);
                    lv_draw_image_dsc_t img_dsc;
                    lv_draw_image_dsc_init(&img_dsc);
                    img_dsc.rotation = glyph_draw_dsc->rotation;
                    img_dsc.scale_x = LV_SCALE_NONE;
                    img_dsc.scale_y = LV_SCALE_NONE;
                    img_dsc.opa = glyph_draw_dsc->opa;
                    img_dsc.src = glyph_draw_dsc->glyph_data;
                    img_dsc.recolor = glyph_draw_dsc->color;
                    img_dsc.pivot = (lv_point_t) {
                        .x = glyph_draw_dsc->pivot.x,
                        .y = glyph_draw_dsc->g->box_h + glyph_draw_dsc->g->ofs_y
                    };
                    lv_draw_sw_image(t, &img_dsc, glyph_draw_dsc->letter_coords);
                }
                }
            break;
        default:
            break;
        }
    }

    if (fill_draw_dsc && fill_area)
    {
        lv_draw_sw_fill(t, fill_draw_dsc, fill_area);
    }
}

#endif /*LV_USE_DRAW_RTK*/
