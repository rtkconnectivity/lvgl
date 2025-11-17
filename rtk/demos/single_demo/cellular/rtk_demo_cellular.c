/**
 * @file rtk_demo_cellular.c
 *
 */

#include "lvgl.h"

#if LV_BUILD_DEMOS

static void enter_app_cb(lv_event_t *e)
{
    LV_LOG_INFO("Enter app cellular");
}

void rtk_demo_cellular(void)
{
    lv_obj_t *scr_app_menu_cellular = lv_obj_create(lv_screen_active());
    lv_obj_remove_style_all(scr_app_menu_cellular);
    lv_obj_set_size(scr_app_menu_cellular, LV_PCT(100), LV_PCT(100));

    LV_IMAGE_DECLARE(calculator_icon);
    LV_IMAGE_DECLARE(house_icon);
    LV_IMAGE_DECLARE(package_icon);
    LV_IMAGE_DECLARE(pay_icon);
    LV_IMAGE_DECLARE(weather_icon);

    const lv_image_dsc_t *img_data[] =
    {
        &calculator_icon, &house_icon, &package_icon, &pay_icon, &weather_icon,
        &calculator_icon, &house_icon, &package_icon, &pay_icon, &weather_icon,
        &calculator_icon, &house_icon, &package_icon, &pay_icon, &weather_icon,
        &calculator_icon, &house_icon, &package_icon, &pay_icon, &weather_icon,
        &calculator_icon, &house_icon, &package_icon, &pay_icon, &weather_icon,
        &calculator_icon, &house_icon, &package_icon, &pay_icon, &weather_icon,
        &calculator_icon, &house_icon, &package_icon, &pay_icon, &weather_icon,
        &calculator_icon, &house_icon, &package_icon, &pay_icon, &weather_icon,
        &calculator_icon, &house_icon, &package_icon, &pay_icon, &weather_icon,
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
                                                      calculator_icon.header.w, img_data, array_size, enter_app_cb_list);
}

#endif /* LV_BUILD_DEMOS */
