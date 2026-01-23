/*******************************************************************************
 * Size: 22 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 22 --font lvgl_font_src/DJB-Get-Digital-1.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_DJB_22.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_DJB_22
#define UI_FONT_DJB_22 1
#endif

#if UI_FONT_DJB_22


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_DJB_22_glyph_bitmap.bin
 *Define UI_FONT_DJB_22_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_DJB_22_GLYPH_BITMAP_BIN
#define UI_FONT_DJB_22_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_DJB_22_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_DJB_22_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 103, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 68, .box_w = 3, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 19, .adv_w = 117, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 29, .adv_w = 223, .box_w = 13, .box_h = 10, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 69, .adv_w = 175, .box_w = 11, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 129, .adv_w = 267, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 206, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 67, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 246, .adv_w = 123, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 123, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 132, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 326, .adv_w = 180, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 356, .adv_w = 67, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 362, .adv_w = 138, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 368, .adv_w = 69, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 147, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 68, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 174, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 174, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 174, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 70, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 834, .adv_w = 67, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 847, .adv_w = 115, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 869, .adv_w = 138, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 879, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 901, .adv_w = 162, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 952, .adv_w = 181, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 997, .adv_w = 174, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1048, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1099, .adv_w = 158, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1131, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1179, .adv_w = 159, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1211, .adv_w = 158, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1245, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1293, .adv_w = 174, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1341, .adv_w = 68, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1358, .adv_w = 156, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1409, .adv_w = 174, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1463, .adv_w = 152, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1497, .adv_w = 208, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1548, .adv_w = 206, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1599, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1647, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1698, .adv_w = 174, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1746, .adv_w = 174, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1797, .adv_w = 174, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1845, .adv_w = 178, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1893, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1944, .adv_w = 174, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1995, .adv_w = 208, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2046, .adv_w = 178, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2097, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2148, .adv_w = 178, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2196, .adv_w = 123, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2228, .adv_w = 147, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2262, .adv_w = 123, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2294, .adv_w = 136, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 2300, .adv_w = 136, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2306, .adv_w = 67, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 2309, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2345, .adv_w = 174, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2396, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2432, .adv_w = 174, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2483, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2519, .adv_w = 121, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2553, .adv_w = 178, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 2607, .adv_w = 174, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2658, .adv_w = 70, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2673, .adv_w = 178, .box_w = 9, .box_h = 20, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2733, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2784, .adv_w = 72, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2801, .adv_w = 223, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2837, .adv_w = 178, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2873, .adv_w = 174, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2909, .adv_w = 181, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 2960, .adv_w = 178, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 3032, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3056, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3092, .adv_w = 187, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3143, .adv_w = 174, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3179, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3218, .adv_w = 208, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3254, .adv_w = 159, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3290, .adv_w = 178, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 3344, .adv_w = 164, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3380, .adv_w = 160, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3428, .adv_w = 72, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3445, .adv_w = 155, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3493, .adv_w = 174, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_DJB_22 = {
#else
lv_font_t ui_font_DJB_22 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 24,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_DJB_22*/
