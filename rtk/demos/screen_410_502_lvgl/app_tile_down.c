#include "lvgl.h"
#include "app_main.h"
#include "lv_card.h"
#include <time.h>
#include <string.h>

#define LOCATION "Suzhou"

lv_obj_t *clock_big, *clock_small;

static void timer_cb(lv_timer_t *timer)
{
    {
        lv_obj_t *hour_decimal = lv_obj_get_child(clock_big, 0);
        lv_image_set_src(hour_decimal, text_num_array[watch_time.tm_hour / 10]);
        lv_obj_t *hour_singel = lv_obj_get_child(clock_big, 1);
        lv_image_set_src(hour_singel, text_num_array[watch_time.tm_hour % 10]);
        lv_obj_t *minute_decimal = lv_obj_get_child(clock_big, 2);
        lv_image_set_src(minute_decimal, text_num_array[watch_time.tm_min / 10]);
        lv_obj_t *minute_singel = lv_obj_get_child(clock_big, 3);
        lv_image_set_src(minute_singel, text_num_array[watch_time.tm_min % 10]);
        lv_obj_t *date_label = lv_obj_get_child(clock_big, -1);
        char content[10];
        sprintf(content, "%s%d\n%s", month[watch_time.tm_mon], watch_time.tm_mday,
                day[watch_time.tm_wday]);
        lv_label_set_text(date_label, content);
    }
    {
        lv_obj_t *date_label = lv_obj_get_child(clock_small, 0);
        char date_content[10];
        sprintf(date_content, "%s %d\n", day[watch_time.tm_wday], watch_time.tm_mday);
        lv_label_set_text(date_label, date_content);

        lv_obj_t *time_label = lv_obj_get_child(clock_small, 1);
        char time_content[10];
        sprintf(time_content, "%02d:%02d", watch_time.tm_hour, watch_time.tm_min);
        lv_label_set_text(time_label, time_content);
    }

}

static bool is_top_start(lv_point_t *point)
{
    lv_coord_t height = lv_disp_get_ver_res(NULL); // Get screen height
    lv_coord_t threshold = height * 1 / 6; // Define bottom area as the lower 1/6
    return (point->y < threshold);
}

