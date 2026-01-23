/*******************************************************************************
 * Size: 84 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 84 --font lvgl_font_src/evelyne-yzpxo.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_EVELYNE_84.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_EVELYNE_84
#define UI_FONT_EVELYNE_84 1
#endif

#if UI_FONT_EVELYNE_84


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_EVELYNE_84_glyph_bitmap.bin
 *Define UI_FONT_EVELYNE_84_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_EVELYNE_84_GLYPH_BITMAP_BIN
#define UI_FONT_EVELYNE_84_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_EVELYNE_84_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_EVELYNE_84_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 197, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 82, .box_w = 5, .box_h = 44, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 88, .adv_w = 129, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 41},
    {.bitmap_index = 110, .adv_w = 612, .box_w = 38, .box_h = 38, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 490, .adv_w = 326, .box_w = 20, .box_h = 48, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 730, .adv_w = 359, .box_w = 23, .box_h = 42, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 982, .adv_w = 492, .box_w = 29, .box_h = 46, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1350, .adv_w = 57, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 41},
    {.bitmap_index = 1361, .adv_w = 247, .box_w = 14, .box_h = 43, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1533, .adv_w = 242, .box_w = 14, .box_h = 43, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1705, .adv_w = 162, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 42},
    {.bitmap_index = 1741, .adv_w = 369, .box_w = 23, .box_h = 23, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 1879, .adv_w = 87, .box_w = 6, .box_h = 10, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 1899, .adv_w = 272, .box_w = 17, .box_h = 3, .ofs_x = 0, .ofs_y = 17},
    {.bitmap_index = 1914, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1924, .adv_w = 431, .box_w = 27, .box_h = 43, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 2225, .adv_w = 440, .box_w = 26, .box_h = 45, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 2540, .adv_w = 161, .box_w = 12, .box_h = 45, .ofs_x = -2, .ofs_y = 9},
    {.bitmap_index = 2675, .adv_w = 409, .box_w = 25, .box_h = 44, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 2983, .adv_w = 410, .box_w = 24, .box_h = 47, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 3265, .adv_w = 398, .box_w = 25, .box_h = 45, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 3580, .adv_w = 410, .box_w = 25, .box_h = 44, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 3888, .adv_w = 440, .box_w = 27, .box_h = 44, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 4196, .adv_w = 492, .box_w = 29, .box_h = 44, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 4548, .adv_w = 417, .box_w = 25, .box_h = 48, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 4884, .adv_w = 445, .box_w = 26, .box_h = 45, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 5199, .adv_w = 87, .box_w = 5, .box_h = 20, .ofs_x = 0, .ofs_y = 15},
    {.bitmap_index = 5239, .adv_w = 85, .box_w = 5, .box_h = 25, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 5289, .adv_w = 483, .box_w = 29, .box_h = 33, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 5553, .adv_w = 368, .box_w = 23, .box_h = 11, .ofs_x = 0, .ofs_y = 19},
    {.bitmap_index = 5619, .adv_w = 467, .box_w = 29, .box_h = 33, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 5883, .adv_w = 287, .box_w = 18, .box_h = 46, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 6113, .adv_w = 629, .box_w = 39, .box_h = 42, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6533, .adv_w = 765, .box_w = 49, .box_h = 60, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 7313, .adv_w = 782, .box_w = 50, .box_h = 58, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 8067, .adv_w = 567, .box_w = 33, .box_h = 60, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 8607, .adv_w = 793, .box_w = 45, .box_h = 58, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 9303, .adv_w = 505, .box_w = 30, .box_h = 72, .ofs_x = 1, .ofs_y = -19},
    {.bitmap_index = 9879, .adv_w = 428, .box_w = 48, .box_h = 71, .ofs_x = 0, .ofs_y = -9},
    {.bitmap_index = 10731, .adv_w = 602, .box_w = 35, .box_h = 63, .ofs_x = 0, .ofs_y = -11},
    {.bitmap_index = 11298, .adv_w = 840, .box_w = 46, .box_h = 65, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12078, .adv_w = 316, .box_w = 24, .box_h = 61, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 12444, .adv_w = 539, .box_w = 28, .box_h = 65, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 12899, .adv_w = 777, .box_w = 58, .box_h = 79, .ofs_x = 0, .ofs_y = -13},
    {.bitmap_index = 14084, .adv_w = 423, .box_w = 36, .box_h = 72, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 14732, .adv_w = 1204, .box_w = 77, .box_h = 69, .ofs_x = 0, .ofs_y = -14},
    {.bitmap_index = 16112, .adv_w = 773, .box_w = 52, .box_h = 72, .ofs_x = -2, .ofs_y = -16},
    {.bitmap_index = 17048, .adv_w = 804, .box_w = 49, .box_h = 66, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 17906, .adv_w = 505, .box_w = 34, .box_h = 81, .ofs_x = 0, .ofs_y = -19},
    {.bitmap_index = 18635, .adv_w = 679, .box_w = 44, .box_h = 61, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 19306, .adv_w = 646, .box_w = 49, .box_h = 75, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 20281, .adv_w = 543, .box_w = 42, .box_h = 70, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 21051, .adv_w = 505, .box_w = 61, .box_h = 75, .ofs_x = -4, .ofs_y = 2},
    {.bitmap_index = 22251, .adv_w = 908, .box_w = 60, .box_h = 63, .ofs_x = -2, .ofs_y = -9},
    {.bitmap_index = 23196, .adv_w = 630, .box_w = 66, .box_h = 72, .ofs_x = -4, .ofs_y = 5},
    {.bitmap_index = 24420, .adv_w = 1200, .box_w = 76, .box_h = 63, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 25617, .adv_w = 923, .box_w = 77, .box_h = 75, .ofs_x = 0, .ofs_y = -10},
    {.bitmap_index = 27117, .adv_w = 625, .box_w = 37, .box_h = 89, .ofs_x = -2, .ofs_y = -23},
    {.bitmap_index = 28007, .adv_w = 1087, .box_w = 69, .box_h = 65, .ofs_x = -1, .ofs_y = -9},
    {.bitmap_index = 29177, .adv_w = 192, .box_w = 11, .box_h = 46, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 29315, .adv_w = 264, .box_w = 16, .box_h = 43, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 29487, .adv_w = 169, .box_w = 11, .box_h = 45, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 29622, .adv_w = 349, .box_w = 22, .box_h = 13, .ofs_x = 0, .ofs_y = 51},
    {.bitmap_index = 29700, .adv_w = 442, .box_w = 28, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 29728, .adv_w = 345, .box_w = 24, .box_h = 19, .ofs_x = -1, .ofs_y = 5},
    {.bitmap_index = 29842, .adv_w = 310, .box_w = 21, .box_h = 45, .ofs_x = -1, .ofs_y = 4},
    {.bitmap_index = 30112, .adv_w = 262, .box_w = 19, .box_h = 18, .ofs_x = -2, .ofs_y = 7},
    {.bitmap_index = 30202, .adv_w = 415, .box_w = 30, .box_h = 41, .ofs_x = -2, .ofs_y = 7},
    {.bitmap_index = 30530, .adv_w = 307, .box_w = 21, .box_h = 22, .ofs_x = -1, .ofs_y = 4},
    {.bitmap_index = 30662, .adv_w = 226, .box_w = 16, .box_h = 44, .ofs_x = -1, .ofs_y = 4},
    {.bitmap_index = 30838, .adv_w = 362, .box_w = 27, .box_h = 35, .ofs_x = -3, .ofs_y = -9},
    {.bitmap_index = 31083, .adv_w = 390, .box_w = 27, .box_h = 48, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 31419, .adv_w = 157, .box_w = 12, .box_h = 22, .ofs_x = -1, .ofs_y = 8},
    {.bitmap_index = 31485, .adv_w = 168, .box_w = 26, .box_h = 40, .ofs_x = -14, .ofs_y = -9},
    {.bitmap_index = 31765, .adv_w = 295, .box_w = 20, .box_h = 42, .ofs_x = -1, .ofs_y = 7},
    {.bitmap_index = 31975, .adv_w = 258, .box_w = 18, .box_h = 40, .ofs_x = -1, .ofs_y = 8},
    {.bitmap_index = 32175, .adv_w = 464, .box_w = 31, .box_h = 26, .ofs_x = -1, .ofs_y = 4},
    {.bitmap_index = 32383, .adv_w = 363, .box_w = 25, .box_h = 23, .ofs_x = -1, .ofs_y = 4},
    {.bitmap_index = 32544, .adv_w = 286, .box_w = 22, .box_h = 21, .ofs_x = -3, .ofs_y = 6},
    {.bitmap_index = 32670, .adv_w = 289, .box_w = 21, .box_h = 35, .ofs_x = -2, .ofs_y = -10},
    {.bitmap_index = 32880, .adv_w = 339, .box_w = 23, .box_h = 33, .ofs_x = -1, .ofs_y = -9},
    {.bitmap_index = 33078, .adv_w = 291, .box_w = 22, .box_h = 31, .ofs_x = -3, .ofs_y = -3},
    {.bitmap_index = 33264, .adv_w = 218, .box_w = 20, .box_h = 30, .ofs_x = -5, .ofs_y = 2},
    {.bitmap_index = 33414, .adv_w = 265, .box_w = 26, .box_h = 51, .ofs_x = -8, .ofs_y = -3},
    {.bitmap_index = 33771, .adv_w = 423, .box_w = 29, .box_h = 23, .ofs_x = -1, .ofs_y = 6},
    {.bitmap_index = 33955, .adv_w = 368, .box_w = 27, .box_h = 27, .ofs_x = -3, .ofs_y = 7},
    {.bitmap_index = 34144, .adv_w = 645, .box_w = 42, .box_h = 27, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 34441, .adv_w = 385, .box_w = 30, .box_h = 20, .ofs_x = -5, .ofs_y = 3},
    {.bitmap_index = 34601, .adv_w = 363, .box_w = 26, .box_h = 36, .ofs_x = -2, .ofs_y = -9},
    {.bitmap_index = 34853, .adv_w = 350, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -14},
    {.bitmap_index = 35133, .adv_w = 187, .box_w = 10, .box_h = 44, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 35265, .adv_w = 85, .box_w = 5, .box_h = 36, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 35337, .adv_w = 182, .box_w = 11, .box_h = 43, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 35466, .adv_w = 410, .box_w = 25, .box_h = 9, .ofs_x = 0, .ofs_y = 21}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 64, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 30, .glyph_id_start = 65,
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
    .cmap_num = 2,
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
const lv_font_t ui_font_EVELYNE_84 = {
#else
lv_font_t ui_font_EVELYNE_84 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 100,          /*The maximum line height required by the font*/
    .base_line = 23,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -9,
    .underline_thickness = 6,
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



#endif /*#if UI_FONT_EVELYNE_84*/
