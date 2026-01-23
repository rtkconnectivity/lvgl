/*******************************************************************************
 * Size: 22 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 22 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONOR_M_22.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONOR_M_22
#define UI_FONT_HONOR_M_22 1
#endif

#if UI_FONT_HONOR_M_22


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONOR_M_22_glyph_bitmap.bin
 *Define UI_FONT_HONOR_M_22_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONOR_M_22_GLYPH_BITMAP_BIN
#define UI_FONT_HONOR_M_22_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONOR_M_22_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONOR_M_22_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 84, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 106, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 121, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 28, .adv_w = 221, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 197, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 152, .adv_w = 312, .box_w = 19, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 246, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 61, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 302, .adv_w = 107, .box_w = 6, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 344, .adv_w = 107, .box_w = 6, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 386, .adv_w = 166, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 413, .adv_w = 208, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 461, .adv_w = 88, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 467, .adv_w = 174, .box_w = 9, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 473, .adv_w = 98, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 145, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 205, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 205, .box_w = 7, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 205, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 205, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 205, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 205, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 205, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 205, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 205, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 205, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 989, .adv_w = 106, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 105, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1016, .adv_w = 228, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1068, .adv_w = 207, .box_w = 13, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1092, .adv_w = 228, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1144, .adv_w = 183, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1192, .adv_w = 283, .box_w = 18, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1272, .adv_w = 243, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1336, .adv_w = 230, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1400, .adv_w = 245, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1464, .adv_w = 259, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1528, .adv_w = 215, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1576, .adv_w = 198, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1624, .adv_w = 252, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1688, .adv_w = 248, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1752, .adv_w = 81, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1768, .adv_w = 175, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1816, .adv_w = 225, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1880, .adv_w = 191, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1928, .adv_w = 305, .box_w = 17, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2008, .adv_w = 250, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2072, .adv_w = 278, .box_w = 17, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2152, .adv_w = 222, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2216, .adv_w = 278, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2306, .adv_w = 235, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2370, .adv_w = 200, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2418, .adv_w = 207, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2482, .adv_w = 252, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2546, .adv_w = 231, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2610, .adv_w = 344, .box_w = 22, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2706, .adv_w = 223, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2770, .adv_w = 218, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2834, .adv_w = 202, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2898, .adv_w = 109, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2938, .adv_w = 145, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2986, .adv_w = 109, .box_w = 5, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3026, .adv_w = 208, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 3062, .adv_w = 188, .box_w = 12, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3068, .adv_w = 117, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 3076, .adv_w = 191, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3112, .adv_w = 213, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3163, .adv_w = 180, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3199, .adv_w = 212, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3250, .adv_w = 195, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3286, .adv_w = 109, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3320, .adv_w = 210, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3368, .adv_w = 202, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3419, .adv_w = 89, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3435, .adv_w = 85, .box_w = 7, .box_h = 20, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 3475, .adv_w = 189, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3526, .adv_w = 79, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3543, .adv_w = 321, .box_w = 18, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3603, .adv_w = 203, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3639, .adv_w = 205, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3687, .adv_w = 214, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3735, .adv_w = 214, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3783, .adv_w = 130, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3809, .adv_w = 164, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3845, .adv_w = 130, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3877, .adv_w = 199, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3913, .adv_w = 176, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3949, .adv_w = 272, .box_w = 17, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4009, .adv_w = 195, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4045, .adv_w = 179, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 4093, .adv_w = 170, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4129, .adv_w = 109, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4169, .adv_w = 81, .box_w = 3, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4188, .adv_w = 109, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4228, .adv_w = 208, .box_w = 13, .box_h = 4, .ofs_x = 0, .ofs_y = 6}
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
    0, 0, 0, -14, 0, -21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -18, 0, 0,
    0, 0, -14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -14, 0, 0, 0, -4, -1, 0,
    -24, -1, -15, -7, 0, -18, 0, 0,
    -1, 0, -1, 0, 0, -1, 0, -1,
    0, 0, 0, 0, -1, -1, -2, -2,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, -4, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -10, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, -1, -1, -2, 0, 0, -1,
    0, -1, 0, 0, -1, -1, -2, -1,
    0, 0, 0, 0, -17, -4, 0, 0,
    0, -18, 0, -4, 0, 0, -14, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -18,
    -8, 0, -28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, -13, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, -13, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -1, -3, -3, 0,
    -3, 0, 0, -25, 0, 0, 0, -14,
    0, 0, -32, 0, -27, -18, 0, -28,
    0, 0, 0, 0, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    -16, -20, 0, -16, 0, 0, 0, 0,
    -25, -20, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, -5, 0, 0, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -7, 0, -16, 0, -4, -7, 0,
    -11, -6, 0, -1, 0, -11, 0, 0,
    -1, -1, 0, 0, -1, 0, -1, 0,
    -1, -1, 0, 0, -1, 0, 0, 0,
    0, -25, -19, -12, -32, 0, 0, 0,
    0, 0, 0, -1, 0, 0, -18, 0,
    -6, 0, 0, -14, -1, 0, 0, -23,
    0, -28, -17, -23, -13, -13, -13, -13,
    -14, 0, 0, 0, -11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -25,
    -24, -7, -30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -19, 0, -19, 0,
    0, 0, 0, 0, 0, -2, -2, -15,
    0, -14, -1, -1, -2, -1, -1, 0,
    0, 0, -18, -7, 0, -21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, -11, 0, 0, 0, 0, 0, 0,
    -1, -1, -2, 0, 0, -1, 0, 0,
    -1, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, -12, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -25, -27, -7, -30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -20, 0, -36,
    0, 0, -7, 0, 0, 0, -26, -2,
    -25, 0, -18, -9, -9, -10, -9, -9,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, -14, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, -2, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -7,
    -5, -7, -4, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, -4, 0, 0, -1, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, -4, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -1, -1, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 12, 0, 8, 12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -4, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -4, 0, 0, -4, 0,
    -10, 0, -1, -7, -1, 0, 0, -4,
    -1, -5, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, -13, 0,
    0, -1, -1, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -7, -7, -7,
    -7, 0, 0, 2, 13, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, -1,
    0, 15, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, -18, 0, 0, 0, 0,
    0, 0, -1, 0, 0, -2, 0, 0,
    -2, 0, -7, 0, 0, 0, -1, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -14, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    -2, 0, 0, -8, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, -2, -3, -3, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -3, 0, 0, -10, 0,
    -7, 0, 0, -1, 0, 0, 0, -1,
    0, -5, 0, -1, -4, -4, 0, 0,
    0, 0, 0, 0, -18, 0, 0, 0,
    0, -1, 0, -1, 0, 0, -2, 0,
    0, -1, 0, -5, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, -2, 0, 0, -3, 0, -6, 0,
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
const lv_font_t ui_font_HONOR_M_22 = {
#else
lv_font_t ui_font_HONOR_M_22 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 23,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_HONOR_M_22*/
