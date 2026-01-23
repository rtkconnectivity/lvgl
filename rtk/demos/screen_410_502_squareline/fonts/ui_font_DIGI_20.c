/*******************************************************************************
 * Size: 20 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 20 --font lvgl_font_src/Digital-Play-St-3.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_DIGI_20.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_DIGI_20
#define UI_FONT_DIGI_20 1
#endif

#if UI_FONT_DIGI_20


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_DIGI_20_glyph_bitmap.bin
 *Define UI_FONT_DIGI_20_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_DIGI_20_GLYPH_BITMAP_BIN
#define UI_FONT_DIGI_20_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_DIGI_20_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_DIGI_20_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 91, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 77, .box_w = 3, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 164, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 42, .adv_w = 485, .box_w = 29, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 234, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 311, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 469, .adv_w = 233, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 565, .adv_w = 233, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 661, .adv_w = 269, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 721, .adv_w = 224, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 765, .adv_w = 124, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 783, .adv_w = 223, .box_w = 12, .box_h = 3, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 792, .adv_w = 124, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 806, .adv_w = 225, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 966, .adv_w = 77, .box_w = 3, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1066, .adv_w = 234, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1146, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1226, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1306, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 234, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1466, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1546, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1626, .adv_w = 124, .box_w = 6, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1670, .adv_w = 124, .box_w = 6, .box_h = 24, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1718, .adv_w = 154, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1746, .adv_w = 224, .box_w = 13, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1774, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1800, .adv_w = 265, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1880, .adv_w = 288, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1980, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2060, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2140, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2220, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2300, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2380, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2460, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2540, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2620, .adv_w = 77, .box_w = 3, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2640, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2720, .adv_w = 257, .box_w = 15, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2804, .adv_w = 234, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2884, .adv_w = 312, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2984, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3064, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3144, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3224, .adv_w = 256, .box_w = 15, .box_h = 23, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3316, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3396, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3476, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3556, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3636, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3716, .adv_w = 436, .box_w = 26, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3856, .adv_w = 225, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3936, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4016, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4096, .adv_w = 233, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 4192, .adv_w = 225, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4272, .adv_w = 233, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 4368, .adv_w = 240, .box_w = 14, .box_h = 8, .ofs_x = 0, .ofs_y = 14},
    {.bitmap_index = 4400, .adv_w = 223, .box_w = 12, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4409, .adv_w = 113, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 21},
    {.bitmap_index = 4421, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4501, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4581, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4661, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4741, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4821, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4901, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4981, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5061, .adv_w = 77, .box_w = 3, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5081, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5161, .adv_w = 257, .box_w = 15, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5245, .adv_w = 234, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5325, .adv_w = 312, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5425, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5505, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5585, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5665, .adv_w = 256, .box_w = 15, .box_h = 23, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 5757, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5837, .adv_w = 257, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5917, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5997, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6077, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6157, .adv_w = 436, .box_w = 26, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6297, .adv_w = 225, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6377, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6457, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6537, .adv_w = 292, .box_w = 17, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 6657, .adv_w = 77, .box_w = 3, .box_h = 25, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 6682, .adv_w = 292, .box_w = 17, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 6802, .adv_w = 294, .box_w = 17, .box_h = 6, .ofs_x = 0, .ofs_y = 14}
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
const lv_font_t ui_font_DIGI_20 = {
#else
lv_font_t ui_font_DIGI_20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 32,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_DIGI_20*/
