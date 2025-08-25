#include "lvgl.h"
#include "lv_image_dsc.h"
#include "lv_color.h"
#include "root_image_lvgl/ui_resource.h"

const lv_image_dsc_t clear_bg =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 305,
    .header.h = 80,
    .header.stride = 1220,
    .data_size = 97600,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CLEAR_BG_BIN + 8
};

const lv_image_dsc_t menu_bar_bg =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 418,
    .header.h = 128,
    .header.stride = 1672,
    .data_size = 214016,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)MENU_BAR_BG_BIN + 8
};

const lv_image_dsc_t msg_tab_bg =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 350,
    .header.h = 220,
    .header.stride = 1400,
    .data_size = 308000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)MSG_TAB_BG_BIN + 8
};

const lv_image_dsc_t option_bar_bg =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 350,
    .header.h = 80,
    .header.stride = 1400,
    .data_size = 112000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)OPTION_BAR_BG_BIN + 8
};

const lv_image_dsc_t option_bar_white_bg =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 350,
    .header.h = 80,
    .header.stride = 1400,
    .data_size = 112000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)OPTION_BAR_WHITE_BG_BIN + 8
};

const lv_image_dsc_t option_tab_bg =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 170,
    .header.h = 220,
    .header.stride = 680,
    .data_size = 149600,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)OPTION_TAB_BG_BIN + 8
};

const lv_image_dsc_t ui_arrow_down =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 54,
    .header.h = 19,
    .header.stride = 216,
    .data_size = 4104,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_ARROW_DOWN_BIN + 8
};

const lv_image_dsc_t ui_arrow_up =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 54,
    .header.h = 19,
    .header.stride = 216,
    .data_size = 4104,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_ARROW_UP_BIN + 8
};

const lv_image_dsc_t ui_bg_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 100,
    .header.h = 100,
    .header.stride = 200,
    .data_size = 20000,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = 0,
    .data = (uint8_t *)UI_BG_ICON_BIN + 8
};

const lv_image_dsc_t ui_card_activity =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 352,
    .header.h = 157,
    .header.stride = 1408,
    .data_size = 221056,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CARD_ACTIVITY_BIN + 8
};

const lv_image_dsc_t ui_card_appview =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 296,
    .header.h = 76,
    .header.stride = 592,
    .data_size = 44992,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = 0,
    .data = (uint8_t *)UI_CARD_APPVIEW_BIN + 8
};

const lv_image_dsc_t ui_card_bg =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 352,
    .header.h = 157,
    .header.stride = 704,
    .data_size = 110528,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = 0,
    .data = (uint8_t *)UI_CARD_BG_BIN + 8
};

const lv_image_dsc_t ui_card_calendar =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 352,
    .header.h = 157,
    .header.stride = 704,
    .data_size = 110528,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = 0,
    .data = (uint8_t *)UI_CARD_CALENDAR_BIN + 8
};

const lv_image_dsc_t ui_card_clockcircle =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 334,
    .header.h = 177,
    .header.stride = 668,
    .data_size = 118236,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = 0,
    .data = (uint8_t *)UI_CARD_CLOCKCIRCLE_BIN + 8
};

const lv_image_dsc_t ui_card_weather =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 352,
    .header.h = 157,
    .header.stride = 1408,
    .data_size = 221056,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CARD_WEATHER_BIN + 8
};

const lv_image_dsc_t ui_clock_activity_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 100,
    .header.h = 100,
    .header.stride = 400,
    .data_size = 40000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_ACTIVITY_ICON_BIN + 8
};

const lv_image_dsc_t ui_clock_box2d_ring_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 100,
    .header.h = 100,
    .header.stride = 400,
    .data_size = 40000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_BOX2D_RING_ICON_BIN + 8
};

const lv_image_dsc_t ui_clock_calendar_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 100,
    .header.h = 100,
    .header.stride = 400,
    .data_size = 40000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_CALENDAR_ICON_BIN + 8
};

const lv_image_dsc_t ui_clock_card_weather =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 328,
    .header.h = 147,
    .header.stride = 1312,
    .data_size = 192864,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_CARD_WEATHER_BIN + 8
};

const lv_image_dsc_t ui_clock_compass_dial_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 100,
    .header.h = 100,
    .header.stride = 400,
    .data_size = 40000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_COMPASS_DIAL_ICON_BIN + 8
};

