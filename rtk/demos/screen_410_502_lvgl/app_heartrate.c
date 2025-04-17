#include "lvgl.h"
#include "app_main.h"

#if LVGL_USE_CJSON
#include "cJSON.h"
#endif

lv_obj_t *scr_app_heartrate;
static lv_obj_t *img_container;
static lv_timer_t *timer;

void exit_app_heartrate(void)
{
    if (enter_menu_flag)
    {
        _ui_screen_change(&scr_app_menu, &scr_app_heartrate, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                          lv_app_menu_init, true);
    }
    else
    {
        _ui_screen_change(&tileview, &scr_app_heartrate, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0,
                          NULL, true);
    }
    lv_timer_delete(timer);
}

static void update_data(lv_timer_t *t)
{
    lv_obj_t *chart = lv_timer_get_user_data(t);
    lv_chart_series_t *ser = lv_chart_get_series_next(chart, NULL);

    uint32_t num = lv_rand(60, 160);
    lv_chart_set_next_value(chart, ser, num);

    uint16_t p = lv_chart_get_point_count(chart);
    uint16_t s = lv_chart_get_x_start_point(chart, ser);
    int32_t *a = lv_chart_get_y_array(chart, ser);

    a[(s + 1) % p] = LV_CHART_POINT_NONE;
    a[(s + 2) % p] = LV_CHART_POINT_NONE;
    a[(s + 3) % p] = LV_CHART_POINT_NONE;

    lv_chart_refresh(chart);

    lv_obj_t *parent = img_container;
    lv_obj_t *img = lv_obj_get_child(parent, 0);
    if (num / 100)
    {
        lv_obj_remove_flag(img, LV_OBJ_FLAG_HIDDEN);
        lv_image_set_src(img, text_num_array[1]);
    }
    else
    {
        lv_obj_add_flag(img, LV_OBJ_FLAG_HIDDEN);
    }
    img = lv_obj_get_child(parent, 1);
    lv_image_set_src(img, text_num_array[(num % 100) / 10]);
    img = lv_obj_get_child(parent, 2);
    lv_image_set_src(img, text_num_array[num % 10]);
}

void lv_app_heartrate_init(void)
{
    scr_app_heartrate = lv_obj_create(NULL);

    lv_obj_t *container = lv_obj_create(scr_app_heartrate);
    lv_obj_remove_style_all(container);
    lv_obj_set_style_bg_color(container, lv_color_hex(0x0), 0);
    lv_obj_set_style_bg_opa(container, LV_OPA_COVER, 0);
    lv_obj_set_size(container, LV_PCT(100), LV_PCT(100));
    lv_obj_set_pos(container, 0, 0);
    lv_obj_set_style_border_width(container, 0, 0);

    lv_obj_t *chart = lv_chart_create(container);
    // lv_obj_set_style_bg_color(chart, lv_color_hex(0x0), 0);
    // lv_obj_set_style_bg_opa(chart, LV_OPA_COVER, 0);
    lv_chart_set_update_mode(chart, LV_CHART_UPDATE_MODE_CIRCULAR);
    lv_obj_set_style_size(chart, 0, 0, LV_PART_INDICATOR);
    lv_obj_set_size(chart, 330, 210);
    lv_obj_set_style_pad_all(chart, 0, 0);
    lv_obj_set_pos(chart, 30, 80);

    lv_chart_set_div_line_count(chart, 4, 5);
    lv_chart_set_range(chart, LV_CHART_AXIS_PRIMARY_Y, 40, 160);

    lv_chart_set_point_count(chart, 100);
    lv_chart_series_t *ser = lv_chart_add_series(chart, lv_palette_main(LV_PALETTE_RED),
                                                 LV_CHART_AXIS_PRIMARY_Y);
    /*Prefill with data*/
    uint32_t i;
    for (i = 0; i < 100; i++)
    {
        lv_chart_set_next_value(chart, ser, lv_rand(60, 160));
    }

    {
        lv_obj_t *x_label = lv_label_create(container);
        lv_label_set_text(x_label, "12AM");
        lv_obj_set_pos(x_label, 30, 290);
        lv_obj_set_style_text_color(x_label, lv_color_hex(0x7B797B), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(x_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(x_label, &SourceHanSansSC_size12_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
        x_label = lv_label_create(container);
        lv_label_set_text(x_label, "6AM");
        lv_obj_set_pos(x_label, 30 + 82, 290);
        lv_obj_set_style_text_color(x_label, lv_color_hex(0x7B797B), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(x_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(x_label, &SourceHanSansSC_size12_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
        x_label = lv_label_create(container);
        lv_label_set_text(x_label, "12PM");
        lv_obj_set_pos(x_label, 30 + 82 * 2, 290);
        lv_obj_set_style_text_color(x_label, lv_color_hex(0x7B797B), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(x_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(x_label, &SourceHanSansSC_size12_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
        x_label = lv_label_create(container);
        lv_label_set_text(x_label, "6PM");
        lv_obj_set_pos(x_label, 30 + 82 * 3, 290);
        lv_obj_set_style_text_color(x_label, lv_color_hex(0x7B797B), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(x_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(x_label, &SourceHanSansSC_size12_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
    }

    {
        lv_obj_t *y_label = lv_label_create(container);
        lv_label_set_text(y_label, "160");
        lv_obj_set_pos(y_label, 360, 80);
        lv_obj_set_style_text_color(y_label, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(y_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(y_label, &SourceHanSansSC_size12_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
        y_label = lv_label_create(container);
        lv_label_set_text(y_label, "120");
        lv_obj_set_pos(y_label, 360, 80 + 70);
        lv_obj_set_style_text_color(y_label, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(y_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(y_label, &SourceHanSansSC_size12_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
        y_label = lv_label_create(container);
        lv_label_set_text(y_label, "80");
        lv_obj_set_pos(y_label, 360, 80 + 70 * 2);
        lv_obj_set_style_text_color(y_label, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(y_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(y_label, &SourceHanSansSC_size12_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
    }

    {
        lv_obj_t *label = lv_label_create(container);
        lv_label_set_text(label, "Current heartrate");
        lv_obj_set_pos(label, 50, 340);
        lv_obj_set_style_text_color(label, lv_color_hex(0x7B797B), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size24_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);

        label = lv_label_create(container);
        lv_label_set_text(label, "times/min");
        lv_obj_set_pos(label, 165, 410);
        lv_obj_set_style_text_color(label, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(label, &SourceHanSansSC_size32_bits1_font,
                                   LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    {
        img_container = lv_obj_create(container);
        lv_obj_set_pos(img_container, 40, 368);
        lv_obj_set_size(img_container, 200, 200);
        lv_obj_remove_flag(img_container, LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_set_style_border_width(img_container, 0, 0);
        lv_obj_set_style_bg_opa(img_container, LV_OPA_TRANSP, 0);

        lv_obj_t *img = lv_image_create(img_container);
        lv_image_set_src(img, text_num_array[1]);
        lv_obj_set_pos(img, 0, 0);
        img = lv_image_create(img_container);
        lv_image_set_src(img, text_num_array[0]);
        lv_obj_set_pos(img, 33, 0);
        img = lv_image_create(img_container);
        lv_image_set_src(img, text_num_array[0]);
        lv_obj_set_pos(img, 66, 0);
    }

    timer = lv_timer_create(update_data, 500, chart);

    return_create(container, exit_app_heartrate);
}