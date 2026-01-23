/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 24 --font lvgl_font_src/LEDFont.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_LED_24.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_LED_24
#define UI_FONT_LED_24 1
#endif

#if UI_FONT_LED_24


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_LED_24_glyph_bitmap.bin
 *Define UI_FONT_LED_24_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_LED_24_GLYPH_BITMAP_BIN
#define UI_FONT_LED_24_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_LED_24_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_LED_24_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 192, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 40, .box_w = 2, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 27, .adv_w = 173, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 63, .adv_w = 173, .box_w = 11, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 135, .adv_w = 304, .box_w = 19, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 198, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 276, .adv_w = 102, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 102, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 173, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 377, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 404, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 408, .adv_w = 188, .box_w = 9, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 414, .adv_w = 49, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 71, .box_w = 4, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 952, .adv_w = 49, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 963, .adv_w = 123, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 997, .adv_w = 173, .box_w = 11, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1015, .adv_w = 123, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1049, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 192, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1151, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1202, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1304, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1355, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1406, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1457, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1508, .adv_w = 40, .box_w = 2, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1525, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1576, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1627, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1678, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1729, .adv_w = 173, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1783, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1834, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1885, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1936, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1987, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2038, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2089, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2140, .adv_w = 173, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2194, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2245, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2296, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2347, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2398, .adv_w = 82, .box_w = 5, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2440, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2491, .adv_w = 82, .box_w = 5, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2533, .adv_w = 173, .box_w = 7, .box_h = 4, .ofs_x = 2, .ofs_y = 17},
    {.bitmap_index = 2541, .adv_w = 173, .box_w = 11, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2550, .adv_w = 173, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = 17},
    {.bitmap_index = 2554, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2581, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2632, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2659, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2710, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2737, .adv_w = 131, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 2771, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 2822, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2873, .adv_w = 40, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2886, .adv_w = 40, .box_w = 7, .box_h = 20, .ofs_x = -5, .ofs_y = -8},
    {.bitmap_index = 2926, .adv_w = 146, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2977, .adv_w = 40, .box_w = 2, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2994, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3021, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3048, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3075, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 3123, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 3171, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3198, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3225, .adv_w = 167, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3276, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3303, .adv_w = 161, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3336, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3363, .adv_w = 161, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3390, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 3438, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3465, .adv_w = 111, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3505, .adv_w = 40, .box_w = 2, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3526, .adv_w = 111, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3566, .adv_w = 173, .box_w = 7, .box_h = 3, .ofs_x = 2, .ofs_y = 17}
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

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    113, 28, 0, 113, 0, 0, -114, 0,
    0, 93, 0, 0, 0, 0, 45, 40,
    0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 6,
    .right_class_cnt     = 3,
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
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 1,
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
const lv_font_t ui_font_LED_24 = {
#else
lv_font_t ui_font_LED_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 29,          /*The maximum line height required by the font*/
    .base_line = 8,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_LED_24*/
