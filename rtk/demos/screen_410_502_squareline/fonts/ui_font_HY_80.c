/*******************************************************************************
 * Size: 80 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 80 --font lvgl_font_src/HYZiYanKaTongJ.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HY_80.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HY_80
#define UI_FONT_HY_80 1
#endif

#if UI_FONT_HY_80


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HY_80_glyph_bitmap.bin
 *Define UI_FONT_HY_80_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HY_80_GLYPH_BITMAP_BIN
#define UI_FONT_HY_80_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HY_80_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HY_80_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 378, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 443, .box_w = 18, .box_h = 63, .ofs_x = 5, .ofs_y = -6},
    {.bitmap_index = 315, .adv_w = 515, .box_w = 20, .box_h = 22, .ofs_x = 6, .ofs_y = 35},
    {.bitmap_index = 425, .adv_w = 847, .box_w = 47, .box_h = 61, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 1157, .adv_w = 832, .box_w = 44, .box_h = 77, .ofs_x = 4, .ofs_y = -12},
    {.bitmap_index = 2004, .adv_w = 1280, .box_w = 72, .box_h = 61, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 3102, .adv_w = 1106, .box_w = 57, .box_h = 61, .ofs_x = 6, .ofs_y = -4},
    {.bitmap_index = 4017, .adv_w = 321, .box_w = 8, .box_h = 22, .ofs_x = 6, .ofs_y = 35},
    {.bitmap_index = 4061, .adv_w = 480, .box_w = 22, .box_h = 73, .ofs_x = 6, .ofs_y = -17},
    {.bitmap_index = 4499, .adv_w = 480, .box_w = 23, .box_h = 73, .ofs_x = 2, .ofs_y = -17},
    {.bitmap_index = 4937, .adv_w = 593, .box_w = 31, .box_h = 28, .ofs_x = 3, .ofs_y = 29},
    {.bitmap_index = 5161, .adv_w = 906, .box_w = 45, .box_h = 46, .ofs_x = 6, .ofs_y = 4},
    {.bitmap_index = 5713, .adv_w = 421, .box_w = 17, .box_h = 28, .ofs_x = 5, .ofs_y = -17},
    {.bitmap_index = 5853, .adv_w = 627, .box_w = 33, .box_h = 7, .ofs_x = 3, .ofs_y = 24},
    {.bitmap_index = 5916, .adv_w = 426, .box_w = 17, .box_h = 17, .ofs_x = 5, .ofs_y = -5},
    {.bitmap_index = 6001, .adv_w = 495, .box_w = 27, .box_h = 69, .ofs_x = 2, .ofs_y = -12},
    {.bitmap_index = 6484, .adv_w = 838, .box_w = 47, .box_h = 59, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 7192, .adv_w = 838, .box_w = 39, .box_h = 60, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 7792, .adv_w = 838, .box_w = 45, .box_h = 59, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 8500, .adv_w = 838, .box_w = 45, .box_h = 59, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 9208, .adv_w = 838, .box_w = 49, .box_h = 59, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 9975, .adv_w = 838, .box_w = 46, .box_h = 59, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 10683, .adv_w = 838, .box_w = 46, .box_h = 59, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 11391, .adv_w = 838, .box_w = 47, .box_h = 59, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 12099, .adv_w = 838, .box_w = 45, .box_h = 59, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 12807, .adv_w = 838, .box_w = 47, .box_h = 59, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 13515, .adv_w = 426, .box_w = 17, .box_h = 44, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 13735, .adv_w = 426, .box_w = 17, .box_h = 56, .ofs_x = 5, .ofs_y = -16},
    {.bitmap_index = 14015, .adv_w = 887, .box_w = 44, .box_h = 44, .ofs_x = 6, .ofs_y = 5},
    {.bitmap_index = 14499, .adv_w = 905, .box_w = 45, .box_h = 32, .ofs_x = 6, .ofs_y = 10},
    {.bitmap_index = 14883, .adv_w = 887, .box_w = 44, .box_h = 44, .ofs_x = 6, .ofs_y = 5},
    {.bitmap_index = 15367, .adv_w = 764, .box_w = 38, .box_h = 62, .ofs_x = 5, .ofs_y = -5},
    {.bitmap_index = 15987, .adv_w = 1149, .box_w = 60, .box_h = 61, .ofs_x = 6, .ofs_y = -4},
    {.bitmap_index = 16902, .adv_w = 1007, .box_w = 59, .box_h = 62, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 17832, .adv_w = 923, .box_w = 53, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 18686, .adv_w = 906, .box_w = 52, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 19479, .adv_w = 1006, .box_w = 58, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 20394, .adv_w = 877, .box_w = 50, .box_h = 60, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 21174, .adv_w = 877, .box_w = 50, .box_h = 60, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 21954, .adv_w = 954, .box_w = 55, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 22808, .adv_w = 925, .box_w = 53, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 23662, .adv_w = 689, .box_w = 39, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 24272, .adv_w = 689, .box_w = 39, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 24882, .adv_w = 923, .box_w = 53, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 25736, .adv_w = 754, .box_w = 43, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 26407, .adv_w = 1183, .box_w = 70, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 27505, .adv_w = 928, .box_w = 54, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 28359, .adv_w = 989, .box_w = 57, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 29274, .adv_w = 900, .box_w = 52, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 30067, .adv_w = 989, .box_w = 57, .box_h = 75, .ofs_x = 2, .ofs_y = -18},
    {.bitmap_index = 31192, .adv_w = 900, .box_w = 52, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 31985, .adv_w = 836, .box_w = 48, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 32717, .adv_w = 905, .box_w = 52, .box_h = 60, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 33497, .adv_w = 929, .box_w = 54, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 34351, .adv_w = 951, .box_w = 55, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 35205, .adv_w = 1494, .box_w = 89, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 36608, .adv_w = 957, .box_w = 55, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 37462, .adv_w = 954, .box_w = 55, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 38316, .adv_w = 928, .box_w = 54, .box_h = 60, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 39156, .adv_w = 481, .box_w = 25, .box_h = 74, .ofs_x = 4, .ofs_y = -17},
    {.bitmap_index = 39674, .adv_w = 495, .box_w = 28, .box_h = 69, .ofs_x = 2, .ofs_y = -12},
    {.bitmap_index = 40157, .adv_w = 480, .box_w = 25, .box_h = 74, .ofs_x = 1, .ofs_y = -17},
    {.bitmap_index = 40675, .adv_w = 844, .box_w = 41, .box_h = 33, .ofs_x = 6, .ofs_y = 24},
    {.bitmap_index = 41038, .adv_w = 739, .box_w = 44, .box_h = 7, .ofs_x = 1, .ofs_y = -10},
    {.bitmap_index = 41115, .adv_w = 494, .box_w = 19, .box_h = 18, .ofs_x = 6, .ofs_y = 39},
    {.bitmap_index = 41205, .adv_w = 827, .box_w = 47, .box_h = 45, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 41745, .adv_w = 791, .box_w = 45, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 42477, .adv_w = 753, .box_w = 43, .box_h = 45, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 42972, .adv_w = 791, .box_w = 45, .box_h = 62, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 43716, .adv_w = 809, .box_w = 46, .box_h = 45, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 44256, .adv_w = 604, .box_w = 33, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 44805, .adv_w = 827, .box_w = 47, .box_h = 58, .ofs_x = 2, .ofs_y = -17},
    {.bitmap_index = 45501, .adv_w = 772, .box_w = 44, .box_h = 62, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 46183, .adv_w = 367, .box_w = 19, .box_h = 66, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 46513, .adv_w = 513, .box_w = 28, .box_h = 80, .ofs_x = 2, .ofs_y = -17},
    {.bitmap_index = 47073, .adv_w = 826, .box_w = 47, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 47805, .adv_w = 356, .box_w = 18, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 48110, .adv_w = 1165, .box_w = 68, .box_h = 46, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 48892, .adv_w = 822, .box_w = 47, .box_h = 46, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 49444, .adv_w = 813, .box_w = 46, .box_h = 45, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 49984, .adv_w = 845, .box_w = 48, .box_h = 59, .ofs_x = 2, .ofs_y = -18},
    {.bitmap_index = 50692, .adv_w = 838, .box_w = 48, .box_h = 58, .ofs_x = 2, .ofs_y = -17},
    {.bitmap_index = 51388, .adv_w = 561, .box_w = 31, .box_h = 45, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 51748, .adv_w = 678, .box_w = 38, .box_h = 45, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 52198, .adv_w = 613, .box_w = 34, .box_h = 61, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 52747, .adv_w = 777, .box_w = 44, .box_h = 45, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 53242, .adv_w = 796, .box_w = 46, .box_h = 45, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 53782, .adv_w = 1181, .box_w = 70, .box_h = 46, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 54610, .adv_w = 780, .box_w = 44, .box_h = 45, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 55105, .adv_w = 773, .box_w = 44, .box_h = 58, .ofs_x = 2, .ofs_y = -17},
    {.bitmap_index = 55743, .adv_w = 740, .box_w = 42, .box_h = 46, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 56249, .adv_w = 498, .box_w = 29, .box_h = 74, .ofs_x = 1, .ofs_y = -17},
    {.bitmap_index = 56841, .adv_w = 314, .box_w = 8, .box_h = 74, .ofs_x = 6, .ofs_y = -17},
    {.bitmap_index = 56989, .adv_w = 498, .box_w = 28, .box_h = 74, .ofs_x = 2, .ofs_y = -17},
    {.bitmap_index = 57507, .adv_w = 893, .box_w = 44, .box_h = 20, .ofs_x = 6, .ofs_y = 17},
    {.bitmap_index = 57727, .adv_w = 1280, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
    0, -64, -58, -64, 0, 0
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
const lv_font_t ui_font_HY_80 = {
#else
lv_font_t ui_font_HY_80 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 83,          /*The maximum line height required by the font*/
    .base_line = 18,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_HY_80*/
