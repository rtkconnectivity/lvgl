/**
 * @file rtk_demo_cellular.c
 *
 */

#include "lvgl.h"

static void enter_app_cb(lv_event_t *e)
{
    LV_LOG_INFO("Enter app cellular");
}

void rtk_demo_cellular(void)
{
    lv_obj_t *scr_app_menu_cellular = lv_obj_create(lv_screen_active());
    lv_obj_remove_style_all(scr_app_menu_cellular);
    lv_obj_set_size(scr_app_menu_cellular, LV_PCT(100), LV_PCT(100));

    LV_IMAGE_DECLARE(img_benchmark_lvgl_logo_rgb);
    const lv_image_dsc_t *img_data[] =
    {
        &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb,
        &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb,
        &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb,
        &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb,
        &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb,
        &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb,
        &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb,
        &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb,
        &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb, &img_benchmark_lvgl_logo_rgb,
    };
    lv_event_cb_t enter_app_cb_list[] =
    {
        enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb,
        enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb,
        enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb,
        enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb,
        enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb,
        enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb,
        enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb,
        enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb,
        enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb, enter_app_cb,
    };

    int array_size = sizeof(img_data) / sizeof(img_data[0]);
    lv_obj_t *cellular = lv_cellular_create_with_icon(scr_app_menu_cellular,
                                                      img_benchmark_lvgl_logo_rgb.header.w, img_data, array_size, enter_app_cb_list);
}



