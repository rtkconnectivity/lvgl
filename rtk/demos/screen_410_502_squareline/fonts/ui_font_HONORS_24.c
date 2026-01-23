/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 24 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_24.c --no-prefilter --force-fast-kern-format
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

#if !LV_VERSION_CHECK(9, 3, 0)
#error "At least LVGL v9.3 is required to use the stride attribute of the fonts"
#endif

#ifndef UI_FONT_HONORS_24
#define UI_FONT_HONORS_24 1
#endif

#if UI_FONT_HONORS_24


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_24_glyph_bitmap.bin
 *Define UI_FONT_HONORS_24_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_24_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_24_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_24_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_24_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 92, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 116, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 132, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 50, .adv_w = 242, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 215, .box_w = 13, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 210, .adv_w = 340, .box_w = 21, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 268, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 66, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 415, .adv_w = 117, .box_w = 7, .box_h = 23, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 461, .adv_w = 117, .box_w = 6, .box_h = 23, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 507, .adv_w = 181, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 537, .adv_w = 227, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 589, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 597, .adv_w = 190, .box_w = 10, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 606, .adv_w = 107, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 158, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 224, .box_w = 6, .box_h = 18, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 974, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1136, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1190, .adv_w = 116, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1216, .adv_w = 114, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1250, .adv_w = 249, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1306, .adv_w = 226, .box_w = 14, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1334, .adv_w = 249, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1390, .adv_w = 200, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1444, .adv_w = 308, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1534, .adv_w = 265, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1624, .adv_w = 250, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1696, .adv_w = 267, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1786, .adv_w = 282, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1858, .adv_w = 235, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1930, .adv_w = 216, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2002, .adv_w = 275, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2092, .adv_w = 270, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2164, .adv_w = 89, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2182, .adv_w = 191, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2236, .adv_w = 245, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2308, .adv_w = 209, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2362, .adv_w = 333, .box_w = 19, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2452, .adv_w = 273, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2524, .adv_w = 304, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2614, .adv_w = 242, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2686, .adv_w = 304, .box_w = 19, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2786, .adv_w = 256, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2858, .adv_w = 218, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2930, .adv_w = 225, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3002, .adv_w = 275, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3074, .adv_w = 252, .box_w = 16, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3146, .adv_w = 375, .box_w = 24, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3254, .adv_w = 243, .box_w = 16, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3326, .adv_w = 238, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3398, .adv_w = 221, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3470, .adv_w = 119, .box_w = 6, .box_h = 22, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3514, .adv_w = 158, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3568, .adv_w = 119, .box_w = 5, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3612, .adv_w = 227, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 3652, .adv_w = 205, .box_w = 13, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3660, .adv_w = 128, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 15},
    {.bitmap_index = 3668, .adv_w = 209, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3707, .adv_w = 232, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3779, .adv_w = 197, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3831, .adv_w = 232, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3903, .adv_w = 213, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3955, .adv_w = 119, .box_w = 8, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3993, .adv_w = 229, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4065, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4119, .adv_w = 98, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4137, .adv_w = 93, .box_w = 7, .box_h = 23, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 4183, .adv_w = 206, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4237, .adv_w = 86, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4255, .adv_w = 351, .box_w = 20, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4320, .adv_w = 221, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4359, .adv_w = 223, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4411, .adv_w = 233, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 4483, .adv_w = 233, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4555, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4583, .adv_w = 179, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4622, .adv_w = 142, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4673, .adv_w = 217, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4712, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4751, .adv_w = 296, .box_w = 19, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4816, .adv_w = 213, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4868, .adv_w = 195, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4940, .adv_w = 186, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4979, .adv_w = 119, .box_w = 8, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5023, .adv_w = 88, .box_w = 3, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5043, .adv_w = 119, .box_w = 8, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5087, .adv_w = 227, .box_w = 14, .box_h = 4, .ofs_x = 0, .ofs_y = 6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 0, 0, 0, 3, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 5, 6, 7, 0, 8,
    0, 0, 0, 0, 9, 10, 0, 0,
    7, 11, 12, 13, 0, 14, 15, 16,
    17, 18, 19, 20, 21, 0, 0, 0,
    0, 0, 22, 23, 24, 0, 25, 26,
    0, 27, 28, 29, 30, 29, 27, 27,
    23, 23, 31, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 0, 2, 0, 0, 3, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 5, 0, 0, 0,
    5, 0, 0, 6, 0, 0, 0, 0,
    5, 0, 5, 0, 7, 8, 9, 10,
    11, 12, 13, 14, 0, 0, 15, 0,
    0, 0, 16, 17, 18, 18, 18, 19,
    18, 20, 21, 22, 23, 24, 25, 25,
    18, 26, 18, 25, 27, 28, 29, 30,
    31, 32, 33, 34, 0, 0, 35, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -15, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -19, 0, 0,
    0, 0, -15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, 0, 0, -4, -1, 0,
    -26, -1, -16, -8, 0, -19, 0, 0,
    -1, 0, -2, 0, 0, -1, 0, -1,
    0, 0, 0, 0, -2, -2, -3, -3,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -15, 0, -5, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -11, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, -1, -1, -2, 0, 0, -1,
    0, -1, 0, 0, -2, -2, -2, -2,
    0, 0, 0, 0, -18, -4, 0, 0,
    0, -19, 0, -5, 0, 0, -15, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -19,
    -9, 0, -31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, 0, -15, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -14, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -2, -2, -3, -3, 0,
    -3, 0, 0, -28, 0, 0, 0, -15,
    0, 0, -35, 0, -30, -19, 0, -31,
    0, 0, 0, 0, -14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -11,
    -18, -22, 0, -18, 0, 0, 0, 0,
    -27, -22, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, 0, -5, 0, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -8, 0, -18, 0, -5, -8, 0,
    -12, -6, 0, -2, 0, -12, 0, 0,
    -2, -1, 0, 0, -1, 0, -2, 0,
    -1, -1, 0, 0, -1, 0, 0, 0,
    0, -27, -21, -13, -35, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -20, 0,
    -6, 0, 0, -15, -1, 0, 0, -25,
    0, -31, -18, -25, -14, -14, -15, -14,
    -15, 0, 0, 0, -12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -27,
    -26, -8, -32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -21, 0, -21, 0,
    0, 0, 0, 0, 0, -2, -2, -16,
    0, -15, -1, -1, -2, -1, -2, 0,
    0, 0, -19, -8, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, -12, 0, 0, 0, 0, 0, 0,
    -2, -2, -2, 0, 0, -1, 0, 0,
    -1, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, -13, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -27, -30, -8, -32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -22, 0, -39,
    0, 0, -8, 0, 0, 0, -28, -3,
    -27, 0, -20, -10, -10, -10, -10, -10,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, -15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, -1,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -3, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -7,
    -6, -8, -4, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -4, 0, 0, -1, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, -5, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -2, -1, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 13, 0, 9, 13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -4, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -4, 0, 0, -4, 0,
    -11, 0, -1, -8, -2, 0, 0, -5,
    -1, -5, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -14, 0, -14, 0,
    0, -2, -2, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, -8, -7, -8,
    -8, 0, 0, 2, 15, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, -1,
    0, 16, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, -19, 0, 0, 0, 0,
    0, 0, -1, 0, 0, -3, 0, 0,
    -2, 0, -8, 0, 0, 0, -1, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -15, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    -3, 0, 0, -9, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -2, -3, -3, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -3, 0, 0, -11, 0,
    -8, 0, 0, -1, 0, 0, 0, -1,
    0, -5, 0, -1, -4, -4, 0, 0,
    0, 0, 0, 0, -19, 0, 0, 0,
    0, -2, 0, -1, 0, 0, -3, 0,
    0, -2, 0, -6, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -3, 0, 0, -3, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 41,
    .right_class_cnt     = 35,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
    .stride = 1
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_HONORS_24 = {
#else
lv_font_t ui_font_HONORS_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 25,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif

#if LV_VERSION_CHECK(9, 3, 0)
    .static_bitmap = 1,    /*Bitmaps are stored as const so they are always static if not compressed */
#endif

    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HONORS_24*/
