/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file rtk_demo_lite3d_disc.c
 *
 */
#include "lvgl.h"

#if LV_BUILD_DEMOS
#include "desc_disc.h"
#include "desc_disc_cube.h"

/*********************
 *      DEFINES
 *********************/
#define DISC_MODEL_WIDTH 380
#define DISC_MODEL_HEIGHT 380

#define CUBE_COUNT 22
/**********************
 *  GLOBAL VARIABLES
 **********************/
lv_obj_t *scr_app_3d_disc;

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t *disc_container;

static lv_obj_t *canvas;
static uint8_t *cbuf; // 16 bits per pixel, RGB565 format
/* Animation Variables */
static float rot_x_angle = 0.0f;
static float rot_z_angle = 0.0f;

static float shift_z[CUBE_COUNT] = {0}; // cube shift
static int step_direction[CUBE_COUNT] = {1};  // cube move direction, 1 rise, -1 fall
static int active_cube = 0;

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void update_disc_animation(lv_timer_t *timer)
{
    lv_obj_t *lite3d = (lv_obj_t *)lv_timer_get_user_data(timer);
    rot_z_angle --;
    lv_obj_invalidate(lite3d);
}

static void disc_click_cb(void *lite3d)
{
    lv_log("disc clicked\n");
    rot_z_angle += 90;
    lv_obj_invalidate(lite3d);
}

static void disc_global_cb(l3_model_base_t *this)
{
    l3_camera_UVN_initialize(&this->camera, l3_4d_point(0, 0, 0), l3_4d_point(0, 0, 50), 1, 32767,
                             90, this->viewPortWidth, this->viewPortHeight);

    l3_world_initialize(&this->world, 0, -5, 50, -65 + rot_x_angle, 0, 0, 5);

}

static l3_4x4_matrix_t disc_face_cb(l3_model_base_t *this, size_t face_index)
{
    l3_4x4_matrix_t face_matrix;
    l3_4x4_matrix_t transform_matrix;

    l3_calculator_4x4_matrix(&face_matrix, 0, 0, 0, l3_4d_point(0, 0, 0), l3_4d_vector(0, 0, 1),
                             rot_z_angle, 1);

    l3_4x4_matrix_mul(&this->world, &face_matrix, &transform_matrix);

    return transform_matrix;

}

static l3_4x4_matrix_t disc_cube_face_cb(l3_model_base_t *this, size_t face_index)
{
    l3_4x4_matrix_t face_matrix;
    l3_4x4_matrix_t transform_matrix;

    l3_calculator_4x4_matrix(&face_matrix, 0, 0, 0, l3_4d_point(0, 0, 0), l3_4d_vector(0, 0, 1),
                             rot_z_angle, 1);

    uint8_t cube_index = face_index / 6;
    if (cube_index < CUBE_COUNT)
    {
        l3_calculator_4x4_matrix(&face_matrix, 0, 0, -shift_z[cube_index], l3_4d_point(0, 0, 0),
                                 l3_4d_vector(0, 0, 1),
                                 rot_z_angle, 1);
    }

    l3_4x4_matrix_mul(&this->world, &face_matrix, &transform_matrix);

    return transform_matrix;

}

void rtk_demo_lite3d_disc(void)
{
#if LV_DRAW_TRANSFORM_USE_MATRIX != 1
    LV_LOG_WARN("It's recommended to enable LV_DRAW_TRANSFORM_USE_MATRIX for 3D");
#endif
    lv_obj_t *screen = lv_scr_act();
    lv_obj_set_style_bg_color(screen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);

    l3_model_base_t *disc_3d = l3_create_model((void *)_acdesc_disc, L3_DRAW_FRONT_ONLY, 15, 0,
                                               DISC_MODEL_WIDTH, DISC_MODEL_HEIGHT);
    l3_set_global_transform(disc_3d, (l3_global_transform_cb)disc_global_cb);
    l3_set_face_transform(disc_3d, (l3_face_transform_cb)disc_face_cb);
    lv_obj_t *lite3d_disc = lv_lite3d_create(screen, disc_3d);

    l3_model_base_t *disc_cube = l3_create_model((void *)_acdesc_disc_cube, L3_DRAW_FRONT_AND_SORT, 15,
                                                 0,
                                                 DISC_MODEL_WIDTH,
                                                 DISC_MODEL_HEIGHT);
    l3_set_global_transform(disc_cube, (l3_global_transform_cb)disc_global_cb);
    l3_set_face_transform(disc_cube, (l3_face_transform_cb)disc_cube_face_cb);
    lv_obj_t *lite3d_disc_cube = lv_lite3d_create(screen, disc_cube);

    lv_lite3d_set_click_cb(lite3d_disc, disc_click_cb);
    lv_lite3d_set_click_cb(lite3d_disc_cube, disc_click_cb);
    lv_timer_t *timer = lv_timer_create(update_disc_animation, 16, lite3d_disc);
}
#endif /* LV_BUILD_DEMOS */
