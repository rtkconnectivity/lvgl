/*******************************************************************************
 * Size: 28 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 28 --font lvgl_font_src/HONORSansCN-DemiBold.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_D_28.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONORS_D_28
#define UI_FONT_HONORS_D_28 1
#endif

#if UI_FONT_HONORS_D_28


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_D_28_glyph_bitmap.bin
 *Define UI_FONT_HONORS_D_28_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_D_28_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_D_28_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_D_28_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_D_28_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 107, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 140, .box_w = 5, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 167, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 68, .adv_w = 285, .box_w = 18, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 258, .box_w = 16, .box_h = 27, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 286, .adv_w = 408, .box_w = 25, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 314, .box_w = 20, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 82, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 558, .adv_w = 144, .box_w = 8, .box_h = 28, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 614, .adv_w = 144, .box_w = 8, .box_h = 28, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 670, .adv_w = 215, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 718, .adv_w = 267, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 782, .adv_w = 116, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 802, .adv_w = 220, .box_w = 12, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 811, .adv_w = 129, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 190, .box_w = 12, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 266, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 266, .box_w = 8, .box_h = 22, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 266, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1107, .adv_w = 266, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1195, .adv_w = 266, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1283, .adv_w = 266, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1371, .adv_w = 266, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1459, .adv_w = 266, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1547, .adv_w = 266, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1635, .adv_w = 266, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1723, .adv_w = 140, .box_w = 5, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1755, .adv_w = 138, .box_w = 5, .box_h = 21, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1797, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1869, .adv_w = 265, .box_w = 16, .box_h = 8, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1901, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1973, .adv_w = 235, .box_w = 14, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2061, .adv_w = 361, .box_w = 22, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2193, .adv_w = 318, .box_w = 20, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2303, .adv_w = 296, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2391, .adv_w = 314, .box_w = 20, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2501, .adv_w = 332, .box_w = 18, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2611, .adv_w = 277, .box_w = 15, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2699, .adv_w = 256, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2787, .adv_w = 323, .box_w = 20, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2897, .adv_w = 319, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3007, .adv_w = 110, .box_w = 5, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3051, .adv_w = 227, .box_w = 13, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3139, .adv_w = 295, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3249, .adv_w = 250, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3337, .adv_w = 394, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3469, .adv_w = 323, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3579, .adv_w = 356, .box_w = 22, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3711, .adv_w = 288, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3799, .adv_w = 356, .box_w = 22, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3943, .adv_w = 305, .box_w = 17, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4053, .adv_w = 260, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4141, .adv_w = 265, .box_w = 17, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4251, .adv_w = 324, .box_w = 18, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4361, .adv_w = 302, .box_w = 19, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4471, .adv_w = 445, .box_w = 28, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4625, .adv_w = 297, .box_w = 19, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4735, .adv_w = 288, .box_w = 18, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4845, .adv_w = 262, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4933, .adv_w = 146, .box_w = 7, .box_h = 27, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 4987, .adv_w = 190, .box_w = 12, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5053, .adv_w = 146, .box_w = 7, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 5107, .adv_w = 267, .box_w = 17, .box_h = 12, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 5167, .adv_w = 243, .box_w = 16, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 5179, .adv_w = 153, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 18},
    {.bitmap_index = 5189, .adv_w = 246, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5253, .adv_w = 273, .box_w = 16, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5341, .adv_w = 232, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5405, .adv_w = 273, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5493, .adv_w = 249, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5557, .adv_w = 146, .box_w = 10, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5623, .adv_w = 271, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 5711, .adv_w = 261, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5799, .adv_w = 119, .box_w = 5, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5843, .adv_w = 119, .box_w = 8, .box_h = 28, .ofs_x = -2, .ofs_y = -6},
    {.bitmap_index = 5899, .adv_w = 248, .box_w = 15, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5987, .adv_w = 107, .box_w = 5, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6031, .adv_w = 410, .box_w = 24, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6127, .adv_w = 260, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6191, .adv_w = 262, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6255, .adv_w = 275, .box_w = 16, .box_h = 22, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 6343, .adv_w = 275, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 6431, .adv_w = 171, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6479, .adv_w = 213, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6543, .adv_w = 169, .box_w = 11, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6606, .adv_w = 257, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6670, .adv_w = 232, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6734, .adv_w = 351, .box_w = 22, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6830, .adv_w = 253, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6894, .adv_w = 236, .box_w = 15, .box_h = 22, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 6982, .adv_w = 219, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7046, .adv_w = 146, .box_w = 10, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7127, .adv_w = 107, .box_w = 4, .box_h = 25, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 7152, .adv_w = 146, .box_w = 9, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7233, .adv_w = 267, .box_w = 16, .box_h = 6, .ofs_x = 0, .ofs_y = 7}
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
    0, 0, 0, -18, 0, -27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -22, 0, 0,
    0, 0, -18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -18, 0, 0, 0, -5, -2, 0,
    -32, -2, -20, -9, 0, -22, 0, 0,
    -2, 0, -4, 0, 0, -3, 0, -3,
    0, 0, 0, 0, -4, -4, -6, -6,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -18, 0, -6, 0, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -1, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -9, 0,
    0, 0, 0, -7, 0, 0, -1, 0,
    0, 0, -3, -3, -4, 0, 0, -2,
    0, -3, 0, 0, -4, -4, -4, -4,
    0, 0, 0, 0, -21, -5, 0, 0,
    0, -20, 0, -4, 0, 0, -18, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -22,
    -13, 0, -36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -16, 0, -16, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, -17, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -4, -4, -8, -8, 0,
    -7, 0, 0, -29, 0, 0, 0, -16,
    0, 0, -40, 0, -34, -22, 0, -36,
    0, 0, 0, 0, -12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    -19, -23, 0, -19, 0, 0, 0, 0,
    -31, -27, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -18, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -16, 0, -8, 0, 0, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -9, 0, -21, 0, -6, -9, 0,
    -13, -8, 0, -4, 0, -14, 0, 0,
    -4, -3, 0, 0, -2, 0, -4, 0,
    -3, -2, 0, 0, -2, 0, 0, 0,
    0, -31, -24, -14, -40, 0, 0, 0,
    0, 0, 0, -1, 0, 0, -22, 0,
    -3, 0, 0, -16, -2, 0, 0, -28,
    0, -36, -16, -28, -14, -15, -16, -14,
    -18, 0, 0, 0, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -31,
    -32, -9, -39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -26, 0, -26, 0,
    0, 0, 0, 0, 0, -4, -4, -20,
    0, -18, -3, -3, -4, -3, -4, 0,
    0, 0, -22, -9, 0, -27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -20,
    0, -15, 0, 0, 0, 0, 0, 0,
    -4, -4, -4, 0, 0, -3, 0, 0,
    -3, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, -17, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -31, -36, -9, -39, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -30, 0, -46,
    0, 0, -9, 0, 0, 0, -30, -6,
    -31, 0, -24, -13, -13, -15, -13, -13,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, -13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, -2, -2,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, -6, 0, 0, -11, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, -9,
    -7, -10, -5, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -9, 0, 0, -2, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, -11, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -4, -3, -6,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 17, 0, 13, 17,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -4, -1, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, -9, 0, 0, -4, -1,
    -14, 0, -3, -10, -4, 0, 0, -6,
    -3, -7, 0, 0, 0, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -18,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, 0, -14, 0,
    0, -4, -4, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -9, -8, -9,
    -9, 0, 0, 4, 18, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, -2,
    0, 22, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -6, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -22, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -6, 0, 0,
    -4, 0, -10, 0, 0, 0, -3, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -18, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -6, 0, 0, -12, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -3, -5, -3, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -8, 0, 0, -14, 0,
    -10, 0, 0, -2, -1, -1, -1, -3,
    0, -7, -1, -2, -4, -4, 0, 0,
    0, 0, 0, 0, -22, 0, 0, 0,
    0, -4, 0, -3, 0, 0, -6, 0,
    0, -4, 0, -7, 2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -3, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -6, 0, 0, -4, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0,
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
const lv_font_t ui_font_HONORS_D_28 = {
#else
lv_font_t ui_font_HONORS_D_28 = {
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



#endif /*#if UI_FONT_HONORS_D_28*/
