/*******************************************************************************
 * Size: 28 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 28 --font lvgl_font_src/PingFang SC Bold(1).ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_Ping_Fang_B_28.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_PING_FANG_B_28
#define UI_FONT_PING_FANG_B_28 1
#endif

#if UI_FONT_PING_FANG_B_28


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_Ping_Fang_B_28_glyph_bitmap.bin
 *Define UI_FONT_PING_FANG_B_28_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_PING_FANG_B_28_GLYPH_BITMAP_BIN
#define UI_FONT_PING_FANG_B_28_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_PING_FANG_B_28_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_PING_FANG_B_28_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 149, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 149, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 231, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 70, .adv_w = 269, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 269, .box_w = 15, .box_h = 26, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 274, .adv_w = 444, .box_w = 25, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 334, .box_w = 20, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 127, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 541, .adv_w = 149, .box_w = 8, .box_h = 27, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 595, .adv_w = 149, .box_w = 8, .box_h = 27, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 649, .adv_w = 230, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 701, .adv_w = 271, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 122, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 783, .adv_w = 271, .box_w = 15, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 795, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 224, .box_w = 14, .box_h = 26, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 909, .adv_w = 269, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 989, .adv_w = 269, .box_w = 9, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1049, .adv_w = 269, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1129, .adv_w = 269, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1209, .adv_w = 269, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1309, .adv_w = 269, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1389, .adv_w = 269, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1469, .adv_w = 269, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1549, .adv_w = 269, .box_w = 16, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1629, .adv_w = 269, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1709, .adv_w = 122, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1739, .adv_w = 122, .box_w = 6, .box_h = 21, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 1781, .adv_w = 271, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1845, .adv_w = 271, .box_w = 15, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1881, .adv_w = 271, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1945, .adv_w = 248, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2025, .adv_w = 387, .box_w = 22, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2145, .adv_w = 302, .box_w = 19, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2245, .adv_w = 308, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2345, .adv_w = 327, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2445, .adv_w = 321, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2545, .adv_w = 287, .box_w = 16, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2625, .adv_w = 260, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2705, .adv_w = 338, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2805, .adv_w = 328, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2905, .adv_w = 113, .box_w = 4, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2925, .adv_w = 239, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3005, .adv_w = 317, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3105, .adv_w = 265, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3185, .adv_w = 402, .box_w = 23, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3305, .adv_w = 327, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3405, .adv_w = 346, .box_w = 20, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3505, .adv_w = 292, .box_w = 17, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3605, .adv_w = 346, .box_w = 20, .box_h = 22, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3715, .adv_w = 310, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3815, .adv_w = 290, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3915, .adv_w = 276, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4015, .adv_w = 327, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4115, .adv_w = 293, .box_w = 19, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4215, .adv_w = 425, .box_w = 27, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4355, .adv_w = 295, .box_w = 19, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4455, .adv_w = 306, .box_w = 20, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4555, .adv_w = 284, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4655, .adv_w = 149, .box_w = 8, .box_h = 27, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 4709, .adv_w = 224, .box_w = 14, .box_h = 26, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4813, .adv_w = 149, .box_w = 8, .box_h = 27, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 4867, .adv_w = 241, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 4907, .adv_w = 224, .box_w = 14, .box_h = 3, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 4919, .adv_w = 149, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 16},
    {.bitmap_index = 4927, .adv_w = 255, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4987, .adv_w = 268, .box_w = 15, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5071, .adv_w = 250, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5131, .adv_w = 268, .box_w = 15, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5215, .adv_w = 253, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5275, .adv_w = 169, .box_w = 11, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5335, .adv_w = 268, .box_w = 15, .box_h = 21, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 5419, .adv_w = 256, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5503, .adv_w = 121, .box_w = 5, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5543, .adv_w = 123, .box_w = 7, .box_h = 26, .ofs_x = -1, .ofs_y = -6},
    {.bitmap_index = 5595, .adv_w = 245, .box_w = 15, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5679, .adv_w = 112, .box_w = 3, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5700, .adv_w = 393, .box_w = 22, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5790, .adv_w = 258, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5850, .adv_w = 267, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5910, .adv_w = 268, .box_w = 15, .box_h = 21, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 5994, .adv_w = 268, .box_w = 15, .box_h = 21, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 6078, .adv_w = 167, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6123, .adv_w = 233, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6183, .adv_w = 161, .box_w = 10, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6243, .adv_w = 258, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6303, .adv_w = 224, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6363, .adv_w = 346, .box_w = 22, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6453, .adv_w = 237, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6513, .adv_w = 233, .box_w = 15, .box_h = 21, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 6597, .adv_w = 225, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6657, .adv_w = 149, .box_w = 9, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 6738, .adv_w = 94, .box_w = 4, .box_h = 28, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 6766, .adv_w = 149, .box_w = 9, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 6847, .adv_w = 224, .box_w = 14, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 6867, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_Ping_Fang_B_28 = {
#else
lv_font_t ui_font_Ping_Fang_B_28 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
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



#endif /*#if UI_FONT_PING_FANG_B_28*/
