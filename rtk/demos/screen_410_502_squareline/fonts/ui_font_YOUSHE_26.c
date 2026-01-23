/*******************************************************************************
 * Size: 26 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 26 --font lvgl_font_src/优设好身体.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_YOUSHE_26.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_YOUSHE_26
#define UI_FONT_YOUSHE_26 1
#endif

#if UI_FONT_YOUSHE_26


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_YOUSHE_26_glyph_bitmap.bin
 *Define UI_FONT_YOUSHE_26_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_YOUSHE_26_GLYPH_BITMAP_BIN
#define UI_FONT_YOUSHE_26_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_YOUSHE_26_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_YOUSHE_26_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 146, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 109, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 19, .adv_w = 166, .box_w = 7, .box_h = 8, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 35, .adv_w = 272, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 111, .adv_w = 226, .box_w = 14, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 207, .adv_w = 370, .box_w = 23, .box_h = 20, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 327, .adv_w = 273, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 407, .adv_w = 99, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 415, .adv_w = 153, .box_w = 6, .box_h = 24, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 463, .adv_w = 154, .box_w = 6, .box_h = 24, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 511, .adv_w = 222, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 544, .adv_w = 240, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 604, .adv_w = 98, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 610, .adv_w = 248, .box_w = 14, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 618, .adv_w = 115, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 621, .adv_w = 171, .box_w = 9, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 678, .adv_w = 250, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 758, .adv_w = 250, .box_w = 6, .box_h = 20, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 798, .adv_w = 250, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 878, .adv_w = 250, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 958, .adv_w = 250, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1038, .adv_w = 250, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1118, .adv_w = 250, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1198, .adv_w = 250, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1278, .adv_w = 250, .box_w = 13, .box_h = 20, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1358, .adv_w = 250, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1438, .adv_w = 115, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1466, .adv_w = 102, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1483, .adv_w = 234, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1535, .adv_w = 244, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1571, .adv_w = 233, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1623, .adv_w = 181, .box_w = 11, .box_h = 19, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1680, .adv_w = 269, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1752, .adv_w = 246, .box_w = 16, .box_h = 20, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1832, .adv_w = 251, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1912, .adv_w = 253, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1992, .adv_w = 262, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2072, .adv_w = 242, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2152, .adv_w = 247, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2232, .adv_w = 255, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2312, .adv_w = 266, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2392, .adv_w = 139, .box_w = 3, .box_h = 20, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 2412, .adv_w = 188, .box_w = 11, .box_h = 20, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2472, .adv_w = 239, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2552, .adv_w = 226, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2632, .adv_w = 329, .box_w = 18, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2732, .adv_w = 266, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2812, .adv_w = 259, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2892, .adv_w = 248, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2972, .adv_w = 263, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3052, .adv_w = 257, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3132, .adv_w = 256, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3212, .adv_w = 219, .box_w = 15, .box_h = 20, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 3292, .adv_w = 262, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3372, .adv_w = 240, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3452, .adv_w = 319, .box_w = 20, .box_h = 20, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3552, .adv_w = 234, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3632, .adv_w = 230, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3712, .adv_w = 243, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3792, .adv_w = 153, .box_w = 6, .box_h = 23, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 3838, .adv_w = 171, .box_w = 9, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3895, .adv_w = 153, .box_w = 7, .box_h = 23, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 3941, .adv_w = 246, .box_w = 12, .box_h = 11, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 3974, .adv_w = 208, .box_w = 13, .box_h = 2, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3982, .adv_w = 144, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 3992, .adv_w = 205, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4048, .adv_w = 206, .box_w = 11, .box_h = 21, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4111, .adv_w = 201, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4153, .adv_w = 206, .box_w = 11, .box_h = 21, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4216, .adv_w = 198, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4258, .adv_w = 111, .box_w = 7, .box_h = 21, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4300, .adv_w = 204, .box_w = 11, .box_h = 21, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 4363, .adv_w = 208, .box_w = 11, .box_h = 21, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4426, .adv_w = 90, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4445, .adv_w = 89, .box_w = 7, .box_h = 26, .ofs_x = -3, .ofs_y = -8},
    {.bitmap_index = 4497, .adv_w = 200, .box_w = 11, .box_h = 21, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4560, .adv_w = 117, .box_w = 6, .box_h = 21, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4602, .adv_w = 319, .box_w = 18, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4672, .adv_w = 208, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 4717, .adv_w = 198, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4759, .adv_w = 203, .box_w = 11, .box_h = 21, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 4822, .adv_w = 203, .box_w = 11, .box_h = 21, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 4885, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4927, .adv_w = 191, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4969, .adv_w = 123, .box_w = 8, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5005, .adv_w = 220, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5047, .adv_w = 188, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5089, .adv_w = 270, .box_w = 15, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5145, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5187, .adv_w = 183, .box_w = 11, .box_h = 21, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 5250, .adv_w = 192, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5292, .adv_w = 153, .box_w = 8, .box_h = 23, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 5338, .adv_w = 94, .box_w = 3, .box_h = 25, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 5363, .adv_w = 153, .box_w = 9, .box_h = 23, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5432, .adv_w = 228, .box_w = 13, .box_h = 4, .ofs_x = 1, .ofs_y = 6}
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
    17, 21, 0, 12
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
const lv_font_t ui_font_YOUSHE_26 = {
#else
lv_font_t ui_font_YOUSHE_26 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 28,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_YOUSHE_26*/
