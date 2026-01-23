/*******************************************************************************
 * Size: 48 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 48 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONOR_M_48.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONOR_M_48
#define UI_FONT_HONOR_M_48 1
#endif

#if UI_FONT_HONOR_M_48


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONOR_M_48_glyph_bitmap.bin
 *Define UI_FONT_HONOR_M_48_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONOR_M_48_GLYPH_BITMAP_BIN
#define UI_FONT_HONOR_M_48_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONOR_M_48_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONOR_M_48_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 184, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 231, .box_w = 8, .box_h = 36, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 72, .adv_w = 263, .box_w = 13, .box_h = 13, .ofs_x = 2, .ofs_y = 24},
    {.bitmap_index = 124, .adv_w = 483, .box_w = 28, .box_h = 36, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 376, .adv_w = 430, .box_w = 25, .box_h = 45, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 691, .adv_w = 680, .box_w = 40, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1071, .adv_w = 536, .box_w = 34, .box_h = 38, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1413, .adv_w = 133, .box_w = 5, .box_h = 13, .ofs_x = 2, .ofs_y = 24},
    {.bitmap_index = 1439, .adv_w = 233, .box_w = 13, .box_h = 46, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1623, .adv_w = 233, .box_w = 12, .box_h = 46, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1761, .adv_w = 362, .box_w = 21, .box_h = 20, .ofs_x = 1, .ofs_y = 17},
    {.bitmap_index = 1881, .adv_w = 455, .box_w = 26, .box_h = 27, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2070, .adv_w = 191, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 2098, .adv_w = 379, .box_w = 19, .box_h = 5, .ofs_x = 2, .ofs_y = 14},
    {.bitmap_index = 2123, .adv_w = 214, .box_w = 8, .box_h = 8, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 2139, .adv_w = 316, .box_w = 19, .box_h = 36, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2319, .adv_w = 448, .box_w = 24, .box_h = 38, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2547, .adv_w = 448, .box_w = 12, .box_h = 36, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 2655, .adv_w = 448, .box_w = 24, .box_h = 37, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 2877, .adv_w = 448, .box_w = 24, .box_h = 38, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3105, .adv_w = 448, .box_w = 24, .box_h = 36, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 3321, .adv_w = 448, .box_w = 24, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3543, .adv_w = 448, .box_w = 24, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3765, .adv_w = 448, .box_w = 23, .box_h = 36, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 3981, .adv_w = 448, .box_w = 24, .box_h = 38, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4209, .adv_w = 448, .box_w = 24, .box_h = 37, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 4431, .adv_w = 231, .box_w = 8, .box_h = 26, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 4483, .adv_w = 229, .box_w = 8, .box_h = 33, .ofs_x = 3, .ofs_y = -6},
    {.bitmap_index = 4549, .adv_w = 498, .box_w = 26, .box_h = 29, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 4752, .adv_w = 452, .box_w = 26, .box_h = 13, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 4843, .adv_w = 498, .box_w = 26, .box_h = 29, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 5046, .adv_w = 399, .box_w = 22, .box_h = 37, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 5268, .adv_w = 617, .box_w = 37, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5648, .adv_w = 530, .box_w = 34, .box_h = 36, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 5972, .adv_w = 501, .box_w = 27, .box_h = 36, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 6224, .adv_w = 535, .box_w = 32, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6528, .adv_w = 564, .box_w = 31, .box_h = 36, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 6816, .adv_w = 469, .box_w = 25, .box_h = 36, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 7068, .adv_w = 432, .box_w = 24, .box_h = 36, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 7284, .adv_w = 549, .box_w = 32, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7588, .adv_w = 541, .box_w = 29, .box_h = 36, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 7876, .adv_w = 177, .box_w = 7, .box_h = 36, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 7948, .adv_w = 382, .box_w = 21, .box_h = 37, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8170, .adv_w = 490, .box_w = 29, .box_h = 36, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 8458, .adv_w = 418, .box_w = 24, .box_h = 36, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 8674, .adv_w = 666, .box_w = 37, .box_h = 36, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 9034, .adv_w = 546, .box_w = 30, .box_h = 36, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 9322, .adv_w = 607, .box_w = 36, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9664, .adv_w = 485, .box_w = 27, .box_h = 36, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 9916, .adv_w = 607, .box_w = 36, .box_h = 41, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 10285, .adv_w = 512, .box_w = 28, .box_h = 36, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 10537, .adv_w = 435, .box_w = 25, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10803, .adv_w = 451, .box_w = 28, .box_h = 36, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 11055, .adv_w = 550, .box_w = 29, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 11351, .adv_w = 505, .box_w = 32, .box_h = 36, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 11639, .adv_w = 750, .box_w = 47, .box_h = 36, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 12071, .adv_w = 486, .box_w = 31, .box_h = 36, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 12359, .adv_w = 475, .box_w = 30, .box_h = 36, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 12647, .adv_w = 442, .box_w = 26, .box_h = 36, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 12899, .adv_w = 238, .box_w = 10, .box_h = 46, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 13037, .adv_w = 316, .box_w = 19, .box_h = 36, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 13217, .adv_w = 238, .box_w = 10, .box_h = 46, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 13355, .adv_w = 453, .box_w = 27, .box_h = 20, .ofs_x = 1, .ofs_y = 16},
    {.bitmap_index = 13495, .adv_w = 409, .box_w = 26, .box_h = 4, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 13523, .adv_w = 256, .box_w = 11, .box_h = 8, .ofs_x = 2, .ofs_y = 31},
    {.bitmap_index = 13547, .adv_w = 417, .box_w = 23, .box_h = 26, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 13703, .adv_w = 464, .box_w = 26, .box_h = 38, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 13969, .adv_w = 393, .box_w = 24, .box_h = 26, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 14125, .adv_w = 463, .box_w = 26, .box_h = 38, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 14391, .adv_w = 425, .box_w = 25, .box_h = 26, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 14573, .adv_w = 239, .box_w = 16, .box_h = 38, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 14725, .adv_w = 458, .box_w = 25, .box_h = 37, .ofs_x = 1, .ofs_y = -10},
    {.bitmap_index = 14984, .adv_w = 441, .box_w = 23, .box_h = 38, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 15212, .adv_w = 195, .box_w = 7, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 15286, .adv_w = 185, .box_w = 13, .box_h = 48, .ofs_x = -3, .ofs_y = -10},
    {.bitmap_index = 15478, .adv_w = 412, .box_w = 24, .box_h = 38, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 15706, .adv_w = 173, .box_w = 6, .box_h = 38, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 15782, .adv_w = 701, .box_w = 39, .box_h = 26, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 16042, .adv_w = 442, .box_w = 22, .box_h = 26, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 16198, .adv_w = 446, .box_w = 26, .box_h = 26, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 16380, .adv_w = 466, .box_w = 25, .box_h = 37, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 16639, .adv_w = 466, .box_w = 26, .box_h = 37, .ofs_x = 1, .ofs_y = -10},
    {.bitmap_index = 16898, .adv_w = 283, .box_w = 15, .box_h = 26, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 17002, .adv_w = 359, .box_w = 22, .box_h = 26, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 17158, .adv_w = 283, .box_w = 18, .box_h = 35, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 17333, .adv_w = 434, .box_w = 22, .box_h = 26, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 17489, .adv_w = 384, .box_w = 24, .box_h = 26, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 17645, .adv_w = 593, .box_w = 37, .box_h = 26, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 17905, .adv_w = 425, .box_w = 26, .box_h = 26, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 18087, .adv_w = 391, .box_w = 25, .box_h = 37, .ofs_x = 0, .ofs_y = -10},
    {.bitmap_index = 18346, .adv_w = 372, .box_w = 21, .box_h = 26, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 18502, .adv_w = 237, .box_w = 15, .box_h = 46, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 18686, .adv_w = 176, .box_w = 5, .box_h = 42, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 18770, .adv_w = 237, .box_w = 15, .box_h = 46, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 18954, .adv_w = 453, .box_w = 26, .box_h = 8, .ofs_x = 1, .ofs_y = 13}
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
    0, 0, 0, -31, 0, -46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -38, 0, 0,
    0, 0, -31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -31, 0, 0, 0, -8, -2, 0,
    -52, -2, -32, -15, 0, -38, 0, 0,
    -2, 0, -3, 0, 0, -2, 0, -2,
    0, 0, 0, 0, -3, -3, -5, -5,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -31, 0, -9, 0, 0,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -1, 0, 0, 0,
    0, 0, -6, 0, 0, 0, -22, 0,
    0, 0, 0, -12, 0, 0, -1, 0,
    0, 0, -2, -2, -4, 0, 0, -2,
    0, -2, 0, 0, -3, -3, -4, -3,
    0, 0, 0, 0, -37, -8, 0, 0,
    0, -38, 0, -9, 0, 0, -31, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -38,
    -18, 0, -61, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -29, 0, -29, 0,
    0, 0, 0, 0, 0, 0, 0, -15,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -18,
    0, -28, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -3, -3, -7, -7, 0,
    -6, 0, 0, -55, 0, 0, 0, -31,
    0, 0, -69, 0, -60, -38, 0, -61,
    0, 0, 0, 0, -28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -22,
    -35, -43, 0, -35, 0, 0, 0, 0,
    -54, -45, 0, -28, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -31, 0, -25,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -29, 0, -11, 0, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, -15, 0, -35, 0, -9, -15, 0,
    -23, -12, 0, -3, 0, -24, 0, 0,
    -3, -2, 0, 0, -2, 0, -3, 0,
    -2, -2, 0, 0, -2, 0, 0, 0,
    0, -54, -41, -25, -71, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -40, 0,
    -12, 0, 0, -31, -2, 0, 0, -51,
    0, -61, -37, -51, -28, -28, -29, -28,
    -31, 0, 0, 0, -23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -54,
    -52, -15, -65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -41, 0, -41, 0,
    0, 0, 0, 0, 0, -4, -4, -32,
    0, -31, -2, -2, -4, -2, -3, 0,
    0, 0, -38, -15, 0, -46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -28,
    0, -25, 0, 0, 0, 0, 0, 0,
    -3, -3, -4, 0, 0, -2, 0, 0,
    -2, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -17, 0, -26, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -54, -60, -15, -65, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -43, 0, -78,
    0, 0, -15, 0, 0, 0, -56, -5,
    -54, 0, -40, -19, -19, -21, -19, -19,
    0, 0, 0, 0, 0, -15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, -31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, -2, -2,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, -5, 0, 0, -9, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, -15,
    -12, -16, -8, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -8, 0, 0, -2, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, -9, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -3, -2, -9,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 26, 0, 18, 26,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -8, -1, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, -8, 0, 0, -8, -1,
    -22, 0, -2, -15, -3, 0, 0, -9,
    -2, -10, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -31,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -28, 0, -28, 0,
    0, -3, -3, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, -15, -15, -15,
    -15, 0, 0, 4, 29, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, -2,
    0, 32, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, -5, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -38, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -5, 0, 0,
    -4, 0, -16, 0, 0, 0, -2, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, -31, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -5, 0, 0, -18, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -5, -6, -6, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -7, 0, 0, -22, 0,
    -16, 0, 0, -2, -1, -1, -1, -2,
    0, -10, -1, -2, -8, -8, 0, 0,
    0, 0, 0, 0, -38, 0, 0, 0,
    0, -3, 0, -2, 0, 0, -5, 0,
    0, -3, 0, -12, 2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -3, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -5, 0, 0, -7, 0, -14, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0,
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
const lv_font_t ui_font_HONOR_M_48 = {
#else
lv_font_t ui_font_HONOR_M_48 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 52,          /*The maximum line height required by the font*/
    .base_line = 10,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
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



#endif /*#if UI_FONT_HONOR_M_48*/
