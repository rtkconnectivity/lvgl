#ifndef _LV_CUSTOM_FUNC_H
#define _LV_CUSTOM_FUNC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "app_main.h"

/*
* @brief Change loading screen
* @param target Address of the pointer to the target screen
* @param source Address of the pointer to the source screen
* @param anim Type of the animation from lv_screen_load_anim_t, e.g. LV_SCR_LOAD_ANIM_MOVE_LEFT
* @param spd Time of the animation
* @param delay Delay before the transition
* @param delete True: automatically delete the old screen
*/
void screen_change(lv_obj_t **target, lv_obj_t **source, lv_scr_load_anim_t anim, int spd,
                   int delay, void (*target_init)(void), bool delete);

/*
* @brief Remove object and its chilrd object flag
* @tip Do not create in the top level screen object
* @param parent Parent object
* @param flag Object flag
*/
void remove_flag_recursive(lv_obj_t *obj, lv_obj_flag_t flag);

/*
* @brief Add object and its chilrd object flag
* @tip Do not create in the top level screen object
* @param parent Parent object
* @param flag Object flag
*/
void add_flag_recursive(lv_obj_t *obj, lv_obj_flag_t flag);

/*
* @brief Create return gesture indicator
* @tip Do not create in the top level screen object
* @param parent Parent object
* @param cb Callback function
*/
void return_create(lv_obj_t *parent, void (*cb)(void));

/*
* @brief When scroll_obj can't stop send short_click event, need use this function to judge in short_click callback function
* @return 1: Short Clicked, 0: Not short clicked
*/
bool judge_short_click(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
