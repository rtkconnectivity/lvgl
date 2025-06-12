/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --bpp 2 --size 24 --font H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/img/clk03/fonts/LEDFont.ttf -o H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/img/clk03/fonts\ui_font_LED_24.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_LED_24
#define UI_FONT_LED_24 1
#endif

#if UI_FONT_LED_24

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
    {.bitmap_index = 0, .adv_w = 192, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 40, .box_w = 2, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 16, .adv_w = 173, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 49, .adv_w = 173, .box_w = 11, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 115, .adv_w = 304, .box_w = 19, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 198, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 250, .adv_w = 102, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 102, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 173, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 333, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 358, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 361, .adv_w = 188, .box_w = 9, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 366, .adv_w = 49, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 71, .box_w = 4, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 663, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 847, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 854, .adv_w = 49, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 863, .adv_w = 123, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 897, .adv_w = 173, .box_w = 11, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 914, .adv_w = 123, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 948, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 192, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1042, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1089, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1179, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1222, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1265, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1359, .adv_w = 40, .box_w = 2, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1368, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1415, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1462, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1505, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1552, .adv_w = 173, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1602, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1649, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1696, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1743, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1790, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1837, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1884, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1931, .adv_w = 173, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1981, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2028, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2075, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2122, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2169, .adv_w = 82, .box_w = 5, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2196, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2243, .adv_w = 82, .box_w = 5, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2270, .adv_w = 173, .box_w = 7, .box_h = 4, .ofs_x = 2, .ofs_y = 17},
    {.bitmap_index = 2277, .adv_w = 173, .box_w = 11, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2286, .adv_w = 173, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = 17},
    {.bitmap_index = 2290, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2315, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2362, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2385, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2432, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2455, .adv_w = 131, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 2489, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 2536, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2583, .adv_w = 40, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2590, .adv_w = 40, .box_w = 7, .box_h = 20, .ofs_x = -5, .ofs_y = -8},
    {.bitmap_index = 2625, .adv_w = 146, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2664, .adv_w = 40, .box_w = 2, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2673, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2698, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2723, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2748, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 2792, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 2836, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2859, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2884, .adv_w = 167, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2927, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2952, .adv_w = 161, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2980, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3005, .adv_w = 161, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3028, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 3072, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3097, .adv_w = 111, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3132, .adv_w = 40, .box_w = 2, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3143, .adv_w = 111, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3178, .adv_w = 173, .box_w = 7, .box_h = 3, .ofs_x = 2, .ofs_y = 17}
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


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 1,
    1, 51,
    7, 1,
    13, 1,
    33, 1,
    49, 1,
    73, 1,
    74, 81,
    94, 1
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    113, 28, 113, -114, 113, 93, 113, 45,
    40
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 9,
    .glyph_ids_size = 0
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
    .glyph_bitmap = UI_FONT_LED_24_GLYPH_BITMAP_BIN,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
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
const lv_font_t ui_font_LED_24 =
{
#else
lv_font_t ui_font_LED_24 =
{
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 29,          /*The maximum line height required by the font*/
    .base_line = 8,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_LED_24*/

