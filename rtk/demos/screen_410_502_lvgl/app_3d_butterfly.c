/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

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
#define BUTTERFLY_MODEL_WIDTH 410
#define BUTTERFLY_MODEL_HEIGHT 502

/**********************
 *  GLOBAL VARIABLES
 **********************/
lv_obj_t *scr_app_3d_butterfly;

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t *butterfly_container;

/* Animation Variables */
static float wing_angle = 0.0f;
static float butterfly_x = 0.0f;
static float butterfly_y = 0.0f;
static float butterfly_z = 0.0f;
static float butterfly_rz = 0.0f;

bool is_moving_to_target = false;
static float target_dx = 0.0f;
static float target_dy = 0.0f;
static float source_dx = 0.0f;
static float source_dy = 0.0f;
static const float move_speed = 0.02f;
static float wing_time = 0.0f;
static float total_flight_distance = 0.0f;
static float flight_progress = 1.0f;

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void obj_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);

    if (code == LV_EVENT_PRESSED || code == LV_EVENT_PRESSING || code == LV_EVENT_SHORT_CLICKED)
    {
        lv_point_t point;
        lv_indev_get_point(lv_indev_active(), &point);

        target_dx = (point.x - lv_obj_get_width(obj) / 2.0f) / 4.0f;
        target_dy = (point.y - lv_obj_get_height(obj) / 2.0f) / 4.0f;
        is_moving_to_target = true;

        float dx = target_dx - source_dx;
        float dy = target_dy - source_dy;

        total_flight_distance = sqrtf(dx * dx + dy * dy);
        flight_progress = 0.0f;
    }
}

static void update_butterfly_animation(lv_timer_t *timer)
{
    lv_obj_t *lite3d = (lv_obj_t *)lv_timer_get_user_data(timer);

    if (is_moving_to_target)
    {
        float current_dx = target_dx - source_dx;
        float current_dy = target_dy - source_dy;

        float remaining_distance = sqrtf(current_dx * current_dx + current_dy * current_dy);
        flight_progress = fminf(1.0f - (remaining_distance / total_flight_distance), 1.0f);

        if (flight_progress < 0.8f)
        {
            // Acceleration and deceleration
            source_dx += current_dx * move_speed * (1.0f - flight_progress);
            source_dy += current_dy * move_speed * (1.0f - flight_progress);

            // Caculate new rotate angle
            float desired_angle = atan2f(current_dy, current_dx) * (180.0f / M_PI_F) + 90;
            float angle_difference = desired_angle - butterfly_rz;

            if (angle_difference > 180.0f)
            {
                angle_difference -= 360.0f;
            }
            if (angle_difference < -180.0f)
            {
                angle_difference += 360.0f;
            }
            butterfly_rz += angle_difference * 0.1f;

            // Adjust wing flapping frequency based on speed
            wing_time += 0.2f + (1.0f - flight_progress) * 0.2f;
            wing_angle = 60.0f * sinf(wing_time);

            butterfly_x = source_dx;
            butterfly_y = source_dy;

            butterfly_z = 30.0f * (4.0f * flight_progress * (0.8f - flight_progress));
        }
        else
        {
            is_moving_to_target = false;
        }
    }
    else
    {
        wing_time += 0.1f;
        wing_angle = 50.0f * sinf(wing_time);
        butterfly_z = -5.0f * sinf(wing_time);
    }

    lv_obj_invalidate(lite3d);
}


static void butterfly_global_cb(l3_model_base_t *this)
{
    l3_camera_UVN_initialize(&this->camera, l3_4d_point(0, 0, 0), l3_4d_point(0, 0, 45), 1,
                             32767,
                             90, this->viewPortWidth, this->viewPortHeight);

    l3_world_initialize(&this->world, butterfly_x, butterfly_y, 45.0f - butterfly_z, 0, 0, butterfly_rz,
                        5);

}

static l3_4x4_matrix_t butterfly_face_cb(l3_model_base_t *this, size_t face_index/*face offset*/)
{
    l3_4x4_matrix_t face_matrix;
    l3_4x4_matrix_t transform_matrix;

    if (face_index == 0 || face_index == 2)
    {
        l3_calculator_4x4_matrix(&face_matrix, 0, 0, 0, l3_4d_point(0, 0, 0), l3_4d_vector(0, 1, 0),
                                 wing_angle, 1);
    }
    else if (face_index == 1 || face_index == 3)
    {
        l3_calculator_4x4_matrix(&face_matrix, 0, 0, 0, l3_4d_point(0, 0, 0), l3_4d_vector(0, 1, 0),
                                 -wing_angle, 1);
    }
    else
    {
        l3_calculator_4x4_matrix(&face_matrix, 0, 0, 0, l3_4d_point(0, 0, 0), l3_4d_vector(0, 1, 0), 0,
                                 1);
    }

    l3_4x4_matrix_mul(&this->world, &face_matrix, &transform_matrix);

    return transform_matrix;

}

void app_3d_butterfly(lv_obj_t *parent)
{
    l3_model_base_t *butterfly_3d = l3_create_model(DESC_BUTTERFLY_BIN, L3_DRAW_FRONT_ONLY, 0, 0,
                                                    BUTTERFLY_MODEL_WIDTH, BUTTERFLY_MODEL_HEIGHT);
    l3_set_global_transform(butterfly_3d, (l3_global_transform_cb)butterfly_global_cb);
    l3_set_face_transform(butterfly_3d, (l3_face_transform_cb)butterfly_face_cb);
    lv_obj_t *lite3d_butterfly = lv_lite3d_create(parent, butterfly_3d);

    lv_obj_add_event_cb(lite3d_butterfly, obj_event_cb, LV_EVENT_ALL, NULL);
    lv_timer_t *timer = lv_timer_create(update_butterfly_animation, 16, lite3d_butterfly);

}


/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void lv_tile_right_4_init(void)
{
    butterfly_container = lv_obj_create(scr_tile_right_4);
    lv_obj_remove_style_all(butterfly_container);
    lv_obj_remove_flag(butterfly_container, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_flag(butterfly_container, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_flag(butterfly_container, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_set_size(butterfly_container, LV_PCT(100), LV_PCT(100));
    app_3d_butterfly(butterfly_container);
}