const lv_image_dsc_t ui_clock_compass_pointer_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 14,
    .header.h = 10,
    .header.stride = 56,
    .data_size = 560,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_COMPASS_POINTER_ICON_BIN + 8
};

const lv_image_dsc_t ui_clock_fruit_ninja_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 100,
    .header.h = 100,
    .header.stride = 400,
    .data_size = 40000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_FRUIT_NINJA_ICON_BIN + 8
};

const lv_image_dsc_t ui_clock_heartrate_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 100,
    .header.h = 100,
    .header.stride = 400,
    .data_size = 40000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_HEARTRATE_ICON_BIN + 8
};

const lv_image_dsc_t ui_clock_music_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 100,
    .header.h = 100,
    .header.stride = 400,
    .data_size = 40000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_MUSIC_ICON_BIN + 8
};

const lv_image_dsc_t ui_iwatch_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 28,
    .header.h = 35,
    .header.stride = 112,
    .data_size = 3920,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_IWATCH_ICON_BIN + 8
};

const lv_image_dsc_t ui_line_still =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 48,
    .header.h = 6,
    .header.stride = 192,
    .data_size = 1152,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_LINE_STILL_BIN + 8
};

const lv_image_dsc_t ui_menu_card =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 170,
    .header.h = 56,
    .header.stride = 680,
    .data_size = 38080,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_MENU_CARD_BIN + 8
};

const lv_image_dsc_t ui_menu_cellular =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 235,
    .header.h = 56,
    .header.stride = 940,
    .data_size = 52640,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_MENU_CELLULAR_BIN + 8
};

const lv_image_dsc_t ui_message_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 56,
    .header.h = 58,
    .header.stride = 224,
    .data_size = 12992,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_MESSAGE_ICON_BIN + 8
};

const lv_image_dsc_t ui_person_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 20,
    .header.h = 20,
    .header.stride = 80,
    .data_size = 1600,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_PERSON_ICON_BIN + 8
};

const lv_image_dsc_t w3w =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 410,
    .header.h = 502,
    .header.stride = 1640,
    .data_size = 823280,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)W3W_BIN + 8
};

const lv_image_dsc_t watch_hour_hand =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 12,
    .header.h = 77,
    .header.stride = 48,
    .data_size = 3696,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)WATCH_HOUR_HAND_BIN + 8
};

const lv_image_dsc_t watch_mask =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 12,
    .header.h = 12,
    .header.stride = 48,
    .data_size = 576,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)WATCH_MASK_BIN + 8
};

const lv_image_dsc_t watch_minute_hand =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 12,
    .header.h = 153,
    .header.stride = 48,
    .data_size = 7344,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)WATCH_MINUTE_HAND_BIN + 8
};

const lv_image_dsc_t watch_second_hand =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 1,
    .header.h = 140,
    .header.stride = 4,
    .data_size = 560,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)WATCH_SECOND_HAND_BIN + 8
};

const lv_image_dsc_t desc_face =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 0,
    .header.h = 740,
    .header.stride = 0,
    .data_size = 0,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = LV_IMAGE_FLAGS_USER1,
    .data = (uint8_t *)DESC_FACE_BIN + 8
};

const lv_image_dsc_t capsule_mute_off =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 22,
    .header.h = 28,
    .header.stride = 88,
    .data_size = 2464,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CAPSULE_MUTE_OFF_BIN + 8
};

const lv_image_dsc_t capsule_mute_on =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 22,
    .header.h = 28,
    .header.stride = 88,
    .data_size = 2464,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CAPSULE_MUTE_ON_BIN + 8
};

const lv_image_dsc_t capsule_nobother_off =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 32,
    .header.h = 32,
    .header.stride = 128,
    .data_size = 4096,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CAPSULE_NOBOTHER_OFF_BIN + 8
};

const lv_image_dsc_t capsule_nobother_on =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 32,
    .header.h = 32,
    .header.stride = 128,
    .data_size = 4096,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CAPSULE_NOBOTHER_ON_BIN + 8
};

const lv_image_dsc_t capsule_phone_off =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 32,
    .header.h = 32,
    .header.stride = 128,
    .data_size = 4096,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CAPSULE_PHONE_OFF_BIN + 8
};

const lv_image_dsc_t capsule_phone_on =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 32,
    .header.h = 32,
    .header.stride = 128,
    .data_size = 4096,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CAPSULE_PHONE_ON_BIN + 8
};

const lv_image_dsc_t control_capsule =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 138,
    .header.h = 47,
    .header.stride = 552,
    .data_size = 25944,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_CAPSULE_BIN + 8
};

