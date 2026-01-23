/*******************************************************************************
 * Size: 28 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 28 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_28.c --no-prefilter --force-fast-kern-format --symbols ℃
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

#ifndef UI_FONT_HONORS_28
#define UI_FONT_HONORS_28 1
#endif

#if UI_FONT_HONORS_28


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_28_glyph_bitmap.bin
 *Define UI_FONT_HONORS_28_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_28_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_28_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_28_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_28_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 107, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 135, .box_w = 5, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 154, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 60, .adv_w = 282, .box_w = 17, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 251, .box_w = 16, .box_h = 27, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 278, .adv_w = 396, .box_w = 23, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 313, .box_w = 20, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 78, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 528, .adv_w = 136, .box_w = 8, .box_h = 28, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 584, .adv_w = 136, .box_w = 7, .box_h = 28, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 640, .adv_w = 211, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 688, .adv_w = 265, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 752, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 768, .adv_w = 221, .box_w = 12, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 777, .adv_w = 125, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 185, .box_w = 12, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 261, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 261, .box_w = 8, .box_h = 22, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 985, .adv_w = 261, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1073, .adv_w = 261, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 261, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1249, .adv_w = 261, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1337, .adv_w = 261, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1425, .adv_w = 261, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1513, .adv_w = 261, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1601, .adv_w = 261, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1689, .adv_w = 135, .box_w = 5, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1721, .adv_w = 134, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1761, .adv_w = 290, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1833, .adv_w = 264, .box_w = 16, .box_h = 8, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1865, .adv_w = 290, .box_w = 15, .box_h = 18, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1937, .adv_w = 233, .box_w = 14, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2025, .adv_w = 360, .box_w = 22, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2157, .adv_w = 309, .box_w = 20, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2267, .adv_w = 292, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2355, .adv_w = 312, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2465, .adv_w = 329, .box_w = 18, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2575, .adv_w = 274, .box_w = 15, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2663, .adv_w = 252, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2751, .adv_w = 320, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2861, .adv_w = 315, .box_w = 17, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2971, .adv_w = 103, .box_w = 4, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2993, .adv_w = 223, .box_w = 13, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3081, .adv_w = 286, .box_w = 17, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3191, .adv_w = 244, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3279, .adv_w = 388, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3411, .adv_w = 319, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3521, .adv_w = 354, .box_w = 21, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3653, .adv_w = 283, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3741, .adv_w = 354, .box_w = 21, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3885, .adv_w = 299, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3973, .adv_w = 254, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4061, .adv_w = 263, .box_w = 17, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4171, .adv_w = 321, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4281, .adv_w = 294, .box_w = 19, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4391, .adv_w = 437, .box_w = 28, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4545, .adv_w = 284, .box_w = 18, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4655, .adv_w = 277, .box_w = 18, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4765, .adv_w = 258, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4853, .adv_w = 139, .box_w = 6, .box_h = 27, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 4907, .adv_w = 185, .box_w = 12, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4973, .adv_w = 139, .box_w = 6, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 5027, .adv_w = 264, .box_w = 16, .box_h = 12, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 5075, .adv_w = 239, .box_w = 15, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5087, .adv_w = 149, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 18},
    {.bitmap_index = 5097, .adv_w = 243, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5161, .adv_w = 271, .box_w = 16, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5249, .adv_w = 229, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5313, .adv_w = 270, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5401, .adv_w = 248, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5465, .adv_w = 139, .box_w = 10, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5534, .adv_w = 267, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 5622, .adv_w = 257, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5710, .adv_w = 114, .box_w = 5, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5754, .adv_w = 108, .box_w = 8, .box_h = 28, .ofs_x = -2, .ofs_y = -6},
    {.bitmap_index = 5810, .adv_w = 240, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5898, .adv_w = 101, .box_w = 4, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5920, .adv_w = 409, .box_w = 23, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6016, .adv_w = 258, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6080, .adv_w = 260, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6144, .adv_w = 272, .box_w = 16, .box_h = 22, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 6232, .adv_w = 272, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 6320, .adv_w = 165, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6368, .adv_w = 209, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6432, .adv_w = 165, .box_w = 10, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6495, .adv_w = 253, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6559, .adv_w = 224, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6623, .adv_w = 346, .box_w = 22, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6719, .adv_w = 248, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6783, .adv_w = 228, .box_w = 15, .box_h = 22, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 6871, .adv_w = 217, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6935, .adv_w = 138, .box_w = 9, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7016, .adv_w = 103, .box_w = 4, .box_h = 25, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 7041, .adv_w = 138, .box_w = 9, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7122, .adv_w = 264, .box_w = 16, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7142, .adv_w = 426, .box_w = 26, .box_h = 25, .ofs_x = 0, .ofs_y = -1}
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
    },
    {
        .range_start = 8451, .range_length = 1, .glyph_id_start = 96,
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
    37, 38, 39, 40, 41, 0, 0, 0,
    0
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
    31, 32, 33, 34, 0, 0, 35, 0,
    0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -18, 0, -27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -22, 0, 0,
    0, 0, -18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -18, 0, 0, 0, -5, -1, 0,
    -30, -1, -19, -9, 0, -22, 0, 0,
    -1, 0, -2, 0, 0, -1, 0, -1,
    0, 0, 0, 0, -2, -2, -3, -3,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -18, 0, -5, 0, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, -13, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, -1, -1, -2, 0, 0, -1,
    0, -1, 0, 0, -2, -2, -2, -2,
    0, 0, 0, 0, -22, -5, 0, 0,
    0, -22, 0, -5, 0, 0, -18, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -22,
    -11, 0, -36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -17, 0, -17, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -11,
    0, -16, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -2, -2, -4, -4, 0,
    -4, 0, 0, -32, 0, 0, 0, -18,
    0, 0, -40, 0, -35, -22, 0, -36,
    0, 0, 0, 0, -16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -21, -25, 0, -21, 0, 0, 0, 0,
    -31, -26, 0, -16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -18, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -17, 0, -6, 0, 0, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -9, 0, -21, 0, -5, -9, 0,
    -13, -7, 0, -2, 0, -14, 0, 0,
    -2, -1, 0, 0, -1, 0, -2, 0,
    -1, -1, 0, 0, -1, 0, 0, 0,
    0, -31, -24, -15, -41, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -23, 0,
    -7, 0, 0, -18, -1, 0, 0, -30,
    0, -36, -22, -30, -16, -17, -17, -16,
    -18, 0, 0, 0, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -31,
    -30, -9, -38, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -24, 0, -24, 0,
    0, 0, 0, 0, 0, -2, -2, -19,
    0, -18, -1, -1, -2, -1, -2, 0,
    0, 0, -22, -9, 0, -27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -17,
    0, -14, 0, 0, 0, 0, 0, 0,
    -2, -2, -2, 0, 0, -1, 0, 0,
    -1, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, -15, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -31, -35, -9, -38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -25, 0, -45,
    0, 0, -9, 0, 0, 0, -33, -3,
    -31, 0, -23, -11, -11, -12, -11, -11,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, -18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, -1,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -3, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -9,
    -7, -9, -5, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -4, 0, 0, -1, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, -5, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -2, -1, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 15, 0, 11, 15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -4, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -4, 0, 0, -4, 0,
    -13, 0, -1, -9, -2, 0, 0, -5,
    -1, -6, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -18,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -17, 0, -16, 0,
    0, -2, -2, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, -9, -9, -9,
    -9, 0, 0, 2, 17, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, -1,
    0, 19, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, -22, 0, 0, 0, 0,
    0, 0, -1, 0, 0, -3, 0, 0,
    -2, 0, -9, 0, 0, 0, -1, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -18, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    -3, 0, 0, -10, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -3, -4, -4, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -4, 0, 0, -13, 0,
    -9, 0, 0, -1, 0, 0, 0, -1,
    0, -6, 0, -1, -4, -4, 0, 0,
    0, 0, 0, 0, -22, 0, 0, 0,
    0, -2, 0, -1, 0, 0, -3, 0,
    0, -2, 0, -7, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -3, 0, 0, -4, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0,
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
    .cmap_num = 2,
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
const lv_font_t ui_font_HONORS_28 = {
#else
lv_font_t ui_font_HONORS_28 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 31,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_HONORS_28*/
