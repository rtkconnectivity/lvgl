/*******************************************************************************
 * Size: 122 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 122 --font lvgl_font_src/百度综艺简体.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_BAIDU_122.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_BAIDU_122
#define UI_FONT_BAIDU_122 1
#endif

#if UI_FONT_BAIDU_122


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_BAIDU_122_glyph_bitmap.bin
 *Define UI_FONT_BAIDU_122_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_BAIDU_122_GLYPH_BITMAP_BIN
#define UI_FONT_BAIDU_122_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_BAIDU_122_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_BAIDU_122_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 541, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 648, .box_w = 14, .box_h = 83, .ofs_x = 13, .ofs_y = -7},
    {.bitmap_index = 332, .adv_w = 580, .box_w = 28, .box_h = 26, .ofs_x = 4, .ofs_y = 52},
    {.bitmap_index = 514, .adv_w = 1334, .box_w = 63, .box_h = 80, .ofs_x = 10, .ofs_y = -4},
    {.bitmap_index = 1794, .adv_w = 1334, .box_w = 71, .box_h = 97, .ofs_x = 6, .ofs_y = -13},
    {.bitmap_index = 3540, .adv_w = 1487, .box_w = 87, .box_h = 86, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 5432, .adv_w = 1319, .box_w = 74, .box_h = 81, .ofs_x = 7, .ofs_y = -5},
    {.bitmap_index = 6971, .adv_w = 328, .box_w = 13, .box_h = 26, .ofs_x = 4, .ofs_y = 52},
    {.bitmap_index = 7075, .adv_w = 503, .box_w = 27, .box_h = 101, .ofs_x = 3, .ofs_y = -15},
    {.bitmap_index = 7782, .adv_w = 503, .box_w = 27, .box_h = 101, .ofs_x = 3, .ofs_y = -15},
    {.bitmap_index = 8489, .adv_w = 991, .box_w = 56, .box_h = 54, .ofs_x = 3, .ofs_y = 24},
    {.bitmap_index = 9245, .adv_w = 1022, .box_w = 58, .box_h = 57, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 10100, .adv_w = 663, .box_w = 17, .box_h = 31, .ofs_x = 11, .ofs_y = -23},
    {.bitmap_index = 10255, .adv_w = 648, .box_w = 32, .box_h = 11, .ofs_x = 4, .ofs_y = 19},
    {.bitmap_index = 10343, .adv_w = 663, .box_w = 15, .box_h = 15, .ofs_x = 13, .ofs_y = -7},
    {.bitmap_index = 10403, .adv_w = 541, .box_w = 33, .box_h = 103, .ofs_x = 0, .ofs_y = -16},
    {.bitmap_index = 11330, .adv_w = 1334, .box_w = 78, .box_h = 85, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 13030, .adv_w = 1334, .box_w = 13, .box_h = 81, .ofs_x = 35, .ofs_y = -5},
    {.bitmap_index = 13354, .adv_w = 1334, .box_w = 68, .box_h = 81, .ofs_x = 8, .ofs_y = -5},
    {.bitmap_index = 14731, .adv_w = 1334, .box_w = 66, .box_h = 81, .ofs_x = 9, .ofs_y = -5},
    {.bitmap_index = 16108, .adv_w = 1334, .box_w = 80, .box_h = 81, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 17728, .adv_w = 1334, .box_w = 69, .box_h = 81, .ofs_x = 7, .ofs_y = -5},
    {.bitmap_index = 19186, .adv_w = 1334, .box_w = 73, .box_h = 83, .ofs_x = 5, .ofs_y = -7},
    {.bitmap_index = 20763, .adv_w = 1334, .box_w = 71, .box_h = 81, .ofs_x = 6, .ofs_y = -5},
    {.bitmap_index = 22221, .adv_w = 1334, .box_w = 77, .box_h = 85, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 23921, .adv_w = 1334, .box_w = 73, .box_h = 83, .ofs_x = 5, .ofs_y = -5},
    {.bitmap_index = 25498, .adv_w = 663, .box_w = 15, .box_h = 46, .ofs_x = 13, .ofs_y = -7},
    {.bitmap_index = 25682, .adv_w = 663, .box_w = 17, .box_h = 62, .ofs_x = 11, .ofs_y = -23},
    {.bitmap_index = 25992, .adv_w = 1022, .box_w = 44, .box_h = 57, .ofs_x = 10, .ofs_y = -5},
    {.bitmap_index = 26619, .adv_w = 1022, .box_w = 58, .box_h = 31, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 27084, .adv_w = 1022, .box_w = 44, .box_h = 57, .ofs_x = 10, .ofs_y = -5},
    {.bitmap_index = 27711, .adv_w = 793, .box_w = 43, .box_h = 83, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 28624, .adv_w = 1395, .box_w = 81, .box_h = 85, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 30409, .adv_w = 1502, .box_w = 88, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 32191, .adv_w = 1273, .box_w = 73, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 33730, .adv_w = 1197, .box_w = 69, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 35188, .adv_w = 1312, .box_w = 75, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 36727, .adv_w = 1113, .box_w = 63, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 38023, .adv_w = 1113, .box_w = 63, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 39319, .adv_w = 1235, .box_w = 71, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 40777, .adv_w = 1289, .box_w = 71, .box_h = 81, .ofs_x = 6, .ofs_y = -5},
    {.bitmap_index = 42235, .adv_w = 534, .box_w = 13, .box_h = 81, .ofs_x = 10, .ofs_y = -5},
    {.bitmap_index = 42559, .adv_w = 907, .box_w = 51, .box_h = 81, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 43612, .adv_w = 1190, .box_w = 68, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 44989, .adv_w = 1098, .box_w = 62, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 46285, .adv_w = 1502, .box_w = 88, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 48067, .adv_w = 1182, .box_w = 68, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 49444, .adv_w = 1342, .box_w = 78, .box_h = 85, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 51144, .adv_w = 1144, .box_w = 65, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 52521, .adv_w = 1342, .box_w = 78, .box_h = 85, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 54221, .adv_w = 1228, .box_w = 70, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 55679, .adv_w = 1243, .box_w = 71, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 57137, .adv_w = 1281, .box_w = 74, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 58676, .adv_w = 1212, .box_w = 69, .box_h = 83, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 60170, .adv_w = 1434, .box_w = 83, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 61871, .adv_w = 1761, .box_w = 103, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 63977, .adv_w = 1411, .box_w = 82, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 65678, .adv_w = 1380, .box_w = 80, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 67298, .adv_w = 1228, .box_w = 70, .box_h = 81, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 68756, .adv_w = 610, .box_w = 30, .box_h = 101, .ofs_x = 4, .ofs_y = -15},
    {.bitmap_index = 69564, .adv_w = 541, .box_w = 33, .box_h = 103, .ofs_x = 0, .ofs_y = -16},
    {.bitmap_index = 70491, .adv_w = 610, .box_w = 30, .box_h = 101, .ofs_x = 4, .ofs_y = -15},
    {.bitmap_index = 71299, .adv_w = 915, .box_w = 52, .box_h = 48, .ofs_x = 2, .ofs_y = 41},
    {.bitmap_index = 71923, .adv_w = 1083, .box_w = 72, .box_h = 8, .ofs_x = -2, .ofs_y = -24},
    {.bitmap_index = 72067, .adv_w = 648, .box_w = 23, .box_h = 17, .ofs_x = 5, .ofs_y = 71},
    {.bitmap_index = 72169, .adv_w = 976, .box_w = 56, .box_h = 58, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 72981, .adv_w = 984, .box_w = 57, .box_h = 81, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 74196, .adv_w = 946, .box_w = 54, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 74994, .adv_w = 984, .box_w = 57, .box_h = 81, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 76209, .adv_w = 968, .box_w = 56, .box_h = 60, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 77049, .adv_w = 839, .box_w = 48, .box_h = 81, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 78021, .adv_w = 976, .box_w = 56, .box_h = 75, .ofs_x = 2, .ofs_y = -22},
    {.bitmap_index = 79071, .adv_w = 885, .box_w = 50, .box_h = 81, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 80124, .adv_w = 534, .box_w = 13, .box_h = 80, .ofs_x = 10, .ofs_y = -4},
    {.bitmap_index = 80444, .adv_w = 610, .box_w = 34, .box_h = 98, .ofs_x = 0, .ofs_y = -22},
    {.bitmap_index = 81326, .adv_w = 984, .box_w = 57, .box_h = 81, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 82541, .adv_w = 282, .box_w = 12, .box_h = 81, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 82784, .adv_w = 1373, .box_w = 81, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 83981, .adv_w = 923, .box_w = 53, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 84779, .adv_w = 1083, .box_w = 63, .box_h = 62, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 85771, .adv_w = 968, .box_w = 56, .box_h = 77, .ofs_x = 2, .ofs_y = -25},
    {.bitmap_index = 86849, .adv_w = 968, .box_w = 56, .box_h = 77, .ofs_x = 2, .ofs_y = -25},
    {.bitmap_index = 87927, .adv_w = 709, .box_w = 39, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 88497, .adv_w = 953, .box_w = 55, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 89295, .adv_w = 808, .box_w = 46, .box_h = 81, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 90267, .adv_w = 946, .box_w = 54, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 91065, .adv_w = 1129, .box_w = 66, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 92034, .adv_w = 1456, .box_w = 86, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 93288, .adv_w = 1144, .box_w = 67, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 94257, .adv_w = 900, .box_w = 51, .box_h = 75, .ofs_x = 2, .ofs_y = -22},
    {.bitmap_index = 95232, .adv_w = 923, .box_w = 53, .box_h = 57, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 96030, .adv_w = 648, .box_w = 36, .box_h = 115, .ofs_x = 3, .ofs_y = -26},
    {.bitmap_index = 97065, .adv_w = 503, .box_w = 11, .box_h = 115, .ofs_x = 10, .ofs_y = -26},
    {.bitmap_index = 97410, .adv_w = 648, .box_w = 35, .box_h = 115, .ofs_x = 2, .ofs_y = -26},
    {.bitmap_index = 98445, .adv_w = 1136, .box_w = 62, .box_h = 20, .ofs_x = 4, .ofs_y = 33}
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
const lv_font_t ui_font_BAIDU_122 = {
#else
lv_font_t ui_font_BAIDU_122 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 115,          /*The maximum line height required by the font*/
    .base_line = 26,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -24,
    .underline_thickness = 6,
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



#endif /*#if UI_FONT_BAIDU_122*/
