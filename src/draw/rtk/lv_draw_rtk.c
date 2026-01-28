/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: LicenseRef-Realtek-5-Clause
 */

/**
 * @file lv_draw_rtk.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../lv_draw_private.h"
#if LV_USE_DRAW_RTK
#include "lv_draw_rtk.h"
#include "../sw/lv_draw_sw_private.h"
#include "../../core/lv_refr.h"
#include "../../display/lv_display_private.h"
#include "../../stdlib/lv_string.h"
#include "../../core/lv_global.h"

#include "../../font/lv_font_fmt_txt.h"
/*********************
 *      DEFINES
 *********************/
#define DRAW_UNIT_ID_RTK     3

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
#if LV_USE_OS
static void render_thread_cb(void *ptr);
#endif

static void execute_drawing(lv_draw_task_t * t);

static int32_t rtk_dispatch(lv_draw_unit_t *draw_unit, lv_layer_t *layer);
static int32_t rtk_evaluate(lv_draw_unit_t *draw_unit, lv_draw_task_t *task);
static int32_t lv_draw_rtk_delete(lv_draw_unit_t *draw_unit);

/**********************
 *  STATIC VARIABLES
 **********************/
#define _draw_info LV_GLOBAL_DEFAULT()->draw_info

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void lv_draw_rtk_init(void)
{
    lv_draw_rtk_unit_t *draw_rtk_unit = lv_draw_create_unit(sizeof(lv_draw_rtk_unit_t));
    draw_rtk_unit->base_unit.dispatch_cb = rtk_dispatch;
    draw_rtk_unit->base_unit.evaluate_cb = rtk_evaluate;
    draw_rtk_unit->base_unit.name = "RTK";
}

void lv_draw_rtk_deinit(void)
{

}

static int32_t lv_draw_rtk_delete(lv_draw_unit_t *draw_unit)
{
#if LV_USE_OS
    lv_draw_rtk_unit_t *draw_rtk_unit = (lv_draw_rtk_unit_t *) draw_unit;

    LV_LOG_INFO("cancel software rendering thread");
    draw_rtk_unit->exit_status = true;

    if (draw_rtk_unit->inited)
    {
        lv_thread_sync_signal(&draw_rtk_unit->sync);
    }

    return lv_thread_delete(&draw_rtk_unit->thread);
#else
    LV_UNUSED(draw_unit);
    return 0;
#endif
}
/**********************
 *   STATIC FUNCTIONS
 **********************/

static int32_t rtk_evaluate(lv_draw_unit_t *draw_unit, lv_draw_task_t *task)
{
    LV_UNUSED(draw_unit);

    switch (task->type)
    {
    case LV_DRAW_TASK_TYPE_LABEL:
        {
            lv_draw_label_dsc_t *dsc = (lv_draw_label_dsc_t *)task->draw_dsc;
            const lv_font_t *font = dsc->font;
            const lv_font_fmt_txt_dsc_t *fdsc = font->dsc;

            if (!font->static_bitmap) return 0;
            if (!fdsc->stride) return 0;
            if (dsc->rotation % 3600 != 0) return 0;
            if (fdsc->bitmap_format == LV_FONT_FMT_TXT_COMPRESSED) return 0;
            if (fdsc->bpp == 1 || fdsc->bpp == 2 || fdsc->bpp == 4 || fdsc->bpp == 8)
            {
                task->preference_score = 85;
                task->preferred_draw_unit_id = DRAW_UNIT_ID_RTK;
            }
        }
        break;
    case LV_DRAW_TASK_TYPE_IMAGE:
    case LV_DRAW_TASK_TYPE_LAYER:
        {
#if LV_DRAW_TRANSFORM_USE_MATRIX
            lv_draw_image_dsc_t * draw_dsc = task->draw_dsc;

            bool matrix_tidentify = task->matrix.m[0][0] == 1.0f
                                && task->matrix.m[0][1] == 0.0f
                                && task->matrix.m[0][2] == 0.0f
                                && task->matrix.m[1][0] == 0.0f
                                && task->matrix.m[1][1] == 1.0f
                                && task->matrix.m[1][2] == 0.0f
                                && task->matrix.m[2][0] == 0.0f
                                && task->matrix.m[2][1] == 0.0f
                                && task->matrix.m[2][2] == 1.0f;

            if(matrix_tidentify) return 0;
            if(draw_dsc->tile) return 0;
            if(draw_dsc->bitmap_mask_src) return 0;
            if(draw_dsc->recolor_opa) return 0;

            lv_color_format_t cf = draw_dsc->header.cf;
            if (cf == LV_COLOR_FORMAT_ARGB8888
             || cf == LV_COLOR_FORMAT_RGB565
             || cf == LV_COLOR_FORMAT_RGB888)
            {
                task->preference_score = 85;
                task->preferred_draw_unit_id = DRAW_UNIT_ID_RTK;
            }
#endif
        }
        break;

    default:

        break;
    }

    return 0;
}

static int32_t rtk_dispatch(lv_draw_unit_t *draw_unit, lv_layer_t *layer)
{
    LV_PROFILER_DRAW_BEGIN;
    lv_draw_rtk_unit_t *draw_rtk_unit = (lv_draw_rtk_unit_t *) draw_unit;

    /*Return immediately if it's busy with draw task*/
    if (draw_rtk_unit->task_act)
    {
        LV_PROFILER_DRAW_END;
        return 0;
    }

    lv_draw_task_t *t = NULL;
    t = lv_draw_get_available_task(layer, NULL, DRAW_UNIT_ID_RTK);
    if (t == NULL)
    {
        LV_PROFILER_DRAW_END;
        return LV_DRAW_UNIT_IDLE;  /*Couldn't start rendering*/
    }

    void *buf = lv_draw_layer_alloc_buf(layer);
    if (buf == NULL)
    {
        LV_PROFILER_DRAW_END;
        return LV_DRAW_UNIT_IDLE;  /*Couldn't start rendering*/
    }

    t->state = LV_DRAW_TASK_STATE_IN_PROGRESS;
    draw_rtk_unit->task_act = t;

    execute_drawing(t);
    draw_rtk_unit->task_act->state = LV_DRAW_TASK_STATE_FINISHED;
    draw_rtk_unit->task_act = NULL;

    /*The draw unit is free now. Request a new dispatching as it can get a new task*/
    lv_draw_dispatch_request();

    LV_PROFILER_DRAW_END;
    return 1;
}

static void execute_drawing(lv_draw_task_t * t)
{
    LV_PROFILER_DRAW_BEGIN;
    /*Render the draw task*/
    switch (t->type)
    {
    case LV_DRAW_TASK_TYPE_LABEL:
        lv_draw_rtk_label(t, t->draw_dsc, &t->area);
        break;
    case LV_DRAW_TASK_TYPE_IMAGE:
        lv_draw_rtk_image(t, t->draw_dsc, &t->area);
        break;
    case LV_DRAW_TASK_TYPE_LAYER:
        lv_draw_rtk_layer(t, t->draw_dsc, &t->area);
        break;
    default:
        break;
    }
    LV_PROFILER_DRAW_END;
}

#endif /*LV_USE_DRAW_RTK*/
