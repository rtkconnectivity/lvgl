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

#include "../font/lv_font_fmt_txt.h"
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

static void execute_drawing(lv_draw_rtk_unit_t *u);

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
    draw_rtk_unit->idx = 0;
    draw_rtk_unit->base_unit.delete_cb = LV_USE_OS ? lv_draw_rtk_delete : NULL;
    draw_rtk_unit->base_unit.name = "RTK";
#if LV_USE_OS
    lv_thread_init(&draw_rtk_unit->thread, LV_THREAD_PRIO_HIGH, render_thread_cb,
                   LV_DRAW_THREAD_STACK_SIZE, draw_rtk_unit);
#endif
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
static inline void execute_drawing_unit(lv_draw_rtk_unit_t *u)
{
    execute_drawing(u);

    u->task_act->state = LV_DRAW_TASK_STATE_READY;
    u->task_act = NULL;

    /*The draw unit is free now. Request a new dispatching as it can get a new task*/
    lv_draw_dispatch_request();
}

static int32_t rtk_evaluate(lv_draw_unit_t *draw_unit, lv_draw_task_t *task)
{
    LV_UNUSED(draw_unit);

    switch (task->type)
    {
    case LV_DRAW_TASK_TYPE_FILL:

        break;
    case LV_DRAW_TASK_TYPE_BORDER:

        break;
    case LV_DRAW_TASK_TYPE_BOX_SHADOW:

        break;
    case LV_DRAW_TASK_TYPE_LABEL:
        {
            lv_draw_label_dsc_t *dsc = (lv_draw_label_dsc_t *)task->draw_dsc;
            const lv_font_t *font = dsc->font;
            const lv_font_fmt_txt_dsc_t *fdsc = font->dsc;
            if (fdsc->bitmap_format == LV_FONT_FMT_PLAIN_ALIGNED)
            {
                task->preference_score = 90;
                task->preferred_draw_unit_id = DRAW_UNIT_ID_RTK;
            }
        }
        break;
    case LV_DRAW_TASK_TYPE_IMAGE:

        break;
    case LV_DRAW_TASK_TYPE_ARC:

        break;
    case LV_DRAW_TASK_TYPE_LINE:

        break;
    case LV_DRAW_TASK_TYPE_TRIANGLE:

        break;
    case LV_DRAW_TASK_TYPE_LAYER:

        break;
    case LV_DRAW_TASK_TYPE_MASK_RECTANGLE:

        break;
#if LV_USE_VECTOR_GRAPHIC && LV_USE_THORVG
    case LV_DRAW_TASK_TYPE_VECTOR:

        break;
#endif
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
    t = lv_draw_get_next_available_task(layer, NULL, DRAW_UNIT_ID_RTK);
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
    draw_rtk_unit->base_unit.target_layer = layer;
    draw_rtk_unit->base_unit.clip_area = &t->clip_area;
    draw_rtk_unit->task_act = t;

#if LV_USE_OS
    /*Let the render thread work*/
    if (draw_rtk_unit->inited) { lv_thread_sync_signal(&draw_rtk_unit->sync); }
#else
    execute_drawing_unit(draw_rtk_unit);
#endif
    LV_PROFILER_DRAW_END;
    return 1;
}

static void execute_drawing(lv_draw_rtk_unit_t *u)
{
    LV_PROFILER_DRAW_BEGIN;
    /*Render the draw task*/
    lv_draw_task_t *t = u->task_act;
    switch (t->type)
    {
    case LV_DRAW_TASK_TYPE_FILL:

        break;
    case LV_DRAW_TASK_TYPE_BORDER:

        break;
    case LV_DRAW_TASK_TYPE_BOX_SHADOW:

        break;
    case LV_DRAW_TASK_TYPE_LABEL:
        lv_draw_rtk_label((lv_draw_unit_t *)u, t->draw_dsc, &t->area);
        break;
    case LV_DRAW_TASK_TYPE_IMAGE:

        break;
    case LV_DRAW_TASK_TYPE_ARC:

        break;
    case LV_DRAW_TASK_TYPE_LINE:

        break;
    case LV_DRAW_TASK_TYPE_TRIANGLE:

        break;
    case LV_DRAW_TASK_TYPE_LAYER:

        break;
    case LV_DRAW_TASK_TYPE_MASK_RECTANGLE:

        break;
#if LV_USE_VECTOR_GRAPHIC && LV_USE_THORVG
    case LV_DRAW_TASK_TYPE_VECTOR:

        break;
#endif
    default:
        break;
    }
    LV_PROFILER_DRAW_END;
}

#endif /*LV_USE_DRAW_RTK*/
