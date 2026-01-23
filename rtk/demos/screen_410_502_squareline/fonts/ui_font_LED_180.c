/*******************************************************************************
 * Size: 180 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 180 --font lvgl_font_src/LEDFont.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_LED_180.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_LED_180
#define UI_FONT_LED_180 1
#endif

#if UI_FONT_LED_180


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_LED_180_glyph_bitmap.bin
 *Define UI_FONT_LED_180_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_LED_180_GLYPH_BITMAP_BIN
#define UI_FONT_LED_180_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_LED_180_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_LED_180_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 1440, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 300, .box_w = 11, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 564, .box_w = 27, .box_h = 28, .ofs_x = 4, .ofs_y = 94},
    {.bitmap_index = 562, .adv_w = 1296, .box_w = 73, .box_h = 79, .ofs_x = 3, .ofs_y = 41},
    {.bitmap_index = 2063, .adv_w = 1296, .box_w = 73, .box_h = 166, .ofs_x = 4, .ofs_y = -23},
    {.bitmap_index = 5217, .adv_w = 2281, .box_w = 133, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 9365, .adv_w = 1483, .box_w = 85, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 12049, .adv_w = 300, .box_w = 11, .box_h = 28, .ofs_x = 4, .ofs_y = 94},
    {.bitmap_index = 12133, .adv_w = 766, .box_w = 40, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 13353, .adv_w = 766, .box_w = 40, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 14573, .adv_w = 1296, .box_w = 73, .box_h = 74, .ofs_x = 4, .ofs_y = 24},
    {.bitmap_index = 15979, .adv_w = 1296, .box_w = 73, .box_h = 62, .ofs_x = 4, .ofs_y = 29},
    {.bitmap_index = 17157, .adv_w = 369, .box_w = 15, .box_h = 27, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 17265, .adv_w = 1408, .box_w = 63, .box_h = 12, .ofs_x = 12, .ofs_y = 61},
    {.bitmap_index = 17457, .adv_w = 369, .box_w = 15, .box_h = 15, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 17517, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 19835, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 22153, .adv_w = 530, .box_w = 25, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 23007, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 25325, .adv_w = 1296, .box_w = 66, .box_h = 122, .ofs_x = 11, .ofs_y = 0},
    {.bitmap_index = 27399, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 29717, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 32035, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 34353, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 12, .ofs_y = 0},
    {.bitmap_index = 36427, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 38745, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 41063, .adv_w = 369, .box_w = 15, .box_h = 65, .ofs_x = 4, .ofs_y = 33},
    {.bitmap_index = 41323, .adv_w = 369, .box_w = 15, .box_h = 73, .ofs_x = 4, .ofs_y = 25},
    {.bitmap_index = 41615, .adv_w = 922, .box_w = 51, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 43201, .adv_w = 1296, .box_w = 73, .box_h = 31, .ofs_x = 4, .ofs_y = 46},
    {.bitmap_index = 43790, .adv_w = 922, .box_w = 50, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 45376, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 47694, .adv_w = 1440, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47694, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 50012, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 52330, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 54404, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 56722, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 58796, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 60870, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 63188, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 65506, .adv_w = 300, .box_w = 11, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 65872, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 68190, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 70508, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 72582, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 74900, .adv_w = 1296, .box_w = 73, .box_h = 123, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 77237, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 79555, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 81873, .adv_w = 1296, .box_w = 74, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 84191, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 86509, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 88827, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 91145, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 93463, .adv_w = 1296, .box_w = 73, .box_h = 123, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 95800, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 98118, .adv_w = 1296, .box_w = 72, .box_h = 122, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 100314, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 102632, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 104950, .adv_w = 613, .box_w = 30, .box_h = 143, .ofs_x = 4, .ofs_y = -11},
    {.bitmap_index = 106094, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 108412, .adv_w = 613, .box_w = 30, .box_h = 143, .ofs_x = 4, .ofs_y = -11},
    {.bitmap_index = 109556, .adv_w = 1296, .box_w = 45, .box_h = 26, .ofs_x = 18, .ofs_y = 125},
    {.bitmap_index = 109868, .adv_w = 1296, .box_w = 81, .box_h = 11, .ofs_x = 0, .ofs_y = -19},
    {.bitmap_index = 110099, .adv_w = 1296, .box_w = 26, .box_h = 26, .ofs_x = 26, .ofs_y = 125},
    {.bitmap_index = 110281, .adv_w = 1296, .box_w = 74, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 111535, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 113853, .adv_w = 1164, .box_w = 65, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 114975, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 117293, .adv_w = 1164, .box_w = 65, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 118415, .adv_w = 979, .box_w = 54, .box_h = 122, .ofs_x = 4, .ofs_y = -56},
    {.bitmap_index = 120123, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = -56},
    {.bitmap_index = 122441, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 124759, .adv_w = 300, .box_w = 12, .box_h = 85, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 125014, .adv_w = 300, .box_w = 50, .box_h = 138, .ofs_x = -35, .ofs_y = -54},
    {.bitmap_index = 126808, .adv_w = 1097, .box_w = 61, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 128760, .adv_w = 300, .box_w = 11, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 129126, .adv_w = 1296, .box_w = 73, .box_h = 67, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 130399, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 131653, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 132907, .adv_w = 1296, .box_w = 73, .box_h = 115, .ofs_x = 4, .ofs_y = -49},
    {.bitmap_index = 135092, .adv_w = 1296, .box_w = 73, .box_h = 115, .ofs_x = 4, .ofs_y = -49},
    {.bitmap_index = 137277, .adv_w = 1164, .box_w = 65, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 138399, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 139653, .adv_w = 1256, .box_w = 71, .box_h = 123, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 141867, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 143121, .adv_w = 1210, .box_w = 66, .box_h = 68, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 144277, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 145531, .adv_w = 1207, .box_w = 65, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 146653, .adv_w = 1296, .box_w = 73, .box_h = 115, .ofs_x = 4, .ofs_y = -49},
    {.bitmap_index = 148838, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 150092, .adv_w = 829, .box_w = 45, .box_h = 143, .ofs_x = 4, .ofs_y = -11},
    {.bitmap_index = 151808, .adv_w = 300, .box_w = 11, .box_h = 145, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 152243, .adv_w = 829, .box_w = 45, .box_h = 143, .ofs_x = 4, .ofs_y = -11},
    {.bitmap_index = 153959, .adv_w = 1296, .box_w = 51, .box_h = 11, .ofs_x = 15, .ofs_y = 129}
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
    119, 30, 0, 119, 0, 0, -120, 0,
    0, 98, 0, 0, 0, 0, 47, 42,
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
    .kern_scale = 114,
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
const lv_font_t ui_font_LED_180 = {
#else
lv_font_t ui_font_LED_180 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 207,          /*The maximum line height required by the font*/
    .base_line = 56,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -14,
    .underline_thickness = 9,
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

#if (LV_FONT_FMT_TXT_LARGE == 0)
#  error "Too large font or glyphs in UI_FONT_LED_180. Enable LV_FONT_FMT_TXT_LARGE in lv_conf.h")
#endif


#endif /*#if UI_FONT_LED_180*/
