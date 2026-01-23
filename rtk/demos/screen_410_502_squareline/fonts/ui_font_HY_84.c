/*******************************************************************************
 * Size: 84 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 84 --font lvgl_font_src/HYZiYanKaTongJ.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HY_84.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HY_84
#define UI_FONT_HY_84 1
#endif

#if UI_FONT_HY_84


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HY_84_glyph_bitmap.bin
 *Define UI_FONT_HY_84_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HY_84_GLYPH_BITMAP_BIN
#define UI_FONT_HY_84_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HY_84_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HY_84_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 396, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 465, .box_w = 19, .box_h = 66, .ofs_x = 5, .ofs_y = -6},
    {.bitmap_index = 330, .adv_w = 540, .box_w = 20, .box_h = 23, .ofs_x = 7, .ofs_y = 37},
    {.bitmap_index = 445, .adv_w = 890, .box_w = 50, .box_h = 65, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 1290, .adv_w = 874, .box_w = 46, .box_h = 82, .ofs_x = 4, .ofs_y = -13},
    {.bitmap_index = 2274, .adv_w = 1344, .box_w = 76, .box_h = 64, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 3490, .adv_w = 1161, .box_w = 59, .box_h = 64, .ofs_x = 7, .ofs_y = -4},
    {.bitmap_index = 4450, .adv_w = 337, .box_w = 7, .box_h = 23, .ofs_x = 7, .ofs_y = 37},
    {.bitmap_index = 4496, .adv_w = 504, .box_w = 24, .box_h = 77, .ofs_x = 6, .ofs_y = -18},
    {.bitmap_index = 4958, .adv_w = 504, .box_w = 23, .box_h = 77, .ofs_x = 3, .ofs_y = -18},
    {.bitmap_index = 5420, .adv_w = 622, .box_w = 31, .box_h = 29, .ofs_x = 4, .ofs_y = 31},
    {.bitmap_index = 5652, .adv_w = 952, .box_w = 48, .box_h = 48, .ofs_x = 6, .ofs_y = 4},
    {.bitmap_index = 6228, .adv_w = 442, .box_w = 18, .box_h = 29, .ofs_x = 5, .ofs_y = -18},
    {.bitmap_index = 6373, .adv_w = 659, .box_w = 35, .box_h = 7, .ofs_x = 3, .ofs_y = 26},
    {.bitmap_index = 6436, .adv_w = 448, .box_w = 18, .box_h = 17, .ofs_x = 5, .ofs_y = -6},
    {.bitmap_index = 6521, .adv_w = 520, .box_w = 28, .box_h = 72, .ofs_x = 2, .ofs_y = -12},
    {.bitmap_index = 7025, .adv_w = 880, .box_w = 49, .box_h = 62, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 7831, .adv_w = 880, .box_w = 42, .box_h = 63, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 8524, .adv_w = 880, .box_w = 47, .box_h = 62, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 9268, .adv_w = 880, .box_w = 47, .box_h = 62, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 10012, .adv_w = 880, .box_w = 51, .box_h = 62, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 10818, .adv_w = 880, .box_w = 47, .box_h = 62, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 11562, .adv_w = 880, .box_w = 48, .box_h = 62, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 12306, .adv_w = 880, .box_w = 49, .box_h = 62, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 13112, .adv_w = 880, .box_w = 47, .box_h = 61, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 13844, .adv_w = 880, .box_w = 49, .box_h = 62, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 14650, .adv_w = 448, .box_w = 18, .box_h = 46, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 14880, .adv_w = 448, .box_w = 18, .box_h = 59, .ofs_x = 5, .ofs_y = -17},
    {.bitmap_index = 15175, .adv_w = 931, .box_w = 46, .box_h = 46, .ofs_x = 6, .ofs_y = 5},
    {.bitmap_index = 15727, .adv_w = 950, .box_w = 48, .box_h = 34, .ofs_x = 6, .ofs_y = 11},
    {.bitmap_index = 16135, .adv_w = 931, .box_w = 46, .box_h = 46, .ofs_x = 6, .ofs_y = 5},
    {.bitmap_index = 16687, .adv_w = 802, .box_w = 40, .box_h = 65, .ofs_x = 5, .ofs_y = -5},
    {.bitmap_index = 17337, .adv_w = 1207, .box_w = 63, .box_h = 64, .ofs_x = 6, .ofs_y = -4},
    {.bitmap_index = 18361, .adv_w = 1058, .box_w = 61, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 19385, .adv_w = 969, .box_w = 55, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 20281, .adv_w = 952, .box_w = 54, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 21177, .adv_w = 1056, .box_w = 60, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 22137, .adv_w = 921, .box_w = 52, .box_h = 63, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 22956, .adv_w = 921, .box_w = 52, .box_h = 63, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 23775, .adv_w = 1001, .box_w = 57, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 24735, .adv_w = 972, .box_w = 55, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 25631, .adv_w = 723, .box_w = 40, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 26271, .adv_w = 723, .box_w = 40, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 26911, .adv_w = 969, .box_w = 55, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 27807, .adv_w = 792, .box_w = 44, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 28511, .adv_w = 1242, .box_w = 73, .box_h = 64, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 29727, .adv_w = 974, .box_w = 55, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 30623, .adv_w = 1039, .box_w = 59, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 31583, .adv_w = 945, .box_w = 54, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 32479, .adv_w = 1039, .box_w = 59, .box_h = 79, .ofs_x = 3, .ofs_y = -19},
    {.bitmap_index = 33664, .adv_w = 945, .box_w = 54, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 34560, .adv_w = 878, .box_w = 49, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 35392, .adv_w = 950, .box_w = 54, .box_h = 63, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 36274, .adv_w = 976, .box_w = 55, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 37170, .adv_w = 999, .box_w = 57, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 38130, .adv_w = 1568, .box_w = 93, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 39666, .adv_w = 1005, .box_w = 57, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 40626, .adv_w = 1001, .box_w = 57, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 41586, .adv_w = 974, .box_w = 55, .box_h = 63, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 42468, .adv_w = 505, .box_w = 26, .box_h = 77, .ofs_x = 4, .ofs_y = -17},
    {.bitmap_index = 43007, .adv_w = 520, .box_w = 28, .box_h = 73, .ofs_x = 3, .ofs_y = -13},
    {.bitmap_index = 43518, .adv_w = 504, .box_w = 26, .box_h = 78, .ofs_x = 1, .ofs_y = -18},
    {.bitmap_index = 44064, .adv_w = 886, .box_w = 44, .box_h = 36, .ofs_x = 6, .ofs_y = 24},
    {.bitmap_index = 44460, .adv_w = 775, .box_w = 46, .box_h = 7, .ofs_x = 1, .ofs_y = -10},
    {.bitmap_index = 44544, .adv_w = 519, .box_w = 21, .box_h = 19, .ofs_x = 6, .ofs_y = 41},
    {.bitmap_index = 44658, .adv_w = 868, .box_w = 49, .box_h = 47, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 45269, .adv_w = 831, .box_w = 46, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 46037, .adv_w = 790, .box_w = 44, .box_h = 47, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 46554, .adv_w = 831, .box_w = 46, .box_h = 65, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 47334, .adv_w = 849, .box_w = 48, .box_h = 47, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 47898, .adv_w = 634, .box_w = 34, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 48474, .adv_w = 868, .box_w = 49, .box_h = 61, .ofs_x = 3, .ofs_y = -18},
    {.bitmap_index = 49267, .adv_w = 810, .box_w = 45, .box_h = 65, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 50047, .adv_w = 386, .box_w = 19, .box_h = 69, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 50392, .adv_w = 539, .box_w = 28, .box_h = 84, .ofs_x = 3, .ofs_y = -18},
    {.bitmap_index = 50980, .adv_w = 867, .box_w = 49, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 51812, .adv_w = 374, .box_w = 18, .box_h = 65, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 52137, .adv_w = 1223, .box_w = 71, .box_h = 48, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 53001, .adv_w = 863, .box_w = 48, .box_h = 48, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 53577, .adv_w = 853, .box_w = 48, .box_h = 47, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 54141, .adv_w = 887, .box_w = 50, .box_h = 62, .ofs_x = 3, .ofs_y = -19},
    {.bitmap_index = 54947, .adv_w = 880, .box_w = 49, .box_h = 61, .ofs_x = 3, .ofs_y = -18},
    {.bitmap_index = 55740, .adv_w = 589, .box_w = 31, .box_h = 47, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 56116, .adv_w = 712, .box_w = 39, .box_h = 47, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 56586, .adv_w = 644, .box_w = 35, .box_h = 64, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 57162, .adv_w = 816, .box_w = 45, .box_h = 47, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 57726, .adv_w = 836, .box_w = 47, .box_h = 47, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 58290, .adv_w = 1241, .box_w = 72, .box_h = 48, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 59154, .adv_w = 818, .box_w = 46, .box_h = 47, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 59718, .adv_w = 812, .box_w = 45, .box_h = 61, .ofs_x = 3, .ofs_y = -18},
    {.bitmap_index = 60450, .adv_w = 777, .box_w = 43, .box_h = 48, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 60978, .adv_w = 523, .box_w = 30, .box_h = 78, .ofs_x = 1, .ofs_y = -18},
    {.bitmap_index = 61602, .adv_w = 329, .box_w = 8, .box_h = 78, .ofs_x = 6, .ofs_y = -18},
    {.bitmap_index = 61758, .adv_w = 523, .box_w = 30, .box_h = 78, .ofs_x = 2, .ofs_y = -18},
    {.bitmap_index = 62382, .adv_w = 938, .box_w = 47, .box_h = 20, .ofs_x = 6, .ofs_y = 18},
    {.bitmap_index = 62622, .adv_w = 1344, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
    0, -67, -60, -67, 0, 0
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
const lv_font_t ui_font_HY_84 = {
#else
lv_font_t ui_font_HY_84 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 88,          /*The maximum line height required by the font*/
    .base_line = 19,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -6,
    .underline_thickness = 4,
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



#endif /*#if UI_FONT_HY_84*/
