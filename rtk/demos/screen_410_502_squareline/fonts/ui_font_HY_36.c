/*******************************************************************************
 * Size: 36 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 36 --font lvgl_font_src/HYZiYanKaTongJ.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HY_36.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HY_36
#define UI_FONT_HY_36 1
#endif

#if UI_FONT_HY_36


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HY_36_glyph_bitmap.bin
 *Define UI_FONT_HY_36_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HY_36_GLYPH_BITMAP_BIN
#define UI_FONT_HY_36_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HY_36_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HY_36_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 170, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 199, .box_w = 9, .box_h = 29, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 87, .adv_w = 232, .box_w = 9, .box_h = 10, .ofs_x = 3, .ofs_y = 16},
    {.bitmap_index = 117, .adv_w = 381, .box_w = 22, .box_h = 29, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 291, .adv_w = 374, .box_w = 20, .box_h = 36, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 471, .adv_w = 576, .box_w = 33, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 723, .adv_w = 498, .box_w = 26, .box_h = 28, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 919, .adv_w = 145, .box_w = 3, .box_h = 10, .ofs_x = 3, .ofs_y = 16},
    {.bitmap_index = 929, .adv_w = 216, .box_w = 11, .box_h = 34, .ofs_x = 2, .ofs_y = -8},
    {.bitmap_index = 1031, .adv_w = 216, .box_w = 11, .box_h = 34, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 1133, .adv_w = 267, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 1185, .adv_w = 408, .box_w = 21, .box_h = 22, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 1317, .adv_w = 190, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = -8},
    {.bitmap_index = 1343, .adv_w = 282, .box_w = 15, .box_h = 4, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 1359, .adv_w = 192, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1375, .adv_w = 223, .box_w = 12, .box_h = 32, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 1471, .adv_w = 377, .box_w = 22, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1639, .adv_w = 377, .box_w = 18, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1779, .adv_w = 377, .box_w = 21, .box_h = 27, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1941, .adv_w = 377, .box_w = 21, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2109, .adv_w = 377, .box_w = 22, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2277, .adv_w = 377, .box_w = 21, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2445, .adv_w = 377, .box_w = 21, .box_h = 27, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2607, .adv_w = 377, .box_w = 21, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2775, .adv_w = 377, .box_w = 21, .box_h = 27, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2937, .adv_w = 377, .box_w = 22, .box_h = 27, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3099, .adv_w = 192, .box_w = 8, .box_h = 21, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3141, .adv_w = 192, .box_w = 8, .box_h = 27, .ofs_x = 2, .ofs_y = -8},
    {.bitmap_index = 3195, .adv_w = 399, .box_w = 21, .box_h = 21, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 3321, .adv_w = 407, .box_w = 21, .box_h = 14, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 3405, .adv_w = 399, .box_w = 21, .box_h = 21, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 3531, .adv_w = 344, .box_w = 18, .box_h = 28, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3671, .adv_w = 517, .box_w = 28, .box_h = 28, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3867, .adv_w = 453, .box_w = 27, .box_h = 29, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 4070, .adv_w = 415, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4238, .adv_w = 408, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4406, .adv_w = 453, .box_w = 26, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4602, .adv_w = 395, .box_w = 23, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4770, .adv_w = 395, .box_w = 23, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4938, .adv_w = 429, .box_w = 25, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5134, .adv_w = 416, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5302, .adv_w = 310, .box_w = 18, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5442, .adv_w = 310, .box_w = 18, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5582, .adv_w = 415, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5750, .adv_w = 339, .box_w = 19, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 5890, .adv_w = 532, .box_w = 31, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 6114, .adv_w = 418, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 6282, .adv_w = 445, .box_w = 26, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 6478, .adv_w = 405, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 6646, .adv_w = 445, .box_w = 26, .box_h = 34, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 6884, .adv_w = 405, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 7052, .adv_w = 376, .box_w = 22, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 7220, .adv_w = 407, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 7388, .adv_w = 418, .box_w = 24, .box_h = 29, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 7562, .adv_w = 428, .box_w = 25, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 7758, .adv_w = 672, .box_w = 40, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8038, .adv_w = 431, .box_w = 25, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8234, .adv_w = 429, .box_w = 25, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8430, .adv_w = 418, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 8598, .adv_w = 217, .box_w = 11, .box_h = 34, .ofs_x = 2, .ofs_y = -8},
    {.bitmap_index = 8700, .adv_w = 223, .box_w = 13, .box_h = 32, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 8828, .adv_w = 216, .box_w = 12, .box_h = 34, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 8930, .adv_w = 380, .box_w = 20, .box_h = 16, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 9010, .adv_w = 332, .box_w = 21, .box_h = 3, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 9028, .adv_w = 222, .box_w = 10, .box_h = 8, .ofs_x = 2, .ofs_y = 18},
    {.bitmap_index = 9052, .adv_w = 372, .box_w = 21, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 9178, .adv_w = 356, .box_w = 20, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 9318, .adv_w = 339, .box_w = 19, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 9423, .adv_w = 356, .box_w = 20, .box_h = 29, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 9568, .adv_w = 364, .box_w = 21, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 9694, .adv_w = 272, .box_w = 15, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 9806, .adv_w = 372, .box_w = 21, .box_h = 27, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 9968, .adv_w = 347, .box_w = 20, .box_h = 29, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 10113, .adv_w = 165, .box_w = 9, .box_h = 31, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 10206, .adv_w = 231, .box_w = 13, .box_h = 37, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 10354, .adv_w = 372, .box_w = 21, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 10522, .adv_w = 160, .box_w = 8, .box_h = 29, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 10580, .adv_w = 524, .box_w = 31, .box_h = 22, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 10756, .adv_w = 370, .box_w = 21, .box_h = 22, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 10888, .adv_w = 366, .box_w = 21, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 11014, .adv_w = 380, .box_w = 22, .box_h = 28, .ofs_x = 1, .ofs_y = -9},
    {.bitmap_index = 11182, .adv_w = 377, .box_w = 22, .box_h = 27, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 11344, .adv_w = 252, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 11428, .adv_w = 305, .box_w = 17, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 11533, .adv_w = 276, .box_w = 15, .box_h = 28, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 11645, .adv_w = 350, .box_w = 20, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 11750, .adv_w = 358, .box_w = 21, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 11876, .adv_w = 532, .box_w = 31, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 12044, .adv_w = 351, .box_w = 20, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 12149, .adv_w = 348, .box_w = 20, .box_h = 27, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 12284, .adv_w = 333, .box_w = 19, .box_h = 22, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 12394, .adv_w = 224, .box_w = 14, .box_h = 34, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 12530, .adv_w = 141, .box_w = 4, .box_h = 34, .ofs_x = 2, .ofs_y = -8},
    {.bitmap_index = 12564, .adv_w = 224, .box_w = 14, .box_h = 34, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 12700, .adv_w = 402, .box_w = 21, .box_h = 9, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 12754, .adv_w = 576, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
    0, -29, -26, -29, 0, 0
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
const lv_font_t ui_font_HY_36 = {
#else
lv_font_t ui_font_HY_36 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 39,          /*The maximum line height required by the font*/
    .base_line = 9,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_HY_36*/