const lv_image_dsc_t control_lte_off =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_LTE_OFF_BIN + 8
};

const lv_image_dsc_t control_lte_on =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_LTE_ON_BIN + 8
};

const lv_image_dsc_t control_mute_off =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_MUTE_OFF_BIN + 8
};

const lv_image_dsc_t control_mute_on =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_MUTE_ON_BIN + 8
};

const lv_image_dsc_t control_nobother_off =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_NOBOTHER_OFF_BIN + 8
};

const lv_image_dsc_t control_nobother_on =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_NOBOTHER_ON_BIN + 8
};

const lv_image_dsc_t control_pad =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_PAD_BIN + 8
};

const lv_image_dsc_t control_phone_off =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_PHONE_OFF_BIN + 8
};

const lv_image_dsc_t control_phone_on =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_PHONE_ON_BIN + 8
};

const lv_image_dsc_t control_wifi_off =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_WIFI_OFF_BIN + 8
};

const lv_image_dsc_t control_wifi_on =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 182,
    .header.h = 121,
    .header.stride = 728,
    .data_size = 88088,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)CONTROL_WIFI_ON_BIN + 8
};

const lv_image_dsc_t mute_off_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 22,
    .header.h = 28,
    .header.stride = 88,
    .data_size = 2464,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)MUTE_OFF_ICON_BIN + 8
};

const lv_image_dsc_t mute_on_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 22,
    .header.h = 28,
    .header.stride = 88,
    .data_size = 2464,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)MUTE_ON_ICON_BIN + 8
};

const lv_image_dsc_t app_music_btn_list_pause =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 58,
    .header.h = 60,
    .header.stride = 232,
    .data_size = 13920,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_BTN_LIST_PAUSE_BIN + 8
};

const lv_image_dsc_t app_music_btn_list_play =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 58,
    .header.h = 60,
    .header.stride = 232,
    .data_size = 13920,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_BTN_LIST_PLAY_BIN + 8
};

const lv_image_dsc_t app_music_btn_loop =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 24,
    .header.h = 24,
    .header.stride = 96,
    .data_size = 2304,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_BTN_LOOP_BIN + 8
};

const lv_image_dsc_t app_music_btn_next =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 62,
    .header.h = 62,
    .header.stride = 248,
    .data_size = 15376,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_BTN_NEXT_BIN + 8
};

const lv_image_dsc_t app_music_btn_pause =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 79,
    .header.h = 77,
    .header.stride = 316,
    .data_size = 24332,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_BTN_PAUSE_BIN + 8
};

const lv_image_dsc_t app_music_btn_play =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 79,
    .header.h = 77,
    .header.stride = 316,
    .data_size = 24332,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_BTN_PLAY_BIN + 8
};

const lv_image_dsc_t app_music_btn_prev =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 62,
    .header.h = 62,
    .header.stride = 248,
    .data_size = 15376,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_BTN_PREV_BIN + 8
};

const lv_image_dsc_t app_music_btn_rnd =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 24,
    .header.h = 24,
    .header.stride = 96,
    .data_size = 2304,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_BTN_RND_BIN + 8
};

const lv_image_dsc_t app_music_corner_left =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 18,
    .header.h = 18,
    .header.stride = 72,
    .data_size = 1296,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_CORNER_LEFT_BIN + 8
};

const lv_image_dsc_t app_music_corner_right =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 18,
    .header.h = 18,
    .header.stride = 72,
    .data_size = 1296,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_CORNER_RIGHT_BIN + 8
};

const lv_image_dsc_t app_music_cover_1 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 176,
    .header.h = 175,
    .header.stride = 704,
    .data_size = 123200,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_COVER_1_BIN + 8
};

const lv_image_dsc_t app_music_cover_2 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 176,
    .header.h = 175,
    .header.stride = 704,
    .data_size = 123200,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_COVER_2_BIN + 8
};

const lv_image_dsc_t app_music_cover_3 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 176,
    .header.h = 175,
    .header.stride = 704,
    .data_size = 123200,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_COVER_3_BIN + 8
};

const lv_image_dsc_t app_music_icn_chart =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 24,
    .header.h = 24,
    .header.stride = 96,
    .data_size = 2304,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_ICN_CHART_BIN + 8
};

const lv_image_dsc_t app_music_icn_chat =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 24,
    .header.h = 24,
    .header.stride = 96,
    .data_size = 2304,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_ICN_CHAT_BIN + 8
};

