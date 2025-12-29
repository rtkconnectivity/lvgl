/**
 * @file lv_draw_sw_mask_rect.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../../misc/lv_area_private.h"
#include "../../lv_draw_mask_private.h"
#include "../../lv_draw_private.h"
#if LV_USE_DRAW_PPE_RTL8773G
#if LV_DRAW_SW_COMPLEX

#include "../../../misc/lv_math.h"
#include "../../../misc/lv_log.h"
#include "../../../stdlib/lv_mem.h"
#include "../../../stdlib/lv_string.h"
#include "../../sw/lv_draw_sw.h"
#include "../../sw/lv_draw_sw_mask_private.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
#include "trace.h"
#include "rtl_ppe.h"
#include "string.h"
void lv_draw_ppe_mask_rect(lv_draw_task_t *t, const lv_draw_mask_rect_dsc_t *dsc,
                           const lv_area_t *coords)
{
    LV_UNUSED(coords);

    lv_area_t draw_area;
    if (!lv_area_intersect(&draw_area, &dsc->area, &t->clip_area))
    {
        return;
    }

    lv_layer_t *target_layer = t->target_layer;
    lv_area_t *buf_area = &target_layer->buf_area;
    lv_area_t clear_area;

    void *draw_buf = target_layer->draw_buf;
    ppe_buffer_t target, source;
    memset(&target, 0, sizeof(ppe_buffer_t));
    memset(&source, 0, sizeof(ppe_buffer_t));
    target.address = (uint32_t)t->target_layer->draw_buf->data;
    target.width = lv_area_get_width(&t->target_layer->buf_area);
    target.height = lv_area_get_height(&t->target_layer->buf_area);
    target.stride = target.width;
    target.win_x_min = 0;
    target.win_x_max = target.width - 1;
    target.win_y_min = 0;
    target.win_y_max = target.height - 1;
    target.format = PPE_RGB565;
    /*Clear the top part*/
    lv_area_set(&clear_area, t->clip_area.x1, t->clip_area.y1,
                t->clip_area.x2,
                dsc->area.y1 - 1);
    lv_area_move(&clear_area, -buf_area->x1, -buf_area->y1);
    lv_ppe_finish();
    PPE_Clear(&target, 0, (ppe_rect_t *)&clear_area);

    /*Clear the bottom part*/
    lv_area_set(&clear_area, t->clip_area.x1, dsc->area.y2 + 1, t->clip_area.x2,
                t->clip_area.y2);
    lv_area_move(&clear_area, -buf_area->x1, -buf_area->y1);
    lv_ppe_finish();
    PPE_Clear(&target, 0, (ppe_rect_t *)&clear_area);
    /*Clear the left part*/
    lv_area_set(&clear_area, t->clip_area.x1, dsc->area.y1, dsc->area.x1 - 1, dsc->area.y2);
    lv_area_move(&clear_area, -buf_area->x1, -buf_area->y1);
    lv_ppe_finish();
    PPE_Clear(&target, 0, (ppe_rect_t *)&clear_area);

    /*Clear the right part*/
    lv_area_set(&clear_area, dsc->area.x2 + 1, dsc->area.y1, t->clip_area.x2, dsc->area.y2);
    lv_area_move(&clear_area, -buf_area->x1, -buf_area->y1);
    lv_ppe_finish();
    PPE_Clear(&target, 0, (ppe_rect_t *)&clear_area);

    lv_draw_sw_mask_radius_param_t param;
    lv_draw_sw_mask_radius_init(&param, &dsc->area, dsc->radius, false);

    void *masks[2] = {0};
    masks[0] = &param;

    uint32_t area_w = lv_area_get_width(&draw_area);
    lv_opa_t *mask_buf = lv_malloc(area_w * lv_area_get_height(&draw_area));

    int32_t y;
    lv_draw_sw_mask_res_t res = LV_DRAW_SW_MASK_RES_FULL_COVER;
    lv_memset(mask_buf, 0xff, area_w * lv_area_get_height(&draw_area));
    for (y = draw_area.y1; y <= draw_area.y2; y++)
    {
        lv_draw_sw_mask_res_t res = lv_draw_sw_mask_apply(masks, mask_buf + (y - draw_area.y1) * area_w,
                                                          draw_area.x1, y, area_w);
        if (res != LV_DRAW_SW_MASK_RES_FULL_COVER)
        {
            res = LV_DRAW_SW_MASK_RES_CHANGED;
        }
    }
    if (res != LV_DRAW_SW_MASK_RES_CHANGED)
    {
        lv_free(mask_buf);
        lv_draw_sw_mask_free_param(&param);
        return;
    }

    source.format = PPE_A8;
    uint8_t pixel_byte = PPE_Get_Pixel_Size(source.format) / PPE_BYTE_SIZE;
    source.address = (uint32_t)mask_buf;
    source.width = area_w;
    source.height = lv_area_get_height(&draw_area);
    source.stride = area_w;
    source.opacity = 0xFF;
    source.win_x_min = target.win_x_min;
    source.win_x_max = target.win_x_max;
    source.win_y_min = target.win_y_min;
    source.win_y_max = target.win_y_max;
    source.const_color = 0x00000000;

    ppe_matrix_t inv;
    ppe_get_identity(&inv);
    inv.m[0][2] = buf_area->x1 - draw_area.x1;
    inv.m[0][2] = buf_area->y1 - draw_area.y1;
    lv_area_move(&draw_area, -buf_area->x1, -buf_area->y1);
    lv_ppe_finish();
    PPE_ERR err = PPE_Blit_Inverse(&target, &source, NULL, &inv, (ppe_rect_t *)&draw_area,
                                   PPE_BLEND_PREMULTIPLY);
    lv_ppe_finish();
    lv_free(mask_buf);
    lv_draw_sw_mask_free_param(&param);
}

/********************
 *   STATIC FUNCTIONS
 **********************/

#else /*LV_DRAW_SW_COMPLEX*/

void lv_draw_sw_mask_rect(lv_draw_task_t *t, const lv_draw_mask_rect_dsc_t *dsc,
                          const lv_area_t *coords)
{
    LV_UNUSED(t);
    LV_UNUSED(dsc);
    LV_UNUSED(coords);

    LV_LOG_WARN("LV_DRAW_SW_COMPLEX needs to be enabled");
}

#endif /*LV_DRAW_SW_COMPLEX*/
#endif /*LV_USE_DRAW_PPE_RTL8773G*/
