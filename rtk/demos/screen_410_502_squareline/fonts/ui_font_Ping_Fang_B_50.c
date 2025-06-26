/*******************************************************************************
 * Size: 50 px
 * Bpp: 2
 * Opts: --byte-align --no-compress --no-prefilter --bpp 2 --size 50 --font G:/LVGL/rtk_scripts/scripts/built_in_font/sq/ttf/PingFang SC Bold(1).ttf -r 0x20-0x7F --format lvgl -o G:/LVGL/rtk_scripts/scripts/built_in_font/sq/ttf\ui_font_Ping_Fang_B_50.c --force-fast-kern-format
 ******************************************************************************/

#include "../ui.h"



#ifndef UI_FONT_PING_FANG_B_50
#define UI_FONT_PING_FANG_B_50 1
#endif

#if UI_FONT_PING_FANG_B_50

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
    {.bitmap_index = 0, .adv_w = 266, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 266, .box_w = 8, .box_h = 36, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 413, .box_w = 20, .box_h = 18, .ofs_x = 3, .ofs_y = 19},
    {.bitmap_index = 216, .adv_w = 480, .box_w = 28, .box_h = 36, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 480, .box_w = 26, .box_h = 47, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 833, .adv_w = 792, .box_w = 43, .box_h = 38, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1251, .adv_w = 596, .box_w = 35, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1593, .adv_w = 227, .box_w = 9, .box_h = 18, .ofs_x = 3, .ofs_y = 19},
    {.bitmap_index = 1647, .adv_w = 266, .box_w = 13, .box_h = 48, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1839, .adv_w = 266, .box_w = 13, .box_h = 48, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2031, .adv_w = 411, .box_w = 24, .box_h = 23, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 2192, .adv_w = 484, .box_w = 26, .box_h = 26, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2374, .adv_w = 218, .box_w = 9, .box_h = 18, .ofs_x = 2, .ofs_y = -10},
    {.bitmap_index = 2428, .adv_w = 484, .box_w = 26, .box_h = 5, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 2463, .adv_w = 218, .box_w = 8, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2487, .adv_w = 400, .box_w = 23, .box_h = 47, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2769, .adv_w = 480, .box_w = 26, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3035, .adv_w = 480, .box_w = 14, .box_h = 36, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 3179, .adv_w = 480, .box_w = 26, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3438, .adv_w = 480, .box_w = 26, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3704, .adv_w = 480, .box_w = 28, .box_h = 36, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3992, .adv_w = 480, .box_w = 26, .box_h = 37, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4251, .adv_w = 480, .box_w = 26, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4517, .adv_w = 480, .box_w = 24, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4769, .adv_w = 480, .box_w = 28, .box_h = 38, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 5073, .adv_w = 480, .box_w = 26, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5339, .adv_w = 218, .box_w = 8, .box_h = 26, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 5417, .adv_w = 218, .box_w = 10, .box_h = 36, .ofs_x = 2, .ofs_y = -10},
    {.bitmap_index = 5525, .adv_w = 484, .box_w = 26, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 5721, .adv_w = 484, .box_w = 26, .box_h = 15, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 5826, .adv_w = 484, .box_w = 26, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 6022, .adv_w = 442, .box_w = 24, .box_h = 37, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6281, .adv_w = 691, .box_w = 39, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 6661, .adv_w = 539, .box_w = 34, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6985, .adv_w = 550, .box_w = 30, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7273, .adv_w = 585, .box_w = 33, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 7615, .adv_w = 574, .box_w = 31, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 7903, .adv_w = 513, .box_w = 27, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 8155, .adv_w = 465, .box_w = 25, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 8407, .adv_w = 603, .box_w = 33, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 8749, .adv_w = 586, .box_w = 31, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9037, .adv_w = 202, .box_w = 6, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9109, .adv_w = 426, .box_w = 24, .box_h = 37, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 9368, .adv_w = 566, .box_w = 33, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9692, .adv_w = 473, .box_w = 26, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9944, .adv_w = 718, .box_w = 39, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 10304, .adv_w = 583, .box_w = 30, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 10592, .adv_w = 618, .box_w = 35, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 10934, .adv_w = 522, .box_w = 29, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 11222, .adv_w = 618, .box_w = 35, .box_h = 41, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 11591, .adv_w = 554, .box_w = 31, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 11879, .adv_w = 518, .box_w = 30, .box_h = 38, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 12183, .adv_w = 493, .box_w = 30, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12471, .adv_w = 583, .box_w = 30, .box_h = 37, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 12767, .adv_w = 523, .box_w = 33, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13091, .adv_w = 758, .box_w = 48, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13559, .adv_w = 526, .box_w = 33, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13883, .adv_w = 547, .box_w = 34, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14207, .adv_w = 508, .box_w = 30, .box_h = 36, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14495, .adv_w = 266, .box_w = 14, .box_h = 48, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 14687, .adv_w = 400, .box_w = 23, .box_h = 47, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 14969, .adv_w = 266, .box_w = 14, .box_h = 48, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 15161, .adv_w = 431, .box_w = 21, .box_h = 18, .ofs_x = 3, .ofs_y = 19},
    {.bitmap_index = 15269, .adv_w = 400, .box_w = 25, .box_h = 5, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 15304, .adv_w = 266, .box_w = 11, .box_h = 8, .ofs_x = 3, .ofs_y = 29},
    {.bitmap_index = 15328, .adv_w = 455, .box_w = 24, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 15524, .adv_w = 478, .box_w = 25, .box_h = 38, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 15790, .adv_w = 446, .box_w = 25, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 15986, .adv_w = 478, .box_w = 25, .box_h = 38, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 16252, .adv_w = 451, .box_w = 26, .box_h = 28, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 16448, .adv_w = 302, .box_w = 19, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16628, .adv_w = 479, .box_w = 25, .box_h = 39, .ofs_x = 2, .ofs_y = -12},
    {.bitmap_index = 16901, .adv_w = 458, .box_w = 23, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 17123, .adv_w = 217, .box_w = 8, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 17234, .adv_w = 219, .box_w = 12, .box_h = 47, .ofs_x = -1, .ofs_y = -10},
    {.bitmap_index = 17422, .adv_w = 438, .box_w = 25, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 17681, .adv_w = 200, .box_w = 6, .box_h = 37, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 17755, .adv_w = 702, .box_w = 38, .box_h = 27, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 18025, .adv_w = 461, .box_w = 23, .box_h = 27, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 18187, .adv_w = 478, .box_w = 26, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 18383, .adv_w = 478, .box_w = 25, .box_h = 37, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 18642, .adv_w = 478, .box_w = 25, .box_h = 37, .ofs_x = 2, .ofs_y = -10},
    {.bitmap_index = 18901, .adv_w = 298, .box_w = 16, .box_h = 27, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 19036, .adv_w = 416, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 19232, .adv_w = 288, .box_w = 17, .box_h = 35, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19407, .adv_w = 462, .box_w = 23, .box_h = 27, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 19569, .adv_w = 400, .box_w = 25, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19751, .adv_w = 618, .box_w = 39, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20011, .adv_w = 424, .box_w = 27, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20193, .adv_w = 415, .box_w = 26, .box_h = 36, .ofs_x = 0, .ofs_y = -10},
    {.bitmap_index = 20445, .adv_w = 402, .box_w = 23, .box_h = 26, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20601, .adv_w = 266, .box_w = 16, .box_h = 48, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 20841, .adv_w = 168, .box_w = 5, .box_h = 51, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 20943, .adv_w = 266, .box_w = 16, .box_h = 48, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 21183, .adv_w = 400, .box_w = 25, .box_h = 9, .ofs_x = 0, .ofs_y = 14},
    {.bitmap_index = 21246, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
    .glyph_bitmap = UI_FONT_PING_FANG_B_50_GLYPH_BITMAP_BIN,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 3,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Ping_Fang_B_50 =
{
#else
lv_font_t ui_font_Ping_Fang_B_50 =
{
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 56,          /*The maximum line height required by the font*/
    .base_line = 12,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -5,
    .underline_thickness = 4,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_PING_FANG_B_50*/
