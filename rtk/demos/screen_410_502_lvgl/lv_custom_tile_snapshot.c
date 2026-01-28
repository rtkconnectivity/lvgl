/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file lv_custom_tile_snapshot.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_custom_tile_snapshot.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
/**
 * @brief Perform hardware-accelerated memory copy
 * @param dst Destination buffer
 * @param src Source buffer
 * @param len Bytes to copy
 * @note Optimized for DMA/direct memory access operations
 */
static void lv_draw_buf_memcpy(void *dst, const void *src, size_t len);

/**
 * @brief Delete snapshot resources
 * @param widget Associated widget object
 * @param img_snapshot Target snapshot image object to operate
 */
static void delete_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot);

/**
 * @brief Update widget snapshot cache
 * @param widget Source widget to capture
 * @param img_snapshot Image object for displaying snapshot
 * @note Automatically destroys old snapshot and creates new snapshot
 */
static void update_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot);

/**
 * @brief Create a snapshot normal lv_obj_center
 * @param widget Source widget object
 * @param img_snapshot Target image object
 * @note Release old buffer -> Create format-compatible buffer -> generate snapshot
 */
static void create_snapshot_normal(lv_obj_t *widget, lv_obj_t *img_snapshot);

/**
 * @brief Create snapshot via framebuffer copy
 * @param widget Source widget object
 * @param img_snapshot Target image object
 * @param fb Framebuffer data pointer
 * @note Release old buffer -> Create format-compatible buffer -> copy(DMA)
 */
static void create_snapshot_copy(lv_obj_t *widget, lv_obj_t *img_snapshot, uint8_t *fb);

/**
 * @brief Zero-copy snapshot with external buffer
 * @param widget Source widget object
 * @param img_snapshot Target image object
 * @param fb Framebuffer data pointer
 * @note Release old buffer -> Create descriptor -> Attach external buffer (No copy)
 */
static void create_snapshot_attach(lv_obj_t *widget, lv_obj_t *img_snapshot, uint8_t *fb);

/**
 * @brief Handle snapshot deletion event
 * @param e Event object with snapshot image and linked widget
 * @note Destroys snapshot buffer and clears image source on delete event
 */
static void snapshot_custom_cb_delete(lv_event_t *e);

/**
 * @brief Handle snapshot creation event
 * @param e Event object with target image and source widget
 * @note Create snapshot, adapt render modes, manage buffer lifecycle
 */
static void snapshot_custom_cb_create(lv_event_t *e);

