/*******************************************************************************
 * Size: 36 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 36 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONOR_M_36.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONOR_M_36
#define UI_FONT_HONOR_M_36 1
#endif

#if UI_FONT_HONOR_M_36


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONOR_M_36_glyph_bitmap.bin
 *Define UI_FONT_HONOR_M_36_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONOR_M_36_GLYPH_BITMAP_BIN
#define UI_FONT_HONOR_M_36_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONOR_M_36_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONOR_M_36_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 138, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 173, .box_w = 6, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 198, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 17},
    {.bitmap_index = 84, .adv_w = 362, .box_w = 22, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 323, .box_w = 20, .box_h = 33, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 411, .adv_w = 510, .box_w = 30, .box_h = 29, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 643, .adv_w = 402, .box_w = 26, .box_h = 29, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 846, .adv_w = 100, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 17},
    {.bitmap_index = 856, .adv_w = 175, .box_w = 9, .box_h = 35, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 961, .adv_w = 175, .box_w = 9, .box_h = 35, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1066, .adv_w = 271, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 1126, .adv_w = 341, .box_w = 20, .box_h = 20, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1226, .adv_w = 143, .box_w = 6, .box_h = 10, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1246, .adv_w = 285, .box_w = 14, .box_h = 4, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 1262, .adv_w = 161, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1274, .adv_w = 237, .box_w = 15, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1382, .adv_w = 336, .box_w = 17, .box_h = 29, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1527, .adv_w = 336, .box_w = 10, .box_h = 27, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1608, .adv_w = 336, .box_w = 17, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1748, .adv_w = 336, .box_w = 18, .box_h = 29, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1893, .adv_w = 336, .box_w = 19, .box_h = 27, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2028, .adv_w = 336, .box_w = 18, .box_h = 28, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2168, .adv_w = 336, .box_w = 19, .box_h = 28, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2308, .adv_w = 336, .box_w = 17, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2443, .adv_w = 336, .box_w = 19, .box_h = 29, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2588, .adv_w = 336, .box_w = 19, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2728, .adv_w = 173, .box_w = 6, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2768, .adv_w = 172, .box_w = 6, .box_h = 25, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2818, .adv_w = 373, .box_w = 20, .box_h = 22, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2928, .adv_w = 339, .box_w = 20, .box_h = 10, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 2978, .adv_w = 373, .box_w = 20, .box_h = 22, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 3088, .adv_w = 300, .box_w = 17, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3228, .adv_w = 463, .box_w = 28, .box_h = 29, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3431, .adv_w = 397, .box_w = 25, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3620, .adv_w = 376, .box_w = 21, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3782, .adv_w = 401, .box_w = 24, .box_h = 29, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3956, .adv_w = 423, .box_w = 24, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4118, .adv_w = 352, .box_w = 19, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4253, .adv_w = 324, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4388, .adv_w = 412, .box_w = 24, .box_h = 29, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4562, .adv_w = 406, .box_w = 22, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4724, .adv_w = 133, .box_w = 5, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4778, .adv_w = 287, .box_w = 16, .box_h = 28, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4890, .adv_w = 367, .box_w = 21, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5052, .adv_w = 313, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5187, .adv_w = 499, .box_w = 28, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5376, .adv_w = 410, .box_w = 22, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5538, .adv_w = 456, .box_w = 27, .box_h = 29, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5741, .adv_w = 363, .box_w = 21, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5903, .adv_w = 456, .box_w = 27, .box_h = 31, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 6120, .adv_w = 384, .box_w = 22, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6282, .adv_w = 327, .box_w = 20, .box_h = 29, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 6427, .adv_w = 338, .box_w = 21, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6589, .adv_w = 412, .box_w = 22, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 6757, .adv_w = 378, .box_w = 24, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6919, .adv_w = 562, .box_w = 35, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7162, .adv_w = 365, .box_w = 23, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7324, .adv_w = 357, .box_w = 23, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7486, .adv_w = 331, .box_w = 20, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7621, .adv_w = 179, .box_w = 8, .box_h = 34, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 7689, .adv_w = 237, .box_w = 15, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7797, .adv_w = 179, .box_w = 8, .box_h = 34, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7865, .adv_w = 340, .box_w = 21, .box_h = 15, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 7955, .adv_w = 307, .box_w = 20, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7970, .adv_w = 192, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 23},
    {.bitmap_index = 7988, .adv_w = 313, .box_w = 17, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8088, .adv_w = 348, .box_w = 19, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8228, .adv_w = 295, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8328, .adv_w = 347, .box_w = 19, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8468, .adv_w = 319, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8568, .adv_w = 179, .box_w = 12, .box_h = 29, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8655, .adv_w = 344, .box_w = 19, .box_h = 27, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 8790, .adv_w = 331, .box_w = 17, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8930, .adv_w = 146, .box_w = 6, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8986, .adv_w = 139, .box_w = 9, .box_h = 35, .ofs_x = -2, .ofs_y = -7},
    {.bitmap_index = 9091, .adv_w = 309, .box_w = 18, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9231, .adv_w = 130, .box_w = 4, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9259, .adv_w = 526, .box_w = 29, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9419, .adv_w = 332, .box_w = 17, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9519, .adv_w = 335, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9619, .adv_w = 350, .box_w = 19, .box_h = 27, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 9754, .adv_w = 350, .box_w = 19, .box_h = 27, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 9889, .adv_w = 212, .box_w = 12, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9949, .adv_w = 269, .box_w = 16, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10029, .adv_w = 213, .box_w = 13, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10133, .adv_w = 325, .box_w = 16, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 10213, .adv_w = 288, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10313, .adv_w = 445, .box_w = 28, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10453, .adv_w = 319, .box_w = 20, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10553, .adv_w = 293, .box_w = 19, .box_h = 27, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 10688, .adv_w = 279, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10788, .adv_w = 178, .box_w = 12, .box_h = 34, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 10890, .adv_w = 132, .box_w = 4, .box_h = 31, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 10921, .adv_w = 178, .box_w = 11, .box_h = 34, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 11023, .adv_w = 340, .box_w = 20, .box_h = 6, .ofs_x = 1, .ofs_y = 9}
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
    0, 0, 0, -23, 0, -35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -29, 0, 0,
    0, 0, -23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -23, 0, 0, 0, -6, -1, 0,
    -39, -1, -24, -12, 0, -29, 0, 0,
    -1, 0, -2, 0, 0, -2, 0, -2,
    0, 0, 0, 0, -2, -2, -4, -4,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -23, 0, -7, 0, 0,
    -12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, -1, 0, 0, 0,
    0, 0, -5, 0, 0, 0, -16, 0,
    0, 0, 0, -9, 0, 0, -1, 0,
    0, 0, -2, -2, -3, 0, 0, -1,
    0, -2, 0, 0, -2, -2, -3, -2,
    0, 0, 0, 0, -28, -6, 0, 0,
    0, -29, 0, -7, 0, 0, -23, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -29,
    -14, 0, -46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -22, 0, -22, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, -21, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -2, -2, -5, -5, 0,
    -5, 0, 0, -41, 0, 0, 0, -23,
    0, 0, -52, 0, -45, -29, 0, -46,
    0, 0, 0, 0, -21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    -26, -32, 0, -26, 0, 0, 0, 0,
    -40, -33, 0, -21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -23, 0, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -22, 0, -8, 0, 0, -17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, -12, 0, -26, 0, -7, -12, 0,
    -17, -9, 0, -2, 0, -18, 0, 0,
    -2, -2, 0, 0, -1, 0, -2, 0,
    -2, -1, 0, 0, -1, 0, 0, 0,
    0, -40, -31, -19, -53, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -30, 0,
    -9, 0, 0, -23, -1, 0, 0, -38,
    0, -46, -28, -38, -21, -21, -22, -21,
    -23, 0, 0, 0, -17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -40,
    -39, -12, -48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -31, 0, -31, 0,
    0, 0, 0, 0, 0, -3, -3, -24,
    0, -23, -2, -2, -3, -2, -2, 0,
    0, 0, -29, -12, 0, -35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -21,
    0, -18, 0, 0, 0, 0, 0, 0,
    -2, -2, -3, 0, 0, -2, 0, 0,
    -2, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -13, 0, -20, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -40, -45, -12, -48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -32, 0, -58,
    0, 0, -12, 0, 0, 0, -42, -4,
    -40, 0, -30, -14, -14, -16, -14, -14,
    0, 0, 0, 0, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, -23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, -1,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -4, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, -11,
    -9, -12, -6, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -6, 0, 0, -1, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -7, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -2, -2, -7,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 20, 0, 14, 20,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -6, -1, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, -6, 0, 0, -6, -1,
    -16, 0, -2, -12, -2, 0, 0, -7,
    -2, -7, 0, 0, 0, 0, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -21, 0, -21, 0,
    0, -2, -2, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, 0, -12, -11, -12,
    -12, 0, 0, 3, 22, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, -1,
    0, 24, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -4, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, -29, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -4, 0, 0,
    -3, 0, -12, 0, 0, 0, -2, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, -23, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -4, 0, 0, -13, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -3, -5, -5, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -5, 0, 0, -16, 0,
    -12, 0, 0, -1, -1, -1, -1, -2,
    0, -7, -1, -1, -6, -6, 0, 0,
    0, 0, 0, 0, -29, 0, 0, 0,
    0, -2, 0, -2, 0, 0, -4, 0,
    0, -2, 0, -9, 1, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -2, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -4, 0, 0, -5, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0,
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
const lv_font_t ui_font_HONOR_M_36 = {
#else
lv_font_t ui_font_HONOR_M_36 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 38,          /*The maximum line height required by the font*/
    .base_line = 7,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_HONOR_M_36*/
