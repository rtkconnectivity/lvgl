/**
 * @file app_menu.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <math.h>
#include "lvgl.h"
#include "lvgl_watch.h"

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
bool enter_menu_flag = false;
bool is_card_menu = true;
lv_obj_t *scr_app_menu_card = NULL;
lv_obj_t *scr_app_menu_cellular = NULL;

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
static int16_t cellular_offset = 0;
static lv_timer_t *timer = NULL;
static lv_obj_t *cellular_img = NULL;
static int16_t cellular_img_y = 0;
static int16_t cellular_img_x = 0;

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
    enter_menu_flag = false;
    if (is_card_menu)
    {
        custom_screen_change(&tileview, &scr_app_menu_card, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             NULL, true);
    }
    else
    {
        custom_screen_change(&tileview, &scr_app_menu_cellular, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             NULL, true);
    }
    if (timer)
    {
        lv_timer_delete(timer);
        timer = NULL;
    }
}

static void enter_app_cb(lv_event_t *e)
{
    if (!custom_judge_short_click()) { return; }

    lv_obj_t *obj = lv_event_get_target(e);
    CardData *card_data = (CardData *)lv_event_get_user_data(e);
    uint8_t index = card_data->index;
    if (timer)
    {
        lv_timer_delete(timer);
        timer = NULL;
    }

    if (index == APP_COUNT)
    {
        is_card_menu = false;
        custom_screen_change(&scr_app_menu_cellular, &scr_app_menu_card, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             lv_app_menu_cellular_init, true);
        return;
    }

    index %= (APP_COUNT / 2);
    switch (index)
    {
    case 0:
        {
            custom_screen_change(&scr_app_weather, &scr_app_menu_card, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_weather_init, true);
        }
        break;
    case 1:
        {
            custom_screen_change(&scr_app_music, &scr_app_menu_card, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_music_init, true);
        }
        break;
    case 2:
        {
            custom_screen_change(&scr_app_calendar, &scr_app_menu_card, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_calendar_init, true);
        }
        break;
    case 3:
        {
            custom_screen_change(&scr_app_activity, &scr_app_menu_card, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_activity_init, true);
        }
        break;
    case 4:
        {
            custom_screen_change(&scr_app_heartrate, &scr_app_menu_card, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_heartrate_init, true);
        }
        break;
    default:
        break;
    }
}

static void enter_card_menu_cb(lv_event_t *e)
{
    if (custom_judge_short_click())
    {
        if (timer)
        {
            lv_timer_delete(timer);
            timer = NULL;
        }
        is_card_menu = true;
        custom_screen_change(&scr_app_menu_card, &scr_app_menu_cellular, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             lv_app_menu_card_init, true);
    }
}

static void enter_app_weather(lv_event_t *e)
{
    if (custom_judge_short_click())
    {
        custom_screen_change(&scr_app_weather, &scr_app_menu_cellular, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             lv_app_weather_init, true);
        if (timer)
        {
            lv_timer_delete(timer);
            timer = NULL;
        }
    }
}

static void enter_app_music(lv_event_t *e)
{
    if (custom_judge_short_click())
    {
        custom_screen_change(&scr_app_music, &scr_app_menu_cellular, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             lv_app_music_init, true);
        if (timer)
        {
            lv_timer_delete(timer);
            timer = NULL;
        }
    }
}

static void enter_app_calendar(lv_event_t *e)
{
    if (custom_judge_short_click())
    {
        custom_screen_change(&scr_app_calendar, &scr_app_menu_cellular, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             lv_app_calendar_init, true);
        if (timer)
        {
            lv_timer_delete(timer);
            timer = NULL;
        }
    }
}

static void enter_app_activity(lv_event_t *e)
{
    if (custom_judge_short_click())
    {
        custom_screen_change(&scr_app_activity, &scr_app_menu_cellular, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             lv_app_activity_init, true);
        if (timer)
        {
            lv_timer_delete(timer);
            timer = NULL;
        }
    }
}

static void enter_app_heartrate(lv_event_t *e)
{
    if (custom_judge_short_click())
    {
        custom_screen_change(&scr_app_heartrate, &scr_app_menu_cellular, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             lv_app_heartrate_init, true);
        if (timer)
        {
            lv_timer_delete(timer);
            timer = NULL;
        }
    }
}

static void card_design(lv_obj_t *card, void *param)
{
    lv_obj_set_style_bg_opa(card, LV_OPA_0, 0);
    lv_obj_set_style_border_width(card, 0, 0);
    lv_obj_set_style_pad_all(card, 0, 0);

    lv_card_t *cd = (lv_card_t *)card;
    CardData *card_data = &cd->data;
    uint16_t index = card_data->index;
    if (index < APP_COUNT)
    {
        lv_obj_t *bg = lv_image_create(card);
        lv_image_set_src(bg, &menu_bar_bg);
        lv_obj_set_pos(bg, 0, 0);
        lv_obj_add_flag(bg, LV_OBJ_FLAG_CLICKABLE);
        lv_obj_add_flag(bg, LV_OBJ_FLAG_EVENT_BUBBLE);
        lv_obj_remove_flag(bg, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_add_event_cb(bg, (lv_event_cb_t)enter_app_cb, LV_EVENT_SHORT_CLICKED, card_data);

        lv_obj_t *img = lv_image_create(bg);
        lv_image_set_src(img, app_list[index].icon);
        lv_obj_align(img, LV_ALIGN_LEFT_MID, 20, 0);

        lv_obj_t *label = lv_label_create(bg);
        lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
        custom_set_label_without_pos(label, app_list[index].name, lv_color_hex(0xFFFFFF), UINT8_MAX,
                                     &SourceHanSansSC_size24_bits1_font);
    }
    else
    {
        lv_obj_t *img = lv_image_create(card);
        lv_image_set_src(img, &ui_menu_cellular);
        lv_obj_align(img, LV_ALIGN_CENTER, -40, -10);
        lv_obj_add_flag(img, LV_OBJ_FLAG_CLICKABLE);
        lv_obj_add_event_cb(img, (lv_event_cb_t)enter_app_cb, LV_EVENT_SHORT_CLICKED, card_data);
    }
}

static void card_view_timer_cb(lv_timer_t *timer)
{
    lv_obj_t *card_view = (lv_obj_t *)lv_timer_get_user_data(timer);
    lv_cardview_t *cdv = (lv_cardview_t *)card_view;
    card_view_offset = cdv->data.offset;
}

static void cellular_timer_cb(lv_timer_t *timer)
{
    lv_obj_t *cellular = (lv_obj_t *)lv_timer_get_user_data(timer);
    lv_cellular_t *cellular_obj = (lv_cellular_t *)cellular;
    CellularData *cellular_data = &cellular_obj->data;
    cellular_offset = cellular_data->ver_offset;

    if (cellular_img)
    {
        lv_obj_set_pos(cellular_img, cellular_img_x + cellular_data->hor_offset,
                       cellular_img_y + cellular_data->ver_offset);
    }
}
/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void lv_app_menu_card_init(void)
{
    scr_app_menu_card = lv_obj_create(NULL);
    lv_obj_remove_style_all(scr_app_menu_card);
    lv_obj_set_size(scr_app_menu_card, LV_PCT(100), LV_PCT(100));
    lv_obj_set_style_bg_opa(scr_app_menu_card, LV_OPA_COVER, 0);
    enter_menu_flag = true;

    lv_obj_set_style_bg_color(scr_app_menu_card, lv_color_hex(0x0), 0);
    lv_coord_t card_height = ITEM_HEIGHT;
    lv_coord_t card_space = ITEM_INTERVAL;
    lv_coord_t stack_loction = 0;
    lv_obj_t *card_view = lv_card_view_create(scr_app_menu_card, CARD_CIRCLE, card_height, card_space,
                                              stack_loction, APP_COUNT + 1, card_design, NULL);
    lv_card_view_set_offset(card_view, card_view_offset);

    custom_return_create(scr_app_menu_card, exit_menu);

    timer = lv_timer_create(card_view_timer_cb, 20, card_view);
}

void lv_app_menu_cellular_init(void)
{
    scr_app_menu_cellular = lv_obj_create(NULL);
    lv_obj_remove_style_all(scr_app_menu_cellular);
    lv_obj_set_size(scr_app_menu_cellular, LV_PCT(100), LV_PCT(100));
    lv_obj_set_style_bg_color(scr_app_menu_cellular, lv_color_make(76, 76, 76), 0);
    lv_obj_set_style_bg_opa(scr_app_menu_cellular, LV_OPA_COVER, 0);
    lv_obj_remove_flag(scr_app_menu_cellular, LV_OBJ_FLAG_SCROLLABLE);
    enter_menu_flag = true;

    const lv_image_dsc_t *img_data[] =
    {
        &ui_clock_weather_icon, &ui_clock_music_icon, &ui_clock_calendar_icon, &ui_clock_activity_icon, &ui_clock_heartrate_icon,
        &ui_clock_weather_icon, &ui_clock_music_icon, &ui_clock_calendar_icon, &ui_clock_activity_icon, &ui_clock_heartrate_icon,
        &ui_clock_weather_icon, &ui_clock_music_icon, &ui_clock_calendar_icon, &ui_clock_activity_icon, &ui_clock_heartrate_icon,
        &ui_clock_weather_icon, &ui_clock_music_icon, &ui_clock_calendar_icon, &ui_clock_activity_icon, &ui_clock_heartrate_icon,
        &ui_clock_weather_icon, &ui_clock_music_icon, &ui_clock_calendar_icon, &ui_clock_activity_icon, &ui_clock_heartrate_icon,
        &ui_clock_weather_icon, &ui_clock_music_icon, &ui_clock_calendar_icon, &ui_clock_activity_icon, &ui_clock_heartrate_icon,
        &ui_clock_weather_icon, &ui_clock_music_icon, &ui_clock_calendar_icon, &ui_clock_activity_icon, &ui_clock_heartrate_icon,
        &ui_clock_weather_icon, &ui_clock_music_icon, &ui_clock_calendar_icon, &ui_clock_activity_icon, &ui_clock_heartrate_icon,
        &ui_clock_weather_icon, &ui_clock_music_icon, &ui_clock_calendar_icon, &ui_clock_activity_icon, &ui_clock_heartrate_icon,
    };
    lv_event_cb_t enter_app_cb[] =
    {
        enter_app_weather, enter_app_music, enter_app_calendar, enter_app_activity, enter_app_heartrate,
        enter_app_weather, enter_app_music, enter_app_calendar, enter_app_activity, enter_app_heartrate,
        enter_app_weather, enter_app_music, enter_app_calendar, enter_app_activity, enter_app_heartrate,
        enter_app_weather, enter_app_music, enter_app_calendar, enter_app_activity, enter_app_heartrate,
        enter_app_weather, enter_app_music, enter_app_calendar, enter_app_activity, enter_app_heartrate,
        enter_app_weather, enter_app_music, enter_app_calendar, enter_app_activity, enter_app_heartrate,
        enter_app_weather, enter_app_music, enter_app_calendar, enter_app_activity, enter_app_heartrate,
        enter_app_weather, enter_app_music, enter_app_calendar, enter_app_activity, enter_app_heartrate,
        enter_app_weather, enter_app_music, enter_app_calendar, enter_app_activity, enter_app_heartrate,
    };
    int array_size = sizeof(img_data) / sizeof(img_data[0]);
    lv_obj_t *cellular = lv_cellular_create_with_icon(scr_app_menu_cellular, 100, img_data, array_size,
                                                      enter_app_cb);
    lv_cellular_t *cellular_obj = (lv_cellular_t *)cellular;
    CellularData *cellular_date = &cellular_obj->data;
    cellular_date->ver_offset_min -= 100;
    lv_cellular_set_offset(cellular, cellular_offset);

    cellular_img_x = 120;
    cellular_img_y = array_size / 7 * 100 * 2 + (array_size % 7) / 3 * 100;
    cellular_img = lv_image_create(scr_app_menu_cellular);
    lv_image_set_src(cellular_img, &ui_menu_card);
    lv_obj_set_pos(cellular_img, 0, 0);
    lv_obj_add_flag(cellular_img, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(cellular_img, (lv_event_cb_t)enter_card_menu_cb, LV_EVENT_SHORT_CLICKED, NULL);

    timer = lv_timer_create(cellular_timer_cb, 10, cellular);
}