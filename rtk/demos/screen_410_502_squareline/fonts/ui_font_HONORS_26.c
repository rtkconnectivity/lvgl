/*******************************************************************************
 * Size: 26 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 26 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_26.c --no-prefilter --force-fast-kern-format --symbols ℃
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

#ifndef UI_FONT_HONORS_26
#define UI_FONT_HONORS_26 1
#endif

#if UI_FONT_HONORS_26


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_26_glyph_bitmap.bin
 *Define UI_FONT_HONORS_26_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_26_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_26_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_26_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_26_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 99, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 125, .box_w = 4, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 143, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 33, .adv_w = 262, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 233, .box_w = 14, .box_h = 23, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 201, .adv_w = 368, .box_w = 23, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 290, .box_w = 19, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 72, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 417, .adv_w = 126, .box_w = 7, .box_h = 25, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 467, .adv_w = 126, .box_w = 7, .box_h = 25, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 517, .adv_w = 196, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 547, .adv_w = 246, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 603, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 619, .adv_w = 206, .box_w = 11, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 628, .adv_w = 116, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 171, .box_w = 11, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 243, .box_w = 7, .box_h = 19, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 959, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1035, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1111, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1263, .adv_w = 243, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1339, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1415, .adv_w = 125, .box_w = 4, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1429, .adv_w = 124, .box_w = 4, .box_h = 18, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1447, .adv_w = 270, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1507, .adv_w = 245, .box_w = 15, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1535, .adv_w = 270, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1595, .adv_w = 216, .box_w = 13, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1671, .adv_w = 334, .box_w = 21, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1785, .adv_w = 287, .box_w = 18, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1880, .adv_w = 271, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1956, .adv_w = 290, .box_w = 18, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2051, .adv_w = 306, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2146, .adv_w = 254, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2222, .adv_w = 234, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2298, .adv_w = 297, .box_w = 18, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2393, .adv_w = 293, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2469, .adv_w = 96, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2488, .adv_w = 207, .box_w = 12, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2545, .adv_w = 265, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2621, .adv_w = 226, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2697, .adv_w = 361, .box_w = 20, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2792, .adv_w = 296, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2868, .adv_w = 329, .box_w = 20, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2963, .adv_w = 262, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3039, .adv_w = 329, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3144, .adv_w = 277, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3220, .adv_w = 236, .box_w = 14, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3296, .adv_w = 244, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3372, .adv_w = 298, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3448, .adv_w = 273, .box_w = 17, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3543, .adv_w = 406, .box_w = 26, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3676, .adv_w = 263, .box_w = 17, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3771, .adv_w = 258, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3847, .adv_w = 239, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3923, .adv_w = 129, .box_w = 6, .box_h = 24, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3971, .adv_w = 171, .box_w = 11, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4028, .adv_w = 129, .box_w = 6, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4076, .adv_w = 245, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 4120, .adv_w = 222, .box_w = 14, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4132, .adv_w = 139, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 16},
    {.bitmap_index = 4140, .adv_w = 226, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4196, .adv_w = 251, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4276, .adv_w = 213, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4332, .adv_w = 251, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4412, .adv_w = 230, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4468, .adv_w = 129, .box_w = 9, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4528, .adv_w = 248, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4604, .adv_w = 239, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4684, .adv_w = 106, .box_w = 5, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4722, .adv_w = 100, .box_w = 7, .box_h = 24, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 4770, .adv_w = 223, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4850, .adv_w = 94, .box_w = 4, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4870, .adv_w = 380, .box_w = 22, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4954, .adv_w = 240, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5010, .adv_w = 242, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5066, .adv_w = 253, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 5142, .adv_w = 253, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5218, .adv_w = 153, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5260, .adv_w = 194, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5302, .adv_w = 154, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5356, .adv_w = 235, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5398, .adv_w = 208, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5454, .adv_w = 321, .box_w = 20, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5524, .adv_w = 230, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5580, .adv_w = 212, .box_w = 14, .box_h = 19, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5656, .adv_w = 201, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5698, .adv_w = 129, .box_w = 8, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5746, .adv_w = 95, .box_w = 4, .box_h = 22, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5768, .adv_w = 129, .box_w = 8, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5816, .adv_w = 245, .box_w = 15, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 5836, .adv_w = 395, .box_w = 24, .box_h = 23, .ofs_x = 0, .ofs_y = -1}
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
    0, 0, 0, -17, 0, -25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -21, 0, 0,
    0, 0, -17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -17, 0, 0, 0, -5, -1, 0,
    -28, -1, -17, -8, 0, -21, 0, 0,
    -1, 0, -2, 0, 0, -1, 0, -1,
    0, 0, 0, 0, -2, -2, -3, -3,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -17, 0, -5, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -12, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, -1, -1, -2, 0, 0, -1,
    0, -1, 0, 0, -2, -2, -2, -2,
    0, 0, 0, 0, -20, -5, 0, 0,
    0, -21, 0, -5, 0, 0, -17, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -21,
    -10, 0, -33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -16, 0, -16, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -2, -2, -4, -4, 0,
    -3, 0, 0, -30, 0, 0, 0, -17,
    0, 0, -37, 0, -32, -21, 0, -33,
    0, 0, 0, 0, -15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    -19, -23, 0, -19, 0, 0, 0, 0,
    -29, -24, 0, -15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -17, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -16, 0, -6, 0, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -8, 0, -19, 0, -5, -8, 0,
    -12, -7, 0, -2, 0, -13, 0, 0,
    -2, -1, 0, 0, -1, 0, -2, 0,
    -1, -1, 0, 0, -1, 0, 0, 0,
    0, -29, -22, -14, -38, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -22, 0,
    -7, 0, 0, -17, -1, 0, 0, -27,
    0, -33, -20, -27, -15, -15, -16, -15,
    -17, 0, 0, 0, -12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, -29,
    -28, -8, -35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -22, 0, -22, 0,
    0, 0, 0, 0, 0, -2, -2, -17,
    0, -17, -1, -1, -2, -1, -2, 0,
    0, 0, -21, -8, 0, -25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -15,
    0, -13, 0, 0, 0, 0, 0, 0,
    -2, -2, -2, 0, 0, -1, 0, 0,
    -1, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, -14, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -29, -32, -8, -35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -23, 0, -42,
    0, 0, -8, 0, 0, 0, -30, -3,
    -29, 0, -22, -10, -10, -11, -10, -10,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, -17, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, -8,
    -6, -9, -5, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -4, 0, 0, -1, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, -5, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -2, -1, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 14, 0, 10, 14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -4, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -4, 0, 0, -4, 0,
    -12, 0, -1, -8, -2, 0, 0, -5,
    -1, -5, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, 0, -15, 0,
    0, -2, -2, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, -8, -8, -8,
    -8, 0, 0, 2, 16, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, -1,
    0, 17, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, -21, 0, 0, 0, 0,
    0, 0, -1, 0, 0, -3, 0, 0,
    -2, 0, -9, 0, 0, 0, -1, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -17, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    -3, 0, 0, -10, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -2, -3, -3, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -4, 0, 0, -12, 0,
    -9, 0, 0, -1, 0, 0, 0, -1,
    0, -5, 0, -1, -4, -4, 0, 0,
    0, 0, 0, 0, -21, 0, 0, 0,
    0, -2, 0, -1, 0, 0, -3, 0,
    0, -2, 0, -6, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -3, 0, 0, -4, 0, -7, 0,
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
const lv_font_t ui_font_HONORS_26 = {
#else
lv_font_t ui_font_HONORS_26 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 27,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_HONORS_26*/
