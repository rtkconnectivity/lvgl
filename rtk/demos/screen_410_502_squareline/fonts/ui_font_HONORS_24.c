/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --bpp 2 --size 24 --font H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/fonts/HONORSans-Medium.ttf -o H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/fonts\ui_font_HONORS_24.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_HONORS_24
#define UI_FONT_HONORS_24 1
#endif

#if UI_FONT_HONORS_24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/



/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] =
{
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 92, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 116, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 132, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 36, .adv_w = 242, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 215, .box_w = 13, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 176, .adv_w = 332, .box_w = 19, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 268, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 66, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 345, .adv_w = 117, .box_w = 7, .box_h = 23, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 386, .adv_w = 117, .box_w = 6, .box_h = 23, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 421, .adv_w = 181, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 449, .adv_w = 227, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 495, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 503, .adv_w = 190, .box_w = 10, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 511, .adv_w = 107, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 158, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 224, .box_w = 6, .box_h = 18, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 966, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 224, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 116, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 114, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1113, .adv_w = 249, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1159, .adv_w = 226, .box_w = 14, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1184, .adv_w = 249, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1233, .adv_w = 200, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1287, .adv_w = 308, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1373, .adv_w = 265, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1450, .adv_w = 250, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1513, .adv_w = 267, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1590, .adv_w = 282, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 235, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1721, .adv_w = 216, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1780, .adv_w = 275, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1857, .adv_w = 270, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1925, .adv_w = 89, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1943, .adv_w = 191, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1993, .adv_w = 245, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2061, .adv_w = 209, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2115, .adv_w = 333, .box_w = 19, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2201, .adv_w = 273, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2269, .adv_w = 304, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2355, .adv_w = 242, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2418, .adv_w = 304, .box_w = 19, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2513, .adv_w = 256, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2581, .adv_w = 218, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2640, .adv_w = 225, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2703, .adv_w = 275, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2771, .adv_w = 252, .box_w = 16, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2843, .adv_w = 375, .box_w = 24, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2951, .adv_w = 243, .box_w = 16, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3023, .adv_w = 238, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3091, .adv_w = 221, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3154, .adv_w = 119, .box_w = 6, .box_h = 22, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3187, .adv_w = 158, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3232, .adv_w = 119, .box_w = 5, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3260, .adv_w = 227, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 3295, .adv_w = 205, .box_w = 13, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3302, .adv_w = 128, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 15},
    {.bitmap_index = 3308, .adv_w = 209, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3347, .adv_w = 232, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3406, .adv_w = 197, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3449, .adv_w = 232, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3512, .adv_w = 213, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3555, .adv_w = 119, .box_w = 8, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3593, .adv_w = 229, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 3652, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3706, .adv_w = 98, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3724, .adv_w = 93, .box_w = 7, .box_h = 23, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 3765, .adv_w = 206, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3819, .adv_w = 86, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3833, .adv_w = 351, .box_w = 20, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3898, .adv_w = 221, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3937, .adv_w = 223, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3983, .adv_w = 233, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 4042, .adv_w = 233, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4105, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4133, .adv_w = 179, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4169, .adv_w = 142, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4208, .adv_w = 217, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4244, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4283, .adv_w = 296, .box_w = 19, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4345, .adv_w = 213, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4388, .adv_w = 195, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4447, .adv_w = 186, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4483, .adv_w = 119, .box_w = 8, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4527, .adv_w = 88, .box_w = 3, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4542, .adv_w = 119, .box_w = 8, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4586, .adv_w = 227, .box_w = 14, .box_h = 4, .ofs_x = 0, .ofs_y = 6}
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
static const lv_font_fmt_txt_dsc_t font_dsc =
{
#else
static lv_font_fmt_txt_dsc_t font_dsc =
{
#endif
    .glyph_bitmap = UI_FONT_HONORS_24_GLYPH_BITMAP_BIN,
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
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_HONORS_24 =
{
#else
lv_font_t ui_font_HONORS_24 =
{
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 25,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HONORS_24*/

