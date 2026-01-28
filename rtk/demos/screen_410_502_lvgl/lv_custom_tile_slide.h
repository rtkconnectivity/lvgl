/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file lv_custom_tile_slide.h
 *
 */

#ifndef LV_CUSTOM_TILE_SLIDE_H
#define LV_CUSTOM_TILE_SLIDE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl.h"

#include "../../../src/lvgl_private.h"
#include "../../../src/core/lv_obj_pos.h"

#if LV_USE_MATRIX
#include "../../../src/misc/lv_matrix.h"
#endif
#if LV_DRAW_TRANSFORM_USE_MATRIX
#include "lv_custom_matrix.h"
#endif
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef enum
{
    CLASSIC,        /**< Default slide animation */
    FADE,           /**< Cross-fade opacity transition */
    SCALE,          /**< Zoom animation effect */
    SCALE_FADE,     /**< Combined zoom & fade effect */

    /*need matrix*/
    BOX,            /**< 3D box rotation effect */
    CUBE_ROTATION,  /**< 3D cube rotation transition */
    SPIRAL_NOTEBOOK,/**< Spiral notebook flip effect */
    ROTATION,       /**< 3D rotation effect */

    EFFECT_COUNT,   /**< Total number of effects */
} SLIDE_EFFECT;

typedef struct
{
    bool scrolling;
    bool snapshot;
    lv_event_code_t create_snapshot;
    lv_event_code_t delete_snapshot;
} tileview_slide_t;
/**********************
 * GLOBAL PROTOTYPES
 **********************/
/**
 * @brief Custom tileview scroll event handler
 *
 * Handles dynamic scaling and opacity effects during scrolling:
 * - LV_EVENT_SCROLL_BEGIN: Log scroll start
 * - LV_EVENT_SCROLL:       Apply real-time transform effects
 * - LV_EVENT_SCROLL_END:   Reset child elements
 *
 * @param e LVGL event object containing event data
 */
void tileview_custom_cb(lv_event_t *e);

/**********************
 *      MACROS
 **********************/


#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_CUSTOM_TILE_SLIDE_H*/
