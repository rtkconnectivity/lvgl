/**
 * @file app_calendar.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lvgl.h"
#include "app_main.h"
#include <time.h>

/**********************
 *      TYPEDEFS
 **********************/
typedef struct
{
    lv_calendar_date_t *dates;
    uint32_t count;
    uint32_t capacity;
} HighlightedDates;

/**********************
 *  GLOBAL VARIABLES
 **********************/
lv_obj_t *scr_app_calendar;

/**********************
 *  STATIC VARIABLES
 **********************/
static HighlightedDates highlighted_dates = {NULL, 0, 5};

/**********************
 *  STATIC FUNCTIONS
 **********************/
static void init_highlighted_dates(void)
{
    if (highlighted_dates.dates == NULL)
    {
        highlighted_dates.dates = lv_malloc(highlighted_dates.capacity * sizeof(lv_calendar_date_t));
    }
}

static bool is_date_highlighted(lv_calendar_date_t *date)
{
    for (uint32_t i = 0; i < highlighted_dates.count; i++)
    {
        if (highlighted_dates.dates[i].year == date->year &&
            highlighted_dates.dates[i].month == date->month &&
            highlighted_dates.dates[i].day == date->day)
        {
            return true;
        }
    }
    return false;
}


static void add_highlighted_date(lv_calendar_date_t *date)
{
    if (highlighted_dates.count >= highlighted_dates.capacity)
    {
        highlighted_dates.capacity *= 2;
        highlighted_dates.dates = lv_realloc(highlighted_dates.dates,
                                             highlighted_dates.capacity * sizeof(lv_calendar_date_t));
    }
    highlighted_dates.dates[highlighted_dates.count] = *date;
    highlighted_dates.count++;
}

static void remove_highlighted_date(lv_calendar_date_t *date)
{
    for (uint32_t i = 0; i < highlighted_dates.count; i++)
    {
        if (highlighted_dates.dates[i].year == date->year &&
            highlighted_dates.dates[i].month == date->month &&
            highlighted_dates.dates[i].day == date->day)
        {
            highlighted_dates.dates[i] = highlighted_dates.dates[highlighted_dates.count - 1];
            highlighted_dates.count--;
            break;
        }
    }
}

static void cleanup_highlighted_dates(void)
{
    lv_free(highlighted_dates.dates);
    highlighted_dates.dates = NULL;
    highlighted_dates.count = 0;
    highlighted_dates.capacity = 0;
}

static void return_to_menu(void)
{
    extern bool is_card_menu;
    if (is_card_menu)
    {
        custom_screen_change(&scr_app_menu_card, &scr_app_calendar, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             lv_app_menu_card_init, true);
    }
    else
    {
        custom_screen_change(&scr_app_menu_cellular, &scr_app_calendar, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             lv_app_menu_cellular_init, true);
    }
    // cleanup_highlighted_dates();
}

static void calendar_event_cb(lv_event_t *e)
{
    lv_obj_t *calendar = lv_event_get_current_target(e);
    lv_event_code_t code = lv_event_get_code(e);

    if (code == LV_EVENT_VALUE_CHANGED)
    {
        lv_calendar_date_t clicked_date;
        if (lv_calendar_get_pressed_date(calendar, &clicked_date))
        {
            if (is_date_highlighted(&clicked_date))
            {
                remove_highlighted_date(&clicked_date);
            }
            else
            {
                add_highlighted_date(&clicked_date);
            }
            lv_calendar_set_highlighted_dates(calendar, highlighted_dates.dates, highlighted_dates.count);
        }
    }
}

static void exit_app_calendar(void)
{
    if (enter_menu_flag)
    {
        return_to_menu();
    }
    else
    {
        custom_screen_change(&tileview, &scr_app_calendar, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                             NULL, true);
    }
}

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void lv_app_calendar_init(void)
{
    init_highlighted_dates();

    scr_app_calendar = lv_obj_create(NULL);
    lv_obj_remove_style_all(scr_app_calendar);
    lv_obj_set_size(scr_app_calendar, LV_PCT(100), LV_PCT(100));
    lv_obj_set_style_bg_color(scr_app_calendar, lv_color_hex(0x0), 0);
    lv_obj_set_style_bg_opa(scr_app_calendar, LV_OPA_COVER, 0);
    lv_obj_remove_flag(scr_app_calendar, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t *calendar = lv_calendar_create(scr_app_calendar);
    lv_obj_add_flag(calendar, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_set_size(calendar, 410, 502);
    lv_obj_align(calendar, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(calendar, calendar_event_cb, LV_EVENT_VALUE_CHANGED, NULL);

    lv_calendar_set_today_date(calendar, watch_time.tm_year + 1900, watch_time.tm_mon + 1,
                               watch_time.tm_mday);
    lv_calendar_set_showed_date(calendar, watch_time.tm_year + 1900, watch_time.tm_mon + 1);

    lv_calendar_header_dropdown_create(calendar);
    lv_calendar_set_highlighted_dates(calendar, highlighted_dates.dates, highlighted_dates.count);

    custom_return_create(scr_app_calendar, exit_app_calendar);
}
