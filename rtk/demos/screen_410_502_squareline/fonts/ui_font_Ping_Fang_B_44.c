/*******************************************************************************
 * Size: 44 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 44 --font lvgl_font_src/PingFang SC Bold(1).ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_Ping_Fang_B_44.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_PING_FANG_B_44
#define UI_FONT_PING_FANG_B_44 1
#endif

#if UI_FONT_PING_FANG_B_44


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_Ping_Fang_B_44_glyph_bitmap.bin
 *Define UI_FONT_PING_FANG_B_44_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_PING_FANG_B_44_GLYPH_BITMAP_BIN
#define UI_FONT_PING_FANG_B_44_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_PING_FANG_B_44_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_PING_FANG_B_44_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 234, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 234, .box_w = 7, .box_h = 31, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 363, .box_w = 19, .box_h = 15, .ofs_x = 2, .ofs_y = 17},
    {.bitmap_index = 137, .adv_w = 422, .box_w = 25, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 422, .box_w = 24, .box_h = 40, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 594, .adv_w = 697, .box_w = 38, .box_h = 32, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 914, .adv_w = 524, .box_w = 32, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1178, .adv_w = 200, .box_w = 8, .box_h = 15, .ofs_x = 2, .ofs_y = 17},
    {.bitmap_index = 1208, .adv_w = 234, .box_w = 12, .box_h = 41, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1331, .adv_w = 234, .box_w = 12, .box_h = 41, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1454, .adv_w = 362, .box_w = 21, .box_h = 20, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 1574, .adv_w = 426, .box_w = 23, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1706, .adv_w = 191, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = -9},
    {.bitmap_index = 1738, .adv_w = 426, .box_w = 23, .box_h = 4, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 1762, .adv_w = 191, .box_w = 8, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1776, .adv_w = 352, .box_w = 20, .box_h = 40, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1976, .adv_w = 422, .box_w = 24, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2174, .adv_w = 422, .box_w = 13, .box_h = 31, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2298, .adv_w = 422, .box_w = 23, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2490, .adv_w = 422, .box_w = 24, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2688, .adv_w = 422, .box_w = 26, .box_h = 31, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2905, .adv_w = 422, .box_w = 24, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3097, .adv_w = 422, .box_w = 24, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3295, .adv_w = 422, .box_w = 22, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3481, .adv_w = 422, .box_w = 24, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3679, .adv_w = 422, .box_w = 24, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3877, .adv_w = 191, .box_w = 8, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3921, .adv_w = 191, .box_w = 8, .box_h = 31, .ofs_x = 2, .ofs_y = -9},
    {.bitmap_index = 3983, .adv_w = 426, .box_w = 23, .box_h = 24, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4127, .adv_w = 426, .box_w = 23, .box_h = 13, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 4205, .adv_w = 426, .box_w = 23, .box_h = 24, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4349, .adv_w = 389, .box_w = 21, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4541, .adv_w = 608, .box_w = 34, .box_h = 33, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4838, .adv_w = 474, .box_w = 30, .box_h = 31, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5086, .adv_w = 484, .box_w = 26, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 5303, .adv_w = 515, .box_w = 30, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5567, .adv_w = 505, .box_w = 27, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 5784, .adv_w = 451, .box_w = 24, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 5970, .adv_w = 409, .box_w = 22, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 6156, .adv_w = 531, .box_w = 30, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6420, .adv_w = 515, .box_w = 27, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 6637, .adv_w = 177, .box_w = 5, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 6699, .adv_w = 375, .box_w = 21, .box_h = 32, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 6891, .adv_w = 498, .box_w = 29, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7139, .adv_w = 416, .box_w = 23, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7325, .adv_w = 632, .box_w = 34, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7604, .adv_w = 513, .box_w = 26, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7821, .adv_w = 544, .box_w = 32, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 8085, .adv_w = 459, .box_w = 25, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 8302, .adv_w = 544, .box_w = 32, .box_h = 36, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 8590, .adv_w = 487, .box_w = 27, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 8807, .adv_w = 455, .box_w = 27, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 9038, .adv_w = 434, .box_w = 27, .box_h = 31, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9255, .adv_w = 513, .box_w = 26, .box_h = 32, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 9479, .adv_w = 460, .box_w = 29, .box_h = 31, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9727, .adv_w = 667, .box_w = 42, .box_h = 31, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10068, .adv_w = 463, .box_w = 29, .box_h = 31, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10316, .adv_w = 482, .box_w = 30, .box_h = 31, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10564, .adv_w = 447, .box_w = 26, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10781, .adv_w = 234, .box_w = 13, .box_h = 41, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 10945, .adv_w = 352, .box_w = 20, .box_h = 40, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 11145, .adv_w = 234, .box_w = 13, .box_h = 41, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 11309, .adv_w = 379, .box_w = 20, .box_h = 15, .ofs_x = 2, .ofs_y = 16},
    {.bitmap_index = 11384, .adv_w = 352, .box_w = 22, .box_h = 4, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 11408, .adv_w = 234, .box_w = 11, .box_h = 7, .ofs_x = 2, .ofs_y = 25},
    {.bitmap_index = 11429, .adv_w = 401, .box_w = 22, .box_h = 24, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 11573, .adv_w = 421, .box_w = 23, .box_h = 32, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 11765, .adv_w = 393, .box_w = 23, .box_h = 24, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 11909, .adv_w = 421, .box_w = 23, .box_h = 32, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 12101, .adv_w = 397, .box_w = 23, .box_h = 24, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 12245, .adv_w = 265, .box_w = 17, .box_h = 31, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12400, .adv_w = 422, .box_w = 23, .box_h = 33, .ofs_x = 1, .ofs_y = -10},
    {.bitmap_index = 12598, .adv_w = 403, .box_w = 21, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 12784, .adv_w = 191, .box_w = 8, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 12848, .adv_w = 193, .box_w = 11, .box_h = 41, .ofs_x = -1, .ofs_y = -9},
    {.bitmap_index = 12971, .adv_w = 385, .box_w = 23, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 13157, .adv_w = 176, .box_w = 5, .box_h = 31, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 13219, .adv_w = 617, .box_w = 34, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 13426, .adv_w = 406, .box_w = 21, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 13564, .adv_w = 420, .box_w = 24, .box_h = 24, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 13708, .adv_w = 421, .box_w = 23, .box_h = 32, .ofs_x = 2, .ofs_y = -9},
    {.bitmap_index = 13900, .adv_w = 421, .box_w = 23, .box_h = 32, .ofs_x = 1, .ofs_y = -9},
    {.bitmap_index = 14092, .adv_w = 262, .box_w = 15, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 14184, .adv_w = 366, .box_w = 21, .box_h = 24, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 14328, .adv_w = 253, .box_w = 15, .box_h = 30, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14448, .adv_w = 406, .box_w = 21, .box_h = 23, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 14586, .adv_w = 352, .box_w = 22, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14718, .adv_w = 543, .box_w = 34, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14916, .adv_w = 373, .box_w = 24, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15048, .adv_w = 365, .box_w = 23, .box_h = 31, .ofs_x = 0, .ofs_y = -9},
    {.bitmap_index = 15234, .adv_w = 353, .box_w = 20, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15344, .adv_w = 234, .box_w = 15, .box_h = 41, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 15508, .adv_w = 148, .box_w = 5, .box_h = 44, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 15596, .adv_w = 234, .box_w = 15, .box_h = 41, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 15760, .adv_w = 352, .box_w = 22, .box_h = 7, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 15802, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_Ping_Fang_B_44 = {
#else
lv_font_t ui_font_Ping_Fang_B_44 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 48,          /*The maximum line height required by the font*/
    .base_line = 10,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 4,
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



#endif /*#if UI_FONT_PING_FANG_B_44*/
