/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 24 --font lvgl_font_src/HONORSansCN-Regular.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONO_24.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONO_24
#define UI_FONT_HONO_24 1
#endif

#if UI_FONT_HONO_24


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONO_24_glyph_bitmap.bin
 *Define UI_FONT_HONO_24_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONO_24_GLYPH_BITMAP_BIN
#define UI_FONT_HONO_24_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONO_24_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONO_24_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 92, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 111, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 30, .adv_w = 238, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 208, .box_w = 13, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 190, .adv_w = 329, .box_w = 20, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 267, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 63, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 376, .adv_w = 110, .box_w = 6, .box_h = 23, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 422, .adv_w = 110, .box_w = 6, .box_h = 23, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 468, .adv_w = 178, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 495, .adv_w = 226, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 547, .adv_w = 91, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 554, .adv_w = 190, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 560, .adv_w = 104, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 154, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 220, .box_w = 6, .box_h = 18, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 870, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 220, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1140, .adv_w = 111, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1153, .adv_w = 110, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1170, .adv_w = 248, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1226, .adv_w = 225, .box_w = 14, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1250, .adv_w = 248, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1306, .adv_w = 198, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1360, .adv_w = 308, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1450, .adv_w = 257, .box_w = 18, .box_h = 18, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1540, .adv_w = 247, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1612, .adv_w = 265, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1702, .adv_w = 280, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1774, .adv_w = 232, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1846, .adv_w = 213, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1900, .adv_w = 272, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1990, .adv_w = 267, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2062, .adv_w = 83, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2080, .adv_w = 188, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2134, .adv_w = 237, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2206, .adv_w = 204, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2260, .adv_w = 328, .box_w = 19, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2350, .adv_w = 270, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2422, .adv_w = 303, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2512, .adv_w = 238, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2584, .adv_w = 303, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2684, .adv_w = 252, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2756, .adv_w = 213, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2828, .adv_w = 223, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2900, .adv_w = 272, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2972, .adv_w = 246, .box_w = 16, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3044, .adv_w = 368, .box_w = 23, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3152, .adv_w = 232, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3224, .adv_w = 229, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3296, .adv_w = 217, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3368, .adv_w = 113, .box_w = 5, .box_h = 22, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3412, .adv_w = 154, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3466, .adv_w = 113, .box_w = 5, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3510, .adv_w = 225, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 3550, .adv_w = 201, .box_w = 13, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3562, .adv_w = 124, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 15},
    {.bitmap_index = 3570, .adv_w = 207, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3609, .adv_w = 230, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3681, .adv_w = 194, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3720, .adv_w = 229, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3792, .adv_w = 212, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3844, .adv_w = 114, .box_w = 8, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3880, .adv_w = 227, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 3952, .adv_w = 218, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4006, .adv_w = 93, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4024, .adv_w = 83, .box_w = 6, .box_h = 23, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 4070, .adv_w = 199, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4124, .adv_w = 81, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4142, .adv_w = 349, .box_w = 20, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4207, .adv_w = 220, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4246, .adv_w = 222, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4298, .adv_w = 231, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 4370, .adv_w = 231, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4442, .adv_w = 136, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4470, .adv_w = 177, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4509, .adv_w = 139, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4560, .adv_w = 214, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4599, .adv_w = 185, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4638, .adv_w = 292, .box_w = 19, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4703, .adv_w = 209, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4755, .adv_w = 189, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 4809, .adv_w = 184, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4848, .adv_w = 112, .box_w = 7, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4892, .adv_w = 84, .box_w = 3, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4912, .adv_w = 112, .box_w = 7, .box_h = 22, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4956, .adv_w = 225, .box_w = 14, .box_h = 4, .ofs_x = 0, .ofs_y = 6}
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
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 0, 0, 0, 3, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 5, 6, 7, 0, 8,
    0, 0, 0, 0, 9, 10, 0, 0,
    7, 11, 12, 13, 0, 14, 15, 16,
    17, 18, 19, 20, 0, 0, 0, 0,
    0, 0, 0, 21, 0, 0, 22, 23,
    0, 24, 25, 0, 26, 0, 24, 24,
    21, 21, 0, 27, 28, 29, 0, 30,
    31, 32, 33, 34, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 0, 2, 0, 0, 3, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 5, 0, 0, 0,
    5, 0, 0, 6, 0, 0, 0, 0,
    5, 0, 5, 0, 7, 8, 0, 9,
    10, 11, 12, 13, 0, 0, 2, 0,
    0, 0, 14, 15, 16, 16, 16, 0,
    16, 0, 17, 18, 0, 0, 19, 19,
    16, 0, 16, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 0, 0, 28, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -15, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -19,
    0, 0, 0, -15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, 0, 0, 0,
    -4, 0, 0, -25, -15, -8, 0, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -15,
    -4, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, -13, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -19, -4, 0, 0, 0, -21,
    -6, 0, 0, -15, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -19, -8,
    0, -31, 0, 0, 0, 0, 0, 0,
    0, -15, 0, -15, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, -13,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, -31, 0, 0, 0,
    -17, 0, 0, -35, -31, -19, 0, -31,
    0, 0, 0, -17, 0, 0, 0, 0,
    0, -13, -19, -23, 0, -19, 0, 0,
    0, 0, -27, -21, 0, -15, 0, 0,
    0, 0, 0, 0, 0, -15, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -15, -4, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -8, 0, -17,
    -4, -8, 0, -12, -6, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -27, -21,
    -13, -36, 0, 0, 0, 0, 0, -2,
    0, -21, 0, -10, -17, 0, -27, -31,
    -23, -27, -15, -15, -15, -15, -15, 0,
    0, 0, -12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -27, -25,
    -8, -31, 0, 0, 0, 0, 0, 0,
    0, -19, 0, -19, 0, 0, 0, -15,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, -19, -8, 0, -23, 0, 0,
    0, 0, 0, 0, 0, -12, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, -12, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -27, -29, -8, -31, 0, 0,
    0, 0, 0, 0, 0, -17, 0, -38,
    -8, 0, -31, -27, 0, -19, -8, -8,
    -8, -8, -8, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, -19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, -6,
    -8, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10,
    12, 0, 8, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -10, -7, 0, -4, -4,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, -15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, 0, -15,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, -8, -8, -8, -8, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, -19, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, -15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, -6,
    0, 0, 0, 0, 0, 0, -2, -2,
    -4, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, -8, 0, 0, 0, -4,
    0, 0, -4, -4, 0, 0, 0, 0,
    0, 0, -19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, -1,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 34,
    .right_class_cnt     = 28,
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
const lv_font_t ui_font_HONO_24 = {
#else
lv_font_t ui_font_HONO_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 25,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
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



#endif /*#if UI_FONT_HONO_24*/
