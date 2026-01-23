/*******************************************************************************
 * Size: 34 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 34 --font lvgl_font_src/HONORSansCN-DemiBold.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_D_34.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONORS_D_34
#define UI_FONT_HONORS_D_34 1
#endif

#if UI_FONT_HONORS_D_34


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_D_34_glyph_bitmap.bin
 *Define UI_FONT_HONORS_D_34_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_D_34_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_D_34_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_D_34_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_D_34_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 130, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 170, .box_w = 6, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 203, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 16},
    {.bitmap_index = 82, .adv_w = 347, .box_w = 21, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 314, .box_w = 19, .box_h = 32, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 398, .adv_w = 496, .box_w = 29, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 381, .box_w = 24, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 100, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 16},
    {.bitmap_index = 772, .adv_w = 175, .box_w = 9, .box_h = 33, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 871, .adv_w = 175, .box_w = 9, .box_h = 33, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 970, .adv_w = 261, .box_w = 16, .box_h = 14, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 1026, .adv_w = 324, .box_w = 19, .box_h = 19, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1121, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1143, .adv_w = 268, .box_w = 14, .box_h = 4, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 1159, .adv_w = 156, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1171, .adv_w = 231, .box_w = 14, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1275, .adv_w = 323, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1405, .adv_w = 323, .box_w = 10, .box_h = 26, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1483, .adv_w = 323, .box_w = 17, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1613, .adv_w = 323, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1743, .adv_w = 323, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1873, .adv_w = 323, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2003, .adv_w = 323, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2133, .adv_w = 323, .box_w = 17, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2263, .adv_w = 323, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2393, .adv_w = 323, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2523, .adv_w = 170, .box_w = 6, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2561, .adv_w = 168, .box_w = 6, .box_h = 24, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2609, .adv_w = 353, .box_w = 19, .box_h = 21, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2714, .adv_w = 322, .box_w = 20, .box_h = 10, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 2764, .adv_w = 353, .box_w = 19, .box_h = 21, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 2869, .adv_w = 286, .box_w = 17, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2999, .adv_w = 438, .box_w = 27, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3181, .adv_w = 386, .box_w = 25, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3363, .adv_w = 360, .box_w = 20, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3493, .adv_w = 382, .box_w = 23, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3649, .adv_w = 403, .box_w = 23, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3805, .adv_w = 337, .box_w = 18, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3935, .adv_w = 311, .box_w = 17, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4065, .adv_w = 393, .box_w = 23, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4221, .adv_w = 388, .box_w = 21, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4377, .adv_w = 133, .box_w = 5, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4429, .adv_w = 276, .box_w = 16, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4533, .adv_w = 358, .box_w = 21, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4689, .adv_w = 303, .box_w = 17, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4819, .adv_w = 478, .box_w = 26, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5001, .adv_w = 392, .box_w = 21, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5157, .adv_w = 432, .box_w = 25, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5339, .adv_w = 349, .box_w = 20, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5469, .adv_w = 432, .box_w = 25, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5665, .adv_w = 370, .box_w = 21, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5821, .adv_w = 316, .box_w = 19, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5951, .adv_w = 322, .box_w = 20, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6081, .adv_w = 394, .box_w = 21, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6237, .adv_w = 367, .box_w = 23, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6393, .adv_w = 541, .box_w = 34, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6627, .adv_w = 361, .box_w = 23, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6783, .adv_w = 349, .box_w = 22, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6939, .adv_w = 318, .box_w = 20, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7069, .adv_w = 178, .box_w = 8, .box_h = 32, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 7133, .adv_w = 231, .box_w = 14, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7237, .adv_w = 178, .box_w = 8, .box_h = 32, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7301, .adv_w = 324, .box_w = 20, .box_h = 15, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 7376, .adv_w = 295, .box_w = 19, .box_h = 4, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7396, .adv_w = 186, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 22},
    {.bitmap_index = 7408, .adv_w = 299, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7484, .adv_w = 332, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 7619, .adv_w = 282, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7714, .adv_w = 331, .box_w = 19, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7849, .adv_w = 302, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7944, .adv_w = 177, .box_w = 12, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8025, .adv_w = 329, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 8155, .adv_w = 317, .box_w = 16, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8263, .adv_w = 145, .box_w = 6, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8315, .adv_w = 145, .box_w = 10, .box_h = 33, .ofs_x = -2, .ofs_y = -7},
    {.bitmap_index = 8414, .adv_w = 301, .box_w = 17, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8549, .adv_w = 129, .box_w = 5, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8603, .adv_w = 498, .box_w = 28, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8736, .adv_w = 316, .box_w = 16, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8812, .adv_w = 318, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8907, .adv_w = 333, .box_w = 18, .box_h = 26, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 9037, .adv_w = 333, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 9167, .adv_w = 208, .box_w = 12, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9224, .adv_w = 258, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9300, .adv_w = 205, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9396, .adv_w = 312, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9491, .adv_w = 281, .box_w = 18, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9586, .adv_w = 426, .box_w = 27, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9719, .adv_w = 307, .box_w = 19, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9814, .adv_w = 287, .box_w = 18, .box_h = 26, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 9944, .adv_w = 266, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10020, .adv_w = 177, .box_w = 11, .box_h = 32, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 10116, .adv_w = 130, .box_w = 4, .box_h = 30, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 10146, .adv_w = 177, .box_w = 11, .box_h = 32, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 10242, .adv_w = 324, .box_w = 20, .box_h = 6, .ofs_x = 0, .ofs_y = 9}
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
    0, 0, 0, -22, 0, -33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -27, 0, 0,
    0, 0, -22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -22, 0, 0, 0, -7, -2, 0,
    -39, -2, -24, -11, 0, -27, 0, 0,
    -2, 0, -4, 0, 0, -3, 0, -3,
    0, 0, 0, 0, -4, -4, -8, -8,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -22, 0, -8, 0, 0,
    -11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -1, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -11, 0,
    0, 0, 0, -8, 0, 0, -1, 0,
    0, 0, -3, -3, -5, 0, 0, -2,
    0, -3, 0, 0, -4, -4, -5, -4,
    0, 0, 0, 0, -25, -7, 0, 0,
    0, -24, 0, -5, 0, 0, -22, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -27,
    -15, 0, -44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -20, 0, -20, 0,
    0, 0, 0, 0, 0, 0, 0, -11,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, -20, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -4, -4, -10, -10, 0,
    -9, 0, 0, -35, 0, 0, 0, -19,
    0, 0, -49, 0, -41, -27, 0, -44,
    0, 0, 0, 0, -15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -11,
    -23, -28, 0, -23, 0, 0, 0, 0,
    -38, -33, 0, -17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -22, 0, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -20, 0, -10, 0, 0, -16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, -11, 0, -26, 0, -8, -11, 0,
    -16, -9, 0, -4, 0, -17, 0, 0,
    -4, -3, 0, 0, -2, 0, -4, 0,
    -3, -2, 0, 0, -2, 0, 0, 0,
    0, -38, -29, -17, -48, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -27, 0,
    -4, 0, 0, -19, -2, 0, 0, -34,
    0, -44, -20, -34, -17, -18, -20, -17,
    -22, 0, 0, 0, -16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -38,
    -39, -11, -48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -32, 0, -32, 0,
    0, 0, 0, 0, 0, -5, -5, -24,
    0, -22, -3, -3, -5, -3, -4, 0,
    0, 0, -27, -11, 0, -33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -24,
    0, -18, 0, 0, 0, 0, 0, 0,
    -4, -4, -5, 0, 0, -3, 0, 0,
    -3, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -13, 0, -21, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -38, -44, -11, -48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -36, 0, -55,
    0, 0, -11, 0, 0, 0, -36, -8,
    -38, 0, -29, -16, -16, -18, -16, -16,
    0, 0, 0, 0, 0, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, -16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, -2, -2,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, -8, 0, 0, -13, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, -11,
    -8, -12, -7, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -11, 0, 0, -2, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, -13, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -4, -3, -8,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 21, 0, 15, 21,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, -5, -1, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, -11, 0, 0, -5, -1,
    -17, 0, -3, -13, -4, 0, 0, -8,
    -3, -9, 0, 0, 0, 0, 0, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -22,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -18, 0, -17, 0,
    0, -4, -4, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, -11, -10, -11,
    -11, 0, 0, 5, 22, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, -2,
    0, 27, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -8, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -27, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -8, 0, 0,
    -5, 0, -12, 0, 0, 0, -3, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, -22, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -8, 0, 0, -14, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -4, -6, -3, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, -10, 0, 0, -17, 0,
    -12, 0, 0, -2, -1, -1, -1, -3,
    0, -9, -1, -2, -5, -5, 0, 0,
    0, 0, 0, 0, -27, 0, 0, 0,
    0, -4, 0, -3, 0, 0, -8, 0,
    0, -4, 0, -8, 2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -3, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -8, 0, 0, -4, 0, -9, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0,
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
const lv_font_t ui_font_HONORS_D_34 = {
#else
lv_font_t ui_font_HONORS_D_34 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 36,          /*The maximum line height required by the font*/
    .base_line = 7,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 2,
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



#endif /*#if UI_FONT_HONORS_D_34*/
