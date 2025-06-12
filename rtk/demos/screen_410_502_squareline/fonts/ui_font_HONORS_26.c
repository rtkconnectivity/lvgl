/*******************************************************************************
 * Size: 26 px
 * Bpp: 2
 * Opts: --bpp 2 --size 26 --font H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/fonts/HONORSans-Medium.ttf -o H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/fonts\ui_font_HONORS_26.c --format lvgl -r 0x20-0x7f --symbols  --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_HONORS_26
#define UI_FONT_HONORS_26 1
#endif

#if UI_FONT_HONORS_26

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
    {.bitmap_index = 0, .adv_w = 99, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 125, .box_w = 4, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 143, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 32, .adv_w = 262, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 233, .box_w = 14, .box_h = 23, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 189, .adv_w = 360, .box_w = 21, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 290, .box_w = 19, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 72, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 386, .adv_w = 126, .box_w = 7, .box_h = 25, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 430, .adv_w = 126, .box_w = 7, .box_h = 25, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 474, .adv_w = 196, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 504, .adv_w = 246, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 557, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 567, .adv_w = 206, .box_w = 11, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 576, .adv_w = 116, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 171, .box_w = 11, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 243, .box_w = 7, .box_h = 19, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 792, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1102, .adv_w = 243, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1169, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1231, .adv_w = 125, .box_w = 4, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 124, .box_w = 4, .box_h = 18, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1263, .adv_w = 270, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1316, .adv_w = 245, .box_w = 15, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1343, .adv_w = 270, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1400, .adv_w = 216, .box_w = 13, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1462, .adv_w = 334, .box_w = 21, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1562, .adv_w = 287, .box_w = 18, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1648, .adv_w = 271, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1724, .adv_w = 290, .box_w = 18, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1810, .adv_w = 306, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1896, .adv_w = 254, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1963, .adv_w = 234, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2030, .adv_w = 297, .box_w = 18, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2116, .adv_w = 293, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2192, .adv_w = 96, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2211, .adv_w = 207, .box_w = 12, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2268, .adv_w = 265, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2344, .adv_w = 226, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2411, .adv_w = 361, .box_w = 20, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2506, .adv_w = 296, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2582, .adv_w = 329, .box_w = 20, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2677, .adv_w = 262, .box_w = 15, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2749, .adv_w = 329, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2854, .adv_w = 277, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2930, .adv_w = 236, .box_w = 14, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2997, .adv_w = 244, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3069, .adv_w = 298, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3145, .adv_w = 273, .box_w = 17, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3226, .adv_w = 406, .box_w = 26, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3350, .adv_w = 263, .box_w = 17, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3431, .adv_w = 258, .box_w = 16, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3507, .adv_w = 239, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3579, .adv_w = 129, .box_w = 6, .box_h = 24, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3615, .adv_w = 171, .box_w = 11, .box_h = 19, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3668, .adv_w = 129, .box_w = 6, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3704, .adv_w = 245, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 3746, .adv_w = 222, .box_w = 14, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3757, .adv_w = 139, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 16},
    {.bitmap_index = 3763, .adv_w = 226, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3809, .adv_w = 251, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3879, .adv_w = 213, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3928, .adv_w = 251, .box_w = 15, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4003, .adv_w = 230, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4052, .adv_w = 129, .box_w = 9, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4097, .adv_w = 248, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4169, .adv_w = 239, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4234, .adv_w = 106, .box_w = 5, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4258, .adv_w = 100, .box_w = 7, .box_h = 24, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 4300, .adv_w = 223, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4370, .adv_w = 94, .box_w = 4, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4390, .adv_w = 380, .box_w = 22, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4467, .adv_w = 240, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4513, .adv_w = 242, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4566, .adv_w = 253, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 4633, .adv_w = 253, .box_w = 15, .box_h = 19, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4705, .adv_w = 153, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4737, .adv_w = 194, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4779, .adv_w = 154, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4824, .adv_w = 235, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4866, .adv_w = 208, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4912, .adv_w = 321, .box_w = 20, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4982, .adv_w = 230, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5035, .adv_w = 212, .box_w = 14, .box_h = 19, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 5102, .adv_w = 201, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5144, .adv_w = 129, .box_w = 8, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5192, .adv_w = 95, .box_w = 4, .box_h = 22, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5214, .adv_w = 129, .box_w = 8, .box_h = 24, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5262, .adv_w = 245, .box_w = 15, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 5281, .adv_w = 395, .box_w = 24, .box_h = 23, .ofs_x = 0, .ofs_y = -1}
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
    },
    {
        .range_start = 8451, .range_length = 1, .glyph_id_start = 96,
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
    .glyph_bitmap = UI_FONT_HONORS_26_GLYPH_BITMAP_BIN,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
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
const lv_font_t ui_font_HONORS_26 =
{
#else
lv_font_t ui_font_HONORS_26 =
{
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 27,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HONORS_26*/

