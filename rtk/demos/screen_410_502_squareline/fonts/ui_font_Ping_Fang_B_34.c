/*******************************************************************************
 * Size: 34 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 34 --font lvgl_font_src/PingFang SC Bold(1).ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_Ping_Fang_B_34.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_PING_FANG_B_34
#define UI_FONT_PING_FANG_B_34 1
#endif

#if UI_FONT_PING_FANG_B_34


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_Ping_Fang_B_34_glyph_bitmap.bin
 *Define UI_FONT_PING_FANG_B_34_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_PING_FANG_B_34_GLYPH_BITMAP_BIN
#define UI_FONT_PING_FANG_B_34_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_PING_FANG_B_34_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_PING_FANG_B_34_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 181, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 181, .box_w = 6, .box_h = 24, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 281, .box_w = 14, .box_h = 12, .ofs_x = 2, .ofs_y = 12},
    {.bitmap_index = 96, .adv_w = 326, .box_w = 20, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 326, .box_w = 19, .box_h = 31, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 371, .adv_w = 539, .box_w = 30, .box_h = 25, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 405, .box_w = 24, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 12},
    {.bitmap_index = 739, .adv_w = 181, .box_w = 9, .box_h = 32, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 835, .adv_w = 181, .box_w = 9, .box_h = 32, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 931, .adv_w = 280, .box_w = 17, .box_h = 16, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1011, .adv_w = 329, .box_w = 18, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 148, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 1125, .adv_w = 329, .box_w = 18, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1140, .adv_w = 148, .box_w = 6, .box_h = 5, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1150, .adv_w = 272, .box_w = 17, .box_h = 31, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1305, .adv_w = 326, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1425, .adv_w = 326, .box_w = 10, .box_h = 24, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1497, .adv_w = 326, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1617, .adv_w = 326, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1737, .adv_w = 326, .box_w = 20, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1857, .adv_w = 326, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1977, .adv_w = 326, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2097, .adv_w = 326, .box_w = 17, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2217, .adv_w = 326, .box_w = 19, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2337, .adv_w = 326, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2457, .adv_w = 148, .box_w = 6, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2493, .adv_w = 148, .box_w = 6, .box_h = 25, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 2543, .adv_w = 329, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2638, .adv_w = 329, .box_w = 18, .box_h = 10, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2688, .adv_w = 329, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2783, .adv_w = 301, .box_w = 17, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2903, .adv_w = 470, .box_w = 27, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3071, .adv_w = 367, .box_w = 23, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3215, .adv_w = 374, .box_w = 20, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3335, .adv_w = 398, .box_w = 23, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3479, .adv_w = 390, .box_w = 21, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3623, .adv_w = 349, .box_w = 19, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3743, .adv_w = 316, .box_w = 17, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3863, .adv_w = 410, .box_w = 23, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4007, .adv_w = 398, .box_w = 21, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4151, .adv_w = 137, .box_w = 5, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4199, .adv_w = 290, .box_w = 16, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4295, .adv_w = 385, .box_w = 23, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4439, .adv_w = 322, .box_w = 18, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4559, .adv_w = 489, .box_w = 27, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4727, .adv_w = 397, .box_w = 21, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4871, .adv_w = 421, .box_w = 24, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5015, .adv_w = 355, .box_w = 20, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5135, .adv_w = 421, .box_w = 24, .box_h = 27, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 5297, .adv_w = 376, .box_w = 21, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5441, .adv_w = 352, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5561, .adv_w = 335, .box_w = 21, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5705, .adv_w = 397, .box_w = 21, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5849, .adv_w = 356, .box_w = 23, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5993, .adv_w = 516, .box_w = 33, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6209, .adv_w = 358, .box_w = 23, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6353, .adv_w = 372, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6497, .adv_w = 345, .box_w = 21, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6641, .adv_w = 181, .box_w = 10, .box_h = 32, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 6737, .adv_w = 272, .box_w = 17, .box_h = 31, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 6892, .adv_w = 181, .box_w = 10, .box_h = 32, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 6988, .adv_w = 293, .box_w = 15, .box_h = 12, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 7036, .adv_w = 272, .box_w = 17, .box_h = 3, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 7051, .adv_w = 181, .box_w = 8, .box_h = 5, .ofs_x = 2, .ofs_y = 20},
    {.bitmap_index = 7061, .adv_w = 310, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7151, .adv_w = 325, .box_w = 17, .box_h = 25, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 7276, .adv_w = 304, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7366, .adv_w = 325, .box_w = 18, .box_h = 25, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7491, .adv_w = 307, .box_w = 18, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7581, .adv_w = 205, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7677, .adv_w = 326, .box_w = 18, .box_h = 25, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 7802, .adv_w = 311, .box_w = 16, .box_h = 25, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 7902, .adv_w = 147, .box_w = 6, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 7950, .adv_w = 149, .box_w = 9, .box_h = 31, .ofs_x = -1, .ofs_y = -7},
    {.bitmap_index = 8043, .adv_w = 298, .box_w = 17, .box_h = 25, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8168, .adv_w = 136, .box_w = 5, .box_h = 25, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8218, .adv_w = 477, .box_w = 26, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8344, .adv_w = 313, .box_w = 16, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8416, .adv_w = 325, .box_w = 18, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8506, .adv_w = 325, .box_w = 17, .box_h = 25, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 8631, .adv_w = 325, .box_w = 18, .box_h = 25, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 8756, .adv_w = 202, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8810, .adv_w = 283, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8882, .adv_w = 196, .box_w = 12, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8954, .adv_w = 314, .box_w = 16, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9026, .adv_w = 272, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9116, .adv_w = 420, .box_w = 27, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9242, .adv_w = 288, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9332, .adv_w = 282, .box_w = 18, .box_h = 25, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 9457, .adv_w = 273, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9547, .adv_w = 181, .box_w = 11, .box_h = 32, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 9643, .adv_w = 114, .box_w = 4, .box_h = 34, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 9677, .adv_w = 181, .box_w = 11, .box_h = 32, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 9773, .adv_w = 272, .box_w = 17, .box_h = 6, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 9803, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_Ping_Fang_B_34 = {
#else
lv_font_t ui_font_Ping_Fang_B_34 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 36,          /*The maximum line height required by the font*/
    .base_line = 7,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
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



#endif /*#if UI_FONT_PING_FANG_B_34*/
