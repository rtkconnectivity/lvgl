/**
 * @file lv_lite3d.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_lite3d.h"
#include "lvgl.h"
#include "../../core/lv_obj_private.h"
#include "../../core/lv_obj.h"
#include "../../core/lv_obj_class_private.h"
#include "../../draw/lv_draw_private.h"
#include "../../draw/lv_draw.h"
#include "../../misc/lv_area_private.h"
#include "../../display/lv_display.h"
#include "../../display/lv_display_private.h"

#if LV_USE_LITE3D != 0
/*********************
 *      DEFINES
 *********************/
#define MY_CLASS (&lv_lite3d_class)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_lite3d_constructor(const lv_obj_class_t *class_p, lv_obj_t *obj);
static void lv_lite3d_destructor(const lv_obj_class_t *class_p, lv_obj_t *obj);
static void lv_lite3d_event(const lv_obj_class_t *class_p, lv_event_t *e);
static void draw_lite3d(lv_event_t *e);

/**********************
 *  STATIC VARIABLES
 **********************/
const lv_obj_class_t lv_lite3d_class =
{
    .constructor_cb = lv_lite3d_constructor,
    .destructor_cb = lv_lite3d_destructor,
    .event_cb = lv_lite3d_event,
    .width_def = LV_PCT(100),
    .height_def = LV_PCT(100),
    .instance_size = (sizeof(lv_lite3d_t)),
    .base_class = &lv_obj_class,
    .name = "lite3d",
};

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t *lv_lite3d_create(lv_obj_t *parent, l3_model_t *model)
{
    LV_LOG_INFO("begin");
    lv_obj_t *obj = lv_obj_class_create_obj(MY_CLASS, parent);
    LV_ASSERT_NULL(obj);
    if (obj == NULL) { return NULL; }
    lv_obj_class_init_obj(obj);

    lv_lite3d_t *lite3d = (lv_lite3d_t *)obj;
    lite3d->model = model;
    lv_obj_set_pos(obj, model->x, model->y);
    lv_obj_set_size(obj, model->viewPortWidth, model->viewPortHeight);

    return obj;
}

void lv_lite3d_set_click_cb(lv_obj_t *obj, lv_lite3d_click_cb_t callback)
{
    lv_lite3d_t *lite3d = (lv_lite3d_t *)obj;
    if (lite3d)
    {
        lite3d->click_callback = callback;
    }
}

/*=====================
 * Setter functions
 *====================*/

/*=======================
 * Getter functions
 *======================*/

/*-------------------
 * OTHER FUNCTIONS
 *------------------*/


/**********************
 *   STATIC FUNCTIONS
 **********************/

static void lv_lite3d_constructor(const lv_obj_class_t *class_p, lv_obj_t *obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    lv_lite3d_t *lite3d = (lv_lite3d_t *)obj;
    lite3d->model = NULL;
    lite3d->need_refresh = true;
    lite3d->click_callback = NULL;

    lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);

    LV_TRACE_OBJ_CREATE("finished");
}

static void lv_lite3d_destructor(const lv_obj_class_t *class_p, lv_obj_t *obj)
{
    LV_UNUSED(class_p);
    lv_lite3d_t *lite3d = (lv_lite3d_t *)obj;

    if (lite3d->model)
    {
        l3_free_model(lite3d->model);
        lite3d->model = NULL;
    }
}

static void lv_lite3d_event(const lv_obj_class_t *class_p, lv_event_t *e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /*Call the ancestor's event handler*/
    res = lv_obj_event_base(MY_CLASS, e);
    if (res != LV_RESULT_OK) { return; }

    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_current_target(e);
    lv_lite3d_t *lite3d = (lv_lite3d_t *)obj;

    if (lite3d->need_refresh && code == LV_EVENT_DRAW_MAIN_BEGIN)
    {
        l3_push(lite3d->model);
        lite3d->need_refresh = false;
    }
    else if (code == LV_EVENT_DRAW_POST)
    {
        draw_lite3d(e);
    }
    else if (code == LV_EVENT_PRESSED)
    {
        if (lite3d->click_callback == NULL) { return; }
        lv_indev_t *indev = lv_indev_get_act();
        if (indev == NULL) { return; }

        lv_point_t point;
        lv_indev_get_point(indev, &point);

        if (lite3d->model->draw_type == L3_DRAW_FRONT_AND_SORT)
        {
            const int target_x = lite3d->model->combined_img->img_target_x;
            const int target_y = lite3d->model->combined_img->img_target_y;
            const int target_w = lite3d->model->combined_img->img_target_w;
            const int target_h = lite3d->model->combined_img->img_target_h;

            if (point.x >= target_x &&
                point.x <= (target_x + target_w) &&
                point.y >= target_y &&
                point.y <= (target_y + target_h))
            {
                lite3d->click_callback(lite3d);
            }
        }
        else
        {
            const int num_face_vertices = lite3d->model->desc->attrib.num_face_num_verts;

            for (int i = 0; i < num_face_vertices; ++i)
            {
                const int target_x = lite3d->model->img[i].img_target_x;
                const int target_y = lite3d->model->img[i].img_target_y;
                const int target_w = lite3d->model->img[i].img_target_w;
                const int target_h = lite3d->model->img[i].img_target_h;

                if (point.x >= target_x &&
                    point.x <= (target_x + target_w) &&
                    point.y >= target_y &&
                    point.y <= (target_y + target_h))
                {
                    lite3d->click_callback(lite3d);
                    break;
                }
            }
        }
    }
}

static void draw_lite3d(lv_event_t *e)
{
    lv_obj_t *obj = lv_event_get_current_target(e);
    lv_lite3d_t *lite3d = (lv_lite3d_t *)obj;
    lv_layer_t *layer = lv_event_get_layer(e);

    if (!layer || !layer->draw_buf || !lite3d->model) { return; }

    lv_area_t obj_coords;
    lv_obj_get_coords(obj, &obj_coords);

    lv_area_t layer_coords = layer->buf_area;

    // Check whether the object is within the visible area of the layer
    lv_area_t clip_area;
    if (!lv_area_intersect(&clip_area, &obj_coords, &layer->_clip_area))
    {
        return;
    }

    lv_display_t *disp = lv_display_get_default();
    if (disp->last_part)
    {
        lite3d->need_refresh = true;
    }

    l3_set_target_canvas(lite3d->model,
                         layer_coords.x1,
                         layer_coords.y1,
                         lv_area_get_width(&layer_coords),
                         lv_area_get_height(&obj_coords),
                         16,         // LITE_RGB565
                         layer->draw_buf->data);

    l3_draw(lite3d->model);
}

#endif
