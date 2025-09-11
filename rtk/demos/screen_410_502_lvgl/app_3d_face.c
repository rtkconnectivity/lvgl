/**
 * @file app_3d_face.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lvgl.h"
#include "lvgl_watch.h"
#include "../../../src/libs/Lite3D/include/l3.h"
#include "root_image_lvgl/ui_resource.h"

#if LVGL_USE_CJSON
#include "cJSON.h"
#endif

/*********************
 *      DEFINES
 *********************/
#define FACE_MODEL_WIDTH 410
#define FACE_MODEL_HEIGHT 502

/**********************
 *  GLOBAL VARIABLES
 **********************/
lv_obj_t *scr_app_3d_face;

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t *face_container;

/* Animation Variables */
static float rot_angle = 5.0f;

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void update_face_animation(lv_timer_t *timer)
{
    lv_obj_t *lite3d = (lv_obj_t *)lv_timer_get_user_data(timer);
    rot_angle ++;
    lv_obj_invalidate(lite3d);
}

static void on_canvas_touch(lv_event_t *e)
{
    lv_obj_t *canvas = lv_event_get_target(e);

    lv_indev_t *indev = lv_indev_get_act();
    lv_point_t point;
    lv_indev_get_point(indev, &point);

    switch (lv_event_get_code(e))
    {
    case LV_EVENT_PRESSING:
        rot_angle ++;
        break;

    default:
        break;
    }
}

static void face_global_cb(l3_model_t *this)
{
    l3_camera_UVN_initialize(&this->camera, l3_4d_point(0, 0, 0), l3_4d_point(0, 0, 65), 1,
                             32767,
                             90, this->viewPortWidth, this->viewPortHeight);

    l3_world_initialize(&this->world, 0, 22, 65, 0, rot_angle, 0, 5);

}


void app_3d_face(lv_obj_t *parent)
{
    l3_model_t *face_3d = l3_create_model(DESC_FACE_BIN, L3_DRAW_FRONT_AND_SORT, 0, 0,
                                          FACE_MODEL_WIDTH,
                                          FACE_MODEL_HEIGHT);
    l3_set_global_transform(face_3d, (l3_global_transform_cb)face_global_cb);

    lv_obj_t *lite3d = lv_lite3d_create(parent, face_3d);

    lv_obj_add_event_cb(lite3d, on_canvas_touch, LV_EVENT_ALL, NULL);
    lv_timer_t *timer = lv_timer_create(update_face_animation, 16, lite3d);
}


/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void lv_tile_right_3_init(void)
{
    face_container = lv_obj_create(scr_tile_right_3);
    lv_obj_remove_style_all(face_container);
    lv_obj_remove_flag(face_container, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_flag(face_container, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_flag(face_container, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_set_size(face_container, LV_PCT(100), LV_PCT(100));
    app_3d_face(face_container);
}

