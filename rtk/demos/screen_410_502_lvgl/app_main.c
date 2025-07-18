/**
 * @file app_main.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "lvgl.h"
#include <time.h>

#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "lv_port_fs.h"

#include "app_main.h"
#include "lv_custom_tile_slide.h"
#include "lv_custom_tile_snapshot.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef enum
{
    MESSAGE = 0,
    OS,
} app_name;

typedef struct information
{
    const char *informer;
    const char *content;
    const char *time;
    app_name app;
} information_t;

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void time_update_cb(lv_timer_t *timer);
static void enter_menu_cb(lv_event_t *event);
static void inform_generate_task_entry(lv_timer_t *timer);
static void enter_control_board(lv_event_t *event);
static void ui_other_component_init(void);

/**********************
 *  STATIC VARIABLES
 **********************/
static char *content = NULL;

/**********************
 *  GLOBAL VARIABLES
 **********************/
struct tm watch_time = {0};

lv_obj_t *tileview;
bool tileview_scrolling = false;
lv_obj_t *tile_center;
lv_obj_t *tile_up;
lv_obj_t *tile_down;
lv_obj_t *tile_left;
lv_obj_t *tile_right;
lv_obj_t *tile_right_2;

lv_obj_t *scr_tile_center;
lv_obj_t *scr_tile_up;
lv_obj_t *scr_tile_down;
lv_obj_t *scr_tile_left;
lv_obj_t *scr_tile_right;
lv_obj_t *scr_tile_right_2;

lv_obj_t *scr_app_music;

uint32_t event_snapshot_creat;
uint32_t event_snapshot_delete;

