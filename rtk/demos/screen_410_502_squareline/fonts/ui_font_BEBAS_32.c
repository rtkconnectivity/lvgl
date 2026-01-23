/*******************************************************************************
 * Size: 32 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 32 --font lvgl_font_src/BEBAS___.TTF -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_BEBAS_32.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_BEBAS_32
#define UI_FONT_BEBAS_32 1
#endif

#if UI_FONT_BEBAS_32


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_BEBAS_32_glyph_bitmap.bin
 *Define UI_FONT_BEBAS_32_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_BEBAS_32_GLYPH_BITMAP_BIN
#define UI_FONT_BEBAS_32_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_BEBAS_32_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_BEBAS_32_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 47, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 116, .box_w = 5, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 192, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 27},
    {.bitmap_index = 79, .adv_w = 420, .box_w = 24, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 275, .box_w = 15, .box_h = 33, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 385, .adv_w = 364, .box_w = 21, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 317, .box_w = 18, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 111, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 27},
    {.bitmap_index = 740, .adv_w = 184, .box_w = 9, .box_h = 36, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 848, .adv_w = 183, .box_w = 9, .box_h = 36, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 956, .adv_w = 228, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 18},
    {.bitmap_index = 989, .adv_w = 281, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1049, .adv_w = 116, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1067, .adv_w = 251, .box_w = 14, .box_h = 5, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 1087, .adv_w = 116, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1097, .adv_w = 293, .box_w = 16, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1225, .adv_w = 265, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1341, .adv_w = 175, .box_w = 9, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1428, .adv_w = 271, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1544, .adv_w = 270, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1660, .adv_w = 281, .box_w = 16, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1776, .adv_w = 260, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1892, .adv_w = 255, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2008, .adv_w = 254, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2124, .adv_w = 271, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2240, .adv_w = 255, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2356, .adv_w = 116, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2390, .adv_w = 116, .box_w = 5, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2432, .adv_w = 275, .box_w = 15, .box_h = 17, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2500, .adv_w = 281, .box_w = 16, .box_h = 10, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 2540, .adv_w = 275, .box_w = 15, .box_h = 17, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2608, .adv_w = 264, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2724, .adv_w = 512, .box_w = 30, .box_h = 33, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2988, .adv_w = 296, .box_w = 16, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3104, .adv_w = 279, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3220, .adv_w = 265, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3336, .adv_w = 263, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3452, .adv_w = 243, .box_w = 13, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3568, .adv_w = 243, .box_w = 13, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3684, .adv_w = 265, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3800, .adv_w = 268, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3916, .adv_w = 116, .box_w = 5, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3974, .adv_w = 199, .box_w = 10, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4061, .adv_w = 289, .box_w = 16, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4177, .adv_w = 235, .box_w = 13, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4293, .adv_w = 366, .box_w = 21, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4467, .adv_w = 284, .box_w = 16, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4583, .adv_w = 265, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4699, .adv_w = 263, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4815, .adv_w = 277, .box_w = 15, .box_h = 31, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4939, .adv_w = 278, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5055, .adv_w = 275, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5171, .adv_w = 262, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5287, .adv_w = 265, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5403, .adv_w = 306, .box_w = 17, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5548, .adv_w = 402, .box_w = 23, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5722, .adv_w = 301, .box_w = 17, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5867, .adv_w = 300, .box_w = 17, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6012, .adv_w = 248, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6128, .adv_w = 163, .box_w = 8, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6190, .adv_w = 293, .box_w = 16, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6318, .adv_w = 163, .box_w = 8, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6380, .adv_w = 194, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 25},
    {.bitmap_index = 6404, .adv_w = 399, .box_w = 23, .box_h = 4, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 6428, .adv_w = 148, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 26},
    {.bitmap_index = 6442, .adv_w = 296, .box_w = 16, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6558, .adv_w = 279, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6674, .adv_w = 265, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6790, .adv_w = 263, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6906, .adv_w = 243, .box_w = 13, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7022, .adv_w = 243, .box_w = 13, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7138, .adv_w = 265, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7254, .adv_w = 268, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7370, .adv_w = 116, .box_w = 5, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7428, .adv_w = 199, .box_w = 10, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7515, .adv_w = 289, .box_w = 16, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7631, .adv_w = 235, .box_w = 13, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7747, .adv_w = 366, .box_w = 21, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7921, .adv_w = 284, .box_w = 16, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8037, .adv_w = 265, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8153, .adv_w = 263, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8269, .adv_w = 277, .box_w = 15, .box_h = 31, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8393, .adv_w = 278, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8509, .adv_w = 275, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8625, .adv_w = 262, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8741, .adv_w = 265, .box_w = 15, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8857, .adv_w = 306, .box_w = 17, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9002, .adv_w = 402, .box_w = 23, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9176, .adv_w = 301, .box_w = 17, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9321, .adv_w = 300, .box_w = 17, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9466, .adv_w = 248, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9582, .adv_w = 195, .box_w = 10, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9678, .adv_w = 113, .box_w = 5, .box_h = 41, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 9760, .adv_w = 195, .box_w = 10, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9856, .adv_w = 270, .box_w = 15, .box_h = 6, .ofs_x = 1, .ofs_y = 29},
    {.bitmap_index = 9880, .adv_w = 186, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
    12, 8, 7, 0, 0, 10, 12, 0,
    11, 11, 0, 13, 12, 13, 0, 12,
    9, 0, 13, 0, 0, -17, -17, 0,
    13, 9, 9, 7, 8, 11, 13, 0,
    13, 12, 10, 14, 13, 14, 0, 13,
    10, 8, 14, 10, 11, 10, 8, 10,
    9, 0, 0, 0, -44, 0, 9, 0,
    0, 8, 0, 10, 9, 11, 0, 9,
    0, 0, 10, -9, -8, 0, -23, 0,
    11, 0, 0, 0, 0, 9, 12, 0,
    11, 10, 0, 12, 11, 13, -8, 11,
    8, 0, 12, -9, -8, -19, -21, 0,
    9, -34, -13, 0, 0, 7, 9, -37,
    9, 8, -8, 11, 9, 11, -36, 9,
    0, -35, 10, -33, -33, -28, -36, 0,
    11, 0, 0, 0, 0, 8, 11, 0,
    10, 9, 0, 12, 11, 11, -9, 11,
    0, 0, 11, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 8, 11, 0,
    10, 9, 0, 12, 11, 12, -8, 11,
    7, 0, 11, 0, 0, -19, -18, 0,
    0, 0, 0, -9, -44, 0, 0, 0,
    0, 0, -52, 10, 0, 10, -73, 0,
    0, 0, 10, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 9, 12, 0,
    11, 10, 0, 13, 11, 13, -8, 11,
    8, 0, 12, -9, -8, -18, -21, 0,
    12, 8, 7, 0, 0, 10, 12, 0,
    12, 11, 0, 13, 12, 13, 0, 12,
    9, 0, 13, 0, 0, -17, -16, 0,
    0, -47, 0, -9, -10, 0, 0, -36,
    0, 0, 0, 11, 0, 11, 0, 0,
    -10, -54, 0, -61, -61, 0, -64, 0,
    11, 0, 0, 0, 0, 9, 11, -11,
    11, 9, 0, 12, 11, 12, -12, 11,
    8, -9, 12, -16, -15, -22, -30, 0,
    8, 0, 0, 0, 0, 0, 8, 0,
    7, 0, -8, 9, 8, 9, -11, 8,
    0, 0, 9, -9, -8, -21, -21, 0,
    12, 8, 0, 0, 0, 10, 12, 0,
    11, 11, 0, 13, 12, 13, -9, 12,
    9, 0, 13, 0, 0, -20, -19, 0,
    0, 0, 0, 0, -39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, -15, -41, 0, 0, 0,
    0, 0, -57, 0, 0, 0, -78, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 9, 11, 0,
    11, 9, 0, 12, 11, 12, -8, 11,
    8, 0, 12, 0, 0, -18, -19, 0,
    13, 9, 9, 8, 8, 11, 13, 0,
    13, 12, 10, 14, 13, 14, 0, 13,
    10, 8, 14, 10, 11, 10, 8, 10,
    13, 9, 8, 0, 8, 11, 13, 0,
    12, 11, 0, 14, 13, 14, 0, 13,
    9, 8, 13, 10, 10, 9, 7, 9,
    -20, -36, 0, -26, -33, -15, -19, -13,
    -20, -21, 0, 9, -20, 8, 0, -20,
    -28, -12, 0, -10, -10, 0, -12, 0,
    0, -53, 0, 0, -109, 0, 0, -42,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, -68, 0, -61, -57, 0, -85, 0,
    0, 0, 0, -8, -30, 0, 0, 0,
    0, 0, -36, 8, 0, 8, -75, 0,
    0, 0, 7, -11, -9, -24, -24, 0,
    0, 0, 8, 0, 0, 0, 0, -9,
    0, 0, 9, 12, 0, 13, 0, 0,
    0, -8, 0, -16, -15, 8, -28, 8,
    0, 0, 0, -14, -17, -10, 0, -12,
    -7, 0, 8, 12, 0, 12, 0, 0,
    -12, -11, 0, -19, -18, 7, -31, 8,
    9, 0, 0, 0, 0, 0, 9, 0,
    8, 0, -8, 10, 9, 10, -11, 9,
    0, 0, 9, -11, -10, -21, -24, 0,
    0, 0, 0, -12, -64, 0, 0, 0,
    0, 0, -55, 8, 0, 8, -64, 0,
    0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, -12, -20, -42, 0, 0, 0,
    -9, 0, -62, 10, 0, 10, -69, 0,
    -15, 0, 10, 0, 0, 0, 0, 0,
    0, 0, -10, -18, -35, 0, 0, 0,
    -7, 0, -56, 11, 0, 11, -59, 0,
    -13, 0, 10, 0, 0, 0, 0, 0,
    -17, -15, 0, -23, -30, 0, -16, 0,
    -18, -19, 0, 10, -17, 10, 0, -17,
    -26, 0, 9, 0, 0, 0, 0, 0,
    -17, -15, -26, -32, -82, 0, -16, 0,
    -21, -19, -65, 8, -17, 8, -75, -17,
    -27, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -72, 0, 0, 0,
    0, 0, 0, 10, 0, 10, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0
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
const lv_font_t ui_font_BEBAS_32 = {
#else
lv_font_t ui_font_BEBAS_32 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 44,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_BEBAS_32*/
