/*******************************************************************************
 * Size: 56 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 56 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONOR_M_56.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONOR_M_56
#define UI_FONT_HONOR_M_56 1
#endif

#if UI_FONT_HONOR_M_56


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONOR_M_56_glyph_bitmap.bin
 *Define UI_FONT_HONOR_M_56_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONOR_M_56_GLYPH_BITMAP_BIN
#define UI_FONT_HONOR_M_56_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONOR_M_56_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONOR_M_56_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 214, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 270, .box_w = 9, .box_h = 43, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 307, .box_w = 15, .box_h = 15, .ofs_x = 2, .ofs_y = 28},
    {.bitmap_index = 189, .adv_w = 564, .box_w = 33, .box_h = 42, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 567, .adv_w = 502, .box_w = 30, .box_h = 51, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 975, .adv_w = 793, .box_w = 46, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1491, .adv_w = 625, .box_w = 38, .box_h = 43, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1921, .adv_w = 155, .box_w = 6, .box_h = 15, .ofs_x = 2, .ofs_y = 28},
    {.bitmap_index = 1951, .adv_w = 272, .box_w = 14, .box_h = 53, .ofs_x = 3, .ofs_y = -6},
    {.bitmap_index = 2163, .adv_w = 272, .box_w = 14, .box_h = 53, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 2375, .adv_w = 422, .box_w = 24, .box_h = 23, .ofs_x = 1, .ofs_y = 19},
    {.bitmap_index = 2513, .adv_w = 530, .box_w = 31, .box_h = 30, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2753, .adv_w = 223, .box_w = 8, .box_h = 16, .ofs_x = 3, .ofs_y = -7},
    {.bitmap_index = 2785, .adv_w = 443, .box_w = 22, .box_h = 5, .ofs_x = 3, .ofs_y = 16},
    {.bitmap_index = 2815, .adv_w = 250, .box_w = 9, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2842, .adv_w = 369, .box_w = 22, .box_h = 42, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 3094, .adv_w = 522, .box_w = 27, .box_h = 43, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 3395, .adv_w = 522, .box_w = 14, .box_h = 42, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 3563, .adv_w = 522, .box_w = 27, .box_h = 42, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 3857, .adv_w = 522, .box_w = 28, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4158, .adv_w = 522, .box_w = 28, .box_h = 42, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 4452, .adv_w = 522, .box_w = 28, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4753, .adv_w = 522, .box_w = 29, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5097, .adv_w = 522, .box_w = 27, .box_h = 42, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 5391, .adv_w = 522, .box_w = 29, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5735, .adv_w = 522, .box_w = 29, .box_h = 42, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 6071, .adv_w = 270, .box_w = 9, .box_h = 30, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 6161, .adv_w = 267, .box_w = 9, .box_h = 37, .ofs_x = 4, .ofs_y = -7},
    {.bitmap_index = 6272, .adv_w = 581, .box_w = 31, .box_h = 34, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 6544, .adv_w = 528, .box_w = 31, .box_h = 15, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 6664, .adv_w = 581, .box_w = 30, .box_h = 34, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 6936, .adv_w = 466, .box_w = 26, .box_h = 43, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7237, .adv_w = 719, .box_w = 43, .box_h = 43, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7710, .adv_w = 618, .box_w = 39, .box_h = 42, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 8130, .adv_w = 584, .box_w = 31, .box_h = 42, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 8466, .adv_w = 624, .box_w = 36, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8853, .adv_w = 659, .box_w = 36, .box_h = 42, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 9231, .adv_w = 547, .box_w = 29, .box_h = 42, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 9567, .adv_w = 504, .box_w = 27, .box_h = 42, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 9861, .adv_w = 641, .box_w = 36, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 10248, .adv_w = 631, .box_w = 34, .box_h = 42, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 10626, .adv_w = 207, .box_w = 7, .box_h = 42, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 10710, .adv_w = 446, .box_w = 24, .box_h = 43, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10968, .adv_w = 572, .box_w = 33, .box_h = 42, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 11346, .adv_w = 487, .box_w = 28, .box_h = 42, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 11640, .adv_w = 777, .box_w = 43, .box_h = 42, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 12102, .adv_w = 637, .box_w = 34, .box_h = 42, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 12480, .adv_w = 709, .box_w = 41, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 12953, .adv_w = 565, .box_w = 31, .box_h = 42, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 13289, .adv_w = 709, .box_w = 41, .box_h = 46, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 13795, .adv_w = 598, .box_w = 32, .box_h = 42, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 14131, .adv_w = 508, .box_w = 30, .box_h = 43, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14475, .adv_w = 526, .box_w = 33, .box_h = 42, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 14853, .adv_w = 642, .box_w = 34, .box_h = 43, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 15240, .adv_w = 589, .box_w = 37, .box_h = 42, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 15660, .adv_w = 874, .box_w = 55, .box_h = 42, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 16248, .adv_w = 567, .box_w = 36, .box_h = 42, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 16626, .adv_w = 555, .box_w = 35, .box_h = 42, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 17004, .adv_w = 515, .box_w = 30, .box_h = 42, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 17340, .adv_w = 278, .box_w = 12, .box_h = 52, .ofs_x = 6, .ofs_y = -5},
    {.bitmap_index = 17496, .adv_w = 369, .box_w = 22, .box_h = 42, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 17748, .adv_w = 278, .box_w = 12, .box_h = 52, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 17904, .adv_w = 529, .box_w = 31, .box_h = 23, .ofs_x = 1, .ofs_y = 19},
    {.bitmap_index = 18088, .adv_w = 478, .box_w = 30, .box_h = 5, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 18128, .adv_w = 298, .box_w = 13, .box_h = 9, .ofs_x = 2, .ofs_y = 36},
    {.bitmap_index = 18164, .adv_w = 487, .box_w = 27, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18381, .adv_w = 541, .box_w = 30, .box_h = 45, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 18741, .adv_w = 459, .box_w = 28, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18958, .adv_w = 540, .box_w = 30, .box_h = 45, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19318, .adv_w = 496, .box_w = 29, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19566, .adv_w = 279, .box_w = 19, .box_h = 44, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 19786, .adv_w = 535, .box_w = 30, .box_h = 44, .ofs_x = 1, .ofs_y = -13},
    {.bitmap_index = 20138, .adv_w = 514, .box_w = 26, .box_h = 44, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 20446, .adv_w = 228, .box_w = 9, .box_h = 42, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 20572, .adv_w = 216, .box_w = 14, .box_h = 55, .ofs_x = -3, .ofs_y = -13},
    {.bitmap_index = 20792, .adv_w = 480, .box_w = 28, .box_h = 44, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 21100, .adv_w = 202, .box_w = 7, .box_h = 44, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 21188, .adv_w = 818, .box_w = 45, .box_h = 30, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 21548, .adv_w = 516, .box_w = 27, .box_h = 30, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 21758, .adv_w = 521, .box_w = 30, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22006, .adv_w = 544, .box_w = 30, .box_h = 43, .ofs_x = 3, .ofs_y = -12},
    {.bitmap_index = 22350, .adv_w = 544, .box_w = 30, .box_h = 43, .ofs_x = 1, .ofs_y = -12},
    {.bitmap_index = 22694, .adv_w = 330, .box_w = 18, .box_h = 30, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 22844, .adv_w = 418, .box_w = 24, .box_h = 31, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23030, .adv_w = 331, .box_w = 20, .box_h = 40, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23230, .adv_w = 506, .box_w = 25, .box_h = 30, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 23440, .adv_w = 448, .box_w = 28, .box_h = 29, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 23643, .adv_w = 692, .box_w = 43, .box_h = 29, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 23962, .adv_w = 496, .box_w = 31, .box_h = 29, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 24194, .adv_w = 456, .box_w = 29, .box_h = 43, .ofs_x = 0, .ofs_y = -13},
    {.bitmap_index = 24538, .adv_w = 434, .box_w = 25, .box_h = 29, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 24741, .adv_w = 277, .box_w = 18, .box_h = 52, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 25001, .adv_w = 205, .box_w = 7, .box_h = 48, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 25097, .adv_w = 277, .box_w = 17, .box_h = 52, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 25357, .adv_w = 529, .box_w = 31, .box_h = 10, .ofs_x = 1, .ofs_y = 14}
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
    17, 18, 19, 20, 21, 0, 0, 0,
    0, 0, 22, 23, 24, 0, 25, 26,
    0, 27, 28, 29, 30, 29, 27, 27,
    23, 23, 31, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 0, 0, 0
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
    5, 0, 5, 0, 7, 8, 9, 10,
    11, 12, 13, 14, 0, 0, 15, 0,
    0, 0, 16, 17, 18, 18, 18, 19,
    18, 20, 21, 22, 23, 24, 25, 25,
    18, 26, 18, 25, 27, 28, 29, 30,
    31, 32, 33, 34, 0, 0, 35, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -36, 0, -54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -45, 0, 0,
    0, 0, -36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -36, 0, 0, 0, -10, -2, 0,
    -61, -2, -38, -18, 0, -45, 0, 0,
    -2, 0, -4, 0, 0, -3, 0, -3,
    0, 0, 0, 0, -4, -4, -6, -6,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -36, 0, -11, 0, 0,
    -18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -1, 0, 0, 0,
    0, 0, -7, 0, 0, 0, -25, 0,
    0, 0, 0, -13, 0, 0, -1, 0,
    0, 0, -3, -3, -4, 0, 0, -2,
    0, -3, 0, 0, -4, -4, -4, -4,
    0, 0, 0, 0, -43, -10, 0, 0,
    0, -45, 0, -11, 0, 0, -36, -18,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -45,
    -22, 0, -72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -34, 0, -34, 0,
    0, 0, 0, 0, 0, 0, 0, -18,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -22,
    0, -32, 0, 0, 0, 0, 0, 0,
    0, 0, -4, -4, -4, -8, -8, 0,
    -7, 0, 0, -65, 0, 0, 0, -36,
    0, 0, -81, 0, -70, -45, 0, -72,
    0, 0, 0, 0, -32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -25,
    -41, -50, 0, -41, 0, 0, 0, 0,
    -63, -52, 0, -32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -36, 0, -30,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -34, 0, -13, 0, 0, -27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, -18, 0, -41, 0, -11, -18, 0,
    -27, -14, 0, -4, 0, -28, 0, 0,
    -4, -3, 0, 0, -2, 0, -4, 0,
    -3, -2, 0, 0, -2, 0, 0, 0,
    0, -63, -48, -30, -82, 0, 0, 0,
    0, 0, 0, -4, 0, 0, -47, 0,
    -14, 0, 0, -36, -2, 0, 0, -59,
    0, -72, -43, -59, -32, -33, -34, -32,
    -36, 0, 0, 0, -27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -63,
    -61, -18, -75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -48, 0, -48, 0,
    0, 0, 0, 0, 0, -4, -4, -38,
    0, -36, -3, -3, -4, -3, -4, 0,
    0, 0, -45, -18, 0, -54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -33,
    0, -29, 0, 0, 0, 0, 0, 0,
    -4, -4, -4, 0, 0, -3, 0, 0,
    -3, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -20, 0, -30, 0, 0, 0,
    0, 0, 0, 0, 0, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -63, -70, -18, -75, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -50, 0, -90,
    0, 0, -18, 0, 0, 0, -65, -6,
    -63, 0, -47, -22, -22, -24, -22, -22,
    0, 0, 0, 0, 0, -18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, 0, -36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, -2, -2,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, -6, 0, 0, -11, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, -17,
    -13, -19, -10, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -9, 0, 0, -2, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, -11, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -4, -3, -11,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 30, 0, 22, 30,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -9, -1, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, -9, 0, 0, -9, -1,
    -25, 0, -3, -18, -4, 0, 0, -11,
    -3, -12, 0, 0, 0, 0, 0, -16,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -36,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -33, 0, -32, 0,
    0, -4, -4, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -15, 0, -18, -17, -18,
    -18, 0, 0, 4, 34, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, -2,
    0, 38, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -6, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -45, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -6, 0, 0,
    -4, 0, -19, 0, 0, 0, -3, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    -9, 0, 0, 0, 0, 0, -36, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -6, 0, 0, -21, 0, -14, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -5, -7, -7, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -8, 0, 0, -25, 0,
    -19, 0, 0, -2, -1, -1, -1, -3,
    0, -12, -1, -2, -9, -9, 0, 0,
    0, 0, 0, 0, -45, 0, 0, 0,
    0, -4, 0, -3, 0, 0, -6, 0,
    0, -4, 0, -13, 2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -4, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -6, 0, 0, -8, 0, -16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 41,
    .right_class_cnt     = 35,
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
const lv_font_t ui_font_HONOR_M_56 = {
#else
lv_font_t ui_font_HONOR_M_56 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 60,          /*The maximum line height required by the font*/
    .base_line = 13,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_HONOR_M_56*/
