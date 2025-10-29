/**
 * @file lv_draw_ppe_fill.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_draw_private.h"
#if LV_USE_DRAW_PPE_RTL8773G
#include "../../../misc/lv_area_private.h"
#include "../../sw/lv_draw_sw_mask_private.h"
#include "lv_draw_ppe_rtl8773g.h"
#include "../../sw/blend/lv_draw_sw_blend_private.h"
#include "../../../misc/lv_math.h"
#include "../../../misc/lv_text_ap.h"
#include "../../../core/lv_refr.h"
#include "../../../misc/lv_assert.h"
#include "../../../stdlib/lv_string.h"
#include "../../lv_draw_mask.h"
#include "rtl_ppe.h"
#include "lv_ppe_rtl8773g_utils.h"
#include "string.h"
#include "trace.h"
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
void lv_draw_ppe_fill(lv_draw_task_t *t, lv_draw_fill_dsc_t *dsc, const lv_area_t *coords)
{
    if (dsc->opa <= LV_OPA_MIN) { return; }
    lv_area_t bg_coords;
    lv_area_copy(&bg_coords, coords);

    lv_area_t clipped_coords;
    if (!lv_area_intersect(&clipped_coords, &bg_coords, &t->clip_area)) { return; }

    PPE_PIXEL_FORMAT cf = PPE_ABGR8888;
    switch (t->target_layer->color_format)
    {
    case LV_COLOR_FORMAT_RGB565:
        cf = PPE_RGB565;
        break;
    case LV_COLOR_FORMAT_ARGB8888:
        cf = PPE_ARGB8888;
        break;
    case LV_COLOR_FORMAT_RGB888:
        cf = PPE_RGB888;
        break;
    case LV_COLOR_FORMAT_XRGB8888:
        cf = PPE_XRGB8888;
        break;
    default:
        lv_draw_sw_fill(t, dsc, coords);
#if LV_PPE_CACHE_STRATEGY != LV_PPE_CACHE_NONE
        lv_ppe_clean_cache(t->target_layer->draw_buf->data,
                           t->target_layer->draw_buf->data_size);
#endif
        return;
    }

    lv_draw_sw_blend_dsc_t blend_dsc = {0};
    blend_dsc.color = dsc->color;

    /*Most simple case: just a plain rectangle*/
    if (dsc->radius == 0)
    {
        blend_dsc.blend_area = &bg_coords;
        blend_dsc.opa = dsc->opa;
        lv_draw_ppe_blend(t, &blend_dsc, cf);
        return;
    }
    else
    {
        int32_t coords_bg_w = lv_area_get_width(&bg_coords);
        int32_t coords_bg_h = lv_area_get_height(&bg_coords);
        int32_t short_side = LV_MIN(coords_bg_w, coords_bg_h);
        int32_t rout = LV_MIN(dsc->radius, short_side >> 1);
    }

    /*Complex case: there is gradient, mask, or radius*/
#if LV_DRAW_SW_COMPLEX == 0
    LV_LOG_WARN("Can't draw complex rectangle because LV_DRAW_SW_COMPLEX = 0");
