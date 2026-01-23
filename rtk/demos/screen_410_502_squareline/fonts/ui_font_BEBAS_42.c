/*******************************************************************************
 * Size: 42 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 42 --font lvgl_font_src/BEBAS___.TTF -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_BEBAS_42.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_BEBAS_42
#define UI_FONT_BEBAS_42 1
#endif

#if UI_FONT_BEBAS_42


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_BEBAS_42_glyph_bitmap.bin
 *Define UI_FONT_BEBAS_42_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_BEBAS_42_GLYPH_BITMAP_BIN
#define UI_FONT_BEBAS_42_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_BEBAS_42_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_BEBAS_42_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 62, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 152, .box_w = 7, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 252, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 35},
    {.bitmap_index = 112, .adv_w = 551, .box_w = 32, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 361, .box_w = 20, .box_h = 44, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 636, .adv_w = 477, .box_w = 27, .box_h = 41, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 923, .adv_w = 416, .box_w = 24, .box_h = 40, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1163, .adv_w = 146, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 35},
    {.bitmap_index = 1181, .adv_w = 241, .box_w = 13, .box_h = 47, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1369, .adv_w = 241, .box_w = 13, .box_h = 47, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1557, .adv_w = 299, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 23},
    {.bitmap_index = 1617, .adv_w = 369, .box_w = 21, .box_h = 20, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1737, .adv_w = 153, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1759, .adv_w = 329, .box_w = 18, .box_h = 6, .ofs_x = 1, .ofs_y = 16},
    {.bitmap_index = 1789, .adv_w = 152, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1801, .adv_w = 385, .box_w = 22, .box_h = 42, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2053, .adv_w = 348, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2243, .adv_w = 229, .box_w = 12, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2357, .adv_w = 356, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2547, .adv_w = 355, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2737, .adv_w = 369, .box_w = 21, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2965, .adv_w = 341, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3155, .adv_w = 334, .box_w = 18, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3345, .adv_w = 333, .box_w = 18, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3535, .adv_w = 355, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3725, .adv_w = 334, .box_w = 18, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3915, .adv_w = 153, .box_w = 7, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3959, .adv_w = 152, .box_w = 7, .box_h = 27, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 4013, .adv_w = 361, .box_w = 20, .box_h = 21, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 4118, .adv_w = 369, .box_w = 21, .box_h = 13, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 4196, .adv_w = 361, .box_w = 20, .box_h = 21, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 4301, .adv_w = 347, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4491, .adv_w = 672, .box_w = 40, .box_h = 44, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 4931, .adv_w = 388, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5159, .adv_w = 366, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5349, .adv_w = 348, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5539, .adv_w = 346, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5729, .adv_w = 319, .box_w = 17, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5919, .adv_w = 319, .box_w = 17, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6109, .adv_w = 348, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6299, .adv_w = 351, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6489, .adv_w = 152, .box_w = 7, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6565, .adv_w = 261, .box_w = 14, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6717, .adv_w = 380, .box_w = 21, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6945, .adv_w = 308, .box_w = 17, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7135, .adv_w = 481, .box_w = 28, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7401, .adv_w = 373, .box_w = 21, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7629, .adv_w = 348, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7819, .adv_w = 346, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8009, .adv_w = 363, .box_w = 20, .box_h = 40, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8209, .adv_w = 365, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8399, .adv_w = 360, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8589, .adv_w = 344, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8779, .adv_w = 348, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8969, .adv_w = 402, .box_w = 23, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9197, .adv_w = 527, .box_w = 31, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9501, .adv_w = 395, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9729, .adv_w = 394, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9957, .adv_w = 325, .box_w = 18, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10147, .adv_w = 214, .box_w = 11, .box_h = 41, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10270, .adv_w = 385, .box_w = 22, .box_h = 42, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 10522, .adv_w = 213, .box_w = 11, .box_h = 41, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10645, .adv_w = 255, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 33},
    {.bitmap_index = 10689, .adv_w = 524, .box_w = 30, .box_h = 5, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 10729, .adv_w = 194, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 34},
    {.bitmap_index = 10756, .adv_w = 388, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10984, .adv_w = 366, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11174, .adv_w = 348, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11364, .adv_w = 346, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11554, .adv_w = 319, .box_w = 17, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11744, .adv_w = 319, .box_w = 17, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11934, .adv_w = 348, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12124, .adv_w = 351, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12314, .adv_w = 152, .box_w = 7, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12390, .adv_w = 261, .box_w = 14, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12542, .adv_w = 380, .box_w = 21, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12770, .adv_w = 308, .box_w = 17, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12960, .adv_w = 481, .box_w = 28, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13226, .adv_w = 373, .box_w = 21, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13454, .adv_w = 348, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13644, .adv_w = 346, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13834, .adv_w = 363, .box_w = 20, .box_h = 40, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 14034, .adv_w = 365, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14224, .adv_w = 360, .box_w = 20, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14414, .adv_w = 344, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14604, .adv_w = 348, .box_w = 19, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14794, .adv_w = 402, .box_w = 23, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15022, .adv_w = 527, .box_w = 31, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15326, .adv_w = 395, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15554, .adv_w = 394, .box_w = 22, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15782, .adv_w = 325, .box_w = 18, .box_h = 38, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15972, .adv_w = 256, .box_w = 14, .box_h = 41, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16136, .adv_w = 148, .box_w = 7, .box_h = 54, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 16244, .adv_w = 256, .box_w = 14, .box_h = 41, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16408, .adv_w = 354, .box_w = 20, .box_h = 7, .ofs_x = 1, .ofs_y = 38},
    {.bitmap_index = 16443, .adv_w = 244, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 0, 0, 0, 0, 0,
    0, 0, 11, 12, 13, 14, 15, 16,
    17, 18, 18, 19, 20, 21, 2, 2,
    1, 22, 23, 24, 25, 26, 19, 27,
    28, 29, 30, 31, 0, 0, 0, 0,
    0, 0, 11, 12, 13, 14, 15, 16,
    17, 18, 18, 19, 20, 21, 2, 2,
    1, 22, 23, 24, 25, 26, 19, 27,
    28, 29, 30, 31, 0, 0, 0, 0,
    0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 0, 0, 0, 0, 0,
    0, 0, 11, 12, 13, 12, 12, 12,
    13, 14, 14, 15, 12, 14, 12, 12,
    16, 14, 16, 14, 17, 18, 19, 20,
    21, 22, 23, 24, 0, 0, 0, 0,
    0, 0, 11, 12, 13, 12, 12, 12,
    13, 14, 14, 15, 12, 14, 12, 12,
    16, 14, 16, 14, 17, 18, 19, 20,
    21, 22, 23, 24, 0, 0, 0, 0,
    0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    13, 9, 8, 0, 0, 10, 13, 0,
    12, 11, 0, 14, 13, 14, 0, 13,
    10, 0, 13, 0, 0, -18, -18, 0,
    14, 10, 10, 8, 8, 11, 14, 0,
    13, 12, 11, 15, 14, 15, 0, 14,
    11, 8, 15, 11, 11, 10, 8, 10,
    10, 0, 0, 0, -46, 0, 10, 0,
    0, 8, 0, 11, 10, 11, 0, 10,
    0, 0, 11, -9, -8, 0, -24, 0,
    12, 0, 0, 0, 0, 10, 12, 0,
    11, 10, 0, 13, 12, 13, -9, 12,
    9, 0, 13, -10, -8, -20, -22, 0,
    10, -36, -13, 0, 0, 8, 10, -39,
    9, 8, -8, 11, 10, 11, -38, 10,
    0, -37, 11, -35, -34, -29, -37, 0,
    11, 0, 0, 0, 0, 9, 11, 0,
    10, 9, 0, 12, 11, 12, -10, 11,
    0, 0, 11, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 9, 11, 0,
    10, 9, 0, 12, 11, 12, -9, 11,
    8, 0, 11, 0, 0, -19, -19, 0,
    0, 0, 0, -10, -46, 0, 0, 0,
    0, 0, -55, 11, 0, 11, -76, 0,
    0, 0, 10, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 10, 12, 0,
    11, 10, 0, 13, 12, 13, -8, 12,
    9, 0, 13, -10, -9, -19, -22, 0,
    13, 9, 8, 0, 0, 11, 13, 0,
    12, 11, 0, 14, 13, 14, 0, 13,
    10, 0, 13, 0, 0, -18, -17, 0,
    0, -49, 0, -10, -11, 0, 0, -37,
    0, 0, 0, 11, 0, 11, 0, 0,
    -11, -57, 0, -64, -64, 0, -67, 0,
    12, 0, 0, 0, 0, 9, 12, -11,
    11, 10, 0, 13, 12, 13, -12, 12,
    8, -10, 12, -17, -15, -23, -31, 0,
    8, 0, 0, 0, 0, 0, 8, 0,
    8, 0, -8, 10, 8, 10, -11, 8,
    0, 0, 9, -9, -8, -23, -23, 0,
    13, 8, 0, 0, 0, 10, 13, 0,
    12, 11, 0, 14, 13, 14, -9, 13,
    10, 0, 13, 0, 0, -21, -20, 0,
    0, 0, 0, 0, -41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, -16, -43, 0, 0, 0,
    0, 0, -60, 0, 0, 0, -82, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 10, 12, 0,
    11, 10, 0, 13, 12, 13, -8, 12,
    8, 0, 12, 0, 0, -19, -19, 0,
    14, 10, 10, 8, 8, 11, 14, 0,
    13, 12, 11, 15, 14, 15, 0, 14,
    11, 8, 15, 11, 11, 10, 8, 10,
    13, 9, 8, 0, 8, 11, 13, 0,
    13, 11, 0, 15, 13, 15, 0, 13,
    10, 8, 14, 10, 11, 10, 8, 10,
    -21, -38, 0, -27, -35, -16, -20, -14,
    -21, -22, 0, 9, -21, 9, 0, -21,
    -29, -13, 0, -10, -10, 0, -13, 0,
    0, -56, 0, 0, -114, 0, 0, -44,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, -71, 0, -65, -60, 0, -89, 0,
    0, 0, 0, -9, -31, 0, 0, 0,
    0, 0, -38, 8, 0, 8, -79, 0,
    0, 0, 8, -11, -10, -25, -25, 0,
    0, 0, 8, 0, 0, 0, 0, -10,
    0, 0, 9, 13, 0, 13, 0, 0,
    0, -8, 0, -16, -15, 9, -30, 9,
    0, 0, 0, -15, -18, -11, 0, -13,
    -8, 0, 8, 12, 0, 12, 0, 0,
    -12, -11, 0, -20, -19, 8, -32, 8,
    9, 0, 0, 0, 0, 0, 10, 0,
    8, 0, -8, 10, 9, 10, -11, 9,
    0, 0, 10, -12, -11, -22, -25, 0,
    0, 0, 0, -13, -67, 0, 0, 0,
    0, 0, -57, 8, 0, 8, -68, 0,
    0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, -13, -21, -44, 0, 0, 0,
    -10, 0, -65, 11, 0, 11, -72, 0,
    -16, 0, 10, 0, 0, 0, 0, 0,
    0, 0, -10, -19, -37, 0, 0, 0,
    -8, 0, -59, 11, 0, 11, -62, 0,
    -13, 0, 11, 0, 0, 0, 0, 0,
    -18, -16, 0, -24, -32, 0, -17, 0,
    -19, -19, 0, 10, -18, 10, 0, -18,
    -27, 0, 10, 0, 0, 0, 0, 0,
    -18, -16, -27, -33, -86, 0, -17, 0,
    -23, -19, -68, 8, -18, 8, -79, -18,
    -29, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -76, 0, 0, 0,
    0, 0, 0, 10, 0, 10, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 31,
    .right_class_cnt     = 24,
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
    .kern_scale = 20,
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
const lv_font_t ui_font_BEBAS_42 = {
#else
lv_font_t ui_font_BEBAS_42 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 57,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_BEBAS_42*/
