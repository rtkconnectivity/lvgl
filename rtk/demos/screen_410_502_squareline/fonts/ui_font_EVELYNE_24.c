/*******************************************************************************
 * Size: 22 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 22 --font lvgl_font_src/evelyne-yzpxo.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_EVELYNE_24.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_EVELYNE_24
#define UI_FONT_EVELYNE_24 1
#endif

#if UI_FONT_EVELYNE_24


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_EVELYNE_24_glyph_bitmap.bin
 *Define UI_FONT_EVELYNE_24_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_EVELYNE_24_GLYPH_BITMAP_BIN
#define UI_FONT_EVELYNE_24_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_EVELYNE_24_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_EVELYNE_24_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 52, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 21, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 11, .adv_w = 34, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 14, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 44, .adv_w = 85, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 94, .adv_w = 129, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 118, .adv_w = 15, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 121, .adv_w = 65, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 133, .adv_w = 63, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 145, .adv_w = 42, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 149, .adv_w = 97, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 163, .adv_w = 23, .box_w = 3, .box_h = 3, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 71, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 168, .adv_w = 21, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 170, .adv_w = 113, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 194, .adv_w = 115, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 218, .adv_w = 42, .box_w = 4, .box_h = 12, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 230, .adv_w = 107, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 254, .adv_w = 107, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 278, .adv_w = 104, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 302, .adv_w = 107, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 326, .adv_w = 115, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 350, .adv_w = 129, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 374, .adv_w = 109, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 400, .adv_w = 117, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 426, .adv_w = 23, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 432, .adv_w = 22, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 439, .adv_w = 127, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 457, .adv_w = 96, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 463, .adv_w = 122, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 481, .adv_w = 75, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 503, .adv_w = 165, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 536, .adv_w = 200, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 600, .adv_w = 205, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 660, .adv_w = 149, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 708, .adv_w = 208, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 753, .adv_w = 132, .box_w = 8, .box_h = 19, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 791, .adv_w = 112, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 863, .adv_w = 158, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 914, .adv_w = 220, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 83, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1012, .adv_w = 141, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1046, .adv_w = 204, .box_w = 16, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1126, .adv_w = 111, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1180, .adv_w = 315, .box_w = 21, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1288, .adv_w = 202, .box_w = 14, .box_h = 19, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1364, .adv_w = 211, .box_w = 14, .box_h = 18, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1436, .adv_w = 132, .box_w = 9, .box_h = 21, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1499, .adv_w = 178, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1547, .adv_w = 169, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1627, .adv_w = 142, .box_w = 11, .box_h = 18, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1681, .adv_w = 132, .box_w = 16, .box_h = 19, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 1757, .adv_w = 238, .box_w = 17, .box_h = 17, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1842, .adv_w = 165, .box_w = 17, .box_h = 19, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 1937, .adv_w = 314, .box_w = 20, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2017, .adv_w = 242, .box_w = 21, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2125, .adv_w = 164, .box_w = 10, .box_h = 23, .ofs_x = -1, .ofs_y = -7},
    {.bitmap_index = 2194, .adv_w = 285, .box_w = 19, .box_h = 17, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 2279, .adv_w = 50, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2291, .adv_w = 69, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 2313, .adv_w = 44, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2325, .adv_w = 91, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 2333, .adv_w = 116, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2337, .adv_w = 90, .box_w = 7, .box_h = 5, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2347, .adv_w = 81, .box_w = 7, .box_h = 11, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2369, .adv_w = 69, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 2379, .adv_w = 109, .box_w = 9, .box_h = 11, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2412, .adv_w = 80, .box_w = 7, .box_h = 6, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2424, .adv_w = 59, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2446, .adv_w = 95, .box_w = 8, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 2464, .adv_w = 102, .box_w = 8, .box_h = 13, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 2490, .adv_w = 41, .box_w = 4, .box_h = 7, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 2497, .adv_w = 44, .box_w = 7, .box_h = 10, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 2517, .adv_w = 77, .box_w = 6, .box_h = 11, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2539, .adv_w = 68, .box_w = 6, .box_h = 11, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2561, .adv_w = 122, .box_w = 9, .box_h = 7, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2582, .adv_w = 95, .box_w = 8, .box_h = 6, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2594, .adv_w = 75, .box_w = 6, .box_h = 6, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2606, .adv_w = 76, .box_w = 6, .box_h = 10, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 2626, .adv_w = 89, .box_w = 7, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 2644, .adv_w = 76, .box_w = 6, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 2660, .adv_w = 57, .box_w = 6, .box_h = 8, .ofs_x = -2, .ofs_y = 1},
    {.bitmap_index = 2676, .adv_w = 69, .box_w = 7, .box_h = 13, .ofs_x = -2, .ofs_y = -1},
    {.bitmap_index = 2702, .adv_w = 111, .box_w = 9, .box_h = 6, .ofs_x = -1, .ofs_y = 1},
    {.bitmap_index = 2720, .adv_w = 96, .box_w = 8, .box_h = 8, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 2736, .adv_w = 169, .box_w = 12, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2757, .adv_w = 101, .box_w = 9, .box_h = 5, .ofs_x = -2, .ofs_y = 1},
    {.bitmap_index = 2772, .adv_w = 95, .box_w = 8, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 2790, .adv_w = 92, .box_w = 7, .box_h = 10, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 2810, .adv_w = 49, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2822, .adv_w = 22, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 2832, .adv_w = 48, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2843, .adv_w = 107, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 64, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 30, .glyph_id_start = 65,
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
    .cmap_num = 2,
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
const lv_font_t ui_font_EVELYNE_24 = {
#else
lv_font_t ui_font_EVELYNE_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 27,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_EVELYNE_24*/
