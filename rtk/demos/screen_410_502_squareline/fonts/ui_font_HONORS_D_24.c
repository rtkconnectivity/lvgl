/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 24 --font lvgl_font_src/HONORSansCN-DemiBold.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_D_24.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONORS_D_24
#define UI_FONT_HONORS_D_24 1
#endif

#if UI_FONT_HONORS_D_24


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_D_24_glyph_bitmap.bin
 *Define UI_FONT_HONORS_D_24_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_D_24_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_D_24_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_D_24_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_D_24_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 92, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 120, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 143, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 50, .adv_w = 245, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 222, .box_w = 14, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 210, .adv_w = 350, .box_w = 22, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 269, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 415, .adv_w = 123, .box_w = 7, .box_h = 23, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 461, .adv_w = 123, .box_w = 7, .box_h = 23, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 507, .adv_w = 184, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 537, .adv_w = 228, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 589, .adv_w = 100, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 597, .adv_w = 189, .box_w = 10, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 606, .adv_w = 110, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 163, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 228, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 228, .box_w = 8, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 228, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 228, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 228, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 938, .adv_w = 228, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 992, .adv_w = 228, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1064, .adv_w = 228, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 228, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1190, .adv_w = 228, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1262, .adv_w = 120, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 119, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1322, .adv_w = 249, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 227, .box_w = 14, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1414, .adv_w = 249, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1478, .adv_w = 202, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1532, .adv_w = 309, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1622, .adv_w = 273, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1712, .adv_w = 254, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1784, .adv_w = 270, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1874, .adv_w = 285, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1946, .adv_w = 238, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2018, .adv_w = 220, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2090, .adv_w = 277, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2180, .adv_w = 274, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2252, .adv_w = 94, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2270, .adv_w = 195, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2324, .adv_w = 253, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2396, .adv_w = 214, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2468, .adv_w = 338, .box_w = 19, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2558, .adv_w = 277, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2630, .adv_w = 305, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2720, .adv_w = 247, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2792, .adv_w = 305, .box_w = 19, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2892, .adv_w = 261, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2964, .adv_w = 223, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3036, .adv_w = 227, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3108, .adv_w = 278, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3180, .adv_w = 259, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3270, .adv_w = 382, .box_w = 24, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3378, .adv_w = 255, .box_w = 16, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3450, .adv_w = 247, .box_w = 16, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3522, .adv_w = 225, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3594, .adv_w = 126, .box_w = 6, .box_h = 22, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3638, .adv_w = 163, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3692, .adv_w = 126, .box_w = 6, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3736, .adv_w = 228, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 3776, .adv_w = 209, .box_w = 13, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3788, .adv_w = 131, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 15},
    {.bitmap_index = 3796, .adv_w = 211, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3835, .adv_w = 234, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3907, .adv_w = 199, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3959, .adv_w = 234, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4031, .adv_w = 214, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4083, .adv_w = 125, .box_w = 9, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4137, .adv_w = 232, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4209, .adv_w = 223, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4263, .adv_w = 102, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4299, .adv_w = 102, .box_w = 8, .box_h = 23, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 4345, .adv_w = 212, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4417, .adv_w = 91, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4435, .adv_w = 351, .box_w = 20, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4500, .adv_w = 223, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4539, .adv_w = 225, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4591, .adv_w = 235, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 4663, .adv_w = 235, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4735, .adv_w = 147, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4774, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4813, .adv_w = 145, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4864, .adv_w = 220, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4903, .adv_w = 199, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4955, .adv_w = 301, .box_w = 19, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5020, .adv_w = 217, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5072, .adv_w = 202, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5144, .adv_w = 188, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5183, .adv_w = 125, .box_w = 8, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5227, .adv_w = 92, .box_w = 4, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5247, .adv_w = 125, .box_w = 8, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5291, .adv_w = 228, .box_w = 14, .box_h = 4, .ofs_x = 0, .ofs_y = 6}
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
    0, 0, 0, -15, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -19, 0, 0,
    0, 0, -15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, 0, 0, -5, -2, 0,
    -27, -2, -17, -8, 0, -19, 0, 0,
    -2, 0, -3, 0, 0, -2, 0, -2,
    0, 0, 0, 0, -3, -3, -5, -5,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -15, 0, -5, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -1, 0, 0, 0,
    0, 0, -2, 0, 0, 0, -8, 0,
    0, 0, 0, -6, 0, 0, -1, 0,
    0, 0, -2, -2, -4, 0, 0, -2,
    0, -2, 0, 0, -3, -3, -4, -3,
    0, 0, 0, 0, -18, -5, 0, 0,
    0, -17, 0, -3, 0, 0, -15, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -19,
    -11, 0, -31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -14, 0, -14, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -14, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -3, -3, -7, -7, 0,
    -6, 0, 0, -25, 0, 0, 0, -13,
    0, 0, -35, 0, -29, -19, 0, -31,
    0, 0, 0, 0, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    -16, -20, 0, -16, 0, 0, 0, 0,
    -27, -23, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, 0, -7, 0, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -8, 0, -18, 0, -5, -8, 0,
    -12, -7, 0, -3, 0, -12, 0, 0,
    -3, -2, 0, 0, -2, 0, -3, 0,
    -2, -2, 0, 0, -2, 0, 0, 0,
    0, -27, -20, -12, -34, 0, 0, 0,
    0, 0, 0, -1, 0, 0, -19, 0,
    -3, 0, 0, -13, -2, 0, 0, -24,
    0, -31, -14, -24, -12, -13, -14, -12,
    -15, 0, 0, 0, -12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -27,
    -27, -8, -34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -22, 0, -22, 0,
    0, 0, 0, 0, 0, -4, -4, -17,
    0, -15, -2, -2, -4, -2, -3, 0,
    0, 0, -19, -8, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -17,
    0, -13, 0, 0, 0, 0, 0, 0,
    -3, -3, -4, 0, 0, -2, 0, 0,
    -2, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, -15, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -27, -31, -8, -34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -26, 0, -39,
    0, 0, -8, 0, 0, 0, -25, -5,
    -27, 0, -21, -12, -12, -13, -12, -12,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, -12, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, -8,
    -6, -8, -5, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -8, 0, 0, -2, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, -9, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -3, -2, -5,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 15, 0, 11, 15,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -4, -1, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, -8, 0, 0, -4, -1,
    -12, 0, -2, -9, -3, 0, 0, -5,
    -2, -6, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, -12, 0,
    0, -3, -3, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, -8, -7, -8,
    -8, 0, 0, 4, 16, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, -2,
    0, 19, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, -5, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -19, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -5, 0, 0,
    -4, 0, -8, 0, 0, 0, -2, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -15, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -5, 0, 0, -10, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -3, -4, -2, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -7, 0, 0, -12, 0,
    -8, 0, 0, -2, -1, -1, -1, -2,
    0, -6, -1, -2, -4, -4, 0, 0,
    0, 0, 0, 0, -19, 0, 0, 0,
    0, -3, 0, -2, 0, 0, -5, 0,
    0, -3, 0, -6, 2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -2, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -5, 0, 0, -3, 0, -6, 0,
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
const lv_font_t ui_font_HONORS_D_24 = {
#else
lv_font_t ui_font_HONORS_D_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 25,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_HONORS_D_24*/
