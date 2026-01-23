/*******************************************************************************
 * Size: 86 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 86 --font lvgl_font_src/LEDFont.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_LED_86.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_LED_86
#define UI_FONT_LED_86 1
#endif

#if UI_FONT_LED_86


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_LED_86_glyph_bitmap.bin
 *Define UI_FONT_LED_86_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_LED_86_GLYPH_BITMAP_BIN
#define UI_FONT_LED_86_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_LED_86_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_LED_86_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 688, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 143, .box_w = 5, .box_h = 58, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 270, .box_w = 13, .box_h = 14, .ofs_x = 2, .ofs_y = 44},
    {.bitmap_index = 172, .adv_w = 619, .box_w = 36, .box_h = 37, .ofs_x = 1, .ofs_y = 19},
    {.bitmap_index = 505, .adv_w = 619, .box_w = 36, .box_h = 78, .ofs_x = 1, .ofs_y = -11},
    {.bitmap_index = 1207, .adv_w = 1090, .box_w = 65, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2176, .adv_w = 709, .box_w = 42, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2803, .adv_w = 143, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = 44},
    {.bitmap_index = 2831, .adv_w = 366, .box_w = 19, .box_h = 57, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3116, .adv_w = 366, .box_w = 20, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3401, .adv_w = 619, .box_w = 35, .box_h = 35, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 3716, .adv_w = 619, .box_w = 35, .box_h = 30, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 3986, .adv_w = 176, .box_w = 7, .box_h = 13, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 4012, .adv_w = 673, .box_w = 30, .box_h = 6, .ofs_x = 6, .ofs_y = 28},
    {.bitmap_index = 4060, .adv_w = 176, .box_w = 7, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4074, .adv_w = 619, .box_w = 35, .box_h = 57, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4587, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5100, .adv_w = 253, .box_w = 12, .box_h = 58, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5274, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5787, .adv_w = 619, .box_w = 32, .box_h = 57, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 6243, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6765, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7278, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7800, .adv_w = 619, .box_w = 32, .box_h = 58, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 8264, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8777, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9290, .adv_w = 176, .box_w = 7, .box_h = 30, .ofs_x = 2, .ofs_y = 16},
    {.bitmap_index = 9350, .adv_w = 176, .box_w = 7, .box_h = 35, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 9420, .adv_w = 440, .box_w = 24, .box_h = 57, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9762, .adv_w = 619, .box_w = 35, .box_h = 14, .ofs_x = 2, .ofs_y = 21},
    {.bitmap_index = 9888, .adv_w = 440, .box_w = 25, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10287, .adv_w = 619, .box_w = 35, .box_h = 57, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 10800, .adv_w = 688, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10800, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11313, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11826, .adv_w = 619, .box_w = 32, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12282, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12795, .adv_w = 619, .box_w = 32, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13251, .adv_w = 619, .box_w = 32, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13707, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14220, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14742, .adv_w = 143, .box_w = 5, .box_h = 58, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 14858, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15380, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15902, .adv_w = 619, .box_w = 32, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16366, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 16888, .adv_w = 619, .box_w = 36, .box_h = 59, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 17419, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17932, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18445, .adv_w = 619, .box_w = 37, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19015, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19528, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20041, .adv_w = 619, .box_w = 35, .box_h = 58, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 20563, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21085, .adv_w = 619, .box_w = 36, .box_h = 59, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 21616, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22138, .adv_w = 619, .box_w = 35, .box_h = 57, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 22651, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23173, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23686, .adv_w = 293, .box_w = 15, .box_h = 68, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 23958, .adv_w = 619, .box_w = 35, .box_h = 57, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 24471, .adv_w = 293, .box_w = 14, .box_h = 68, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 24743, .adv_w = 619, .box_w = 22, .box_h = 12, .ofs_x = 8, .ofs_y = 59},
    {.bitmap_index = 24815, .adv_w = 619, .box_w = 39, .box_h = 5, .ofs_x = 0, .ofs_y = -9},
    {.bitmap_index = 24865, .adv_w = 619, .box_w = 13, .box_h = 12, .ofs_x = 12, .ofs_y = 59},
    {.bitmap_index = 24913, .adv_w = 619, .box_w = 35, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 25192, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25714, .adv_w = 556, .box_w = 32, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25962, .adv_w = 619, .box_w = 35, .box_h = 58, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 26484, .adv_w = 556, .box_w = 32, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 26732, .adv_w = 468, .box_w = 27, .box_h = 58, .ofs_x = 1, .ofs_y = -27},
    {.bitmap_index = 27138, .adv_w = 619, .box_w = 36, .box_h = 57, .ofs_x = 1, .ofs_y = -26},
    {.bitmap_index = 27651, .adv_w = 619, .box_w = 36, .box_h = 58, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 28173, .adv_w = 143, .box_w = 6, .box_h = 41, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 28255, .adv_w = 143, .box_w = 24, .box_h = 65, .ofs_x = -17, .ofs_y = -25},
    {.bitmap_index = 28645, .adv_w = 524, .box_w = 29, .box_h = 58, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 29109, .adv_w = 143, .box_w = 5, .box_h = 58, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 29225, .adv_w = 619, .box_w = 36, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29504, .adv_w = 619, .box_w = 36, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29783, .adv_w = 619, .box_w = 36, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30062, .adv_w = 619, .box_w = 36, .box_h = 54, .ofs_x = 1, .ofs_y = -23},
    {.bitmap_index = 30548, .adv_w = 619, .box_w = 36, .box_h = 54, .ofs_x = 1, .ofs_y = -23},
    {.bitmap_index = 31034, .adv_w = 556, .box_w = 32, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 31282, .adv_w = 619, .box_w = 36, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 31561, .adv_w = 600, .box_w = 34, .box_h = 58, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 32083, .adv_w = 619, .box_w = 36, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32362, .adv_w = 578, .box_w = 33, .box_h = 33, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 32659, .adv_w = 619, .box_w = 36, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32947, .adv_w = 577, .box_w = 31, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 33195, .adv_w = 619, .box_w = 36, .box_h = 54, .ofs_x = 1, .ofs_y = -23},
    {.bitmap_index = 33681, .adv_w = 619, .box_w = 35, .box_h = 31, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 33960, .adv_w = 396, .box_w = 22, .box_h = 68, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 34368, .adv_w = 143, .box_w = 5, .box_h = 69, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 34506, .adv_w = 396, .box_w = 22, .box_h = 68, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 34914, .adv_w = 619, .box_w = 25, .box_h = 5, .ofs_x = 7, .ofs_y = 61}
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
    118, 29, 0, 118, 0, 0, -118, 0,
    0, 97, 0, 0, 0, 0, 46, 42,
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
    .kern_scale = 55,
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
const lv_font_t ui_font_LED_86 = {
#else
lv_font_t ui_font_LED_86 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 98,          /*The maximum line height required by the font*/
    .base_line = 27,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -7,
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



#endif /*#if UI_FONT_LED_86*/