#else
    lv_opa_t opa = dsc->opa >= LV_OPA_MAX ? LV_OPA_COVER : dsc->opa;

    /*Get the real radius. Can't be larger than the half of the shortest side */
    int32_t coords_bg_w = lv_area_get_width(&bg_coords);
    int32_t coords_bg_h = lv_area_get_height(&bg_coords);
    int32_t short_side = LV_MIN(coords_bg_w, coords_bg_h);
    int32_t rout = LV_MIN(dsc->radius, short_side >> 1);

    /*Add a radius mask if there is a radius*/
    int32_t clipped_w = lv_area_get_width(&clipped_coords);
    lv_opa_t *mask_buf = NULL;
    lv_draw_sw_mask_radius_param_t mask_rout_param;


    lv_area_t blend_area;
    blend_area.x1 = clipped_coords.x1;
    blend_area.x2 = clipped_coords.x2;
    blend_area.y1 = bg_coords.y1 + rout;
    blend_area.y2 = bg_coords.y2 - rout;
    blend_dsc.blend_area = &blend_area;
    blend_dsc.opa = opa;
    blend_dsc.mask_buf = NULL;
    lv_draw_ppe_blend(t, &blend_dsc, cf);

    void *mask_list[2] = {NULL, NULL};



    int32_t h;


    blend_dsc.mask_area = &blend_area;
    blend_dsc.opa = LV_OPA_COVER;



    if (rout > 0)
    {
        if (lv_ppe_use_entire(t, lv_display_get_default()))
        {
            mask_buf = lv_malloc(clipped_w * rout);
            lv_draw_sw_mask_radius_init(&mask_rout_param, &bg_coords, rout, false);
            mask_list[0] = &mask_rout_param;
            for (h = 0; h < rout; h++)
            {
                int32_t top_y = bg_coords.y1 + h;
                int32_t bottom_y = bg_coords.y2 - h;
                if (top_y < clipped_coords.y1 && bottom_y > clipped_coords.y2) { continue; }  /*This line is clipped now*/
                lv_memset(mask_buf + clipped_w * h, opa, clipped_w);
                lv_draw_sw_mask_apply(mask_list, mask_buf + clipped_w * h, blend_area.x1,
                                      top_y, clipped_w);
                /* Initialize the mask to opa instead of 0xFF and blend with LV_OPA_COVER.
                 * It saves calculating the final opa in lv_draw_sw_blend*/
            }
#if LV_PPE_CACHE_STRATEGY != LV_PPE_CACHE_NONE
            lv_ppe_clean_cache(mask_buf, clipped_w * rout);
#endif
            blend_area.y1 = bg_coords.y1;
            blend_area.y2 = bg_coords.y1 + rout - 1;
            blend_area.x1 = clipped_coords.x1;
            blend_area.x2 = clipped_coords.x2;

            uint32_t fill_color = lv_ppe_get_color(dsc->color, 0xFF);
            lv_area_t top_draw;
            ppe_buffer_t source;
            memset(&source, 0, sizeof(ppe_buffer_t));
            source.address = (uint32_t)mask_buf;
            source.width = clipped_w;
            source.height = rout;
            source.stride = clipped_w;
            source.format = PPE_A8;
            source.opacity = 0xFF;
            source.const_color = fill_color;

            ppe_buffer_t target;
            memset(&target, 0, sizeof(ppe_buffer_t));
            target.address = (uint32_t)t->target_layer->draw_buf->data;
            target.width = lv_area_get_width(&t->target_layer->buf_area);
            target.height = lv_area_get_height(&t->target_layer->buf_area);
            target.stride = target.width;
            target.format = cf;
            target.opacity = 0xFF;
            if (lv_area_intersect(&top_draw, &blend_area, &clipped_coords))
            {
                lv_area_move(&top_draw, -t->target_layer->buf_area.x1,
                             -t->target_layer->buf_area.y1);

                source.win_x_min = top_draw.x1;
                source.win_x_max = top_draw.x2;
                source.win_y_min = top_draw.y1;
                source.win_y_max = top_draw.y2;

                ppe_matrix_t inv;
                ppe_get_identity(&inv);
                inv.m[0][2] = t->target_layer->buf_area.x1 - clipped_coords.x1;
                inv.m[1][2] = t->target_layer->buf_area.y1 - bg_coords.y1;
                PPE_Finish();
                PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv, (ppe_rect_t *)&top_draw,
                                               PPE_BLEND_PREMULTIPLY);
            }
            blend_area.y1 = bg_coords.y2 - rout + 1;
            blend_area.y2 = bg_coords.y2;
            lv_area_t bottom_draw;
            if (lv_area_intersect(&bottom_draw, &blend_area, &clipped_coords))
            {
                lv_area_move(&bottom_draw, -t->target_layer->buf_area.x1,
                             -t->target_layer->buf_area.y1);
                source.win_x_min = bottom_draw.x1;
                source.win_x_max = bottom_draw.x2;
                source.win_y_min = bottom_draw.y1;
                source.win_y_max = bottom_draw.y2;

                ppe_matrix_t inv;
                ppe_get_identity(&inv);
                inv.m[1][2] = rout - 1;
                ppe_reflect(false, true, &inv);
                ppe_translate(t->target_layer->buf_area.x1 - clipped_coords.x1, \
                              t->target_layer->buf_area.y1 - bg_coords.y2 + rout - 1, &inv);
                PPE_Finish();
                PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv, (ppe_rect_t *)&bottom_draw,
                                               PPE_BLEND_PREMULTIPLY);
            }
        }
        else
        {
            mask_buf = lv_malloc(clipped_w);
            lv_draw_sw_mask_radius_init(&mask_rout_param, &bg_coords, rout, false);
            mask_list[0] = &mask_rout_param;
            blend_dsc.mask_buf = mask_buf;
            PPE_Finish();
            for (h = 0; h < rout; h++)
            {
                int32_t top_y = bg_coords.y1 + h;
                int32_t bottom_y = bg_coords.y2 - h;
                if (top_y < clipped_coords.y1 && bottom_y > clipped_coords.y2) { continue; }  /*This line is clipped now*/

                /* Initialize the mask to opa instead of 0xFF and blend with LV_OPA_COVER.
                 * It saves calculating the final opa in lv_draw_sw_blend*/
                lv_memset(mask_buf, opa, clipped_w);
                blend_dsc.mask_res = lv_draw_sw_mask_apply(mask_list, mask_buf, blend_area.x1, top_y, clipped_w);
                if (blend_dsc.mask_res == LV_DRAW_SW_MASK_RES_FULL_COVER) { blend_dsc.mask_res = LV_DRAW_SW_MASK_RES_CHANGED; }

                if (top_y >= clipped_coords.y1)
                {
                    blend_area.y1 = top_y;
                    blend_area.y2 = top_y;
                    lv_draw_sw_blend(t, &blend_dsc);
                }

                if (bottom_y <= clipped_coords.y2)
                {
                    blend_area.y1 = bottom_y;
                    blend_area.y2 = bottom_y;
                    lv_draw_sw_blend(t, &blend_dsc);
                }
            }
#if LV_PPE_CACHE_STRATEGY != LV_PPE_CACHE_NONE
            lv_ppe_clean_cache(t->target_layer->draw_buf->data,
                               t->target_layer->draw_buf->data_size);
#endif
        }
    }
    /* Draw the center of the rectangle.*/

    /*If no gradient, the center is a simple rectangle*/


    if (mask_buf)
    {
        PPE_Finish();
        lv_free(mask_buf);
        lv_draw_sw_mask_free_param(&mask_rout_param);
    }

