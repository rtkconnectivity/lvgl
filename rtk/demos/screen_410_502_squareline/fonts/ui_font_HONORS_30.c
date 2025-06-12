/*******************************************************************************
 * Size: 30 px
 * Bpp: 2
 * Opts: --bpp 2 --size 30 --font H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/fonts/HONORSans-Regular.ttf -o H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/fonts\ui_font_HONORS_30.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_HONORS_30
#define UI_FONT_HONORS_30 1
#endif

#if UI_FONT_HONORS_30

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
    {.bitmap_index = 0, .adv_w = 115, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 139, .box_w = 5, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 150, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 15},
    {.bitmap_index = 43, .adv_w = 298, .box_w = 18, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 260, .box_w = 16, .box_h = 28, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 259, .adv_w = 403, .box_w = 23, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 334, .box_w = 21, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 78, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 15},
    {.bitmap_index = 519, .adv_w = 138, .box_w = 8, .box_h = 29, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 577, .adv_w = 138, .box_w = 7, .box_h = 29, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 628, .adv_w = 222, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 667, .adv_w = 283, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 735, .adv_w = 114, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 747, .adv_w = 238, .box_w = 13, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 757, .adv_w = 130, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 192, .box_w = 12, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 275, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 275, .box_w = 8, .box_h = 23, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 275, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 275, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 275, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1224, .adv_w = 275, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1311, .adv_w = 275, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1398, .adv_w = 275, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1485, .adv_w = 275, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1572, .adv_w = 275, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1659, .adv_w = 139, .box_w = 5, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1679, .adv_w = 138, .box_w = 5, .box_h = 21, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1706, .adv_w = 310, .box_w = 17, .box_h = 17, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1779, .adv_w = 281, .box_w = 17, .box_h = 8, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 1813, .adv_w = 310, .box_w = 16, .box_h = 17, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 1881, .adv_w = 248, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1962, .adv_w = 384, .box_w = 24, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2100, .adv_w = 322, .box_w = 22, .box_h = 23, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2227, .adv_w = 308, .box_w = 17, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2325, .adv_w = 332, .box_w = 20, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2440, .adv_w = 350, .box_w = 19, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2550, .adv_w = 289, .box_w = 16, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2642, .adv_w = 266, .box_w = 15, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2729, .adv_w = 340, .box_w = 20, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2844, .adv_w = 334, .box_w = 18, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2948, .adv_w = 104, .box_w = 4, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2971, .adv_w = 235, .box_w = 13, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3046, .adv_w = 296, .box_w = 18, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3150, .adv_w = 255, .box_w = 15, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3237, .adv_w = 410, .box_w = 23, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3370, .adv_w = 337, .box_w = 19, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3480, .adv_w = 378, .box_w = 22, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3607, .adv_w = 298, .box_w = 17, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3705, .adv_w = 378, .box_w = 22, .box_h = 25, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3843, .adv_w = 314, .box_w = 17, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3941, .adv_w = 266, .box_w = 16, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4033, .adv_w = 279, .box_w = 18, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4137, .adv_w = 340, .box_w = 18, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4241, .adv_w = 308, .box_w = 20, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4356, .adv_w = 460, .box_w = 29, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4523, .adv_w = 289, .box_w = 18, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4627, .adv_w = 286, .box_w = 18, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4731, .adv_w = 272, .box_w = 17, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4829, .adv_w = 141, .box_w = 6, .box_h = 29, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 4873, .adv_w = 192, .box_w = 12, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4942, .adv_w = 141, .box_w = 6, .box_h = 29, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4986, .adv_w = 281, .box_w = 17, .box_h = 13, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 5042, .adv_w = 252, .box_w = 16, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5050, .adv_w = 156, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 20},
    {.bitmap_index = 5059, .adv_w = 258, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5119, .adv_w = 287, .box_w = 16, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5215, .adv_w = 243, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5279, .adv_w = 287, .box_w = 17, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5381, .adv_w = 265, .box_w = 15, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5445, .adv_w = 143, .box_w = 10, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5505, .adv_w = 283, .box_w = 16, .box_h = 23, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 5597, .adv_w = 272, .box_w = 15, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5687, .adv_w = 117, .box_w = 4, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5710, .adv_w = 104, .box_w = 7, .box_h = 29, .ofs_x = -2, .ofs_y = -6},
    {.bitmap_index = 5761, .adv_w = 249, .box_w = 15, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5851, .adv_w = 102, .box_w = 4, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5875, .adv_w = 437, .box_w = 24, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5977, .adv_w = 275, .box_w = 14, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6037, .adv_w = 277, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6110, .adv_w = 288, .box_w = 16, .box_h = 23, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 6202, .adv_w = 288, .box_w = 17, .box_h = 23, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 6300, .adv_w = 169, .box_w = 9, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6339, .adv_w = 221, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6395, .adv_w = 173, .box_w = 11, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6456, .adv_w = 267, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6516, .adv_w = 232, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6580, .adv_w = 365, .box_w = 23, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6678, .adv_w = 262, .box_w = 16, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6746, .adv_w = 236, .box_w = 15, .box_h = 23, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 6833, .adv_w = 230, .box_w = 14, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6893, .adv_w = 140, .box_w = 9, .box_h = 29, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 6959, .adv_w = 105, .box_w = 3, .box_h = 26, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 6979, .adv_w = 140, .box_w = 9, .box_h = 29, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 7045, .adv_w = 281, .box_w = 16, .box_h = 5, .ofs_x = 1, .ofs_y = 8}
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
    .glyph_bitmap = UI_FONT_HONORS_30_GLYPH_BITMAP_BIN,
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
const lv_font_t ui_font_HONORS_30 =
{
#else
lv_font_t ui_font_HONORS_30 =
{
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 32,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HONORS_30*/

