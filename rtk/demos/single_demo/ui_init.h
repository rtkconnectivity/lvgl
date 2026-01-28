/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file ui_init.h
 *
 */

#ifndef UI_INIT_H
#define UI_INIT_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl.h"
#include "../../../demos/lv_demos.h"

#include "./card/rtk_demo_card.h"
#include "./cellular/rtk_demo_cellular.h"
#include "./tileview_slide_snapshot/rtk_demo_tileview_slide.h"
#include "./lite3d/rtk_demo_lite3d_disc.h"

/*********************
 *      DEFINES
 *********************/

void app_ui_entry(void);

/**********************
 *      TYPEDEFS
 **********************/



/**********************
 * GLOBAL PROTOTYPES
 **********************/


/**********************
 *      MACROS
 **********************/



#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_INIT_H*/
