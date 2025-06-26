/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --byte-align --no-compress --no-prefilter --bpp 2 --size 24 --font G:/LVGL/rtk_scripts/scripts/built_in_font/sq/ttf/LEDFont.ttf -r 0x20-0x7F --format lvgl -o G:/LVGL/rtk_scripts/scripts/built_in_font/sq/ttf\ui_font_LED_24.c --force-fast-kern-format
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
    {.bitmap_index = 17, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 27, .adv_w = 173, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 63, .adv_w = 173, .box_w = 11, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 135, .adv_w = 304, .box_w = 19, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 198, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 293, .adv_w = 102, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 102, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 173, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 394, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 421, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 425, .adv_w = 188, .box_w = 9, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 431, .adv_w = 49, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 71, .box_w = 4, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 773, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 875, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 926, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 977, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 986, .adv_w = 49, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 997, .adv_w = 123, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1048, .adv_w = 173, .box_w = 11, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1066, .adv_w = 123, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1117, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1168, .adv_w = 192, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1168, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1219, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1270, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1321, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1372, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1423, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1474, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1525, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1576, .adv_w = 40, .box_w = 2, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1593, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1644, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1695, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1746, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1797, .adv_w = 173, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1851, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1902, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1953, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2004, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2055, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2106, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2157, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2208, .adv_w = 173, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2262, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2313, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2364, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2415, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2466, .adv_w = 82, .box_w = 5, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2508, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2559, .adv_w = 82, .box_w = 5, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2601, .adv_w = 173, .box_w = 7, .box_h = 4, .ofs_x = 2, .ofs_y = 17},
    {.bitmap_index = 2609, .adv_w = 173, .box_w = 11, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2618, .adv_w = 173, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = 17},
    {.bitmap_index = 2626, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2653, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2704, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2731, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2782, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2809, .adv_w = 131, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 2860, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 2911, .adv_w = 173, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2962, .adv_w = 40, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2975, .adv_w = 40, .box_w = 7, .box_h = 20, .ofs_x = -5, .ofs_y = -8},
    {.bitmap_index = 3015, .adv_w = 146, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3066, .adv_w = 40, .box_w = 2, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3083, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3110, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3137, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3164, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 3212, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 3260, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3287, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3314, .adv_w = 167, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3365, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3392, .adv_w = 161, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3425, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3452, .adv_w = 161, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3479, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 3527, .adv_w = 173, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3554, .adv_w = 111, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3594, .adv_w = 40, .box_w = 2, .box_h = 21, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3615, .adv_w = 111, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3655, .adv_w = 173, .box_w = 7, .box_h = 3, .ofs_x = 2, .ofs_y = 17}
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
    0, 1, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    113, 28, 0, 113, 0, 0, -114, 0,
    0, 93, 0, 0, 0, 0, 45, 40,
    0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 6,
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
static const lv_font_fmt_txt_dsc_t font_dsc =
{
#else
static lv_font_fmt_txt_dsc_t font_dsc =
{
#endif
    .glyph_bitmap = UI_FONT_LED_24_GLYPH_BITMAP_BIN,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 1,
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
