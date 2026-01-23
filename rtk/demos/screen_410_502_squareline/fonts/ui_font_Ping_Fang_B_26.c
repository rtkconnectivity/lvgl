/*******************************************************************************
 * Size: 26 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 26 --font lvgl_font_src/PingFang SC Bold(1).ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_Ping_Fang_B_26.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_PING_FANG_B_26
#define UI_FONT_PING_FANG_B_26 1
#endif

#if UI_FONT_PING_FANG_B_26


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_Ping_Fang_B_26_glyph_bitmap.bin
 *Define UI_FONT_PING_FANG_B_26_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_PING_FANG_B_26_GLYPH_BITMAP_BIN
#define UI_FONT_PING_FANG_B_26_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_PING_FANG_B_26_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_PING_FANG_B_26_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 139, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 139, .box_w = 5, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 215, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 65, .adv_w = 250, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 250, .box_w = 14, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 237, .adv_w = 412, .box_w = 23, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 310, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 118, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 464, .adv_w = 139, .box_w = 7, .box_h = 25, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 514, .adv_w = 139, .box_w = 7, .box_h = 25, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 564, .adv_w = 214, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 612, .adv_w = 252, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 113, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 686, .adv_w = 252, .box_w = 14, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 698, .adv_w = 113, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 706, .adv_w = 208, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 806, .adv_w = 250, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 250, .box_w = 8, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 250, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 996, .adv_w = 250, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1072, .adv_w = 250, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1148, .adv_w = 250, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1224, .adv_w = 250, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1300, .adv_w = 250, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1376, .adv_w = 250, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1452, .adv_w = 250, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1528, .adv_w = 113, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1556, .adv_w = 113, .box_w = 5, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1594, .adv_w = 252, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1654, .adv_w = 252, .box_w = 14, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1686, .adv_w = 252, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1746, .adv_w = 230, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1822, .adv_w = 359, .box_w = 21, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1936, .adv_w = 280, .box_w = 18, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2031, .adv_w = 286, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2107, .adv_w = 304, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2202, .adv_w = 298, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2297, .adv_w = 267, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2373, .adv_w = 242, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2449, .adv_w = 314, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2544, .adv_w = 305, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2639, .adv_w = 105, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2658, .adv_w = 222, .box_w = 13, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2734, .adv_w = 295, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2829, .adv_w = 246, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2905, .adv_w = 374, .box_w = 21, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3019, .adv_w = 303, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3114, .adv_w = 322, .box_w = 19, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3209, .adv_w = 271, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3285, .adv_w = 322, .box_w = 19, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3390, .adv_w = 288, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3485, .adv_w = 269, .box_w = 17, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3580, .adv_w = 256, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3656, .adv_w = 303, .box_w = 17, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3751, .adv_w = 272, .box_w = 17, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3846, .adv_w = 394, .box_w = 25, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3979, .adv_w = 274, .box_w = 17, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4074, .adv_w = 285, .box_w = 18, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4169, .adv_w = 264, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4245, .adv_w = 139, .box_w = 8, .box_h = 25, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4295, .adv_w = 208, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4395, .adv_w = 139, .box_w = 8, .box_h = 25, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4445, .adv_w = 224, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 4472, .adv_w = 208, .box_w = 13, .box_h = 3, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 4484, .adv_w = 139, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 15},
    {.bitmap_index = 4492, .adv_w = 237, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4548, .adv_w = 249, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4624, .adv_w = 232, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4680, .adv_w = 249, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4756, .adv_w = 235, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4812, .adv_w = 157, .box_w = 10, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4869, .adv_w = 249, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 4945, .adv_w = 238, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5021, .adv_w = 113, .box_w = 5, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5059, .adv_w = 114, .box_w = 7, .box_h = 24, .ofs_x = -1, .ofs_y = -5},
    {.bitmap_index = 5107, .adv_w = 228, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5183, .adv_w = 104, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5202, .adv_w = 365, .box_w = 21, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5286, .adv_w = 240, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5342, .adv_w = 248, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5398, .adv_w = 249, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 5474, .adv_w = 249, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 5550, .adv_w = 155, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5592, .adv_w = 216, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5648, .adv_w = 150, .box_w = 9, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5705, .adv_w = 240, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5761, .adv_w = 208, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5817, .adv_w = 321, .box_w = 20, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5887, .adv_w = 220, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5943, .adv_w = 216, .box_w = 14, .box_h = 19, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 6019, .adv_w = 209, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6075, .adv_w = 139, .box_w = 9, .box_h = 25, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 6150, .adv_w = 87, .box_w = 3, .box_h = 27, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 6177, .adv_w = 139, .box_w = 9, .box_h = 25, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 6252, .adv_w = 208, .box_w = 13, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 6272, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_Ping_Fang_B_26 = {
#else
lv_font_t ui_font_Ping_Fang_B_26 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 28,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_PING_FANG_B_26*/
