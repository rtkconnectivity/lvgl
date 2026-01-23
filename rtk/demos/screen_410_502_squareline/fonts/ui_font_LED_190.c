/*******************************************************************************
 * Size: 190 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 190 --font lvgl_font_src/LEDFont.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_LED_190.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_LED_190
#define UI_FONT_LED_190 1
#endif

#if UI_FONT_LED_190


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_LED_190_glyph_bitmap.bin
 *Define UI_FONT_LED_190_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_LED_190_GLYPH_BITMAP_BIN
#define UI_FONT_LED_190_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_LED_190_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_LED_190_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 1520, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 316, .box_w = 12, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 596, .box_w = 29, .box_h = 29, .ofs_x = 4, .ofs_y = 99},
    {.bitmap_index = 616, .adv_w = 1368, .box_w = 77, .box_h = 83, .ofs_x = 4, .ofs_y = 42},
    {.bitmap_index = 2276, .adv_w = 1368, .box_w = 77, .box_h = 174, .ofs_x = 4, .ofs_y = -24},
    {.bitmap_index = 5756, .adv_w = 2408, .box_w = 141, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 10328, .adv_w = 1566, .box_w = 90, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 13249, .adv_w = 316, .box_w = 12, .box_h = 29, .ofs_x = 4, .ofs_y = 99},
    {.bitmap_index = 13336, .adv_w = 809, .box_w = 42, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 14733, .adv_w = 809, .box_w = 42, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 16130, .adv_w = 1368, .box_w = 77, .box_h = 77, .ofs_x = 4, .ofs_y = 25},
    {.bitmap_index = 17670, .adv_w = 1368, .box_w = 77, .box_h = 65, .ofs_x = 4, .ofs_y = 31},
    {.bitmap_index = 18970, .adv_w = 389, .box_w = 16, .box_h = 28, .ofs_x = 4, .ofs_y = -13},
    {.bitmap_index = 19082, .adv_w = 1487, .box_w = 67, .box_h = 12, .ofs_x = 13, .ofs_y = 63},
    {.bitmap_index = 19286, .adv_w = 389, .box_w = 16, .box_h = 16, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 19350, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 21890, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 24430, .adv_w = 559, .box_w = 27, .box_h = 128, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 25326, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 27866, .adv_w = 1368, .box_w = 69, .box_h = 127, .ofs_x = 12, .ofs_y = 0},
    {.bitmap_index = 30152, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 32712, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 35252, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 37812, .adv_w = 1368, .box_w = 69, .box_h = 128, .ofs_x = 12, .ofs_y = -1},
    {.bitmap_index = 40116, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 42656, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 45196, .adv_w = 389, .box_w = 16, .box_h = 68, .ofs_x = 4, .ofs_y = 35},
    {.bitmap_index = 45468, .adv_w = 389, .box_w = 16, .box_h = 77, .ofs_x = 4, .ofs_y = 26},
    {.bitmap_index = 45776, .adv_w = 973, .box_w = 54, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 47554, .adv_w = 1368, .box_w = 77, .box_h = 32, .ofs_x = 4, .ofs_y = 48},
    {.bitmap_index = 48194, .adv_w = 973, .box_w = 53, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 49972, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 52512, .adv_w = 1520, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52512, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 55052, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 57592, .adv_w = 1368, .box_w = 69, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 59878, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 62418, .adv_w = 1368, .box_w = 69, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 64704, .adv_w = 1368, .box_w = 69, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 66990, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 69530, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 72090, .adv_w = 316, .box_w = 12, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 72474, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 75034, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 77594, .adv_w = 1368, .box_w = 69, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 79898, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 82458, .adv_w = 1368, .box_w = 77, .box_h = 129, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 85038, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 87578, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 90118, .adv_w = 1368, .box_w = 79, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 92658, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 95198, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 97738, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 100298, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 102858, .adv_w = 1368, .box_w = 77, .box_h = 129, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 105438, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 107998, .adv_w = 1368, .box_w = 76, .box_h = 127, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 110411, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 112971, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 115511, .adv_w = 648, .box_w = 32, .box_h = 150, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 116711, .adv_w = 1368, .box_w = 77, .box_h = 127, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 119251, .adv_w = 648, .box_w = 32, .box_h = 150, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 120451, .adv_w = 1368, .box_w = 47, .box_h = 27, .ofs_x = 19, .ofs_y = 131},
    {.bitmap_index = 120775, .adv_w = 1368, .box_w = 85, .box_h = 11, .ofs_x = 0, .ofs_y = -20},
    {.bitmap_index = 121017, .adv_w = 1368, .box_w = 28, .box_h = 27, .ofs_x = 27, .ofs_y = 131},
    {.bitmap_index = 121206, .adv_w = 1368, .box_w = 78, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 122586, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 125146, .adv_w = 1228, .box_w = 69, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 126388, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 128948, .adv_w = 1228, .box_w = 69, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 130190, .adv_w = 1034, .box_w = 57, .box_h = 128, .ofs_x = 4, .ofs_y = -59},
    {.bitmap_index = 132110, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = -59},
    {.bitmap_index = 134670, .adv_w = 1368, .box_w = 77, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 137230, .adv_w = 316, .box_w = 13, .box_h = 89, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 137586, .adv_w = 316, .box_w = 53, .box_h = 145, .ofs_x = -37, .ofs_y = -57},
    {.bitmap_index = 139616, .adv_w = 1158, .box_w = 64, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 141664, .adv_w = 316, .box_w = 12, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 142048, .adv_w = 1368, .box_w = 77, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 143428, .adv_w = 1368, .box_w = 77, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 144808, .adv_w = 1368, .box_w = 77, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 146188, .adv_w = 1368, .box_w = 77, .box_h = 120, .ofs_x = 4, .ofs_y = -51},
    {.bitmap_index = 148588, .adv_w = 1368, .box_w = 77, .box_h = 120, .ofs_x = 4, .ofs_y = -51},
    {.bitmap_index = 150988, .adv_w = 1228, .box_w = 69, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 152230, .adv_w = 1368, .box_w = 77, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 153610, .adv_w = 1325, .box_w = 75, .box_h = 128, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 156042, .adv_w = 1368, .box_w = 77, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 157422, .adv_w = 1277, .box_w = 70, .box_h = 71, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 158700, .adv_w = 1368, .box_w = 77, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 160080, .adv_w = 1274, .box_w = 69, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 161322, .adv_w = 1368, .box_w = 77, .box_h = 120, .ofs_x = 4, .ofs_y = -51},
    {.bitmap_index = 163722, .adv_w = 1368, .box_w = 77, .box_h = 69, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 165102, .adv_w = 876, .box_w = 48, .box_h = 150, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 166902, .adv_w = 316, .box_w = 12, .box_h = 151, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 167355, .adv_w = 876, .box_w = 48, .box_h = 150, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 169155, .adv_w = 1368, .box_w = 55, .box_h = 11, .ofs_x = 15, .ofs_y = 135}
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
    119, 30, 0, 119, 0, 0, -120, 0,
    0, 98, 0, 0, 0, 0, 47, 42,
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
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 120,
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
const lv_font_t ui_font_LED_190 = {
#else
lv_font_t ui_font_LED_190 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 217,          /*The maximum line height required by the font*/
    .base_line = 59,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -15,
    .underline_thickness = 10,
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

#if (LV_FONT_FMT_TXT_LARGE == 0)
#  error "Too large font or glyphs in UI_FONT_LED_190. Enable LV_FONT_FMT_TXT_LARGE in lv_conf.h")
#endif


#endif /*#if UI_FONT_LED_190*/