const lv_image_dsc_t app_music_icn_download =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 24,
    .header.h = 24,
    .header.stride = 96,
    .data_size = 2304,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_ICN_DOWNLOAD_BIN + 8
};

const lv_image_dsc_t app_music_icn_heart =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 24,
    .header.h = 24,
    .header.stride = 96,
    .data_size = 2304,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_ICN_HEART_BIN + 8
};

const lv_image_dsc_t app_music_icn_slider =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 36,
    .header.h = 38,
    .header.stride = 144,
    .data_size = 5472,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_ICN_SLIDER_BIN + 8
};

const lv_image_dsc_t app_music_list_border =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 272,
    .header.h = 4,
    .header.stride = 1088,
    .data_size = 4352,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_LIST_BORDER_BIN + 8
};

const lv_image_dsc_t app_music_wave_bottom =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 272,
    .header.h = 42,
    .header.stride = 1088,
    .data_size = 45696,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_WAVE_BOTTOM_BIN + 8
};

const lv_image_dsc_t app_music_wave_top =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 272,
    .header.h = 42,
    .header.stride = 1088,
    .data_size = 45696,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)APP_MUSIC_WAVE_TOP_BIN + 8
};

const lv_image_dsc_t path02 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 2,
    .header.h = 100,
    .header.stride = 8,
    .data_size = 800,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH02_BIN + 8
};

const lv_image_dsc_t path03 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 3,
    .header.h = 100,
    .header.stride = 12,
    .data_size = 1200,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH03_BIN + 8
};

const lv_image_dsc_t path04 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 4,
    .header.h = 100,
    .header.stride = 16,
    .data_size = 1600,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH04_BIN + 8
};

const lv_image_dsc_t path05 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 5,
    .header.h = 100,
    .header.stride = 20,
    .data_size = 2000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH05_BIN + 8
};

const lv_image_dsc_t path06 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 6,
    .header.h = 100,
    .header.stride = 24,
    .data_size = 2400,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH06_BIN + 8
};

const lv_image_dsc_t path07 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 7,
    .header.h = 100,
    .header.stride = 28,
    .data_size = 2800,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH07_BIN + 8
};

const lv_image_dsc_t path08 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 8,
    .header.h = 100,
    .header.stride = 32,
    .data_size = 3200,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH08_BIN + 8
};

const lv_image_dsc_t path09 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 9,
    .header.h = 100,
    .header.stride = 36,
    .data_size = 3600,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH09_BIN + 8
};

const lv_image_dsc_t path10 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 10,
    .header.h = 100,
    .header.stride = 40,
    .data_size = 4000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH10_BIN + 8
};

const lv_image_dsc_t path11 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 11,
    .header.h = 100,
    .header.stride = 44,
    .data_size = 4400,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH11_BIN + 8
};

const lv_image_dsc_t path12 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 12,
    .header.h = 100,
    .header.stride = 48,
    .data_size = 4800,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH12_BIN + 8
};

const lv_image_dsc_t path13 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 13,
    .header.h = 100,
    .header.stride = 52,
    .data_size = 5200,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH13_BIN + 8
};

const lv_image_dsc_t path14 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 14,
    .header.h = 100,
    .header.stride = 56,
    .data_size = 5600,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH14_BIN + 8
};

const lv_image_dsc_t path15 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 15,
    .header.h = 100,
    .header.stride = 60,
    .data_size = 6000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH15_BIN + 8
};

const lv_image_dsc_t path16 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 16,
    .header.h = 100,
    .header.stride = 64,
    .data_size = 6400,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH16_BIN + 8
};

const lv_image_dsc_t path17 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 17,
    .header.h = 100,
    .header.stride = 68,
    .data_size = 6800,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH17_BIN + 8
};

const lv_image_dsc_t path18 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 18,
    .header.h = 100,
    .header.stride = 72,
    .data_size = 7200,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)PATH18_BIN + 8
};

const lv_image_dsc_t ui_text_0 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 33,
    .header.h = 55,
    .header.stride = 132,
    .data_size = 7260,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_0_BIN + 8
};

const lv_image_dsc_t ui_text_1 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 29,
    .header.h = 53,
    .header.stride = 116,
    .data_size = 6148,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_1_BIN + 8
};

const lv_image_dsc_t ui_text_2 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 34,
    .header.h = 54,
    .header.stride = 136,
    .data_size = 7344,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_2_BIN + 8
};