/**********************
 *  GLOBAL VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void delete_snapshot_obj_directly(lv_obj_t *widget, lv_obj_t *snapshot)
{
    delete_snapshot(widget, snapshot);
    lv_obj_remove_flag(widget, LV_OBJ_FLAG_HIDDEN);
}

lv_obj_t *create_snapshot_obj_directly(lv_obj_t *parent, lv_obj_t *target)
{
    lv_obj_t *snapshot = lv_image_create(parent);
    lv_obj_set_size(snapshot, lv_obj_get_width(target), lv_obj_get_height(target));
    create_snapshot_normal(target, snapshot);
    lv_obj_add_flag(target, LV_OBJ_FLAG_HIDDEN);
    return snapshot;
}

lv_obj_t *create_snapshot_obj_with_enent(lv_obj_t *parent, lv_obj_t *target,
                                         uint32_t create_enent_id, uint32_t delete_enent_id)
{
    lv_obj_t *snapshot = lv_image_create(parent);
    lv_obj_set_size(snapshot, lv_obj_get_width(target), lv_obj_get_height(target));
    lv_obj_add_flag(snapshot, LV_OBJ_FLAG_HIDDEN);

    lv_obj_add_event_cb(snapshot, snapshot_custom_cb_create, create_enent_id, target);
    lv_obj_add_event_cb(snapshot, snapshot_custom_cb_delete, delete_enent_id, target);
    return snapshot;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void lv_draw_buf_memcpy(void *dst, const void *src, size_t len)
{
    lv_memcpy(dst, src, len);
}

static void delete_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot)
{
    lv_draw_buf_t *snapshot = (lv_draw_buf_t *)lv_image_get_src(img_snapshot);
    if (snapshot)
    {
        lv_draw_buf_destroy(snapshot);
        lv_image_set_src(img_snapshot, NULL);
    }
}

static void update_snapshot(lv_obj_t *widget, lv_obj_t *img_snapshot)
{
    lv_draw_buf_t *snapshot = (lv_draw_buf_t *)lv_image_get_src(img_snapshot);
    if (snapshot)
    {
        lv_draw_buf_destroy(snapshot);
    }
    snapshot = lv_snapshot_take(widget, lv_display_get_color_format(NULL));
    lv_image_set_src(img_snapshot, snapshot);
}

static void create_snapshot_normal(lv_obj_t *widget, lv_obj_t *img_snapshot)
{
    update_snapshot(widget, img_snapshot);
}

static void create_snapshot_copy(lv_obj_t *widget, lv_obj_t *img_snapshot, uint8_t *fb)
{
    lv_draw_buf_t *snapshot = (lv_draw_buf_t *)lv_image_get_src(img_snapshot);
    if (snapshot)
    {
        lv_draw_buf_destroy(snapshot);
    }
    snapshot = lv_snapshot_create_draw_buf(widget, lv_display_get_color_format(NULL));
    lv_draw_buf_memcpy(snapshot->data, fb, snapshot->data_size);
    lv_image_set_src(img_snapshot, snapshot);
}

static void create_snapshot_attach(lv_obj_t *widget, lv_obj_t *img_snapshot, uint8_t *fb)
{
    lv_draw_buf_t *snapshot = (lv_draw_buf_t *)lv_image_get_src(img_snapshot);
    if (snapshot)
    {
        lv_draw_buf_destroy(snapshot);
    }
    snapshot = lv_snapshot_create_draw_buf(widget, lv_display_get_color_format(NULL));
    snapshot->data = fb;
    lv_image_set_src(img_snapshot, snapshot);
}

static void snapshot_custom_cb_delete(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *img_snapshot = lv_event_get_current_target(e);
    lv_obj_t *widget = lv_event_get_user_data(e);
    delete_snapshot(widget, img_snapshot);
}

static void snapshot_custom_cb_create(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *img_snapshot = lv_event_get_current_target(e);
    lv_obj_t *widget = lv_event_get_user_data(e);
    int *param = (int *)lv_event_get_param(e);
    LV_UNUSED(code);
    LV_UNUSED(param);

    lv_area_t widget_area;
    lv_obj_get_coords(widget, &widget_area);
    lv_area_t screen_area;
    lv_obj_get_coords(lv_screen_active(), &screen_area);
    lv_area_t img_snapshot_area;
    lv_obj_get_coords(img_snapshot, &img_snapshot_area);

    if (lv_area_is_equal(&widget_area, &screen_area) &&
        lv_area_is_equal(&img_snapshot_area, &screen_area))
    {
        if (lv_display_get_default()->render_mode == LV_DISPLAY_RENDER_MODE_DIRECT ||
            lv_display_get_default()->render_mode == LV_DISPLAY_RENDER_MODE_FULL)
        {
            uint8_t *fb = lv_display_get_buf_active(NULL)->data;
            create_snapshot_copy(widget, img_snapshot, fb);
            LV_LOG_INFO("widget_area is equal to screen_area, goto create_snapshot_copy");
            return;
        }
        else if (lv_display_get_user_data(NULL) != NULL)
        {
            uint8_t *fb = lv_display_get_user_data(NULL);
            create_snapshot_copy(widget, img_snapshot, fb);
            LV_LOG_INFO("widget_area is equal to screen_area, goto create_snapshot_copy");
            return;
        }
    }
    create_snapshot_normal(widget, img_snapshot);
}