static void scr_tile_down_event_cb(lv_event_t *e)
{
    lv_obj_t *cardview = lv_event_get_user_data(e);
    CardViewData *view_data = lv_obj_get_user_data(cardview);
    lv_event_code_t code = lv_event_get_code(e);
    static lv_point_t point;

    lv_indev_t *indev = lv_indev_get_act();  // Get the current input device
    if (code == LV_EVENT_PRESSED && indev && lv_indev_get_type(indev) == LV_INDEV_TYPE_POINTER)
    {
        lv_indev_get_point(indev, &point); // Get touch point coordinates
    }
    if (code == LV_EVENT_PRESSING && indev && lv_indev_get_type(indev) == LV_INDEV_TYPE_POINTER)
    {
        // Check if the slide starts from the bottom
        if (is_top_start(&point))
        {
            lv_obj_remove_flag(cardview, LV_OBJ_FLAG_CLICKABLE);
        }
        else
        {
            lv_obj_remove_flag(tileview, LV_OBJ_FLAG_SCROLLABLE);
        }
    }
    else if (code == LV_EVENT_PRESS_LOST || code == LV_EVENT_RELEASED)
    {
        lv_obj_add_flag(tileview, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_add_flag(cardview, LV_OBJ_FLAG_CLICKABLE);
    }

    if (clock_big && clock_small)
    {
        if (view_data->offset_y < -150)
        {
            lv_obj_add_flag(clock_big, LV_OBJ_FLAG_HIDDEN);
            lv_obj_remove_flag(clock_small, LV_OBJ_FLAG_HIDDEN);
        }
        else
        {
            lv_obj_remove_flag(clock_big, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(clock_small, LV_OBJ_FLAG_HIDDEN);
        }
    }

}

static void enter_music_cb(lv_event_t *e)
{
    lv_tileview_set_tile_by_index(tileview, 2, 1, LV_ANIM_OFF);
    _ui_screen_change(&tileview, NULL, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                      NULL, false);
}

static void enter_calendar_cb(lv_event_t *e)
{
    _ui_screen_change(&scr_app_calendar, NULL, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                      lv_app_calendar_init, false);
}

static void enter_activity_cb(lv_event_t *e)
{
    _ui_screen_change(&scr_app_activity, NULL, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                      lv_app_activity_init, false);
}

static void enter_app_menu_cb(lv_event_t *e)
{
    _ui_screen_change(&scr_app_menu, NULL, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                      lv_app_menu_init, false);
}

static void create_weather_card(lv_obj_t *card)
{
    lv_image_dsc_t const *weather_icon = NULL;
    int tm_hour = watch_time.tm_hour;
    int wday = watch_time.tm_wday;
    int hour[6] =
    {
        tm_hour,
        (tm_hour + 1) % 24,
        (tm_hour + 2) % 24,
        (tm_hour + 3) % 24,
        (tm_hour + 4) % 24,
        (tm_hour + 5) % 24,
    };
    uint8_t temp_array[6] =
    {
        estimate_temp(hour[0]),
        estimate_temp(hour[1]),
        estimate_temp(hour[2]),
        estimate_temp(hour[3]),
        estimate_temp(hour[4]),
        estimate_temp(hour[5]),
    };

    lv_obj_t *bg = lv_image_create(card);
    lv_obj_set_align(bg, LV_ALIGN_CENTER);
    lv_obj_set_style_border_width(bg, 0, 0);
    lv_obj_set_style_pad_all(bg, 0, 0);
    if (tm_hour >= 6 && tm_hour <= 19)
    {
        lv_image_set_src(bg, &ui_card_weather_day);
        if (strcmp(weather_array[wday], "Sunny") == 0)
        {
            weather_icon = &ui_weather_sunny;
        }
        else
        {
            weather_icon = &ui_weather_cloudy;
        }
    }
    else
    {
        lv_image_set_src(bg, &ui_card_weather_night);
        weather_icon = &ui_weather_clear;
    }
    // top
    {
        lv_obj_t *label = lv_label_create(card);
        lv_label_set_text(label, LOCATION);
        lv_obj_align(label, LV_ALIGN_TOP_LEFT, 50, 18);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size12_bits1_font,
                                   0);

        char content[15];
        sprintf(content, "%d°", temp_array[0]);
        label = lv_label_create(card);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_LEFT, 50, 35);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size32_bits1_font,
                                   0);

        // lv_obj_t *img = lv_image_create(card);
        // lv_image_set_src(img, &weather_location);
        // lv_obj_set_pos(img, 105, 30);

        lv_obj_t *img = lv_image_create(card);
        lv_obj_align(img, LV_ALIGN_TOP_RIGHT, -45, 5);
        lv_image_set_src(img, weather_icon);

        sprintf(content, "%s", weather_array[wday]);
        if (tm_hour < 6 || tm_hour > 19)
        {
            sprintf(content, "%s", "Clear");
        }
        label = lv_label_create(card);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_RIGHT, -43, 35);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size12_bits1_font,
                                   0);

        sprintf(content, "H:%d° L:%d°", temp_range[wday + 7],  temp_range[wday]);
        label = lv_label_create(card);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_RIGHT, -43, 54);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size12_bits1_font,
                                   0);
    }
    // bottom
    {
        char content[200];
        sprintf(content,
                "%02d               %02d               %02d               %02d               %02d               %02d",
                hour[0], hour[1], hour[2], hour[3], hour[4], hour[5]);
        lv_obj_t *label = lv_label_create(card);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_LEFT, 50, 80);
        lv_obj_set_style_text_color(label, lv_color_hex(0xBCBEC4), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size12_bits1_font,
                                   0);

        for (uint8_t i = 0; i < 6; i++)
        {
            uint8_t offset_x = 58;
            lv_obj_t *img = lv_image_create(card);
            lv_image_set_src(img, weather_icon);
            lv_obj_set_pos(img, 45 + offset_x * i, 100);
            if (hour[i] > 19 || hour[i] < 6)
            {
                lv_image_set_src(img, &ui_weather_clear);
            }
            else
            {
                if (strcmp(weather_array[wday], "Sunny") == 0)
                {
                    lv_image_set_src(img, &ui_weather_sunny);
                }
                else
                {
                    lv_image_set_src(img, &ui_weather_cloudy);
                }
            }
        }

        sprintf(content,
                "%02d°             %02d°              %02d°              %02d°              %02d°            %02d°",
                temp_array[0], temp_array[1], temp_array[2], temp_array[3], temp_array[4], temp_array[5]);
        label = lv_label_create(card);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_BOTTOM_LEFT, 50, -10);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size12_bits1_font,
                                   0);
    }
}