const lv_image_dsc_t ui_text_3 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 34,
    .header.h = 55,
    .header.stride = 136,
    .data_size = 7480,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_3_BIN + 8
};

const lv_image_dsc_t ui_text_4 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 37,
    .header.h = 53,
    .header.stride = 148,
    .data_size = 7844,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_4_BIN + 8
};

const lv_image_dsc_t ui_text_5 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 35,
    .header.h = 54,
    .header.stride = 140,
    .data_size = 7560,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_5_BIN + 8
};

const lv_image_dsc_t ui_text_6 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 33,
    .header.h = 55,
    .header.stride = 132,
    .data_size = 7260,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_6_BIN + 8
};

const lv_image_dsc_t ui_text_7 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 34,
    .header.h = 53,
    .header.stride = 136,
    .data_size = 7208,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_7_BIN + 8
};

const lv_image_dsc_t ui_text_8 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 34,
    .header.h = 55,
    .header.stride = 136,
    .data_size = 7480,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_8_BIN + 8
};

const lv_image_dsc_t ui_text_9 =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 33,
    .header.h = 55,
    .header.stride = 132,
    .data_size = 7260,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_9_BIN + 8
};

const lv_image_dsc_t ui_text_colon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 10,
    .header.h = 40,
    .header.stride = 40,
    .data_size = 1600,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_COLON_BIN + 8
};

const lv_image_dsc_t ui_text_percent =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 61,
    .header.h = 55,
    .header.stride = 244,
    .data_size = 13420,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_TEXT_PERCENT_BIN + 8
};

const lv_image_dsc_t ui_card_weather_day =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 352,
    .header.h = 157,
    .header.stride = 704,
    .data_size = 110528,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = 0,
    .data = (uint8_t *)UI_CARD_WEATHER_DAY_BIN + 8
};

const lv_image_dsc_t ui_card_weather_night =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 352,
    .header.h = 157,
    .header.stride = 704,
    .data_size = 110528,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = 0,
    .data = (uint8_t *)UI_CARD_WEATHER_NIGHT_BIN + 8
};

const lv_image_dsc_t ui_clock_weather_icon =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 100,
    .header.h = 100,
    .header.stride = 400,
    .data_size = 40000,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_CLOCK_WEATHER_ICON_BIN + 8
};

const lv_image_dsc_t ui_weather_clear =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 30,
    .header.h = 30,
    .header.stride = 120,
    .data_size = 3600,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_WEATHER_CLEAR_BIN + 8
};

const lv_image_dsc_t ui_weather_cloudy =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 39,
    .header.h = 28,
    .header.stride = 156,
    .data_size = 4368,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_WEATHER_CLOUDY_BIN + 8
};

const lv_image_dsc_t ui_weather_rain_l =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 31,
    .header.h = 31,
    .header.stride = 124,
    .data_size = 3844,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_WEATHER_RAIN_L_BIN + 8
};

const lv_image_dsc_t ui_weather_rain_m =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 31,
    .header.h = 31,
    .header.stride = 124,
    .data_size = 3844,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_WEATHER_RAIN_M_BIN + 8
};

const lv_image_dsc_t ui_weather_rain_s =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 31,
    .header.h = 31,
    .header.stride = 124,
    .data_size = 3844,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_WEATHER_RAIN_S_BIN + 8
};

const lv_image_dsc_t ui_weather_sunny =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 30,
    .header.h = 30,
    .header.stride = 120,
    .data_size = 3600,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)UI_WEATHER_SUNNY_BIN + 8
};

const lv_image_dsc_t weather_day_scr_bg =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 410,
    .header.h = 502,
    .header.stride = 820,
    .data_size = 411640,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = 0,
    .data = (uint8_t *)WEATHER_DAY_SCR_BG_BIN + 8
};

const lv_image_dsc_t weather_location =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 22,
    .header.h = 22,
    .header.stride = 88,
    .data_size = 1936,
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.flags = 0,
    .data = (uint8_t *)WEATHER_LOCATION_BIN + 8
};

const lv_image_dsc_t weather_night_scr_bg =
{
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.w = 410,
    .header.h = 502,
    .header.stride = 820,
    .data_size = 411640,
    .header.cf = LV_COLOR_FORMAT_RGB565,
    .header.flags = 0,
    .data = (uint8_t *)WEATHER_NIGHT_SCR_BG_BIN + 8
};

