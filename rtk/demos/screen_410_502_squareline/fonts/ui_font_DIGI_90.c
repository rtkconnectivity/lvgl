/*******************************************************************************
 * Size: 90 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 90 --font lvgl_font_src/Digital-Play-St-3.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_DIGI_90.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_DIGI_90
#define UI_FONT_DIGI_90 1
#endif

#if UI_FONT_DIGI_90


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_DIGI_90_glyph_bitmap.bin
 *Define UI_FONT_DIGI_90_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_DIGI_90_GLYPH_BITMAP_BIN
#define UI_FONT_DIGI_90_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_DIGI_90_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_DIGI_90_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 411, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 345, .box_w = 13, .box_h = 92, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 739, .box_w = 38, .box_h = 32, .ofs_x = 0, .ofs_y = 56},
    {.bitmap_index = 688, .adv_w = 2181, .box_w = 128, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3536, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4960, .adv_w = 1053, .box_w = 58, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6295, .adv_w = 1399, .box_w = 79, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8075, .adv_w = 345, .box_w = 13, .box_h = 32, .ofs_x = 0, .ofs_y = 56},
    {.bitmap_index = 8203, .adv_w = 1049, .box_w = 57, .box_h = 105, .ofs_x = 0, .ofs_y = -16},
    {.bitmap_index = 9778, .adv_w = 1049, .box_w = 57, .box_h = 105, .ofs_x = 0, .ofs_y = -16},
    {.bitmap_index = 11353, .adv_w = 1211, .box_w = 67, .box_h = 67, .ofs_x = 0, .ofs_y = 35},
    {.bitmap_index = 12492, .adv_w = 1007, .box_w = 55, .box_h = 48, .ofs_x = 0, .ofs_y = 20},
    {.bitmap_index = 13164, .adv_w = 558, .box_w = 27, .box_h = 39, .ofs_x = 0, .ofs_y = -12},
    {.bitmap_index = 13437, .adv_w = 1004, .box_w = 54, .box_h = 13, .ofs_x = 0, .ofs_y = 38},
    {.bitmap_index = 13619, .adv_w = 558, .box_w = 27, .box_h = 27, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13808, .adv_w = 1011, .box_w = 55, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15054, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16478, .adv_w = 345, .box_w = 13, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16834, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18258, .adv_w = 1053, .box_w = 58, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19593, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21017, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22441, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23865, .adv_w = 1053, .box_w = 58, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25200, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26624, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28048, .adv_w = 558, .box_w = 27, .box_h = 91, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28685, .adv_w = 558, .box_w = 27, .box_h = 103, .ofs_x = 0, .ofs_y = -12},
    {.bitmap_index = 29406, .adv_w = 693, .box_w = 35, .box_h = 60, .ofs_x = 0, .ofs_y = 14},
    {.bitmap_index = 29946, .adv_w = 1007, .box_w = 55, .box_h = 32, .ofs_x = 0, .ofs_y = 28},
    {.bitmap_index = 30394, .adv_w = 693, .box_w = 35, .box_h = 59, .ofs_x = 0, .ofs_y = 15},
    {.bitmap_index = 30925, .adv_w = 1192, .box_w = 66, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32438, .adv_w = 1298, .box_w = 73, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34129, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 35553, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 36977, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38401, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 39825, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41249, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42673, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44097, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45521, .adv_w = 345, .box_w = 13, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45877, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47301, .adv_w = 1156, .box_w = 64, .box_h = 90, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48741, .adv_w = 1053, .box_w = 58, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50076, .adv_w = 1402, .box_w = 79, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51856, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53280, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54704, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56128, .adv_w = 1153, .box_w = 64, .box_h = 104, .ofs_x = 0, .ofs_y = -15},
    {.bitmap_index = 57792, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59216, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60640, .adv_w = 1150, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62064, .adv_w = 1150, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63488, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64912, .adv_w = 1962, .box_w = 114, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67493, .adv_w = 1014, .box_w = 55, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68739, .adv_w = 1150, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70163, .adv_w = 1150, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71587, .adv_w = 1049, .box_w = 57, .box_h = 105, .ofs_x = 0, .ofs_y = -16},
    {.bitmap_index = 73162, .adv_w = 1014, .box_w = 55, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74408, .adv_w = 1049, .box_w = 57, .box_h = 105, .ofs_x = 0, .ofs_y = -16},
    {.bitmap_index = 75983, .adv_w = 1079, .box_w = 59, .box_h = 35, .ofs_x = 0, .ofs_y = 62},
    {.bitmap_index = 76508, .adv_w = 1004, .box_w = 54, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 76690, .adv_w = 509, .box_w = 24, .box_h = 26, .ofs_x = 0, .ofs_y = 91},
    {.bitmap_index = 76846, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78270, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 79694, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81118, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82542, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83966, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85390, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86814, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88238, .adv_w = 345, .box_w = 13, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88594, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90018, .adv_w = 1156, .box_w = 64, .box_h = 90, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91458, .adv_w = 1053, .box_w = 58, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92793, .adv_w = 1402, .box_w = 79, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94573, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 95997, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97421, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98845, .adv_w = 1153, .box_w = 64, .box_h = 104, .ofs_x = 0, .ofs_y = -15},
    {.bitmap_index = 100509, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101933, .adv_w = 1156, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 103357, .adv_w = 1150, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104781, .adv_w = 1150, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 106205, .adv_w = 1153, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107629, .adv_w = 1962, .box_w = 114, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110210, .adv_w = 1014, .box_w = 55, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111456, .adv_w = 1150, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112880, .adv_w = 1150, .box_w = 64, .box_h = 89, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114304, .adv_w = 1312, .box_w = 74, .box_h = 105, .ofs_x = 0, .ofs_y = -16},
    {.bitmap_index = 116299, .adv_w = 347, .box_w = 13, .box_h = 110, .ofs_x = 0, .ofs_y = -21},
    {.bitmap_index = 116739, .adv_w = 1312, .box_w = 74, .box_h = 105, .ofs_x = 0, .ofs_y = -16},
    {.bitmap_index = 118734, .adv_w = 1325, .box_w = 74, .box_h = 26, .ofs_x = 0, .ofs_y = 62}
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
const lv_font_t ui_font_DIGI_90 = {
#else
lv_font_t ui_font_DIGI_90 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 138,          /*The maximum line height required by the font*/
    .base_line = 21,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -10,
    .underline_thickness = 7,
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



#endif /*#if UI_FONT_DIGI_90*/
