/**
 * @file app_menu.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <math.h>
#include "lvgl.h"
#include "app_main.h"
#include "lv_card.h"

/*********************
 *      DEFINES
 *********************/

#define SCREEN_WIDTH 410
#define SCREEN_HEIGHT 502
#define ITEM_HEIGHT 120
#define ITEM_INTERVAL 10
#define OFFSET_X 20

/**********************
 *      TYPEDEFS
 **********************/
typedef struct
{
    const char *name;
    const lv_img_dsc_t *icon;
} app_item_t;

/**********************
 *  GLOBAL VARIABLES
 **********************/
lv_obj_t *scr_app_menu = NULL;

/**********************
 *  STATIC VARIABLES
 **********************/
// Sample APP data
static const app_item_t app_list[] =
{
    {"Weather", &ui_clock_weather_icon},
    {"Music", &ui_clock_music_icon},
    {"Calendar", &ui_clock_calendar_icon},
    {"Activity", &ui_clock_activity_icon},
    {"Heart Rate", &ui_clock_heartrate_icon},
    {"Weather", &ui_clock_weather_icon},
    {"Music", &ui_clock_music_icon},
    {"Calendar", &ui_clock_calendar_icon},
    {"Activity", &ui_clock_activity_icon},
    {"Heart Rate", &ui_clock_heartrate_icon},
};

static int16_t card_view_offset = 0;
static lv_timer_t *timer = NULL;

/**********************
 *  GLOBAL VARIABLES
 **********************/
bool enter_menu_flag = false;

/**********************
 *      MACROS
 **********************/
#define APP_COUNT (sizeof(app_list) / sizeof(app_list[0]))

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void exit_menu(void)
{
    // LV_LOG("enter exit_menu func\n");
    custom_screen_change(&tileview, &scr_app_menu, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                         NULL, true);
    enter_menu_flag = false;
    lv_timer_delete(timer);
}

static void enter_app_cb(lv_event_t *e)
{
    if (!custom_judge_short_click()) { return; }

    lv_obj_t *obj = lv_event_get_target(e);
    CardData *card_data = (CardData *)lv_event_get_user_data(e);
    uint8_t index = card_data->index;
    index %= (APP_COUNT / 2);
    switch (index)
    {
    case 0:
        {
            custom_screen_change(&scr_app_weather, &scr_app_menu, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_weather_init, true);
        }
        break;
    case 1:
        {
            custom_screen_change(&scr_app_music, &scr_app_menu, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_music_init, true);
        }
        break;
    case 2:
        {
            custom_screen_change(&scr_app_calendar, &scr_app_menu, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_calendar_init, true);
        }
        break;
    case 3:
        {
            custom_screen_change(&scr_app_activity, &scr_app_menu, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_activity_init, true);
        }
        break;
    case 4:
        {
            custom_screen_change(&scr_app_heartrate, &scr_app_menu, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_heartrate_init, true);
        }
        break;
    default:
        break;
    }
    if (timer)
    {
        lv_timer_delete(timer);
    }
}


static void card_design(lv_obj_t *card, void *param)
{
    lv_obj_set_style_bg_opa(card, LV_OPA_0, 0);
    lv_obj_set_style_border_width(card, 0, 0);
    lv_obj_set_style_pad_all(card, 0, 0);

    CardData *card_data = lv_obj_get_user_data(card);
    uint16_t index = card_data->index;
    lv_obj_t *bg = lv_image_create(card);
    lv_image_set_src(bg, &menu_bar_bg);
    lv_obj_set_pos(bg, 0, 0);
    lv_obj_add_flag(bg, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_flag(bg, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_remove_flag(bg, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_event_cb(bg, (lv_event_cb_t)enter_app_cb, LV_EVENT_SHORT_CLICKED, card_data);

    lv_obj_t *img = lv_img_create(bg);
    lv_image_set_src(img, app_list[index].icon);
    lv_obj_align(img, LV_ALIGN_LEFT_MID, 20, 0);

    lv_obj_t *label = lv_label_create(bg);
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
    custom_set_label_without_pos(label, app_list[index].name, lv_color_hex(0xFFFFFF), UINT8_MAX,
                                 &SourceHanSansSC_size24_bits1_font);
}

static void timer_cb(lv_timer_t *timer)
{
    lv_obj_t *card_view = (lv_obj_t *)lv_timer_get_user_data(timer);
    CardViewData *view_data = lv_obj_get_user_data(card_view);
    card_view_offset = view_data->offset;
}
/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void lv_app_menu_init(void)
{
    scr_app_menu = lv_obj_create(NULL);
    lv_obj_remove_style_all(scr_app_menu);
    lv_obj_set_size(scr_app_menu, LV_PCT(100), LV_PCT(100));
    lv_obj_set_style_bg_color(scr_app_menu, lv_color_hex(0x0), 0);
    lv_obj_set_style_bg_opa(scr_app_menu, LV_OPA_COVER, 0);

    lv_coord_t card_height = ITEM_HEIGHT;
    lv_coord_t card_space = ITEM_INTERVAL;
    lv_coord_t stack_loction = 0;
    lv_obj_t *card_view = lv_card_view_create(scr_app_menu, CARD_CIRCLE, card_height, card_space,
                                              stack_loction, APP_COUNT, card_design, NULL);
    lv_card_view_set_offset(card_view, card_view_offset);

    custom_return_create(scr_app_menu, exit_menu);
    enter_menu_flag = true;

    timer = lv_timer_create(timer_cb, 20, card_view);
    lv_timer_set_repeat_count(timer, -1);
}