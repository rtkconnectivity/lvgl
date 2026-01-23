/*******************************************************************************
 * Size: 34 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 34 --font lvgl_font_src/优设好身体.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_YOUSHE_34.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_YOUSHE_34
#define UI_FONT_YOUSHE_34 1
#endif

#if UI_FONT_YOUSHE_34


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_YOUSHE_34_glyph_bitmap.bin
 *Define UI_FONT_YOUSHE_34_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_YOUSHE_34_GLYPH_BITMAP_BIN
#define UI_FONT_YOUSHE_34_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_YOUSHE_34_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_YOUSHE_34_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 190, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 143, .box_w = 5, .box_h = 26, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 52, .adv_w = 217, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 15},
    {.bitmap_index = 82, .adv_w = 356, .box_w = 20, .box_h = 26, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 212, .adv_w = 296, .box_w = 17, .box_h = 33, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 377, .adv_w = 484, .box_w = 29, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 593, .adv_w = 357, .box_w = 20, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 728, .adv_w = 129, .box_w = 4, .box_h = 10, .ofs_x = 2, .ofs_y = 15},
    {.bitmap_index = 738, .adv_w = 200, .box_w = 8, .box_h = 33, .ofs_x = 3, .ofs_y = -8},
    {.bitmap_index = 804, .adv_w = 201, .box_w = 7, .box_h = 33, .ofs_x = 2, .ofs_y = -8},
    {.bitmap_index = 870, .adv_w = 290, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 934, .adv_w = 314, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1034, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1050, .adv_w = 324, .box_w = 18, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 1065, .adv_w = 151, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1075, .adv_w = 223, .box_w = 12, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1156, .adv_w = 326, .box_w = 18, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1291, .adv_w = 326, .box_w = 8, .box_h = 27, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 1345, .adv_w = 326, .box_w = 16, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1453, .adv_w = 326, .box_w = 17, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1588, .adv_w = 326, .box_w = 20, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1723, .adv_w = 326, .box_w = 17, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1858, .adv_w = 326, .box_w = 17, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1993, .adv_w = 326, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2128, .adv_w = 326, .box_w = 17, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2263, .adv_w = 326, .box_w = 18, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2398, .adv_w = 151, .box_w = 5, .box_h = 19, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2436, .adv_w = 133, .box_w = 5, .box_h = 23, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2482, .adv_w = 306, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2572, .adv_w = 319, .box_w = 17, .box_h = 12, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2632, .adv_w = 305, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2722, .adv_w = 237, .box_w = 13, .box_h = 26, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2826, .adv_w = 351, .box_w = 20, .box_h = 25, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2951, .adv_w = 322, .box_w = 20, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3086, .adv_w = 329, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3221, .adv_w = 331, .box_w = 19, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3356, .adv_w = 343, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3491, .adv_w = 317, .box_w = 17, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3626, .adv_w = 323, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3761, .adv_w = 333, .box_w = 18, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3896, .adv_w = 348, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4031, .adv_w = 181, .box_w = 3, .box_h = 27, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 4058, .adv_w = 246, .box_w = 14, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4166, .adv_w = 312, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4301, .adv_w = 295, .box_w = 16, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4409, .adv_w = 430, .box_w = 23, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4571, .adv_w = 348, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4706, .adv_w = 338, .box_w = 19, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4841, .adv_w = 325, .box_w = 17, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4976, .adv_w = 344, .box_w = 19, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5111, .adv_w = 336, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5246, .adv_w = 335, .box_w = 17, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5381, .adv_w = 286, .box_w = 19, .box_h = 27, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 5516, .adv_w = 342, .box_w = 18, .box_h = 27, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5651, .adv_w = 314, .box_w = 19, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5786, .adv_w = 417, .box_w = 26, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5975, .adv_w = 306, .box_w = 19, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 6110, .adv_w = 300, .box_w = 19, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 6245, .adv_w = 318, .box_w = 19, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 6380, .adv_w = 200, .box_w = 8, .box_h = 32, .ofs_x = 4, .ofs_y = -7},
    {.bitmap_index = 6444, .adv_w = 223, .box_w = 12, .box_h = 27, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6525, .adv_w = 200, .box_w = 9, .box_h = 32, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 6621, .adv_w = 322, .box_w = 16, .box_h = 15, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 6681, .adv_w = 272, .box_w = 17, .box_h = 3, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 6696, .adv_w = 189, .box_w = 7, .box_h = 7, .ofs_x = 2, .ofs_y = 20},
    {.bitmap_index = 6710, .adv_w = 268, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6786, .adv_w = 269, .box_w = 14, .box_h = 29, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 6902, .adv_w = 263, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 6978, .adv_w = 269, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 7094, .adv_w = 259, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 7170, .adv_w = 145, .box_w = 10, .box_h = 29, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 7257, .adv_w = 267, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = -11},
    {.bitmap_index = 7373, .adv_w = 273, .box_w = 13, .box_h = 29, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 7489, .adv_w = 118, .box_w = 4, .box_h = 26, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 7515, .adv_w = 116, .box_w = 9, .box_h = 36, .ofs_x = -3, .ofs_y = -11},
    {.bitmap_index = 7623, .adv_w = 261, .box_w = 14, .box_h = 29, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 7739, .adv_w = 153, .box_w = 6, .box_h = 29, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 7797, .adv_w = 417, .box_w = 22, .box_h = 19, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 7911, .adv_w = 272, .box_w = 13, .box_h = 20, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 7991, .adv_w = 258, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 8067, .adv_w = 265, .box_w = 14, .box_h = 29, .ofs_x = 2, .ofs_y = -11},
    {.bitmap_index = 8183, .adv_w = 265, .box_w = 14, .box_h = 29, .ofs_x = 1, .ofs_y = -11},
    {.bitmap_index = 8299, .adv_w = 198, .box_w = 11, .box_h = 19, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 8356, .adv_w = 250, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 8432, .adv_w = 161, .box_w = 10, .box_h = 24, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 8504, .adv_w = 288, .box_w = 15, .box_h = 19, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 8580, .adv_w = 246, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 8656, .adv_w = 354, .box_w = 20, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 8751, .adv_w = 251, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 8827, .adv_w = 239, .box_w = 14, .box_h = 29, .ofs_x = 0, .ofs_y = -11},
    {.bitmap_index = 8943, .adv_w = 251, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 9019, .adv_w = 200, .box_w = 11, .box_h = 32, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 9115, .adv_w = 123, .box_w = 4, .box_h = 35, .ofs_x = 2, .ofs_y = -10},
    {.bitmap_index = 9150, .adv_w = 200, .box_w = 11, .box_h = 32, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 9246, .adv_w = 298, .box_w = 17, .box_h = 5, .ofs_x = 1, .ofs_y = 9}
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
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    22, 27, 0, 16
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 2,
    .right_class_cnt     = 2,
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
const lv_font_t ui_font_YOUSHE_34 = {
#else
lv_font_t ui_font_YOUSHE_34 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 39,          /*The maximum line height required by the font*/
    .base_line = 11,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_YOUSHE_34*/
