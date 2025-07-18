/**
 * @file lv_custom_func.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <math.h>
#include "lv_custom_func.h"
#include "lv_indev_private.h"

/*********************
 *      DEFINES
 *********************/
#define DRAG_THRESHOLD 30  // Drag distance threshold
#define LEFT_EDGE_THRESHOLD 30  // Left edge detection range

/**********************
 *      TYPEDEFS
 **********************/
// Custom data structure for gesture handling
typedef struct
{
    lv_obj_t *img;
    void (*cb)(void);
} return_data_t;

/**********************
 *  STATIC VARIABLES
 **********************/
// Drag indicator image sequence
static const lv_image_dsc_t *drag_indicator_imgs[] =
{
    &path02,
    &path03,
    &path04,
    &path05,
    &path06,
    &path07,
    &path08,
    &path09,
    &path10,
    &path11,
    &path12,
    &path13,
    &path14,
    &path15,
    &path16,
    &path17,
    &path18,
};

/**********************
 *      MACROS
 **********************/
#define DRAG_IMG_COUNT (sizeof(drag_indicator_imgs) / sizeof(drag_indicator_imgs[0]))

/**********************
 *  STATIC VARIABLES
 **********************/
static return_data_t param = {0};

/**********************
 *   STATIC FUNCTIONS
 **********************/
// Gesture detection callback
static void return_gesture_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    return_data_t *param = (return_data_t *)lv_event_get_user_data(e);
    lv_obj_t *img = param->img;
    lv_obj_t *obj = lv_event_get_target(e);
    lv_indev_t *indev = lv_indev_get_act();
    lv_point_t point;
    static bool release_flag = 1; // 1: release
    static bool has_flag = 0;
    static lv_coord_t pressed_x = 0;
    lv_indev_get_point(indev, &point);

    if (code == LV_EVENT_PRESSING)
    {
        if (point.x < LEFT_EDGE_THRESHOLD)
        {
            // Start from the left edge
            if (release_flag)
            {
                // Start dragging, record starting point and show image
                pressed_x = point.x;
                release_flag = 0;
                lv_obj_remove_flag(img, LV_OBJ_FLAG_HIDDEN);
                lv_obj_set_pos(img, 0, point.y - lv_obj_get_height(img) / 2);
            }
            // Disable scrolling of the parent object
            if (lv_obj_has_flag(obj, LV_OBJ_FLAG_SCROLLABLE))
            {
                lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                has_flag = 1;
            }
            // Update image position and sequence
            lv_coord_t drag_x = point.x - pressed_x;
            if (drag_x >= 0 && drag_x <= DRAG_THRESHOLD)
            {
                // Select image based on drag distance
                uint8_t img_index = floor((DRAG_IMG_COUNT - 1) * drag_x / DRAG_THRESHOLD);
                lv_image_set_src(img, drag_indicator_imgs[img_index]);
            }
        }
    }
    else if (code == LV_EVENT_RELEASED)
    {
        // Re-enable scrolling of the parent object
        if (!release_flag)
        {
            lv_coord_t drag_x = point.x - pressed_x;
            if (drag_x > DRAG_THRESHOLD)
            {
                param->cb(); // Exit
                // LV_LOG("RETURN\n");
            }
            if (has_flag)
            {
                // Re-enable scrolling of the parent object
                lv_obj_add_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                lv_obj_add_flag(img, LV_OBJ_FLAG_HIDDEN);
                has_flag = 0;
            }
            release_flag = 1;
            pressed_x = 0;
        }
    }
}

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
// Create return gesture indicator
void custom_return_create(lv_obj_t *parent, void (*cb)(void))
{
    lv_obj_add_flag(parent, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_t *img = lv_img_create(parent);
    lv_image_set_src(img, drag_indicator_imgs[0]);
    lv_obj_add_flag(img, LV_OBJ_FLAG_HIDDEN); // Hide initially
    lv_obj_set_pos(img, 0, 0);
    param.img = img;
    param.cb = cb;
    lv_obj_add_event_cb(parent, return_gesture_cb, LV_EVENT_ALL, (void *)&param);
}

void custom_remove_flag_recursive(lv_obj_t *obj, lv_obj_flag_t flag)
{
    lv_obj_remove_flag(obj, flag);
    // iterate over all child widgets
    uint32_t child_cnt = lv_obj_get_child_count(obj);
    for (uint32_t i = 0; i < child_cnt; i++)
    {
        lv_obj_t *child = lv_obj_get_child(obj, i);
        if (child != NULL)
        {
            custom_remove_flag_recursive(child, flag);
        }
    }
}
void custom_add_flag_recursive(lv_obj_t *obj, lv_obj_flag_t flag)
{
    lv_obj_add_flag(obj, flag);
    // iterate over all child widgets
    uint32_t child_cnt = lv_obj_get_child_count(obj);
    for (uint32_t i = 0; i < child_cnt; i++)
    {
        lv_obj_t *child = lv_obj_get_child(obj, i);
        if (child != NULL)
        {
            custom_add_flag_recursive(child, flag);
        }
    }
}

bool custom_judge_short_click(void)
{
    uint32_t short_click_time = 80;
    bool ret = false;

    lv_indev_t *indev = lv_indev_get_act();
    if (indev && lv_indev_get_type(indev) == LV_INDEV_TYPE_POINTER)
    {
        if (indev->pointer.last_short_click_timestamp - indev->pr_timestamp < short_click_time)
        {
            ret = true;
        }
    }
    return ret;
}

void custom_screen_change(lv_obj_t **target, lv_obj_t **source, lv_scr_load_anim_t anim, int spd,
                          int delay,
                          void (*target_init)(void), bool delete)
{
    if (*target == NULL)
    {
        target_init();
    }
    lv_screen_load_anim(*target, anim, spd, delay, delete);
    if (delete)
    {
        *source = NULL;
    }
}

inline void custom_set_label_without_pos(lv_obj_t *label, const char *text, lv_color_t color,
                                         lv_opa_t opa, const lv_font_t *font)
{
    lv_label_set_text(label, text);
    lv_obj_set_style_text_color(label, color, 0);
    lv_obj_set_style_text_opa(label, opa, 0);
    lv_obj_set_style_text_font(label, font, 0);
}


