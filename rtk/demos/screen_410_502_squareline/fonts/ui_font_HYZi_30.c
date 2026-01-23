/*******************************************************************************
 * Size: 30 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 30 --font lvgl_font_src/HYZiYanKaTongJ.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HYZi_30.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HYZI_30
#define UI_FONT_HYZI_30 1
#endif

#if UI_FONT_HYZI_30


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HYZi_30_glyph_bitmap.bin
 *Define UI_FONT_HYZI_30_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HYZI_30_GLYPH_BITMAP_BIN
#define UI_FONT_HYZI_30_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HYZI_30_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HYZI_30_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 142, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 166, .box_w = 8, .box_h = 25, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 50, .adv_w = 193, .box_w = 8, .box_h = 9, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 68, .adv_w = 318, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 188, .adv_w = 312, .box_w = 17, .box_h = 30, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 338, .adv_w = 480, .box_w = 28, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 506, .adv_w = 415, .box_w = 22, .box_h = 23, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 644, .adv_w = 120, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 653, .adv_w = 180, .box_w = 9, .box_h = 29, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 740, .adv_w = 180, .box_w = 9, .box_h = 29, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 827, .adv_w = 222, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 860, .adv_w = 340, .box_w = 17, .box_h = 18, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 950, .adv_w = 158, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 972, .adv_w = 235, .box_w = 13, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 988, .adv_w = 160, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1002, .adv_w = 186, .box_w = 11, .box_h = 27, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1083, .adv_w = 314, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1203, .adv_w = 314, .box_w = 15, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1299, .adv_w = 314, .box_w = 18, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1414, .adv_w = 314, .box_w = 17, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1529, .adv_w = 314, .box_w = 19, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1649, .adv_w = 314, .box_w = 18, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1764, .adv_w = 314, .box_w = 18, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1879, .adv_w = 314, .box_w = 19, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1999, .adv_w = 314, .box_w = 18, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2114, .adv_w = 314, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2234, .adv_w = 160, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2270, .adv_w = 160, .box_w = 8, .box_h = 23, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 2316, .adv_w = 333, .box_w = 17, .box_h = 17, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 2401, .adv_w = 339, .box_w = 17, .box_h = 12, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 2461, .adv_w = 333, .box_w = 17, .box_h = 17, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 2546, .adv_w = 287, .box_w = 15, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2642, .adv_w = 431, .box_w = 23, .box_h = 24, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2786, .adv_w = 378, .box_w = 22, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2930, .adv_w = 346, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3050, .adv_w = 340, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3170, .adv_w = 377, .box_w = 22, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3314, .adv_w = 329, .box_w = 19, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3429, .adv_w = 329, .box_w = 19, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3549, .adv_w = 358, .box_w = 21, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3693, .adv_w = 347, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3813, .adv_w = 258, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3905, .adv_w = 258, .box_w = 15, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4001, .adv_w = 346, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4121, .adv_w = 283, .box_w = 16, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4217, .adv_w = 444, .box_w = 27, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4385, .adv_w = 348, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4505, .adv_w = 371, .box_w = 22, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4643, .adv_w = 337, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4763, .adv_w = 371, .box_w = 22, .box_h = 29, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 4937, .adv_w = 337, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5057, .adv_w = 313, .box_w = 18, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5172, .adv_w = 339, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5292, .adv_w = 348, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5412, .adv_w = 357, .box_w = 21, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5556, .adv_w = 560, .box_w = 33, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5772, .adv_w = 359, .box_w = 21, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5916, .adv_w = 358, .box_w = 21, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 6060, .adv_w = 348, .box_w = 20, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6175, .adv_w = 180, .box_w = 10, .box_h = 29, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 6262, .adv_w = 186, .box_w = 10, .box_h = 27, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 6343, .adv_w = 180, .box_w = 10, .box_h = 29, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 6430, .adv_w = 316, .box_w = 16, .box_h = 13, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 6482, .adv_w = 277, .box_w = 17, .box_h = 3, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 6497, .adv_w = 185, .box_w = 8, .box_h = 7, .ofs_x = 2, .ofs_y = 15},
    {.bitmap_index = 6511, .adv_w = 310, .box_w = 18, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6596, .adv_w = 297, .box_w = 17, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 6716, .adv_w = 282, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6784, .adv_w = 297, .box_w = 17, .box_h = 25, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 6909, .adv_w = 303, .box_w = 17, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6994, .adv_w = 227, .box_w = 13, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 7086, .adv_w = 310, .box_w = 18, .box_h = 23, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 7201, .adv_w = 289, .box_w = 17, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 7321, .adv_w = 138, .box_w = 7, .box_h = 26, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 7373, .adv_w = 192, .box_w = 10, .box_h = 31, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 7466, .adv_w = 310, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 7586, .adv_w = 133, .box_w = 7, .box_h = 24, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 7634, .adv_w = 437, .box_w = 26, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 7767, .adv_w = 308, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 7862, .adv_w = 305, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 7952, .adv_w = 317, .box_w = 18, .box_h = 24, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 8072, .adv_w = 314, .box_w = 18, .box_h = 23, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 8187, .adv_w = 210, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 8238, .adv_w = 254, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8310, .adv_w = 230, .box_w = 13, .box_h = 24, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8406, .adv_w = 291, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8496, .adv_w = 299, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8586, .adv_w = 443, .box_w = 26, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8712, .adv_w = 292, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8802, .adv_w = 290, .box_w = 17, .box_h = 23, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 8917, .adv_w = 277, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8989, .adv_w = 187, .box_w = 12, .box_h = 29, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 9076, .adv_w = 118, .box_w = 3, .box_h = 29, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 9105, .adv_w = 187, .box_w = 12, .box_h = 29, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 9192, .adv_w = 335, .box_w = 17, .box_h = 8, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 9232, .adv_w = 480, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, -24, -22, -24, 0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 2,
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
const lv_font_t ui_font_HYZi_30 = {
#else
lv_font_t ui_font_HYZi_30 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 34,          /*The maximum line height required by the font*/
    .base_line = 8,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_HYZI_30*/
