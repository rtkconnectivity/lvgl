/*******************************************************************************
 * Size: 180 px
 * Bpp: 2
 * Opts: --bpp 2 --size 180 --font H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/img/clk03/fonts/LEDFont.ttf -o H:/2025/lvgl_squareline/SquareLine Studio/watch_demo_modify/assets/img/clk03/fonts\ui_font_LED_180.c --format lvgl -r 0x20-0x7f --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_LED_180
#define UI_FONT_LED_180 1
#endif

#if UI_FONT_LED_180

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
    {.bitmap_index = 0, .adv_w = 1440, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 300, .box_w = 11, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 564, .box_w = 27, .box_h = 28, .ofs_x = 4, .ofs_y = 94},
    {.bitmap_index = 376, .adv_w = 1296, .box_w = 73, .box_h = 79, .ofs_x = 3, .ofs_y = 41},
    {.bitmap_index = 941, .adv_w = 1296, .box_w = 73, .box_h = 166, .ofs_x = 4, .ofs_y = -23},
    {.bitmap_index = 1726, .adv_w = 2281, .box_w = 133, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3327, .adv_w = 1483, .box_w = 85, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 4215, .adv_w = 300, .box_w = 11, .box_h = 28, .ofs_x = 4, .ofs_y = 94},
    {.bitmap_index = 4272, .adv_w = 766, .box_w = 40, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 4827, .adv_w = 766, .box_w = 40, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 5376, .adv_w = 1296, .box_w = 73, .box_h = 74, .ofs_x = 4, .ofs_y = 24},
    {.bitmap_index = 5905, .adv_w = 1296, .box_w = 73, .box_h = 62, .ofs_x = 4, .ofs_y = 29},
    {.bitmap_index = 6167, .adv_w = 369, .box_w = 15, .box_h = 27, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 6250, .adv_w = 1408, .box_w = 63, .box_h = 12, .ofs_x = 12, .ofs_y = 61},
    {.bitmap_index = 6299, .adv_w = 369, .box_w = 15, .box_h = 15, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 6348, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 6897, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 7650, .adv_w = 530, .box_w = 25, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 8160, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 8766, .adv_w = 1296, .box_w = 66, .box_h = 122, .ofs_x = 11, .ofs_y = 0},
    {.bitmap_index = 9359, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 10036, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 10642, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 11303, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 12, .ofs_y = 0},
    {.bitmap_index = 11862, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 12641, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 13321, .adv_w = 369, .box_w = 15, .box_h = 65, .ofs_x = 4, .ofs_y = 33},
    {.bitmap_index = 13437, .adv_w = 369, .box_w = 15, .box_h = 73, .ofs_x = 4, .ofs_y = 25},
    {.bitmap_index = 13576, .adv_w = 922, .box_w = 51, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 14209, .adv_w = 1296, .box_w = 73, .box_h = 31, .ofs_x = 4, .ofs_y = 46},
    {.bitmap_index = 14316, .adv_w = 922, .box_w = 50, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 14947, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 15540, .adv_w = 1440, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15540, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 16313, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 17095, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 17632, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 18391, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 18945, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 19485, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 20180, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 20951, .adv_w = 300, .box_w = 11, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 21196, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 21846, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 22734, .adv_w = 1296, .box_w = 65, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 23257, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 24146, .adv_w = 1296, .box_w = 73, .box_h = 123, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 25098, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 25851, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 26512, .adv_w = 1296, .box_w = 74, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 27375, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 28281, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 28864, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 29402, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 30153, .adv_w = 1296, .box_w = 73, .box_h = 123, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 31032, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 31921, .adv_w = 1296, .box_w = 72, .box_h = 122, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 32880, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 33577, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 34107, .adv_w = 613, .box_w = 30, .box_h = 143, .ofs_x = 4, .ofs_y = -11},
    {.bitmap_index = 34781, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 35321, .adv_w = 613, .box_w = 30, .box_h = 143, .ofs_x = 4, .ofs_y = -11},
    {.bitmap_index = 35995, .adv_w = 1296, .box_w = 45, .box_h = 26, .ofs_x = 18, .ofs_y = 125},
    {.bitmap_index = 36174, .adv_w = 1296, .box_w = 81, .box_h = 11, .ofs_x = 0, .ofs_y = -19},
    {.bitmap_index = 36220, .adv_w = 1296, .box_w = 26, .box_h = 26, .ofs_x = 26, .ofs_y = 125},
    {.bitmap_index = 36350, .adv_w = 1296, .box_w = 74, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 36777, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 37443, .adv_w = 1164, .box_w = 65, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 37749, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 38458, .adv_w = 1164, .box_w = 65, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 38946, .adv_w = 979, .box_w = 54, .box_h = 122, .ofs_x = 4, .ofs_y = -56},
    {.bitmap_index = 39500, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = -56},
    {.bitmap_index = 40196, .adv_w = 1296, .box_w = 73, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 40853, .adv_w = 300, .box_w = 12, .box_h = 85, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 41031, .adv_w = 300, .box_w = 50, .box_h = 138, .ofs_x = -35, .ofs_y = -54},
    {.bitmap_index = 41595, .adv_w = 1097, .box_w = 61, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 42456, .adv_w = 300, .box_w = 11, .box_h = 122, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 42701, .adv_w = 1296, .box_w = 73, .box_h = 67, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 43364, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 43780, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 44200, .adv_w = 1296, .box_w = 73, .box_h = 115, .ofs_x = 4, .ofs_y = -49},
    {.bitmap_index = 44827, .adv_w = 1296, .box_w = 73, .box_h = 115, .ofs_x = 4, .ofs_y = -49},
    {.bitmap_index = 45470, .adv_w = 1164, .box_w = 65, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 45761, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 46107, .adv_w = 1256, .box_w = 71, .box_h = 123, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 46674, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 47090, .adv_w = 1210, .box_w = 66, .box_h = 68, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 47626, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 48287, .adv_w = 1207, .box_w = 65, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 48840, .adv_w = 1296, .box_w = 73, .box_h = 115, .ofs_x = 4, .ofs_y = -49},
    {.bitmap_index = 49482, .adv_w = 1296, .box_w = 73, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 49804, .adv_w = 829, .box_w = 45, .box_h = 143, .ofs_x = 4, .ofs_y = -11},
    {.bitmap_index = 50481, .adv_w = 300, .box_w = 11, .box_h = 145, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 50772, .adv_w = 829, .box_w = 45, .box_h = 143, .ofs_x = 4, .ofs_y = -11},
    {.bitmap_index = 51484, .adv_w = 1296, .box_w = 51, .box_h = 11, .ofs_x = 15, .ofs_y = 129}
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
    119, 30, 119, -120, 119, 98, 119, 47,
    42
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
    .glyph_bitmap = UI_FONT_LED_180_GLYPH_BITMAP_BIN,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 114,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 2,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_LED_180 =
{
#else
lv_font_t ui_font_LED_180 =
{
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 207,          /*The maximum line height required by the font*/
    .base_line = 56,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -14,
    .underline_thickness = 9,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#if (LV_FONT_FMT_TXT_LARGE == 0)
#  error "Too large font or glyphs in UI_FONT_LED_180. Enable LV_FONT_FMT_TXT_LARGE in lv_conf.h")
#endif


#endif /*#if UI_FONT_LED_180*/

