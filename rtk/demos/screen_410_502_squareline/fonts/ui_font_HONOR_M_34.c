/*******************************************************************************
 * Size: 34 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 34 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONOR_M_34.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONOR_M_34
#define UI_FONT_HONOR_M_34 1
#endif

#if UI_FONT_HONOR_M_34


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONOR_M_34_glyph_bitmap.bin
 *Define UI_FONT_HONOR_M_34_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONOR_M_34_GLYPH_BITMAP_BIN
#define UI_FONT_HONOR_M_34_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONOR_M_34_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONOR_M_34_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 130, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 164, .box_w = 6, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 187, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 17},
    {.bitmap_index = 79, .adv_w = 342, .box_w = 21, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 305, .box_w = 19, .box_h = 32, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 395, .adv_w = 481, .box_w = 28, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 380, .box_w = 24, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 94, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 17},
    {.bitmap_index = 742, .adv_w = 165, .box_w = 8, .box_h = 33, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 808, .adv_w = 165, .box_w = 9, .box_h = 33, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 907, .adv_w = 256, .box_w = 16, .box_h = 14, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 963, .adv_w = 322, .box_w = 19, .box_h = 19, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1058, .adv_w = 135, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1078, .adv_w = 269, .box_w = 13, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 1090, .adv_w = 152, .box_w = 6, .box_h = 5, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 224, .box_w = 14, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1204, .adv_w = 317, .box_w = 17, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1334, .adv_w = 317, .box_w = 9, .box_h = 26, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1412, .adv_w = 317, .box_w = 16, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1516, .adv_w = 317, .box_w = 17, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1646, .adv_w = 317, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1776, .adv_w = 317, .box_w = 17, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1906, .adv_w = 317, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2036, .adv_w = 317, .box_w = 16, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2140, .adv_w = 317, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2270, .adv_w = 317, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2400, .adv_w = 164, .box_w = 6, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2438, .adv_w = 162, .box_w = 6, .box_h = 24, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2486, .adv_w = 353, .box_w = 19, .box_h = 21, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2591, .adv_w = 320, .box_w = 18, .box_h = 9, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2636, .adv_w = 353, .box_w = 19, .box_h = 21, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 2741, .adv_w = 283, .box_w = 16, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2845, .adv_w = 437, .box_w = 26, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3027, .adv_w = 375, .box_w = 24, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3183, .adv_w = 355, .box_w = 19, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3313, .adv_w = 379, .box_w = 22, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3469, .adv_w = 400, .box_w = 22, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3625, .adv_w = 332, .box_w = 18, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3755, .adv_w = 306, .box_w = 17, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3885, .adv_w = 389, .box_w = 23, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4041, .adv_w = 383, .box_w = 20, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4171, .adv_w = 126, .box_w = 4, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4197, .adv_w = 271, .box_w = 15, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4301, .adv_w = 347, .box_w = 20, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4431, .adv_w = 296, .box_w = 17, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4561, .adv_w = 472, .box_w = 26, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4743, .adv_w = 387, .box_w = 21, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4899, .adv_w = 430, .box_w = 25, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5081, .adv_w = 343, .box_w = 19, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5211, .adv_w = 430, .box_w = 25, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5407, .adv_w = 363, .box_w = 20, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5537, .adv_w = 308, .box_w = 19, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5667, .adv_w = 319, .box_w = 20, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5797, .adv_w = 390, .box_w = 21, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5953, .adv_w = 357, .box_w = 23, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6109, .adv_w = 531, .box_w = 33, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6343, .adv_w = 344, .box_w = 22, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6499, .adv_w = 337, .box_w = 21, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6655, .adv_w = 313, .box_w = 19, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6785, .adv_w = 169, .box_w = 8, .box_h = 32, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 6849, .adv_w = 224, .box_w = 14, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6953, .adv_w = 169, .box_w = 7, .box_h = 32, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7017, .adv_w = 321, .box_w = 20, .box_h = 14, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 7087, .adv_w = 290, .box_w = 19, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7102, .adv_w = 181, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 22},
    {.bitmap_index = 7114, .adv_w = 295, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7190, .adv_w = 329, .box_w = 18, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 7320, .adv_w = 279, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7415, .adv_w = 328, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7545, .adv_w = 301, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7640, .adv_w = 169, .box_w = 12, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7721, .adv_w = 325, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 7851, .adv_w = 312, .box_w = 16, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 7955, .adv_w = 138, .box_w = 5, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8007, .adv_w = 131, .box_w = 9, .box_h = 33, .ofs_x = -2, .ofs_y = -7},
    {.bitmap_index = 8106, .adv_w = 292, .box_w = 17, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8236, .adv_w = 122, .box_w = 4, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8262, .adv_w = 497, .box_w = 28, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8395, .adv_w = 313, .box_w = 16, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8471, .adv_w = 316, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8566, .adv_w = 330, .box_w = 18, .box_h = 26, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 8696, .adv_w = 330, .box_w = 18, .box_h = 26, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 8826, .adv_w = 200, .box_w = 11, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8883, .adv_w = 254, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8959, .adv_w = 201, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9055, .adv_w = 307, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9131, .adv_w = 272, .box_w = 17, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9226, .adv_w = 420, .box_w = 26, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9359, .adv_w = 301, .box_w = 19, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9454, .adv_w = 277, .box_w = 18, .box_h = 26, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 9584, .adv_w = 263, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9660, .adv_w = 168, .box_w = 11, .box_h = 32, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 9756, .adv_w = 125, .box_w = 4, .box_h = 30, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 9786, .adv_w = 168, .box_w = 11, .box_h = 32, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 9882, .adv_w = 321, .box_w = 18, .box_h = 6, .ofs_x = 1, .ofs_y = 9}
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
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -27, 0, 0,
    0, 0, -22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -22, 0, 0, 0, -6, -1, 0,
    -37, -1, -23, -11, 0, -27, 0, 0,
    -1, 0, -2, 0, 0, -2, 0, -2,
    0, 0, 0, 0, -2, -2, -4, -4,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -22, 0, -7, 0, 0,
    -11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, -1, 0, 0, 0,
    0, 0, -4, 0, 0, 0, -15, 0,
    0, 0, 0, -8, 0, 0, -1, 0,
    0, 0, -2, -2, -3, 0, 0, -1,
    0, -2, 0, 0, -2, -2, -3, -2,
    0, 0, 0, 0, -26, -6, 0, 0,
    0, -27, 0, -7, 0, 0, -22, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -27,
    -13, 0, -44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -21, 0, -21, 0,
    0, 0, 0, 0, 0, 0, 0, -11,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, -20, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -2, -2, -5, -5, 0,
    -4, 0, 0, -39, 0, 0, 0, -22,
    0, 0, -49, 0, -42, -27, 0, -44,
    0, 0, 0, 0, -20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -15,
    -25, -30, 0, -25, 0, 0, 0, 0,
    -38, -32, 0, -20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -22, 0, -18,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -21, 0, -8, 0, 0, -16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, -11, 0, -25, 0, -7, -11, 0,
    -16, -9, 0, -2, 0, -17, 0, 0,
    -2, -2, 0, 0, -1, 0, -2, 0,
    -2, -1, 0, 0, -1, 0, 0, 0,
    0, -38, -29, -18, -50, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -28, 0,
    -9, 0, 0, -22, -1, 0, 0, -36,
    0, -44, -26, -36, -20, -20, -21, -20,
    -22, 0, 0, 0, -16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -38,
    -37, -11, -46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -29, 0, -29, 0,
    0, 0, 0, 0, 0, -3, -3, -23,
    0, -22, -2, -2, -3, -2, -2, 0,
    0, 0, -27, -11, 0, -33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -20,
    0, -17, 0, 0, 0, 0, 0, 0,
    -2, -2, -3, 0, 0, -2, 0, 0,
    -2, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -12, 0, -18, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -38, -42, -11, -46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -30, 0, -55,
    0, 0, -11, 0, 0, 0, -40, -4,
    -38, 0, -28, -14, -14, -15, -14, -14,
    0, 0, 0, 0, 0, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, -22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, -1,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -4, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, -10,
    -8, -11, -6, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -5, 0, 0, -1, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -7, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -2, -2, -7,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 18, 0, 13, 18,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -5, -1, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -5, 0, 0, -5, -1,
    -15, 0, -2, -11, -2, 0, 0, -7,
    -2, -7, 0, 0, 0, 0, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -22,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -20, 0, -20, 0,
    0, -2, -2, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -9, 0, -11, -10, -11,
    -11, 0, 0, 3, 21, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, -1,
    0, 23, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -4, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, -27, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -4, 0, 0,
    -3, 0, -11, 0, 0, 0, -2, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, -22, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -4, 0, 0, -13, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -3, -4, -4, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -5, 0, 0, -15, 0,
    -11, 0, 0, -1, -1, -1, -1, -2,
    0, -7, -1, -1, -5, -5, 0, 0,
    0, 0, 0, 0, -27, 0, 0, 0,
    0, -2, 0, -2, 0, 0, -4, 0,
    0, -2, 0, -8, 1, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -2, -5, 0, 0, 0, 0, 0, 0,
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
const lv_font_t ui_font_HONOR_M_34 = {
#else
lv_font_t ui_font_HONOR_M_34 = {
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



#endif /*#if UI_FONT_HONOR_M_34*/