void lv_tile_down_init(void)
{
    // date & time big one
    {
        clock_big = lv_image_create(scr_tile_down);
        lv_image_set_src(clock_big, &ui_card_clockcircle);
        lv_obj_set_pos(clock_big, 38, 30);

        uint16_t x = 185;
        uint16_t y = 60;
        uint16_t interval = 26;
        lv_obj_t *hour_decimal = lv_image_create(clock_big);
        lv_image_set_src(hour_decimal, text_num_array[watch_time.tm_hour / 10]);
        lv_obj_set_pos(hour_decimal, x, y);
        lv_image_set_scale(hour_decimal, 0.7 * LV_SCALE_NONE);

        lv_obj_t *hour_single = lv_image_create(clock_big);
        lv_image_set_src(hour_single, text_num_array[watch_time.tm_hour % 10]);
        lv_obj_set_pos(hour_single, x + interval, y);
        lv_image_set_scale(hour_single, 0.7 * LV_SCALE_NONE);

        lv_obj_t *minute_decimal = lv_image_create(clock_big);
        lv_image_set_src(minute_decimal, text_num_array[watch_time.tm_min / 10]);
        lv_obj_set_pos(minute_decimal, x + interval * 2 + 17, y);
        lv_image_set_scale(minute_decimal, 0.7 * LV_SCALE_NONE);

        lv_obj_t *minute_singel = lv_image_create(clock_big);
        lv_image_set_src(minute_singel, text_num_array[watch_time.tm_min % 10]);
        lv_obj_set_pos(minute_singel, x + interval * 3 + 17, y);
        lv_image_set_scale(minute_singel, 0.7 * LV_SCALE_NONE);

        lv_obj_t *colon = lv_image_create(clock_big);
        lv_image_set_src(colon, text_num_array[10]);
        lv_obj_set_pos(colon, x + interval * 2 + 5, y + 5);
        lv_image_set_scale(colon, 0.7 * LV_SCALE_NONE);

        char content[20];
        sprintf(content, "%s%d\n%s", month[watch_time.tm_mon], watch_time.tm_mday,
                day[watch_time.tm_wday]);
        lv_obj_t *date_label = lv_label_create(clock_big);
        lv_label_set_text(date_label, content);
        lv_obj_set_pos(date_label, 0, 42);
        lv_obj_set_style_text_color(date_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(date_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(date_label, &SourceHanSansSC_size24_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
    }

    //card
    {
        lv_coord_t card_width = 400;
        lv_coord_t card_height = 167;
        lv_obj_t *card_view = lv_create_card_view(scr_tile_down, REDUCTION, 300, card_height);

        // Add cards
        {
            lv_obj_t *card = lv_create_card(card_view, 3, card_width, card_height);
            lv_obj_set_style_bg_opa(card, LV_OPA_0, 0);
            lv_obj_set_style_border_width(card, 0, 0);
            lv_obj_set_style_pad_all(card, 0, 0);
            lv_obj_t *img = lv_image_create(card);
            lv_image_set_src(img, &ui_card_appview);
            lv_obj_align(img, LV_ALIGN_TOP_MID, 0, 5);
            lv_obj_add_flag(img, LV_OBJ_FLAG_CLICKABLE);
            lv_obj_add_flag(img, LV_OBJ_FLAG_EVENT_BUBBLE);
            lv_obj_add_event_cb(img, (lv_event_cb_t)enter_app_menu_cb, LV_EVENT_SHORT_CLICKED, NULL);
        }
        {
            lv_obj_t *card = lv_create_card(card_view, 2, card_width, card_height);
            lv_obj_set_style_bg_opa(card, LV_OPA_0, 0);
            lv_obj_set_style_border_width(card, 0, 0);
            lv_obj_set_style_pad_all(card, 0, 0);
            lv_obj_t *img = lv_image_create(card);
            lv_image_set_src(img, &ui_card_bg);
            lv_obj_set_align(img, LV_ALIGN_CENTER);
            lv_obj_add_flag(img, LV_OBJ_FLAG_EVENT_BUBBLE);

            lv_obj_t *img_app = lv_image_create(img);
            lv_image_set_src(img_app, &ui_clock_music_icon);
            lv_obj_set_pos(img_app, 17, 28);
            lv_obj_add_flag(img_app, LV_OBJ_FLAG_CLICKABLE);
            lv_obj_add_flag(img_app, LV_OBJ_FLAG_EVENT_BUBBLE);
            lv_obj_add_event_cb(img_app, (lv_event_cb_t)enter_music_cb, LV_EVENT_SHORT_CLICKED, NULL);
            img_app = lv_image_create(img);
            lv_image_set_src(img_app, &ui_clock_calendar_icon);
            lv_obj_set_pos(img_app, 17 + 109, 28);
            lv_obj_add_flag(img_app, LV_OBJ_FLAG_CLICKABLE);
            lv_obj_add_flag(img_app, LV_OBJ_FLAG_EVENT_BUBBLE);
            lv_obj_add_event_cb(img_app, (lv_event_cb_t)enter_calendar_cb, LV_EVENT_SHORT_CLICKED, NULL);
            img_app = lv_image_create(img);
            lv_image_set_src(img_app, &ui_clock_activity_icon);
            lv_obj_set_pos(img_app, 17 + 109 * 2, 28);
            lv_obj_add_flag(img_app, LV_OBJ_FLAG_CLICKABLE);
            lv_obj_add_flag(img_app, LV_OBJ_FLAG_EVENT_BUBBLE);
            lv_obj_add_event_cb(img_app, (lv_event_cb_t)enter_activity_cb, LV_EVENT_SHORT_CLICKED, NULL);
        }
        {
            lv_obj_t *card = lv_create_card(card_view, 1, card_width, card_height);
            lv_obj_set_style_bg_opa(card, LV_OPA_0, 0);
            lv_obj_set_style_border_width(card, 0, 0);
            lv_obj_set_style_pad_all(card, 0, 0);
            create_weather_card(card);
        }
        {
            lv_obj_t *card = lv_create_card(card_view, 0, card_width, card_height);
            lv_obj_set_style_bg_opa(card, LV_OPA_0, 0);
            lv_obj_set_style_border_width(card, 0, 0);
            lv_obj_set_style_pad_all(card, 0, 0);
            lv_obj_t *img = lv_image_create(card);
            lv_image_set_src(img, &ui_card_calendar);
            lv_obj_set_align(img, LV_ALIGN_CENTER);
        }
        lv_obj_add_event_cb(scr_tile_down, scr_tile_down_event_cb, LV_EVENT_ALL, card_view);
    }

    // date & time small one
    {
        clock_small = lv_image_create(scr_tile_down);
        lv_image_set_src(clock_small, &option_bar_bg);
        lv_obj_set_align(clock_small, LV_ALIGN_TOP_MID);
        lv_obj_remove_flag(clock_small, LV_OBJ_FLAG_CLICKABLE);

        char content[10];
        sprintf(content, "%s %d\n", day[watch_time.tm_wday], watch_time.tm_mday);
        lv_obj_t *date_label = lv_label_create(clock_small);
        lv_label_set_text(date_label, content);
        lv_obj_set_pos(date_label, 15, 30);
        lv_obj_remove_flag(date_label, LV_OBJ_FLAG_CLICKABLE);
        lv_obj_set_style_text_color(date_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(date_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(date_label, &SourceHanSansSC_size24_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
        sprintf(content, "%02d:%02d", watch_time.tm_hour, watch_time.tm_min);
        lv_obj_t *time_label = lv_label_create(clock_small);
        lv_label_set_text(time_label, content);
        lv_obj_set_pos(time_label, 280, 30);
        lv_obj_remove_flag(time_label, LV_OBJ_FLAG_CLICKABLE);
        lv_obj_set_style_text_color(time_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(time_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(time_label, &SourceHanSansSC_size24_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    lv_timer_t *timer = lv_timer_create(timer_cb, 30000, scr_tile_center);
    lv_timer_set_repeat_count(timer, -1);
}