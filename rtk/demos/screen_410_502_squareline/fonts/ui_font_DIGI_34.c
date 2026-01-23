/*******************************************************************************
 * Size: 34 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 34 --font lvgl_font_src/Digital-Play-St-3.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_DIGI_34.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_DIGI_34
#define UI_FONT_DIGI_34 1
#endif

#if UI_FONT_DIGI_34


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_DIGI_34_glyph_bitmap.bin
 *Define UI_FONT_DIGI_34_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_DIGI_34_GLYPH_BITMAP_BIN
#define UI_FONT_DIGI_34_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_DIGI_34_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_DIGI_34_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 155, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 130, .box_w = 5, .box_h = 35, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 279, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 22},
    {.bitmap_index = 118, .adv_w = 824, .box_w = 49, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 398, .box_w = 22, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 968, .adv_w = 529, .box_w = 30, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1240, .adv_w = 130, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 22},
    {.bitmap_index = 1264, .adv_w = 396, .box_w = 22, .box_h = 40, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 1504, .adv_w = 396, .box_w = 22, .box_h = 40, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 1744, .adv_w = 458, .box_w = 26, .box_h = 26, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 1926, .adv_w = 380, .box_w = 21, .box_h = 18, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 2034, .adv_w = 211, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 2082, .adv_w = 379, .box_w = 21, .box_h = 5, .ofs_x = 0, .ofs_y = 15},
    {.bitmap_index = 2112, .adv_w = 211, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2145, .adv_w = 382, .box_w = 21, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2349, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2553, .adv_w = 130, .box_w = 5, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2621, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2825, .adv_w = 398, .box_w = 22, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3029, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3233, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3437, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3641, .adv_w = 398, .box_w = 22, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3845, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4049, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4253, .adv_w = 211, .box_w = 10, .box_h = 35, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4358, .adv_w = 211, .box_w = 10, .box_h = 40, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4478, .adv_w = 262, .box_w = 14, .box_h = 23, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4570, .adv_w = 380, .box_w = 21, .box_h = 12, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 4642, .adv_w = 262, .box_w = 14, .box_h = 23, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4734, .adv_w = 450, .box_w = 25, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4972, .adv_w = 490, .box_w = 28, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5210, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5414, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5618, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5822, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6026, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6230, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6434, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6638, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6842, .adv_w = 130, .box_w = 5, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6910, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7114, .adv_w = 437, .box_w = 24, .box_h = 35, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7324, .adv_w = 398, .box_w = 22, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7528, .adv_w = 530, .box_w = 30, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7800, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8004, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8208, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8412, .adv_w = 436, .box_w = 24, .box_h = 40, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 8652, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8856, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9060, .adv_w = 435, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9264, .adv_w = 435, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9468, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9672, .adv_w = 741, .box_w = 43, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10046, .adv_w = 383, .box_w = 21, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10250, .adv_w = 435, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10454, .adv_w = 435, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10658, .adv_w = 396, .box_w = 22, .box_h = 40, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 10898, .adv_w = 383, .box_w = 21, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11102, .adv_w = 396, .box_w = 22, .box_h = 40, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 11342, .adv_w = 407, .box_w = 23, .box_h = 14, .ofs_x = 0, .ofs_y = 24},
    {.bitmap_index = 11426, .adv_w = 379, .box_w = 21, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11456, .adv_w = 192, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 35},
    {.bitmap_index = 11486, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11690, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11894, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12098, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12302, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12506, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12710, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12914, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13118, .adv_w = 130, .box_w = 5, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13186, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13390, .adv_w = 437, .box_w = 24, .box_h = 35, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13600, .adv_w = 398, .box_w = 22, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13804, .adv_w = 530, .box_w = 30, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14076, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14280, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14484, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14688, .adv_w = 436, .box_w = 24, .box_h = 40, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 14928, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15132, .adv_w = 437, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15336, .adv_w = 435, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15540, .adv_w = 435, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15744, .adv_w = 436, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15948, .adv_w = 741, .box_w = 43, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16322, .adv_w = 383, .box_w = 21, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16526, .adv_w = 435, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16730, .adv_w = 435, .box_w = 24, .box_h = 34, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16934, .adv_w = 496, .box_w = 28, .box_h = 40, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 17214, .adv_w = 131, .box_w = 5, .box_h = 42, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 17298, .adv_w = 496, .box_w = 28, .box_h = 40, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 17578, .adv_w = 500, .box_w = 28, .box_h = 10, .ofs_x = 0, .ofs_y = 24}
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
const lv_font_t ui_font_DIGI_34 = {
#else
lv_font_t ui_font_DIGI_34 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 53,          /*The maximum line height required by the font*/
    .base_line = 8,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 2,
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



#endif /*#if UI_FONT_DIGI_34*/