#endif
}

static void lv_draw_ppe_blend(lv_draw_task_t *t, const lv_draw_sw_blend_dsc_t *blend_dsc,
                              PPE_PIXEL_FORMAT format)
{
    lv_area_t blend_area;
    if (!lv_area_intersect(&blend_area, blend_dsc->blend_area, &t->clip_area)) { return; }

    LV_PROFILER_DRAW_BEGIN;
    lv_layer_t *layer = t->target_layer;

    ppe_buffer_t target;
    memset(&target, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)t->target_layer->draw_buf->data;
    target.width = lv_area_get_width(&t->target_layer->buf_area);
    target.height = lv_area_get_height(&t->target_layer->buf_area);
    target.stride = target.width;
    target.format = format;
    target.win_x_min = 0;
    target.win_x_max = layer->buf_area.x2 - layer->buf_area.x1;
    target.win_y_min = 0;
    target.win_y_max = layer->buf_area.y2 - layer->buf_area.y1;
    target.opacity = 0xFF;
    uint32_t ppe_color = lv_ppe_get_color(blend_dsc->color, blend_dsc->opa);
    lv_area_move(&blend_area, -layer->buf_area.x1, -layer->buf_area.y1);
    ppe_rect_t draw_rect = {.x1 = blend_area.x1, .y1 = blend_area.y1, .x2 = blend_area.x2, .y2 = blend_area.y2};
    PPE_Finish();
    PPE_ERR err = PPE_Mask(&target, ppe_color, &draw_rect);
    LV_PROFILER_DRAW_END;
}

#endif /*LV_USE_PPE*/
