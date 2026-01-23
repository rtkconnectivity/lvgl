/*******************************************************************************
 * Size: 36 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 36 --font lvgl_font_src/Digital-Play-St-3.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_DIGI_36.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_DIGI_36
#define UI_FONT_DIGI_36 1
#endif

#if UI_FONT_DIGI_36


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_DIGI_36_glyph_bitmap.bin
 *Define UI_FONT_DIGI_36_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_DIGI_36_GLYPH_BITMAP_BIN
#define UI_FONT_DIGI_36_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_DIGI_36_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_DIGI_36_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 164, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 138, .box_w = 6, .box_h = 37, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 296, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 23},
    {.bitmap_index = 126, .adv_w = 872, .box_w = 52, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 421, .box_w = 23, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 560, .box_w = 32, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1350, .adv_w = 138, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 23},
    {.bitmap_index = 1376, .adv_w = 420, .box_w = 23, .box_h = 43, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 1634, .adv_w = 420, .box_w = 23, .box_h = 43, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 1892, .adv_w = 485, .box_w = 27, .box_h = 27, .ofs_x = 0, .ofs_y = 14},
    {.bitmap_index = 2081, .adv_w = 403, .box_w = 22, .box_h = 20, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 2201, .adv_w = 223, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 2252, .adv_w = 402, .box_w = 22, .box_h = 6, .ofs_x = 0, .ofs_y = 15},
    {.bitmap_index = 2288, .adv_w = 223, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2321, .adv_w = 404, .box_w = 22, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2537, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2789, .adv_w = 138, .box_w = 6, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2861, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3113, .adv_w = 421, .box_w = 23, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3329, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3581, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3833, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4085, .adv_w = 421, .box_w = 23, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4301, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4553, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4805, .adv_w = 223, .box_w = 11, .box_h = 37, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4916, .adv_w = 223, .box_w = 11, .box_h = 42, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5042, .adv_w = 277, .box_w = 14, .box_h = 25, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5142, .adv_w = 403, .box_w = 22, .box_h = 13, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 5220, .adv_w = 277, .box_w = 14, .box_h = 24, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5316, .adv_w = 477, .box_w = 27, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5568, .adv_w = 519, .box_w = 29, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5856, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6108, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6360, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6612, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6864, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7116, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7368, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7620, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7872, .adv_w = 138, .box_w = 6, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7944, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8196, .adv_w = 462, .box_w = 26, .box_h = 37, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8455, .adv_w = 421, .box_w = 23, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8671, .adv_w = 561, .box_w = 32, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8959, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9211, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9463, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9715, .adv_w = 461, .box_w = 26, .box_h = 42, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 10009, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10261, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10513, .adv_w = 460, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10765, .adv_w = 460, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11017, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11269, .adv_w = 785, .box_w = 46, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11701, .adv_w = 406, .box_w = 22, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11917, .adv_w = 460, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12169, .adv_w = 460, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12421, .adv_w = 420, .box_w = 23, .box_h = 43, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 12679, .adv_w = 406, .box_w = 22, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12895, .adv_w = 420, .box_w = 23, .box_h = 43, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 13153, .adv_w = 431, .box_w = 24, .box_h = 14, .ofs_x = 0, .ofs_y = 25},
    {.bitmap_index = 13237, .adv_w = 402, .box_w = 22, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13273, .adv_w = 204, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 37},
    {.bitmap_index = 13306, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13558, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13810, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14062, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14314, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14566, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14818, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15070, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15322, .adv_w = 138, .box_w = 6, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15394, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15646, .adv_w = 462, .box_w = 26, .box_h = 37, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15905, .adv_w = 421, .box_w = 23, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16121, .adv_w = 561, .box_w = 32, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16409, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16661, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16913, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17165, .adv_w = 461, .box_w = 26, .box_h = 42, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 17459, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17711, .adv_w = 462, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17963, .adv_w = 460, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18215, .adv_w = 460, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18467, .adv_w = 461, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18719, .adv_w = 785, .box_w = 46, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19151, .adv_w = 406, .box_w = 22, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19367, .adv_w = 460, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19619, .adv_w = 460, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19871, .adv_w = 525, .box_w = 30, .box_h = 43, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 20215, .adv_w = 139, .box_w = 6, .box_h = 45, .ofs_x = 0, .ofs_y = -9},
    {.bitmap_index = 20305, .adv_w = 525, .box_w = 30, .box_h = 43, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 20649, .adv_w = 530, .box_w = 30, .box_h = 11, .ofs_x = 0, .ofs_y = 25}
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
const lv_font_t ui_font_DIGI_36 = {
#else
lv_font_t ui_font_DIGI_36 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 57,          /*The maximum line height required by the font*/
    .base_line = 9,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
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



#endif /*#if UI_FONT_DIGI_36*/
