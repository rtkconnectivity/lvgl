/*******************************************************************************
 * Size: 94 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 94 --font lvgl_font_src/PingFang SC Bold(1).ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_Ping_Fang_B_94.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_PING_FANG_B_94
#define UI_FONT_PING_FANG_B_94 1
#endif

#if UI_FONT_PING_FANG_B_94


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_Ping_Fang_B_94_glyph_bitmap.bin
 *Define UI_FONT_PING_FANG_B_94_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_PING_FANG_B_94_GLYPH_BITMAP_BIN
#define UI_FONT_PING_FANG_B_94_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_PING_FANG_B_94_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_PING_FANG_B_94_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 501, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 501, .box_w = 15, .box_h = 68, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 776, .box_w = 38, .box_h = 32, .ofs_x = 5, .ofs_y = 36},
    {.bitmap_index = 592, .adv_w = 902, .box_w = 53, .box_h = 68, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1544, .adv_w = 902, .box_w = 50, .box_h = 86, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 2662, .adv_w = 1489, .box_w = 81, .box_h = 70, .ofs_x = 6, .ofs_y = -2},
    {.bitmap_index = 4132, .adv_w = 1120, .box_w = 66, .box_h = 70, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 5322, .adv_w = 427, .box_w = 17, .box_h = 32, .ofs_x = 5, .ofs_y = 36},
    {.bitmap_index = 5482, .adv_w = 501, .box_w = 24, .box_h = 88, .ofs_x = 4, .ofs_y = -10},
    {.bitmap_index = 6010, .adv_w = 501, .box_w = 24, .box_h = 88, .ofs_x = 4, .ofs_y = -10},
    {.bitmap_index = 6538, .adv_w = 773, .box_w = 44, .box_h = 42, .ofs_x = 2, .ofs_y = 25},
    {.bitmap_index = 7000, .adv_w = 910, .box_w = 49, .box_h = 48, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 7624, .adv_w = 409, .box_w = 16, .box_h = 32, .ofs_x = 5, .ofs_y = -18},
    {.bitmap_index = 7752, .adv_w = 910, .box_w = 49, .box_h = 9, .ofs_x = 4, .ofs_y = 20},
    {.bitmap_index = 7869, .adv_w = 409, .box_w = 15, .box_h = 14, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 7925, .adv_w = 752, .box_w = 43, .box_h = 87, .ofs_x = 2, .ofs_y = -9},
    {.bitmap_index = 8882, .adv_w = 902, .box_w = 50, .box_h = 70, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 9792, .adv_w = 902, .box_w = 27, .box_h = 68, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 10268, .adv_w = 902, .box_w = 47, .box_h = 69, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 11096, .adv_w = 902, .box_w = 49, .box_h = 70, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 12006, .adv_w = 902, .box_w = 54, .box_h = 68, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12958, .adv_w = 902, .box_w = 49, .box_h = 69, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 13855, .adv_w = 902, .box_w = 49, .box_h = 70, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 14765, .adv_w = 902, .box_w = 46, .box_h = 68, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 15581, .adv_w = 902, .box_w = 51, .box_h = 70, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 16491, .adv_w = 902, .box_w = 49, .box_h = 70, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 17401, .adv_w = 409, .box_w = 15, .box_h = 48, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 17593, .adv_w = 409, .box_w = 17, .box_h = 66, .ofs_x = 5, .ofs_y = -18},
    {.bitmap_index = 17923, .adv_w = 910, .box_w = 49, .box_h = 50, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 18573, .adv_w = 910, .box_w = 49, .box_h = 28, .ofs_x = 4, .ofs_y = 10},
    {.bitmap_index = 18937, .adv_w = 910, .box_w = 49, .box_h = 50, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 19587, .adv_w = 832, .box_w = 44, .box_h = 69, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 20346, .adv_w = 1299, .box_w = 73, .box_h = 70, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 21676, .adv_w = 1014, .box_w = 64, .box_h = 68, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 22764, .adv_w = 1033, .box_w = 55, .box_h = 68, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 23716, .adv_w = 1099, .box_w = 62, .box_h = 70, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 24836, .adv_w = 1078, .box_w = 58, .box_h = 67, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 25841, .adv_w = 964, .box_w = 51, .box_h = 67, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 26712, .adv_w = 874, .box_w = 47, .box_h = 67, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 27516, .adv_w = 1134, .box_w = 63, .box_h = 70, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 28636, .adv_w = 1101, .box_w = 57, .box_h = 68, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 29656, .adv_w = 379, .box_w = 11, .box_h = 68, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 29860, .adv_w = 802, .box_w = 43, .box_h = 69, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 30619, .adv_w = 1065, .box_w = 61, .box_h = 68, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 31707, .adv_w = 889, .box_w = 48, .box_h = 68, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 32523, .adv_w = 1351, .box_w = 72, .box_h = 68, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 33747, .adv_w = 1096, .box_w = 56, .box_h = 68, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 34699, .adv_w = 1163, .box_w = 66, .box_h = 70, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 35889, .adv_w = 981, .box_w = 53, .box_h = 67, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 36827, .adv_w = 1163, .box_w = 66, .box_h = 76, .ofs_x = 3, .ofs_y = -8},
    {.bitmap_index = 38119, .adv_w = 1041, .box_w = 57, .box_h = 68, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 39139, .adv_w = 973, .box_w = 56, .box_h = 70, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 40119, .adv_w = 926, .box_w = 56, .box_h = 68, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 41071, .adv_w = 1096, .box_w = 56, .box_h = 69, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 42037, .adv_w = 984, .box_w = 61, .box_h = 68, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43125, .adv_w = 1426, .box_w = 89, .box_h = 68, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44689, .adv_w = 990, .box_w = 62, .box_h = 68, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45777, .adv_w = 1029, .box_w = 64, .box_h = 68, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46865, .adv_w = 955, .box_w = 56, .box_h = 67, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 47803, .adv_w = 501, .box_w = 25, .box_h = 88, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 48419, .adv_w = 752, .box_w = 43, .box_h = 87, .ofs_x = 2, .ofs_y = -9},
    {.bitmap_index = 49376, .adv_w = 501, .box_w = 25, .box_h = 88, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 49992, .adv_w = 811, .box_w = 41, .box_h = 33, .ofs_x = 5, .ofs_y = 35},
    {.bitmap_index = 50355, .adv_w = 752, .box_w = 47, .box_h = 9, .ofs_x = 0, .ofs_y = -13},
    {.bitmap_index = 50463, .adv_w = 501, .box_w = 21, .box_h = 14, .ofs_x = 5, .ofs_y = 54},
    {.bitmap_index = 50547, .adv_w = 856, .box_w = 45, .box_h = 52, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 51171, .adv_w = 899, .box_w = 48, .box_h = 70, .ofs_x = 5, .ofs_y = -2},
    {.bitmap_index = 52011, .adv_w = 839, .box_w = 47, .box_h = 52, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 52635, .adv_w = 899, .box_w = 48, .box_h = 70, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 53475, .adv_w = 848, .box_w = 49, .box_h = 52, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 54151, .adv_w = 567, .box_w = 35, .box_h = 68, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54763, .adv_w = 901, .box_w = 48, .box_h = 70, .ofs_x = 3, .ofs_y = -20},
    {.bitmap_index = 55603, .adv_w = 860, .box_w = 44, .box_h = 69, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 56362, .adv_w = 408, .box_w = 15, .box_h = 68, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 56634, .adv_w = 412, .box_w = 22, .box_h = 87, .ofs_x = -2, .ofs_y = -19},
    {.bitmap_index = 57156, .adv_w = 823, .box_w = 47, .box_h = 69, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 57984, .adv_w = 376, .box_w = 11, .box_h = 69, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 58191, .adv_w = 1319, .box_w = 72, .box_h = 50, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 59091, .adv_w = 866, .box_w = 44, .box_h = 50, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 59641, .adv_w = 898, .box_w = 50, .box_h = 52, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 60317, .adv_w = 899, .box_w = 48, .box_h = 69, .ofs_x = 5, .ofs_y = -19},
    {.bitmap_index = 61145, .adv_w = 899, .box_w = 48, .box_h = 69, .ofs_x = 3, .ofs_y = -19},
    {.bitmap_index = 61973, .adv_w = 559, .box_w = 30, .box_h = 50, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 62373, .adv_w = 782, .box_w = 45, .box_h = 52, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 62997, .adv_w = 541, .box_w = 31, .box_h = 65, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63517, .adv_w = 868, .box_w = 44, .box_h = 50, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 64067, .adv_w = 752, .box_w = 47, .box_h = 49, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64655, .adv_w = 1161, .box_w = 73, .box_h = 49, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65586, .adv_w = 797, .box_w = 50, .box_h = 49, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66223, .adv_w = 781, .box_w = 49, .box_h = 68, .ofs_x = 0, .ofs_y = -19},
    {.bitmap_index = 67107, .adv_w = 755, .box_w = 43, .box_h = 49, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 67646, .adv_w = 501, .box_w = 29, .box_h = 88, .ofs_x = 1, .ofs_y = -10},
    {.bitmap_index = 68350, .adv_w = 316, .box_w = 9, .box_h = 94, .ofs_x = 5, .ofs_y = -13},
    {.bitmap_index = 68632, .adv_w = 501, .box_w = 29, .box_h = 88, .ofs_x = 1, .ofs_y = -10},
    {.bitmap_index = 69336, .adv_w = 752, .box_w = 45, .box_h = 15, .ofs_x = 1, .ofs_y = 26},
    {.bitmap_index = 69516, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
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
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
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
    .stride = 1
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Ping_Fang_B_94 = {
#else
lv_font_t ui_font_Ping_Fang_B_94 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 101,          /*The maximum line height required by the font*/
    .base_line = 20,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -9,
    .underline_thickness = 8,
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



#endif /*#if UI_FONT_PING_FANG_B_94*/
