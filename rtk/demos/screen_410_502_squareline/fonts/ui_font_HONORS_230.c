/*******************************************************************************
 * Size: 230 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 230 --font lvgl_font_src/HONORSansCN-Bold.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_230.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONORS_230
#define UI_FONT_HONORS_230 1
#endif

#if UI_FONT_HONORS_230


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_230_glyph_bitmap.bin
 *Define UI_FONT_HONORS_230_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_230_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_230_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_230_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_230_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 880, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 1192, .box_w = 41, .box_h = 171, .ofs_x = 17, .ofs_y = 2},
    {.bitmap_index = 1881, .adv_w = 1487, .box_w = 76, .box_h = 65, .ofs_x = 8, .ofs_y = 108},
    {.bitmap_index = 3116, .adv_w = 2374, .box_w = 140, .box_h = 170, .ofs_x = 4, .ofs_y = 3},
    {.bitmap_index = 9066, .adv_w = 2190, .box_w = 129, .box_h = 209, .ofs_x = 4, .ofs_y = -17},
    {.bitmap_index = 15963, .adv_w = 3452, .box_w = 202, .box_h = 177, .ofs_x = 7, .ofs_y = -1},
    {.bitmap_index = 24990, .adv_w = 2587, .box_w = 159, .box_h = 178, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 32110, .adv_w = 710, .box_w = 28, .box_h = 65, .ofs_x = 8, .ofs_y = 108},
    {.bitmap_index = 32565, .adv_w = 1244, .box_w = 62, .box_h = 214, .ofs_x = 13, .ofs_y = -21},
    {.bitmap_index = 35989, .adv_w = 1244, .box_w = 61, .box_h = 214, .ofs_x = 3, .ofs_y = -21},
    {.bitmap_index = 39413, .adv_w = 1796, .box_w = 102, .box_h = 96, .ofs_x = 5, .ofs_y = 76},
    {.bitmap_index = 41909, .adv_w = 2204, .box_w = 125, .box_h = 127, .ofs_x = 6, .ofs_y = 14},
    {.bitmap_index = 45973, .adv_w = 1001, .box_w = 41, .box_h = 73, .ofs_x = 11, .ofs_y = -31},
    {.bitmap_index = 46776, .adv_w = 1803, .box_w = 87, .box_h = 27, .ofs_x = 13, .ofs_y = 64},
    {.bitmap_index = 47370, .adv_w = 1086, .box_w = 40, .box_h = 40, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 47770, .adv_w = 1601, .box_w = 96, .box_h = 170, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 51850, .adv_w = 2215, .box_w = 116, .box_h = 177, .ofs_x = 11, .ofs_y = 0},
    {.bitmap_index = 56983, .adv_w = 2215, .box_w = 66, .box_h = 170, .ofs_x = 27, .ofs_y = 3},
    {.bitmap_index = 59873, .adv_w = 2215, .box_w = 112, .box_h = 173, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 64717, .adv_w = 2215, .box_w = 116, .box_h = 177, .ofs_x = 11, .ofs_y = 0},
    {.bitmap_index = 69850, .adv_w = 2215, .box_w = 119, .box_h = 170, .ofs_x = 10, .ofs_y = 3},
    {.bitmap_index = 74950, .adv_w = 2215, .box_w = 115, .box_h = 173, .ofs_x = 11, .ofs_y = 0},
    {.bitmap_index = 79967, .adv_w = 2215, .box_w = 118, .box_h = 173, .ofs_x = 10, .ofs_y = 0},
    {.bitmap_index = 85157, .adv_w = 2215, .box_w = 110, .box_h = 170, .ofs_x = 15, .ofs_y = 3},
    {.bitmap_index = 89917, .adv_w = 2215, .box_w = 120, .box_h = 177, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 95227, .adv_w = 2215, .box_w = 118, .box_h = 173, .ofs_x = 10, .ofs_y = 3},
    {.bitmap_index = 100417, .adv_w = 1192, .box_w = 41, .box_h = 125, .ofs_x = 17, .ofs_y = 2},
    {.bitmap_index = 101792, .adv_w = 1174, .box_w = 40, .box_h = 158, .ofs_x = 17, .ofs_y = -31},
    {.bitmap_index = 103372, .adv_w = 2396, .box_w = 125, .box_h = 145, .ofs_x = 9, .ofs_y = 6},
    {.bitmap_index = 108012, .adv_w = 2193, .box_w = 125, .box_h = 73, .ofs_x = 6, .ofs_y = 41},
    {.bitmap_index = 110348, .adv_w = 2396, .box_w = 125, .box_h = 145, .ofs_x = 16, .ofs_y = 6},
    {.bitmap_index = 114988, .adv_w = 1947, .box_w = 107, .box_h = 175, .ofs_x = 6, .ofs_y = 2},
    {.bitmap_index = 119713, .adv_w = 2970, .box_w = 177, .box_h = 178, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 127723, .adv_w = 2686, .box_w = 168, .box_h = 170, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 134863, .adv_w = 2469, .box_w = 131, .box_h = 170, .ofs_x = 16, .ofs_y = 3},
    {.bitmap_index = 140473, .adv_w = 2605, .box_w = 153, .box_h = 176, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 147337, .adv_w = 2749, .box_w = 149, .box_h = 170, .ofs_x = 16, .ofs_y = 3},
    {.bitmap_index = 153797, .adv_w = 2307, .box_w = 122, .box_h = 170, .ofs_x = 16, .ofs_y = 3},
    {.bitmap_index = 159067, .adv_w = 2142, .box_w = 115, .box_h = 170, .ofs_x = 16, .ofs_y = 3},
    {.bitmap_index = 163997, .adv_w = 2686, .box_w = 153, .box_h = 176, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 170861, .adv_w = 2657, .box_w = 140, .box_h = 170, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 176811, .adv_w = 957, .box_w = 34, .box_h = 170, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 178341, .adv_w = 1903, .box_w = 104, .box_h = 173, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182839, .adv_w = 2499, .box_w = 142, .box_h = 170, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 188959, .adv_w = 2101, .box_w = 118, .box_h = 170, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 194059, .adv_w = 3283, .box_w = 179, .box_h = 170, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 201709, .adv_w = 2690, .box_w = 142, .box_h = 170, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 207829, .adv_w = 2933, .box_w = 169, .box_h = 176, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 215397, .adv_w = 2403, .box_w = 130, .box_h = 170, .ofs_x = 16, .ofs_y = 3},
    {.bitmap_index = 221007, .adv_w = 2933, .box_w = 169, .box_h = 190, .ofs_x = 7, .ofs_y = -14},
    {.bitmap_index = 229177, .adv_w = 2547, .box_w = 138, .box_h = 171, .ofs_x = 16, .ofs_y = 2},
    {.bitmap_index = 235162, .adv_w = 2186, .box_w = 128, .box_h = 177, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 240826, .adv_w = 2193, .box_w = 134, .box_h = 171, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 246640, .adv_w = 2697, .box_w = 141, .box_h = 173, .ofs_x = 14, .ofs_y = 0},
    {.bitmap_index = 252868, .adv_w = 2539, .box_w = 159, .box_h = 170, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 259668, .adv_w = 3720, .box_w = 230, .box_h = 170, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 269528, .adv_w = 2554, .box_w = 158, .box_h = 170, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 276328, .adv_w = 2451, .box_w = 153, .box_h = 170, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 282958, .adv_w = 2186, .box_w = 128, .box_h = 170, .ofs_x = 4, .ofs_y = 3},
    {.bitmap_index = 288398, .adv_w = 1262, .box_w = 55, .box_h = 213, .ofs_x = 24, .ofs_y = -21},
    {.bitmap_index = 291380, .adv_w = 1601, .box_w = 96, .box_h = 170, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 295460, .adv_w = 1262, .box_w = 55, .box_h = 213, .ofs_x = 0, .ofs_y = -21},
    {.bitmap_index = 298442, .adv_w = 2204, .box_w = 130, .box_h = 96, .ofs_x = 4, .ofs_y = 76},
    {.bitmap_index = 301610, .adv_w = 2031, .box_w = 127, .box_h = 26, .ofs_x = 0, .ofs_y = -23},
    {.bitmap_index = 302442, .adv_w = 1288, .box_w = 53, .box_h = 38, .ofs_x = 10, .ofs_y = 145},
    {.bitmap_index = 302974, .adv_w = 2042, .box_w = 111, .box_h = 127, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 306530, .adv_w = 2271, .box_w = 123, .box_h = 179, .ofs_x = 13, .ofs_y = 0},
    {.bitmap_index = 312079, .adv_w = 1928, .box_w = 114, .box_h = 126, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 315733, .adv_w = 2267, .box_w = 123, .box_h = 179, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 321282, .adv_w = 2053, .box_w = 118, .box_h = 127, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 325092, .adv_w = 1244, .box_w = 83, .box_h = 179, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 328851, .adv_w = 2252, .box_w = 123, .box_h = 176, .ofs_x = 6, .ofs_y = -49},
    {.bitmap_index = 334307, .adv_w = 2168, .box_w = 112, .box_h = 177, .ofs_x = 13, .ofs_y = 2},
    {.bitmap_index = 339263, .adv_w = 1019, .box_w = 40, .box_h = 177, .ofs_x = 13, .ofs_y = 2},
    {.bitmap_index = 341033, .adv_w = 1071, .box_w = 67, .box_h = 229, .ofs_x = -12, .ofs_y = -50},
    {.bitmap_index = 344926, .adv_w = 2101, .box_w = 119, .box_h = 177, .ofs_x = 13, .ofs_y = 2},
    {.bitmap_index = 350236, .adv_w = 924, .box_w = 32, .box_h = 177, .ofs_x = 13, .ofs_y = 2},
    {.bitmap_index = 351652, .adv_w = 3378, .box_w = 187, .box_h = 124, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 357480, .adv_w = 2156, .box_w = 111, .box_h = 124, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 360952, .adv_w = 2168, .box_w = 124, .box_h = 126, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 364858, .adv_w = 2274, .box_w = 124, .box_h = 174, .ofs_x = 13, .ofs_y = -47},
    {.bitmap_index = 370252, .adv_w = 2282, .box_w = 124, .box_h = 174, .ofs_x = 6, .ofs_y = -47},
    {.bitmap_index = 375646, .adv_w = 1461, .box_w = 79, .box_h = 124, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 378126, .adv_w = 1774, .box_w = 103, .box_h = 126, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 381402, .adv_w = 1417, .box_w = 87, .box_h = 162, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 384966, .adv_w = 2142, .box_w = 110, .box_h = 124, .ofs_x = 11, .ofs_y = 1},
    {.bitmap_index = 388438, .adv_w = 1969, .box_w = 123, .box_h = 122, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 392220, .adv_w = 2929, .box_w = 181, .box_h = 122, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 397832, .adv_w = 2112, .box_w = 128, .box_h = 122, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 401736, .adv_w = 2002, .box_w = 124, .box_h = 174, .ofs_x = 1, .ofs_y = -49},
    {.bitmap_index = 407130, .adv_w = 1822, .box_w = 104, .box_h = 122, .ofs_x = 5, .ofs_y = 3},
    {.bitmap_index = 410302, .adv_w = 1266, .box_w = 77, .box_h = 213, .ofs_x = 2, .ofs_y = -21},
    {.bitmap_index = 414562, .adv_w = 920, .box_w = 30, .box_h = 195, .ofs_x = 14, .ofs_y = -9},
    {.bitmap_index = 416122, .adv_w = 1266, .box_w = 77, .box_h = 213, .ofs_x = 0, .ofs_y = -21},
    {.bitmap_index = 420382, .adv_w = 2204, .box_w = 128, .box_h = 45, .ofs_x = 5, .ofs_y = 56}
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
    0, 0, 0, -46, 0, -69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -25, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -58, 0, 0,
    0, 0, -46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -46, 0, 0, 0, -15, -7, 0,
    -85, -7, -53, -23, 0, -58, 0, 0,
    -7, 0, -14, 0, 0, -10, 0, -10,
    0, 0, 0, 0, -14, -14, -24, -24,
    0, -21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -46, 0, -18, 0, 0,
    -23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, -3, 0, 0, 0,
    0, 0, -5, 0, 0, 0, -16, 0,
    0, 0, 0, -17, 0, 0, -3, 0,
    0, 0, -10, -10, -17, 0, 0, -7,
    0, -10, 0, 0, -14, -14, -17, -14,
    0, 0, 0, 0, -51, -15, 0, 0,
    0, -46, 0, -7, 0, 0, -46, -23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, -58,
    -37, 0, -92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -39, 0, -39, 0,
    0, 0, 0, 0, 0, 0, 0, -23,
    0, 0, 0, 0, -14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -25,
    0, -44, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -14, -14, -31, -31, 0,
    -28, 0, 0, -65, 0, 0, 0, -35,
    0, 0, -104, 0, -85, -58, 0, -92,
    0, 0, 0, 0, -21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    -44, -55, 0, -44, 0, 0, 0, 0,
    -81, -74, 0, -32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -46, 0, -33,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -39, 0, -25, 0, 0, -35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, -23, 0, -55, 0, -18, -23, 0,
    -35, -21, 0, -14, 0, -38, 0, 0,
    -14, -10, 0, 0, -7, 0, -14, 0,
    -10, -7, 0, 0, -7, 0, 0, 0,
    0, -81, -60, -33, -99, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -53, 0,
    2, 0, 0, -35, -7, 0, 0, -67,
    0, -92, -28, -67, -32, -36, -39, -32,
    -46, 0, 0, 0, -35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -14, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, -81,
    -85, -23, -106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -72, 0, -72, 0,
    0, 0, 0, 0, 0, -17, -17, -53,
    0, -46, -10, -10, -17, -10, -14, 0,
    0, 0, -58, -23, 0, -69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -59,
    0, -42, 0, 0, 0, 0, 0, 0,
    -14, -14, -17, 0, 0, -10, 0, 0,
    -10, -14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -30, 0, -48, 0, 0, 0,
    0, 0, 0, 0, 0, -18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -81, -97, -23, -106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -90, 0, -119,
    0, 0, -23, 0, 0, 0, -68, -24,
    -81, 0, -65, -40, -40, -47, -40, -40,
    0, 0, 0, 0, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, -23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, -7, -7, -7,
    0, 0, 0, 0, 0, -14, 0, 0,
    0, 0, 0, -24, 0, 0, -42, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, 0, 0, 0, 0, 0, 0, -25,
    -17, -27, -15, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -14, 0,
    0, -35, 0, 0, -7, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, -3, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -31, 0, 0, -42, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -14, -10, -18,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 48, 0, 37, 48,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -28, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -17, -12, -3, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -28, 0, 0, -35, 0, 0, -12, -3,
    -39, 0, -10, -29, -14, 0, 0, -18,
    -10, -22, 0, 0, 0, 0, 0, -28,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -46,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -36, 0, -32, 0,
    0, -14, -14, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -28,
    0, -24, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, -23, -20, -23,
    -23, 0, 0, 17, 51, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, -7,
    0, 65, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, 0, -24, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, -58, 0, 0, 0, 0,
    0, 0, -10, 0, 0, -24, 0, 0,
    -17, 0, -27, 0, 0, 0, -10, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    -12, 0, 0, 0, 0, 0, -46, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    -24, 0, 0, -33, 0, -21, 0, 0,
    0, 0, 0, 0, 0, 0, -14, 0,
    0, -9, -16, -5, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -17, 0, 0, -31, 0, 0, -39, 0,
    -27, 0, 0, -7, -3, -3, -3, -10,
    0, -22, -3, -7, -12, -12, 0, 0,
    0, 0, 0, 0, -58, 0, 0, 0,
    0, -14, 0, -10, 0, 0, -24, 0,
    0, -14, 0, -17, 7, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    -8, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -14, 0,
    0, -24, 0, 0, -8, 0, -16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0,
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
    .kern_scale = 51,
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
const lv_font_t ui_font_HONORS_230 = {
#else
lv_font_t ui_font_HONORS_230 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 243,          /*The maximum line height required by the font*/
    .base_line = 50,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -16,
    .underline_thickness = 12,
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
#  error "Too large font or glyphs in UI_FONT_HONORS_230. Enable LV_FONT_FMT_TXT_LARGE in lv_conf.h")
#endif


#endif /*#if UI_FONT_HONORS_230*/
