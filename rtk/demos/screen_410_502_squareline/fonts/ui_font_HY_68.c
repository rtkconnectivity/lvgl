/*******************************************************************************
 * Size: 68 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 68 --font lvgl_font_src/汉仪秦川飞影W.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HY_68.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HY_68
#define UI_FONT_HY_68 1
#endif

#if UI_FONT_HY_68


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HY_68_glyph_bitmap.bin
 *Define UI_FONT_HY_68_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HY_68_GLYPH_BITMAP_BIN
#define UI_FONT_HY_68_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HY_68_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HY_68_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 435, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 584, .box_w = 17, .box_h = 54, .ofs_x = 10, .ofs_y = -7},
    {.bitmap_index = 270, .adv_w = 562, .box_w = 19, .box_h = 22, .ofs_x = 8, .ofs_y = 26},
    {.bitmap_index = 380, .adv_w = 1088, .box_w = 44, .box_h = 58, .ofs_x = 12, .ofs_y = -10},
    {.bitmap_index = 1018, .adv_w = 653, .box_w = 33, .box_h = 48, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 1450, .adv_w = 880, .box_w = 45, .box_h = 50, .ofs_x = 5, .ofs_y = 4},
    {.bitmap_index = 2050, .adv_w = 834, .box_w = 42, .box_h = 47, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 2567, .adv_w = 338, .box_w = 11, .box_h = 23, .ofs_x = 5, .ofs_y = 24},
    {.bitmap_index = 2636, .adv_w = 837, .box_w = 30, .box_h = 58, .ofs_x = 13, .ofs_y = -10},
    {.bitmap_index = 3100, .adv_w = 1088, .box_w = 21, .box_h = 61, .ofs_x = 9, .ofs_y = -13},
    {.bitmap_index = 3466, .adv_w = 638, .box_w = 30, .box_h = 30, .ofs_x = 5, .ofs_y = 13},
    {.bitmap_index = 3706, .adv_w = 870, .box_w = 42, .box_h = 47, .ofs_x = 6, .ofs_y = -6},
    {.bitmap_index = 4223, .adv_w = 506, .box_w = 15, .box_h = 18, .ofs_x = 7, .ofs_y = -3},
    {.bitmap_index = 4295, .adv_w = 733, .box_w = 34, .box_h = 8, .ofs_x = 6, .ofs_y = 19},
    {.bitmap_index = 4367, .adv_w = 522, .box_w = 12, .box_h = 10, .ofs_x = 10, .ofs_y = 3},
    {.bitmap_index = 4397, .adv_w = 693, .box_w = 33, .box_h = 42, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 4775, .adv_w = 707, .box_w = 34, .box_h = 35, .ofs_x = 5, .ofs_y = 5},
    {.bitmap_index = 5090, .adv_w = 707, .box_w = 11, .box_h = 48, .ofs_x = 17, .ofs_y = -4},
    {.bitmap_index = 5234, .adv_w = 707, .box_w = 42, .box_h = 41, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5685, .adv_w = 707, .box_w = 40, .box_h = 42, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 6105, .adv_w = 707, .box_w = 34, .box_h = 47, .ofs_x = 5, .ofs_y = -5},
    {.bitmap_index = 6528, .adv_w = 707, .box_w = 38, .box_h = 45, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 6978, .adv_w = 707, .box_w = 29, .box_h = 46, .ofs_x = 8, .ofs_y = 4},
    {.bitmap_index = 7346, .adv_w = 707, .box_w = 35, .box_h = 49, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 7787, .adv_w = 707, .box_w = 40, .box_h = 44, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 8227, .adv_w = 707, .box_w = 28, .box_h = 56, .ofs_x = 8, .ofs_y = -9},
    {.bitmap_index = 8619, .adv_w = 565, .box_w = 12, .box_h = 23, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 8688, .adv_w = 1088, .box_w = 15, .box_h = 31, .ofs_x = 9, .ofs_y = -7},
    {.bitmap_index = 8812, .adv_w = 1088, .box_w = 38, .box_h = 30, .ofs_x = 15, .ofs_y = 8},
    {.bitmap_index = 9112, .adv_w = 801, .box_w = 38, .box_h = 23, .ofs_x = 6, .ofs_y = 12},
    {.bitmap_index = 9342, .adv_w = 1088, .box_w = 40, .box_h = 30, .ofs_x = 14, .ofs_y = 7},
    {.bitmap_index = 9642, .adv_w = 706, .box_w = 31, .box_h = 48, .ofs_x = 5, .ofs_y = -2},
    {.bitmap_index = 10026, .adv_w = 1009, .box_w = 53, .box_h = 47, .ofs_x = 5, .ofs_y = 5},
    {.bitmap_index = 10684, .adv_w = 696, .box_w = 33, .box_h = 46, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 11098, .adv_w = 783, .box_w = 39, .box_h = 41, .ofs_x = 5, .ofs_y = 2},
    {.bitmap_index = 11508, .adv_w = 682, .box_w = 37, .box_h = 38, .ofs_x = 5, .ofs_y = 4},
    {.bitmap_index = 11888, .adv_w = 712, .box_w = 38, .box_h = 43, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 12318, .adv_w = 899, .box_w = 46, .box_h = 43, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 12834, .adv_w = 782, .box_w = 39, .box_h = 48, .ofs_x = 5, .ofs_y = -2},
    {.bitmap_index = 13314, .adv_w = 817, .box_w = 44, .box_h = 49, .ofs_x = 5, .ofs_y = -3},
    {.bitmap_index = 13853, .adv_w = 755, .box_w = 37, .box_h = 47, .ofs_x = 5, .ofs_y = -2},
    {.bitmap_index = 14323, .adv_w = 398, .box_w = 14, .box_h = 39, .ofs_x = 6, .ofs_y = 4},
    {.bitmap_index = 14479, .adv_w = 828, .box_w = 41, .box_h = 44, .ofs_x = 5, .ofs_y = -2},
    {.bitmap_index = 14963, .adv_w = 629, .box_w = 29, .box_h = 38, .ofs_x = 5, .ofs_y = 2},
    {.bitmap_index = 15267, .adv_w = 685, .box_w = 32, .box_h = 38, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 15571, .adv_w = 972, .box_w = 51, .box_h = 45, .ofs_x = 5, .ofs_y = -2},
    {.bitmap_index = 16156, .adv_w = 776, .box_w = 38, .box_h = 51, .ofs_x = 5, .ofs_y = -7},
    {.bitmap_index = 16666, .adv_w = 625, .box_w = 29, .box_h = 35, .ofs_x = 5, .ofs_y = 4},
    {.bitmap_index = 16946, .adv_w = 682, .box_w = 32, .box_h = 48, .ofs_x = 5, .ofs_y = -6},
    {.bitmap_index = 17330, .adv_w = 757, .box_w = 37, .box_h = 41, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 17740, .adv_w = 761, .box_w = 42, .box_h = 48, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 18268, .adv_w = 692, .box_w = 33, .box_h = 37, .ofs_x = 5, .ofs_y = 3},
    {.bitmap_index = 18601, .adv_w = 767, .box_w = 38, .box_h = 44, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 19041, .adv_w = 695, .box_w = 33, .box_h = 43, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 19428, .adv_w = 619, .box_w = 28, .box_h = 38, .ofs_x = 5, .ofs_y = 2},
    {.bitmap_index = 19694, .adv_w = 908, .box_w = 46, .box_h = 40, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 20174, .adv_w = 790, .box_w = 39, .box_h = 43, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 20604, .adv_w = 762, .box_w = 37, .box_h = 49, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 21094, .adv_w = 898, .box_w = 46, .box_h = 42, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 21598, .adv_w = 763, .box_w = 28, .box_h = 58, .ofs_x = 13, .ofs_y = -18},
    {.bitmap_index = 22004, .adv_w = 712, .box_w = 34, .box_h = 43, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 22391, .adv_w = 665, .box_w = 22, .box_h = 60, .ofs_x = 6, .ofs_y = -18},
    {.bitmap_index = 22751, .adv_w = 702, .box_w = 34, .box_h = 22, .ofs_x = 4, .ofs_y = 19},
    {.bitmap_index = 22949, .adv_w = 1088, .box_w = 34, .box_h = 9, .ofs_x = 17, .ofs_y = -4},
    {.bitmap_index = 23030, .adv_w = 455, .box_w = 16, .box_h = 16, .ofs_x = 6, .ofs_y = 40},
    {.bitmap_index = 23094, .adv_w = 504, .box_w = 28, .box_h = 26, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 23276, .adv_w = 459, .box_w = 25, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 23577, .adv_w = 443, .box_w = 24, .box_h = 27, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 23739, .adv_w = 519, .box_w = 29, .box_h = 43, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 24083, .adv_w = 533, .box_w = 29, .box_h = 25, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 24283, .adv_w = 452, .box_w = 27, .box_h = 48, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 24619, .adv_w = 467, .box_w = 25, .box_h = 44, .ofs_x = 2, .ofs_y = -15},
    {.bitmap_index = 24927, .adv_w = 552, .box_w = 35, .box_h = 44, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25323, .adv_w = 308, .box_w = 13, .box_h = 37, .ofs_x = 4, .ofs_y = 3},
    {.bitmap_index = 25471, .adv_w = 412, .box_w = 30, .box_h = 51, .ofs_x = -5, .ofs_y = -11},
    {.bitmap_index = 25879, .adv_w = 467, .box_w = 28, .box_h = 38, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 26145, .adv_w = 245, .box_w = 12, .box_h = 38, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 26259, .adv_w = 659, .box_w = 40, .box_h = 30, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 26559, .adv_w = 549, .box_w = 33, .box_h = 31, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 26838, .adv_w = 504, .box_w = 28, .box_h = 29, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 27041, .adv_w = 514, .box_w = 29, .box_h = 49, .ofs_x = 1, .ofs_y = -19},
    {.bitmap_index = 27433, .adv_w = 477, .box_w = 26, .box_h = 46, .ofs_x = 2, .ofs_y = -14},
    {.bitmap_index = 27755, .adv_w = 562, .box_w = 34, .box_h = 34, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 28061, .adv_w = 508, .box_w = 30, .box_h = 30, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 28301, .adv_w = 564, .box_w = 34, .box_h = 41, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 28670, .adv_w = 469, .box_w = 27, .box_h = 28, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 28866, .adv_w = 465, .box_w = 28, .box_h = 41, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 29153, .adv_w = 582, .box_w = 35, .box_h = 28, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 29405, .adv_w = 558, .box_w = 33, .box_h = 34, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29711, .adv_w = 515, .box_w = 32, .box_h = 49, .ofs_x = 0, .ofs_y = -16},
    {.bitmap_index = 30103, .adv_w = 533, .box_w = 32, .box_h = 28, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 30327, .adv_w = 627, .box_w = 16, .box_h = 58, .ofs_x = 13, .ofs_y = -13},
    {.bitmap_index = 30559, .adv_w = 350, .box_w = 12, .box_h = 61, .ofs_x = 5, .ofs_y = -16},
    {.bitmap_index = 30742, .adv_w = 662, .box_w = 18, .box_h = 60, .ofs_x = 10, .ofs_y = -15},
    {.bitmap_index = 31042, .adv_w = 1088, .box_w = 36, .box_h = 10, .ofs_x = 16, .ofs_y = 18}
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
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
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
const lv_font_t ui_font_HY_68 = {
#else
lv_font_t ui_font_HY_68 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 75,          /*The maximum line height required by the font*/
    .base_line = 19,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -20,
    .underline_thickness = 3,
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



#endif /*#if UI_FONT_HY_68*/