SLIDE_EFFECT global_slide = SCALE;
/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void watch_demo_init(void)
{
    // lv_obj_t *example_card_stack(lv_obj_t *parent);
    // example_card_stack(lv_screen_active());
    // lv_obj_t *example_cellular(lv_obj_t *parent);
    // example_cellular(lv_screen_active());
    // return;

    ui_other_component_init();

    tileview = lv_tileview_create(NULL);
    lv_obj_set_style_bg_color(tileview, lv_color_make(0, 0, 0), 0);
    lv_obj_set_scrollbar_mode(tileview, LV_SCROLLBAR_MODE_OFF); // hide scroll bar
    lv_obj_add_flag(tileview, LV_OBJ_FLAG_CLICKABLE);
    // lv_obj_add_event_cb(tileview, (lv_event_cb_t)enter_menu_cb, LV_EVENT_ALL, NULL);

    tile_center = lv_tileview_add_tile(tileview, 1, 1, LV_DIR_ALL); // create center tile
    tile_up = lv_tileview_add_tile(tileview, 1, 0, LV_DIR_VER); // create up tile
    tile_down = lv_tileview_add_tile(tileview, 1, 2, LV_DIR_VER); // create down tile
    tile_left = lv_tileview_add_tile(tileview, 0, 1, LV_DIR_HOR); // create left tile
    tile_right = lv_tileview_add_tile(tileview, 2, 1, LV_DIR_HOR); // create right tile
    tile_right_2 = lv_tileview_add_tile(tileview, 3, 1, LV_DIR_HOR); // create right 2 tile

    lv_obj_set_user_data(tile_center, (void *)&global_slide);
    lv_obj_set_user_data(tile_up, (void *)&global_slide);
    lv_obj_set_user_data(tile_down, (void *)&global_slide);
    lv_obj_set_user_data(tile_left, (void *)&global_slide);
    lv_obj_set_user_data(tile_right, (void *)&global_slide);
    lv_obj_set_user_data(tile_right_2, (void *)&global_slide);

    scr_tile_center = lv_obj_create(tile_center);
    lv_obj_remove_style_all(scr_tile_center);
    lv_obj_set_size(scr_tile_center, LV_PCT(100), LV_PCT(100));

    scr_tile_up = lv_obj_create(tile_up);
    lv_obj_remove_style_all(scr_tile_up);
    lv_obj_set_size(scr_tile_up, LV_PCT(100), LV_PCT(100));

    scr_tile_down = lv_obj_create(tile_down);
    lv_obj_remove_style_all(scr_tile_down);
    lv_obj_set_size(scr_tile_down, LV_PCT(100), LV_PCT(100));

    scr_tile_left = lv_obj_create(tile_left);
    lv_obj_remove_style_all(scr_tile_left);
    lv_obj_set_size(scr_tile_left, LV_PCT(100), LV_PCT(100));

    scr_tile_right = lv_obj_create(tile_right);
    lv_obj_remove_style_all(scr_tile_right);
    lv_obj_set_size(scr_tile_right, LV_PCT(100), LV_PCT(100));

    scr_tile_right_2 = lv_obj_create(tile_right_2);
    lv_obj_remove_style_all(scr_tile_right_2);
    lv_obj_set_size(scr_tile_right_2, LV_PCT(100), LV_PCT(100));

    lv_tileview_set_tile_by_index(tileview, 1, 1, LV_ANIM_OFF); // start with center tile, no animation

    //initialize tileview UI
    lv_tile_center_init();
    lv_tile_up_init();
    lv_tile_down_init();
    lv_tile_left_init();
    lv_tile_right_init();
    lv_tile_right_2_init();

#if WATCH_DEMO_USE_TILESLIDE
    lv_obj_add_event_cb(tileview, tileview_custom_cb, LV_EVENT_ALL, &tileview_scrolling);
#if WATCH_DEMO_USE_SNAPSHOT
    event_snapshot_creat = lv_event_register_id();
    event_snapshot_delete = lv_event_register_id();

    create_snapshot_obj_with_enent(tile_center, tile_center,
                                   event_snapshot_creat, event_snapshot_delete);
    create_snapshot_obj_with_enent(tile_up, tile_up,
                                   event_snapshot_creat, event_snapshot_delete);
    create_snapshot_obj_with_enent(tile_down, tile_down,
                                   event_snapshot_creat, event_snapshot_delete);
    create_snapshot_obj_with_enent(tile_left, tile_left,
                                   event_snapshot_creat, event_snapshot_delete);
    create_snapshot_obj_with_enent(tile_right, tile_right,
                                   event_snapshot_creat, event_snapshot_delete);
    create_snapshot_obj_with_enent(tile_right_2, tile_right_2,
                                   event_snapshot_creat, event_snapshot_delete);
#endif
#endif
    lv_screen_load(tileview);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void time_update_cb(lv_timer_t *timer)
{
#ifdef __WIN32
    time_t rawtime;
    time(&rawtime);
    struct tm *timeinfo = localtime(&rawtime);
    watch_time = *timeinfo;
#endif
}


static void inform_generate_task_entry(lv_timer_t *timer)
{
    if (!content)
    {
        content = lv_malloc(200);
        sprintf(content,
                "Never gonna give you up. Never gonna let you down. Never gonna run around and desert you. Never gonna give you up. Never gonna let you down. Never gonna run around and desert you.");
    }
    char time_str[10];
    sprintf(time_str, "%02d:%02d", watch_time.tm_hour, watch_time.tm_min);

    information_t payload =
    {
        "101010",
        content,
        time_str,
        MESSAGE
    };
    extern void pagelist_create(information_t *payload);
    pagelist_create(&payload);
}

static void enter_menu_cb(lv_event_t *event)
{
    lv_event_code_t code = lv_event_get_code(event);

    lv_indev_t *indev = lv_indev_get_next(NULL);
    static bool enter_menu_flag = false;
    if (code < LV_EVENT_COVER_CHECK)
    {
        LV_LOG("code: %d\n", code);
    }

    if (enter_menu_flag && code < LV_EVENT_COVER_CHECK)
    {
        enter_menu_flag = false;
        extern bool is_card_menu;
        if (is_card_menu)
        {
            custom_screen_change(&scr_app_menu_card, NULL, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_menu_card_init, true);
        }
        else
        {
            custom_screen_change(&scr_app_menu_cellular, NULL, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                                 lv_app_menu_cellular_init, true);
        }
        return;
    }
    while (indev)
    {
        if (lv_indev_get_type(indev) == LV_INDEV_TYPE_KEYPAD &&
            lv_indev_get_state(indev) == LV_INDEV_STATE_PRESSED)
        {
            enter_menu_flag = true;
            return;
        }
        indev = lv_indev_get_next(indev);
    }
}

static void enter_control_board(lv_event_t *event)
{
    custom_screen_change(&scr_app_control_board, NULL, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                         lv_app_control_board_init, false);
}

static void ui_other_component_init(void)
{
#if LVGL_USE_CJSON
    {
        lv_timer_t *timer = lv_timer_create(read_json_cb, 3000, NULL);
        lv_timer_set_repeat_count(timer, -1);
        lv_timer_ready(timer);
    }
#endif

#ifdef __WIN32
    time_t rawtime;
    time(&rawtime);
    struct tm *timeinfo = localtime(&rawtime);
    watch_time = *timeinfo;
#endif

    {
        lv_timer_t *timer = lv_timer_create(inform_generate_task_entry, 3000, NULL);
        lv_timer_set_repeat_count(timer, -1);
        lv_timer_ready(timer);
    }
    {
        lv_timer_t *timer = lv_timer_create(time_update_cb, 30000, NULL);
        lv_timer_set_repeat_count(timer, -1);
        lv_timer_ready(timer);
    }
}

