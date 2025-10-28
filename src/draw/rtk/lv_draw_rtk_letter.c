/**
 * @file lv_draw_rtk_letter.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../sw/blend/lv_draw_sw_blend_private.h"
#include "../lv_draw_label_private.h"
#include "../sw/lv_draw_sw.h"
#if LV_USE_DRAW_RTK

#include "../../display/lv_display.h"
#include "../../misc/lv_math.h"
#include "../../misc/lv_assert.h"
#include "../../misc/lv_area.h"
#include "../../misc/lv_style.h"
#include "../../font/lv_font.h"
#include "../../core/lv_refr_private.h"
#include "../../stdlib/lv_string.h"

#include "font_rendering_utils.h"
#include "../lv_draw_private.h"
#include "../../font/lv_font_fmt_txt.h"
#include "../../misc/lv_area_private.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

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

void lv_draw_rtk_label(lv_draw_task_t * t, const lv_draw_label_dsc_t * dsc, const lv_area_t * coords)
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

static void LV_ATTRIBUTE_FAST_MEM draw_letter_cb(lv_draw_task_t *t, lv_draw_glyph_dsc_t *glyph_draw_dsc,
                                                 lv_draw_fill_dsc_t *fill_draw_dsc, const lv_area_t *fill_area)
{
    if (glyph_draw_dsc)
    {
        switch (glyph_draw_dsc->format)
        {
            case LV_FONT_GLYPH_FORMAT_NONE:
            case LV_FONT_GLYPH_FORMAT_A3:
            case LV_FONT_GLYPH_FORMAT_IMAGE:
                break;

            case LV_FONT_GLYPH_FORMAT_A1:
            case LV_FONT_GLYPH_FORMAT_A2:
            case LV_FONT_GLYPH_FORMAT_A4:
            case LV_FONT_GLYPH_FORMAT_A8:
            {
                if(glyph_draw_dsc->rotation % 3600 == 0)
                {
                    if(lv_font_has_static_bitmap(glyph_draw_dsc->g->resolved_font))
                    {
                        lv_font_glyph_dsc_t *g_dsc = glyph_draw_dsc->g;
                        const lv_font_t *font = g_dsc->resolved_font;
                        lv_font_fmt_txt_dsc_t *fdsc = (lv_font_fmt_txt_dsc_t *)font->dsc;
                        uint32_t gid = g_dsc->gid.index;
                        if(!gid) return ;
                        const lv_font_fmt_txt_glyph_dsc_t *gdsc = &fdsc->glyph_dsc[gid];
                        int32_t gsize = (int32_t) gdsc->box_w * gdsc->box_h;
                        if(gsize == 0) return ;
                        lv_area_t blend_area;
                        if (!lv_area_intersect(&blend_area, glyph_draw_dsc->letter_coords, &t->clip_area)) { return; }

                        lv_layer_t * layer = t->target_layer;

                        lv_color32_t font_color;
                        font_color.blue = glyph_draw_dsc->color.blue;
                        font_color.green = glyph_draw_dsc->color.green;
                        font_color.red = glyph_draw_dsc->color.red;
                        font_color.alpha = glyph_draw_dsc->opa;

                        draw_font_t df =
                        {
                            .color = font_color,
                            .render_mode = fdsc->bpp,
                            .target_buf = layer->draw_buf->data,
                            .target_format = layer->color_format,
                            .target_buf_stride = layer->draw_buf->header.stride,
                            .clip_rect = blend_area,
                            .target_rect = layer->buf_area
                        };

                        font_glyph_t glyph =
                        {
                            .data = &fdsc->glyph_bitmap[gdsc->bitmap_index],
                            .pos_x = glyph_draw_dsc->letter_coords->x1,
                            .pos_y = glyph_draw_dsc->letter_coords->y1,
                            .width = gdsc->box_w,
                            .height = gdsc->box_h,
                            .stride = g_dsc->stride * 8 / df.render_mode,
                        };

                        font_glyph_render(&df, &glyph);
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
                break;
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
