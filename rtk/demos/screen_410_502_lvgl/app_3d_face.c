/**
 * @file app_3d_face.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lvgl.h"
#include "lvgl_watch.h"
#include "l3.h"
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

static uint8_t *cbuf; // 16 bits per pixel, RGB565 format
/* Animation Variables */
static float rot_angle = 5.0f;
static l3_model_t *face_3d;
static lv_obj_t *canvas;
/**********************
 *   STATIC FUNCTIONS
 **********************/
static void update_face_animation(lv_timer_t *timer)
{
    lv_obj_t *canvas = (lv_obj_t *)lv_timer_get_user_data(timer);
    lv_obj_invalidate(canvas);

    lv_memset(cbuf, 0, FACE_MODEL_WIDTH * FACE_MODEL_HEIGHT * 2);
    l3_set_target_canvas(face_3d, 0, 0, FACE_MODEL_WIDTH, FACE_MODEL_HEIGHT, 16/*LITE_RGB565*/, cbuf);
    l3_push(face_3d);
    l3_draw(face_3d);
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

static void canvas_cleanup(lv_event_t *e)
{
    if (cbuf)
    {
        lv_free(cbuf);
    }
    if (face_3d)
    {
        l3_free_model(face_3d);
        face_3d = NULL;
    }
    lv_obj_t *canvas = lv_event_get_target(e);
    lv_timer_t *timer = (lv_timer_t *)lv_obj_get_user_data(canvas);
    if (timer)
    {
        lv_timer_del(timer);
    }
}

void app_3d_face(lv_obj_t *parent)
{
    face_3d = l3_create_model(DESC_FACE_BIN, L3_DRAW_FRONT_AND_SORT, 0, 0, FACE_MODEL_WIDTH,
                              FACE_MODEL_HEIGHT);
    l3_set_global_transform(face_3d, (l3_global_transform_cb)face_global_cb);

    canvas = lv_canvas_create(parent);
    lv_obj_set_size(canvas, LV_PCT(100), LV_PCT(100));
    lv_obj_add_flag(canvas, LV_OBJ_FLAG_CLICKABLE);

    cbuf = lv_malloc(FACE_MODEL_WIDTH * FACE_MODEL_HEIGHT * 2);
    lv_memset(cbuf, 0, FACE_MODEL_WIDTH * FACE_MODEL_HEIGHT * 2);
    lv_canvas_set_buffer(canvas, cbuf, FACE_MODEL_WIDTH, FACE_MODEL_HEIGHT, LV_COLOR_FORMAT_RGB565);

    l3_set_target_canvas(face_3d, 0, 0, FACE_MODEL_WIDTH, FACE_MODEL_HEIGHT, 16/*LITE_RGB565*/, cbuf);
    l3_push(face_3d);
    l3_draw(face_3d);

    lv_obj_add_event_cb(canvas, on_canvas_touch, LV_EVENT_ALL, NULL);
    lv_timer_t *timer = lv_timer_create(update_face_animation, 16, canvas);
    lv_obj_add_event_cb(canvas, canvas_cleanup, LV_EVENT_DELETE, NULL);
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

