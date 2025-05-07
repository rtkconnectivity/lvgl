#include "lvgl.h"
#include "app_main.h"
#include <time.h>
#include <string.h>

#ifndef M_PI
#define M_PI    ((float)3.14159265358979323846)
#endif

#define LOCATION "Suzhou"

lv_obj_t *scr_app_weather;

const uint8_t temp_range[14] =
{
    17, 20, 18, 19, 21, 15, 16,
    31, 32, 30, 27, 25, 24, 23,
};
const static uint8_t max_temp = 32, min_temp = 15;

const char *weather_array[7] =
{
    "Sunny",
    "Sunny",
    "Sunny",
    "Cloudy",
    "Cloudy",
    "Cloudy",
    "Cloudy"
};

uint8_t estimate_temp(int hour)
{
    float min = (float)temp_range[watch_time.tm_wday];
    float max = (float)temp_range[watch_time.tm_wday + 7];

    // Average temperature
    float avg_temp = (max + min) / 2.0f;
    // Temperature amplitude
    float amplitude = (max - min) / 2.0f;
    // Phase adjustment: Maximum temperature at 14:00 (14 hours), period is 24 hours
    float phase = 14.0f; // Time of maximum temperature
    // Sine model: T = avg + A * cos(2PI/24 * (t - phase))
    float temp = avg_temp + amplitude * cos(2 * M_PI / 24.0f * ((float)hour - phase));
    return (uint8_t)temp;
}

static void exit_app_weather(void)
{
    if (enter_menu_flag)
    {
        _ui_screen_change(&scr_app_menu, &scr_app_weather, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                          lv_app_menu_init, true);
    }
    else
    {
        _ui_screen_change(&tileview, &scr_app_weather, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                          NULL, true);
    }
}

