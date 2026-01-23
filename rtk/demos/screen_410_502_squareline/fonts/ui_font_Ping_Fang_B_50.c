/*******************************************************************************
 * Size: 50 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 50 --font lvgl_font_src/PingFang SC Bold(1).ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_Ping_Fang_B_50.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_PING_FANG_B_50
#define UI_FONT_PING_FANG_B_50 1
#endif

#if UI_FONT_PING_FANG_B_50


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_Ping_Fang_B_50_glyph_bitmap.bin
 *Define UI_FONT_PING_FANG_B_50_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_PING_FANG_B_50_GLYPH_BITMAP_BIN
#define UI_FONT_PING_FANG_B_50_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_PING_FANG_B_50_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_PING_FANG_B_50_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 266, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 266, .box_w = 8, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 413, .box_w = 20, .box_h = 18, .ofs_x = 3, .ofs_y = 19},
    {.bitmap_index = 162, .adv_w = 480, .box_w = 28, .box_h = 36, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 480, .box_w = 26, .box_h = 47, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 743, .adv_w = 792, .box_w = 43, .box_h = 38, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1161, .adv_w = 596, .box_w = 35, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1503, .adv_w = 227, .box_w = 9, .box_h = 18, .ofs_x = 3, .ofs_y = 19},
    {.bitmap_index = 1557, .adv_w = 266, .box_w = 13, .box_h = 48, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1749, .adv_w = 266, .box_w = 13, .box_h = 48, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1941, .adv_w = 411, .box_w = 24, .box_h = 23, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 2079, .adv_w = 484, .box_w = 26, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2261, .adv_w = 218, .box_w = 9, .box_h = 18, .ofs_x = 2, .ofs_y = -10},
    {.bitmap_index = 2315, .adv_w = 484, .box_w = 26, .box_h = 5, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 2350, .adv_w = 218, .box_w = 8, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2366, .adv_w = 400, .box_w = 23, .box_h = 47, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2648, .adv_w = 480, .box_w = 26, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2914, .adv_w = 480, .box_w = 14, .box_h = 36, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 3058, .adv_w = 480, .box_w = 26, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3317, .adv_w = 480, .box_w = 26, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3583, .adv_w = 480, .box_w = 28, .box_h = 36, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3835, .adv_w = 480, .box_w = 26, .box_h = 37, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4094, .adv_w = 480, .box_w = 26, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4360, .adv_w = 480, .box_w = 24, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4576, .adv_w = 480, .box_w = 28, .box_h = 38, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4842, .adv_w = 480, .box_w = 26, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5108, .adv_w = 218, .box_w = 8, .box_h = 26, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 5160, .adv_w = 218, .box_w = 10, .box_h = 36, .ofs_x = 2, .ofs_y = -10},
    {.bitmap_index = 5268, .adv_w = 484, .box_w = 26, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5464, .adv_w = 484, .box_w = 26, .box_h = 15, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 5569, .adv_w = 484, .box_w = 26, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5765, .adv_w = 442, .box_w = 24, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5987, .adv_w = 691, .box_w = 39, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 6367, .adv_w = 539, .box_w = 34, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6691, .adv_w = 550, .box_w = 30, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 6979, .adv_w = 585, .box_w = 33, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 7321, .adv_w = 574, .box_w = 31, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7609, .adv_w = 513, .box_w = 27, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7861, .adv_w = 465, .box_w = 25, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 8113, .adv_w = 603, .box_w = 33, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 8455, .adv_w = 586, .box_w = 31, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 8743, .adv_w = 202, .box_w = 6, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 8815, .adv_w = 426, .box_w = 24, .box_h = 37, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 9037, .adv_w = 566, .box_w = 33, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9361, .adv_w = 473, .box_w = 26, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9613, .adv_w = 718, .box_w = 39, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9973, .adv_w = 583, .box_w = 30, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 10261, .adv_w = 618, .box_w = 35, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 10603, .adv_w = 522, .box_w = 29, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 10891, .adv_w = 618, .box_w = 35, .box_h = 41, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 11260, .adv_w = 554, .box_w = 31, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 11548, .adv_w = 518, .box_w = 30, .box_h = 38, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 11852, .adv_w = 493, .box_w = 30, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12140, .adv_w = 583, .box_w = 30, .box_h = 37, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 12436, .adv_w = 523, .box_w = 33, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12760, .adv_w = 758, .box_w = 48, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13192, .adv_w = 526, .box_w = 33, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13516, .adv_w = 547, .box_w = 34, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13840, .adv_w = 508, .box_w = 30, .box_h = 36, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14128, .adv_w = 266, .box_w = 14, .box_h = 48, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 14320, .adv_w = 400, .box_w = 23, .box_h = 47, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 14602, .adv_w = 266, .box_w = 14, .box_h = 48, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 14794, .adv_w = 431, .box_w = 21, .box_h = 18, .ofs_x = 3, .ofs_y = 19},
    {.bitmap_index = 14902, .adv_w = 400, .box_w = 25, .box_h = 5, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 14937, .adv_w = 266, .box_w = 11, .box_h = 8, .ofs_x = 3, .ofs_y = 29},
    {.bitmap_index = 14961, .adv_w = 455, .box_w = 24, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 15129, .adv_w = 478, .box_w = 25, .box_h = 38, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 15395, .adv_w = 446, .box_w = 25, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 15591, .adv_w = 478, .box_w = 25, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 15857, .adv_w = 451, .box_w = 26, .box_h = 28, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 16053, .adv_w = 302, .box_w = 19, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16233, .adv_w = 479, .box_w = 25, .box_h = 39, .ofs_x = 2, .ofs_y = -12},
    {.bitmap_index = 16506, .adv_w = 458, .box_w = 23, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 16728, .adv_w = 217, .box_w = 8, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 16802, .adv_w = 219, .box_w = 12, .box_h = 47, .ofs_x = -1, .ofs_y = -10},
    {.bitmap_index = 16943, .adv_w = 438, .box_w = 25, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 17202, .adv_w = 200, .box_w = 6, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 17276, .adv_w = 702, .box_w = 38, .box_h = 27, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 17546, .adv_w = 461, .box_w = 23, .box_h = 27, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 17708, .adv_w = 478, .box_w = 26, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 17904, .adv_w = 478, .box_w = 25, .box_h = 37, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 18163, .adv_w = 478, .box_w = 25, .box_h = 37, .ofs_x = 2, .ofs_y = -10},
    {.bitmap_index = 18422, .adv_w = 298, .box_w = 16, .box_h = 27, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 18530, .adv_w = 416, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 18698, .adv_w = 288, .box_w = 17, .box_h = 35, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18873, .adv_w = 462, .box_w = 23, .box_h = 27, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 19035, .adv_w = 400, .box_w = 25, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19217, .adv_w = 618, .box_w = 39, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19477, .adv_w = 424, .box_w = 27, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19659, .adv_w = 415, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = -10},
    {.bitmap_index = 19911, .adv_w = 402, .box_w = 23, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20067, .adv_w = 266, .box_w = 16, .box_h = 48, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 20259, .adv_w = 168, .box_w = 5, .box_h = 51, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 20361, .adv_w = 266, .box_w = 16, .box_h = 48, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 20553, .adv_w = 400, .box_w = 25, .box_h = 9, .ofs_x = 0, .ofs_y = 14},
    {.bitmap_index = 20616, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_Ping_Fang_B_50 = {
#else
lv_font_t ui_font_Ping_Fang_B_50 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 56,          /*The maximum line height required by the font*/
    .base_line = 12,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -5,
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



#endif /*#if UI_FONT_PING_FANG_B_50*/
