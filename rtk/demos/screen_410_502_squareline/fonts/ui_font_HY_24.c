/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 24 --font lvgl_font_src/HYZiYanKaTongJ.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HY_24.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HY_24
#define UI_FONT_HY_24 1
#endif

#if UI_FONT_HY_24


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HY_24_glyph_bitmap.bin
 *Define UI_FONT_HY_24_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HY_24_GLYPH_BITMAP_BIN
#define UI_FONT_HY_24_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HY_24_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HY_24_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 113, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 133, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 36, .adv_w = 154, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 50, .adv_w = 254, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 126, .adv_w = 250, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 218, .adv_w = 384, .box_w = 22, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 326, .adv_w = 332, .box_w = 17, .box_h = 18, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 416, .adv_w = 96, .box_w = 2, .box_h = 7, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 423, .adv_w = 144, .box_w = 8, .box_h = 21, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 465, .adv_w = 144, .box_w = 8, .box_h = 21, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 507, .adv_w = 178, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 531, .adv_w = 272, .box_w = 15, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 587, .adv_w = 126, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 605, .adv_w = 188, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 611, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 621, .adv_w = 149, .box_w = 9, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 681, .adv_w = 252, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 749, .adv_w = 252, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 800, .adv_w = 252, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 868, .adv_w = 252, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 936, .adv_w = 252, .box_w = 16, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1004, .adv_w = 252, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1072, .adv_w = 252, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1140, .adv_w = 252, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1208, .adv_w = 252, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1276, .adv_w = 252, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1344, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1370, .adv_w = 128, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1404, .adv_w = 266, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1456, .adv_w = 271, .box_w = 15, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1496, .adv_w = 266, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1548, .adv_w = 229, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1599, .adv_w = 345, .box_w = 19, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1684, .adv_w = 302, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1774, .adv_w = 277, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1864, .adv_w = 272, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1949, .adv_w = 302, .box_w = 18, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2034, .adv_w = 263, .box_w = 16, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2102, .adv_w = 263, .box_w = 16, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2170, .adv_w = 286, .box_w = 18, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2255, .adv_w = 278, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2345, .adv_w = 207, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2413, .adv_w = 207, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2481, .adv_w = 277, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2566, .adv_w = 226, .box_w = 14, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2634, .adv_w = 355, .box_w = 22, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2736, .adv_w = 278, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2826, .adv_w = 297, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2916, .adv_w = 270, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3006, .adv_w = 297, .box_w = 18, .box_h = 22, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 3116, .adv_w = 270, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3206, .adv_w = 251, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3274, .adv_w = 271, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3359, .adv_w = 279, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3449, .adv_w = 285, .box_w = 18, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3534, .adv_w = 448, .box_w = 28, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3653, .adv_w = 287, .box_w = 18, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3738, .adv_w = 286, .box_w = 18, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3823, .adv_w = 278, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3908, .adv_w = 144, .box_w = 8, .box_h = 21, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 3950, .adv_w = 149, .box_w = 9, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4010, .adv_w = 144, .box_w = 8, .box_h = 21, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4052, .adv_w = 253, .box_w = 14, .box_h = 10, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4092, .adv_w = 222, .box_w = 14, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4104, .adv_w = 148, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 4114, .adv_w = 248, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4166, .adv_w = 237, .box_w = 14, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4234, .adv_w = 226, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4286, .adv_w = 237, .box_w = 14, .box_h = 19, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4362, .adv_w = 243, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4414, .adv_w = 181, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4468, .adv_w = 248, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4536, .adv_w = 232, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4608, .adv_w = 110, .box_w = 7, .box_h = 19, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4646, .adv_w = 154, .box_w = 9, .box_h = 24, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4718, .adv_w = 248, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4790, .adv_w = 107, .box_w = 6, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4826, .adv_w = 349, .box_w = 21, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4910, .adv_w = 247, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4966, .adv_w = 244, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5018, .adv_w = 253, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 5090, .adv_w = 252, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5158, .adv_w = 168, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5197, .adv_w = 204, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5236, .adv_w = 184, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5290, .adv_w = 233, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5342, .adv_w = 239, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5394, .adv_w = 354, .box_w = 22, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5478, .adv_w = 234, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 5530, .adv_w = 232, .box_w = 14, .box_h = 17, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5598, .adv_w = 222, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5654, .adv_w = 149, .box_w = 9, .box_h = 21, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5717, .adv_w = 94, .box_w = 3, .box_h = 21, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 5738, .adv_w = 149, .box_w = 9, .box_h = 21, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5801, .adv_w = 268, .box_w = 14, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5825, .adv_w = 384, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
    0, -19, -17, -19, 0, 0
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
const lv_font_t ui_font_HY_24 = {
#else
lv_font_t ui_font_HY_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 25,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_HY_24*/
