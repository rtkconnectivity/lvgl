/*******************************************************************************
 * Size: 22 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 22 --font lvgl_font_src/PingFang SC Bold(1).ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_Ping_Fang_B_22.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_PING_FANG_B_22
#define UI_FONT_PING_FANG_B_22 1
#endif

#if UI_FONT_PING_FANG_B_22


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_Ping_Fang_B_22_glyph_bitmap.bin
 *Define UI_FONT_PING_FANG_B_22_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_PING_FANG_B_22_GLYPH_BITMAP_BIN
#define UI_FONT_PING_FANG_B_22_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_PING_FANG_B_22_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_PING_FANG_B_22_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 117, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 117, .box_w = 4, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 182, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 40, .adv_w = 211, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 211, .box_w = 13, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 188, .adv_w = 348, .box_w = 20, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 262, .box_w = 17, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 100, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 356, .adv_w = 117, .box_w = 7, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 398, .adv_w = 117, .box_w = 7, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 440, .adv_w = 181, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 470, .adv_w = 213, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 96, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 515, .adv_w = 213, .box_w = 12, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 521, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 176, .box_w = 11, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 588, .adv_w = 211, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 211, .box_w = 7, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 211, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 211, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 211, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 860, .adv_w = 211, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 211, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 211, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1036, .adv_w = 211, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 211, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1164, .adv_w = 96, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1176, .adv_w = 96, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1193, .adv_w = 213, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1232, .adv_w = 213, .box_w = 12, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1253, .adv_w = 213, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1292, .adv_w = 195, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1340, .adv_w = 304, .box_w = 17, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1420, .adv_w = 237, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1484, .adv_w = 242, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1548, .adv_w = 257, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1612, .adv_w = 252, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1676, .adv_w = 226, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1740, .adv_w = 205, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1788, .adv_w = 265, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1852, .adv_w = 258, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1916, .adv_w = 89, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1932, .adv_w = 188, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1980, .adv_w = 249, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2044, .adv_w = 208, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2092, .adv_w = 316, .box_w = 18, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2172, .adv_w = 257, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2236, .adv_w = 272, .box_w = 17, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2316, .adv_w = 230, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2380, .adv_w = 272, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2470, .adv_w = 244, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2534, .adv_w = 228, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2598, .adv_w = 217, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2662, .adv_w = 257, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2726, .adv_w = 230, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2790, .adv_w = 334, .box_w = 21, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2886, .adv_w = 232, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2950, .adv_w = 241, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3014, .adv_w = 224, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3078, .adv_w = 117, .box_w = 7, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3120, .adv_w = 176, .box_w = 11, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3183, .adv_w = 117, .box_w = 7, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3225, .adv_w = 190, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 3249, .adv_w = 176, .box_w = 11, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3255, .adv_w = 117, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 3263, .adv_w = 200, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3299, .adv_w = 210, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3347, .adv_w = 196, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3383, .adv_w = 210, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3431, .adv_w = 199, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3467, .adv_w = 133, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3515, .adv_w = 211, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3563, .adv_w = 201, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3611, .adv_w = 95, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3627, .adv_w = 96, .box_w = 6, .box_h = 20, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 3667, .adv_w = 193, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3715, .adv_w = 88, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3731, .adv_w = 309, .box_w = 17, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3791, .adv_w = 203, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3827, .adv_w = 210, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3875, .adv_w = 210, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3923, .adv_w = 210, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3971, .adv_w = 131, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3995, .adv_w = 183, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4031, .adv_w = 127, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4063, .adv_w = 203, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4099, .adv_w = 176, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4135, .adv_w = 272, .box_w = 17, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4195, .adv_w = 187, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4231, .adv_w = 183, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 4279, .adv_w = 177, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4315, .adv_w = 117, .box_w = 8, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4357, .adv_w = 74, .box_w = 3, .box_h = 23, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 4380, .adv_w = 117, .box_w = 8, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4422, .adv_w = 176, .box_w = 11, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4434, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_Ping_Fang_B_22 = {
#else
lv_font_t ui_font_Ping_Fang_B_22 = {
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



#endif /*#if UI_FONT_PING_FANG_B_22*/