void lv_app_weather_init(void)
{
    scr_app_weather = lv_obj_create(NULL);
    lv_obj_remove_style_all(scr_app_weather);
    lv_obj_set_style_bg_color(scr_app_weather, lv_color_hex(0x0), 0);
    lv_obj_set_style_bg_opa(scr_app_weather, LV_OPA_COVER, 0);

    lv_image_dsc_t const *weather_icon = NULL;
    lv_color_t color_start, color_end, bg_color;
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

    lv_obj_t *container = lv_image_create(scr_app_weather);
    lv_obj_remove_flag(container, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_flag(container, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_style_border_width(container, 0, 0);
    lv_obj_set_pos(container, 0, 0);
    lv_obj_set_size(container, LV_PCT(100), LV_PCT(100));
    if (tm_hour >= 6 && tm_hour <= 19)
    {
        lv_image_set_src(container, &weather_day_scr_bg);
        if (strcmp(weather_array[wday], "Sunny") == 0)
        {
            weather_icon = &ui_weather_sunny;
        }
        else
        {
            weather_icon = &ui_weather_cloudy;
        }
        color_start = lv_color_hex(0x386D0CF);
        color_end = lv_color_hex(0xD1D183);
        bg_color = lv_color_hex(0x326EAB);
    }
    else
    {
        lv_image_set_src(container, &weather_night_scr_bg);
        weather_icon = &ui_weather_clear;
        color_start = lv_color_hex(0xF3AD3C);
        color_end = lv_color_hex(0xEC663D);
        bg_color = lv_color_hex(0x171F37);
    }

    // top
    {
        lv_obj_t *label = lv_label_create(container);
        lv_label_set_text(label, LOCATION);
        lv_obj_set_pos(label, 20, 30);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size24_bits1_font,
                                   0);

        char content[15];
        sprintf(content, "%d°", temp_array[0]);
        label = lv_label_create(container);
        lv_label_set_text(label, content);
        lv_obj_set_pos(label, 20, 60);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size48_bits1_font,
                                   0);

        lv_obj_t *img = lv_image_create(container);
        lv_image_set_src(img, &weather_location);
        lv_obj_set_pos(img, 105, 30);

        img = lv_image_create(container);
        lv_obj_set_pos(img, 355, 30);
        lv_image_set_src(img, weather_icon);

        sprintf(content, "%s", weather_array[wday]);
        if (tm_hour < 6 || tm_hour > 19)
        {
            sprintf(content, "%s", "Clear");
        }
        label = lv_label_create(container);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_RIGHT, -20, 60);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size24_bits1_font,
                                   0);

        sprintf(content, "H:%d° L:%d°", temp_range[wday + 7],  temp_range[wday]);
        label = lv_label_create(container);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_RIGHT, -20, 88);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size24_bits1_font,
                                   0);
    }

    // mid
    {
        lv_obj_t *mid_container = lv_image_create(container);
        lv_obj_remove_style_all(mid_container);
        lv_obj_set_pos(mid_container, 20, 140);
        lv_obj_set_size(mid_container, 370, 100);
        lv_obj_set_style_border_side(mid_container, LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_TOP, 0);
        lv_obj_set_style_border_width(mid_container, 1, 0);
        lv_obj_set_style_border_color(mid_container, lv_color_hex(0x5B8DC0), 0);

        char content[100];
        sprintf(content, "%02d        %02d        %02d        %02d        %02d        %02d", hour[0],
                hour[1], hour[2], hour[3], hour[4], hour[5]);
        lv_obj_t *label = lv_label_create(mid_container);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_LEFT, 5, 5);
        lv_obj_set_style_text_color(label, lv_color_hex(0xBCBEC4), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size24_bits1_font,
                                   0);

        for (uint8_t i = 0; i < 6; i++)
        {
            uint8_t offset_x = 66;
            lv_obj_t *img = lv_image_create(mid_container);
            lv_image_set_src(img, weather_icon);
            lv_obj_set_pos(img, 5 + offset_x * i, 33);
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

        sprintf(content, "%02d°      %02d°       %02d°      %02d°      %02d°      %02d°",
                temp_array[0], temp_array[1], temp_array[2], temp_array[3], temp_array[4], temp_array[5]);
        label = lv_label_create(mid_container);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_BOTTOM_LEFT, 5, 0);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size24_bits1_font,
                                   0);
    }

    // bottom
    {
        lv_obj_t *down_container = lv_image_create(container);
        lv_obj_remove_style_all(down_container);
        lv_obj_set_pos(down_container, 20, 250);
        lv_obj_set_size(down_container, 370, 250);

        char content[50];
        sprintf(content, "%s\n\n\n%s\n\n\n%s\n\n\n%s\n\n\n%s", day[(wday + 1) % 7], day[(wday + 2) % 7],
                day[(wday + 3) % 7], day[(wday + 4) % 7], day[(wday + 5) % 7]);
        lv_obj_t *label = lv_label_create(down_container);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_LEFT, 0, 15);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size12_bits1_font,
                                   0);

        for (uint8_t i = 0; i < 5; i++)
        {
            uint8_t offset_y = 44;
            lv_obj_t *img = lv_image_create(down_container);
            lv_obj_set_pos(img, 66, 10 + offset_y * i);
            if (strcmp(weather_array[(wday + 1 + i) % 7], "Sunny") == 0)
            {
                lv_image_set_src(img, &ui_weather_sunny);
            }
            else
            {
                lv_image_set_src(img, &ui_weather_cloudy);
            }
        }

        sprintf(content, "%02d°\n\n\n%02d°\n\n\n%02d°\n\n\n%02d°\n\n\n%02d°",
                temp_range[(wday + 1) % 7], temp_range[(wday + 2) % 7], temp_range[(wday + 3) % 7],
                temp_range[(wday + 4) % 7], temp_range[(wday + 5) % 7]);
        label = lv_label_create(down_container);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_LEFT, 150, 15);
        lv_obj_set_style_text_color(label, lv_color_hex(0xBCBEC4), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size12_bits1_font,
                                   0);

        sprintf(content, "%02d°\n\n\n%02d°\n\n\n%02d°\n\n\n%02d°\n\n\n%02d°",
                temp_range[(wday + 1) % 7 + 7], temp_range[(wday + 2) % 7 + 7], temp_range[(wday + 3) % 7 + 7],
                temp_range[(wday + 4) % 7 + 7], temp_range[(wday + 5) % 7 + 7]);
        label = lv_label_create(down_container);
        lv_label_set_text(label, content);
        lv_obj_align(label, LV_ALIGN_TOP_RIGHT, -10, 15);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF), 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size12_bits1_font,
                                   0);

        for (uint8_t i = 0; i < 5; i++)
        {
            uint8_t offset_y = 45;

            lv_obj_t *bar = lv_bar_create(down_container);
            lv_obj_set_pos(bar, 180, 20 + offset_y * i);
            lv_obj_set_size(bar, 150, 5);
            lv_bar_set_range(bar, min_temp, max_temp);
            lv_obj_set_style_bg_opa(bar, LV_OPA_COVER, 0);
            lv_obj_set_style_bg_color(bar, bg_color, 0);
            lv_obj_set_style_bg_color(bar, color_start, LV_PART_INDICATOR);
            lv_obj_set_style_bg_grad_color(bar, color_end, LV_PART_INDICATOR);
            lv_obj_set_style_bg_grad_dir(bar, LV_GRAD_DIR_HOR, LV_PART_INDICATOR);
            lv_bar_set_mode(bar, LV_BAR_MODE_RANGE);
            lv_bar_set_value(bar, temp_range[(wday + 1 + i) % 7 + 7],
                             LV_ANIM_OFF); // must set_value first, then set_start_value
            lv_bar_set_start_value(bar, temp_range[(wday + 1 + i) % 7], LV_ANIM_OFF);
        }
    }

    return_create(container, exit_app_weather);
}