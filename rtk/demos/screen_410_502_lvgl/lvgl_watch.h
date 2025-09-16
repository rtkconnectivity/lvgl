/**
 * @file lvgl_watch.h
 *
 */

#ifndef _LVGL_WATCH_H
#define _LVGL_WATCH_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl.h"
#include "lv_custom_func.h"
#include "lv_img_dsc_list.h"
#include "lv_image_dsc.h"

#include <math.h>
#include <stdio.h>

/*********************
 *      DEFINES
 *********************/
#define LVGL_USE_CJSON 0

#define WATCH_DEMO_USE_TILESLIDE    1

#if WATCH_DEMO_USE_TILESLIDE
#define WATCH_DEMO_USE_SNAPSHOT     1
#if WATCH_DEMO_USE_SNAPSHOT
#if !LV_USE_DRAW_PPE_RTL8773E && \
            !LV_USE_DRAW_PPE_RTL872xG && \
            LV_MEM_SIZE + LV_MEM_POOL_EXPAND_SIZE < 3 * 1024 * 1024
#warning "It's recommended to have at least 3MB RAM for the snapshot tileview watch demo on SW"
#endif
#else
#if !LV_USE_DRAW_PPE_RTL8773E && \
            !LV_USE_DRAW_PPE_RTL872xG && \
            LV_MEM_SIZE + LV_MEM_POOL_EXPAND_SIZE < 1024 * 1024
#warning "It's recommended to have at least 1MB RAM for the tileview watch demo on SW"
#endif
#endif
#endif

#ifndef WATCH_DEMO_USE_SNAPSHOT
#define WATCH_DEMO_USE_SNAPSHOT     0
#endif

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
extern uint32_t event_snapshot_creat;
extern uint32_t event_snapshot_delete;

extern lv_obj_t *tileview;
extern lv_obj_t *tile_center;
extern lv_obj_t *tile_up;
extern lv_obj_t *tile_down;
extern lv_obj_t *tile_left;
extern lv_obj_t *tile_right;
extern lv_obj_t *tile_right_2;
extern lv_obj_t *tile_right_3;
extern lv_obj_t *tile_right_4;

extern lv_obj_t *scr_tile_center;
extern lv_obj_t *scr_tile_up;
extern lv_obj_t *scr_tile_down;
extern lv_obj_t *scr_tile_left;
extern lv_obj_t *scr_tile_right;
extern lv_obj_t *scr_tile_right_2;
extern lv_obj_t *scr_tile_right_3;
extern lv_obj_t *scr_tile_right_4;

extern lv_obj_t *scr_app_control_board;
extern lv_obj_t *scr_app_menu_card;
extern lv_obj_t *scr_app_menu_cellular;
extern lv_obj_t *scr_app_calendar;
extern lv_obj_t *scr_app_activity;
extern lv_obj_t *scr_app_music;
extern lv_obj_t *scr_app_heartrate;
extern lv_obj_t *scr_app_weather;

extern lv_image_dsc_t const *text_num_array[11];
extern const char *day[7];
extern const char *month[12];
extern const char *weather_array[7];
extern const uint8_t temp_range[14];
extern struct tm watch_time;

extern bool enter_menu_flag;

void lv_tile_center_init(void);
void lv_tile_up_init(void);
void lv_tile_down_init(void);
void lv_tile_left_init(void);
void lv_tile_right_init(void);
void lv_tile_right_2_init(void);
void lv_tile_right_3_init(void);
void lv_tile_right_4_init(void);

void lv_app_control_board_init(void);
void lv_app_menu_card_init(void);
void lv_app_menu_cellular_init(void);
void lv_app_calendar_init(void);
void lv_app_activity_init(void);
void lv_app_music_init(void);
void lv_app_heartrate_init(void);
void lv_app_weather_init(void);

extern uint8_t estimate_temp(int hour);

// FONTS
LV_FONT_DECLARE(SourceHanSansSC_size12_bits1_font);
LV_FONT_DECLARE(SourceHanSansSC_size24_bits1_font);
LV_FONT_DECLARE(SourceHanSansSC_size32_bits1_font);
LV_FONT_DECLARE(SourceHanSansSC_size48_bits1_font);

void watch_demo_init(void);

/**********************
 *      MACROS
 **********************/



#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
