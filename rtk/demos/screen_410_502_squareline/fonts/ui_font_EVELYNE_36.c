/*******************************************************************************
 * Size: 36 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 36 --font lvgl_font_src/evelyne-yzpxo.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_EVELYNE_36.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_EVELYNE_36
#define UI_FONT_EVELYNE_36 1
#endif

#if UI_FONT_EVELYNE_36


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_EVELYNE_36_glyph_bitmap.bin
 *Define UI_FONT_EVELYNE_36_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_EVELYNE_36_GLYPH_BITMAP_BIN
#define UI_FONT_EVELYNE_36_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_EVELYNE_36_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_EVELYNE_36_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 84, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 35, .box_w = 3, .box_h = 19, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 19, .adv_w = 55, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 18},
    {.bitmap_index = 24, .adv_w = 262, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 109, .adv_w = 140, .box_w = 9, .box_h = 21, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 172, .adv_w = 154, .box_w = 10, .box_h = 19, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 229, .adv_w = 211, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 309, .adv_w = 24, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 18},
    {.bitmap_index = 314, .adv_w = 106, .box_w = 7, .box_h = 19, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 352, .adv_w = 104, .box_w = 6, .box_h = 19, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 390, .adv_w = 69, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 19},
    {.bitmap_index = 395, .adv_w = 158, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 425, .adv_w = 37, .box_w = 4, .box_h = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 117, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 434, .adv_w = 34, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 436, .adv_w = 185, .box_w = 12, .box_h = 19, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 493, .adv_w = 188, .box_w = 11, .box_h = 20, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 553, .adv_w = 69, .box_w = 6, .box_h = 20, .ofs_x = -1, .ofs_y = 4},
    {.bitmap_index = 593, .adv_w = 175, .box_w = 11, .box_h = 20, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 653, .adv_w = 176, .box_w = 11, .box_h = 21, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 716, .adv_w = 170, .box_w = 11, .box_h = 20, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 776, .adv_w = 176, .box_w = 11, .box_h = 19, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 833, .adv_w = 188, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 893, .adv_w = 211, .box_w = 13, .box_h = 20, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 973, .adv_w = 179, .box_w = 11, .box_h = 21, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1036, .adv_w = 191, .box_w = 11, .box_h = 21, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1099, .adv_w = 37, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 1108, .adv_w = 37, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1119, .adv_w = 207, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1179, .adv_w = 158, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1197, .adv_w = 200, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1257, .adv_w = 123, .box_w = 8, .box_h = 20, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1297, .adv_w = 269, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1387, .adv_w = 328, .box_w = 21, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1549, .adv_w = 335, .box_w = 22, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1711, .adv_w = 243, .box_w = 14, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1819, .adv_w = 340, .box_w = 20, .box_h = 26, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1949, .adv_w = 217, .box_w = 13, .box_h = 33, .ofs_x = 0, .ofs_y = -9},
    {.bitmap_index = 2081, .adv_w = 183, .box_w = 21, .box_h = 31, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2267, .adv_w = 258, .box_w = 15, .box_h = 28, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 2379, .adv_w = 360, .box_w = 20, .box_h = 28, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2519, .adv_w = 136, .box_w = 10, .box_h = 27, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2600, .adv_w = 231, .box_w = 13, .box_h = 29, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2716, .adv_w = 333, .box_w = 25, .box_h = 35, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 2961, .adv_w = 181, .box_w = 16, .box_h = 32, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3089, .adv_w = 516, .box_w = 33, .box_h = 31, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 3368, .adv_w = 331, .box_w = 23, .box_h = 32, .ofs_x = -1, .ofs_y = -7},
    {.bitmap_index = 3560, .adv_w = 345, .box_w = 22, .box_h = 29, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 3734, .adv_w = 217, .box_w = 15, .box_h = 36, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 3878, .adv_w = 291, .box_w = 19, .box_h = 27, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 4013, .adv_w = 277, .box_w = 21, .box_h = 34, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4217, .adv_w = 233, .box_w = 19, .box_h = 31, .ofs_x = -2, .ofs_y = -1},
    {.bitmap_index = 4372, .adv_w = 217, .box_w = 27, .box_h = 33, .ofs_x = -2, .ofs_y = 2},
    {.bitmap_index = 4603, .adv_w = 389, .box_w = 26, .box_h = 28, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 4799, .adv_w = 270, .box_w = 29, .box_h = 32, .ofs_x = -2, .ofs_y = 2},
    {.bitmap_index = 5055, .adv_w = 514, .box_w = 33, .box_h = 28, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 5307, .adv_w = 396, .box_w = 33, .box_h = 33, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 5604, .adv_w = 268, .box_w = 16, .box_h = 39, .ofs_x = -1, .ofs_y = -11},
    {.bitmap_index = 5760, .adv_w = 466, .box_w = 30, .box_h = 29, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 5992, .adv_w = 82, .box_w = 5, .box_h = 20, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 6032, .adv_w = 113, .box_w = 7, .box_h = 19, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 6070, .adv_w = 73, .box_w = 5, .box_h = 20, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 6110, .adv_w = 150, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 22},
    {.bitmap_index = 6131, .adv_w = 189, .box_w = 12, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 6137, .adv_w = 148, .box_w = 11, .box_h = 9, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 6164, .adv_w = 133, .box_w = 10, .box_h = 19, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 6221, .adv_w = 112, .box_w = 9, .box_h = 8, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 6245, .adv_w = 178, .box_w = 13, .box_h = 18, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 6317, .adv_w = 132, .box_w = 10, .box_h = 9, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 6344, .adv_w = 97, .box_w = 8, .box_h = 19, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 6382, .adv_w = 155, .box_w = 12, .box_h = 15, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 6427, .adv_w = 167, .box_w = 12, .box_h = 21, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 6490, .adv_w = 67, .box_w = 6, .box_h = 10, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 6510, .adv_w = 72, .box_w = 11, .box_h = 18, .ofs_x = -6, .ofs_y = -4},
    {.bitmap_index = 6564, .adv_w = 126, .box_w = 10, .box_h = 19, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 6621, .adv_w = 111, .box_w = 9, .box_h = 18, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 6675, .adv_w = 199, .box_w = 14, .box_h = 11, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 6719, .adv_w = 156, .box_w = 12, .box_h = 10, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 6749, .adv_w = 123, .box_w = 11, .box_h = 9, .ofs_x = -2, .ofs_y = 3},
    {.bitmap_index = 6776, .adv_w = 124, .box_w = 10, .box_h = 16, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 6824, .adv_w = 145, .box_w = 11, .box_h = 15, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 6869, .adv_w = 125, .box_w = 9, .box_h = 14, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 6911, .adv_w = 93, .box_w = 9, .box_h = 13, .ofs_x = -2, .ofs_y = 1},
    {.bitmap_index = 6950, .adv_w = 114, .box_w = 12, .box_h = 23, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 7019, .adv_w = 181, .box_w = 13, .box_h = 10, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 7059, .adv_w = 158, .box_w = 12, .box_h = 12, .ofs_x = -1, .ofs_y = 3},
    {.bitmap_index = 7095, .adv_w = 276, .box_w = 19, .box_h = 12, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 7155, .adv_w = 165, .box_w = 13, .box_h = 9, .ofs_x = -2, .ofs_y = 2},
    {.bitmap_index = 7191, .adv_w = 156, .box_w = 12, .box_h = 16, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 7239, .adv_w = 150, .box_w = 12, .box_h = 18, .ofs_x = -2, .ofs_y = -6},
    {.bitmap_index = 7293, .adv_w = 80, .box_w = 5, .box_h = 20, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 7333, .adv_w = 37, .box_w = 2, .box_h = 16, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 7349, .adv_w = 78, .box_w = 5, .box_h = 19, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 7387, .adv_w = 176, .box_w = 11, .box_h = 4, .ofs_x = 0, .ofs_y = 9}
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
const lv_font_t ui_font_EVELYNE_36 = {
#else
lv_font_t ui_font_EVELYNE_36 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 46,          /*The maximum line height required by the font*/
    .base_line = 11,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 3,
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



#endif /*#if UI_FONT_EVELYNE_36*/
