/*******************************************************************************
 * Size: 200 px
 * Bpp: 2
 * Opts: --byte-align --no-compress --no-prefilter --bpp 2 --size 200 --font G:/LVGL/rtk_scripts/scripts/built_in_font/sq/ttf/HONORSansCN-Bold.ttf -r 0x20-0x7F --format lvgl -o G:/LVGL/rtk_scripts/scripts/built_in_font/sq/ttf\ui_font_HONOR_200.c --force-fast-kern-format
 ******************************************************************************/

#include "../ui.h"



#ifndef UI_FONT_HONOR_200
#define UI_FONT_HONOR_200 1
#endif

#if UI_FONT_HONOR_200

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/



/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] =
{
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 765, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 1037, .box_w = 35, .box_h = 148, .ofs_x = 15, .ofs_y = 1},
    {.bitmap_index = 1332, .adv_w = 1293, .box_w = 66, .box_h = 56, .ofs_x = 7, .ofs_y = 94},
    {.bitmap_index = 2284, .adv_w = 2064, .box_w = 121, .box_h = 147, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 6841, .adv_w = 1904, .box_w = 112, .box_h = 181, .ofs_x = 3, .ofs_y = -15},
    {.bitmap_index = 12090, .adv_w = 3002, .box_w = 175, .box_h = 154, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 18866, .adv_w = 2250, .box_w = 138, .box_h = 154, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 24256, .adv_w = 618, .box_w = 24, .box_h = 56, .ofs_x = 7, .ofs_y = 94},
    {.bitmap_index = 24648, .adv_w = 1082, .box_w = 53, .box_h = 185, .ofs_x = 12, .ofs_y = -18},
    {.bitmap_index = 27238, .adv_w = 1082, .box_w = 53, .box_h = 185, .ofs_x = 3, .ofs_y = -18},
    {.bitmap_index = 29828, .adv_w = 1562, .box_w = 89, .box_h = 83, .ofs_x = 4, .ofs_y = 66},
    {.bitmap_index = 31737, .adv_w = 1917, .box_w = 108, .box_h = 110, .ofs_x = 6, .ofs_y = 12},
    {.bitmap_index = 34817, .adv_w = 870, .box_w = 35, .box_h = 62, .ofs_x = 10, .ofs_y = -27},
    {.bitmap_index = 35375, .adv_w = 1568, .box_w = 76, .box_h = 23, .ofs_x = 11, .ofs_y = 55},
    {.bitmap_index = 35835, .adv_w = 944, .box_w = 35, .box_h = 35, .ofs_x = 12, .ofs_y = 1},
    {.bitmap_index = 36150, .adv_w = 1392, .box_w = 83, .box_h = 147, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 39237, .adv_w = 1926, .box_w = 101, .box_h = 153, .ofs_x = 10, .ofs_y = 0},
    {.bitmap_index = 43215, .adv_w = 1926, .box_w = 57, .box_h = 147, .ofs_x = 24, .ofs_y = 2},
    {.bitmap_index = 45420, .adv_w = 1926, .box_w = 98, .box_h = 150, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 49170, .adv_w = 1926, .box_w = 101, .box_h = 153, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 53148, .adv_w = 1926, .box_w = 103, .box_h = 147, .ofs_x = 9, .ofs_y = 2},
    {.bitmap_index = 56970, .adv_w = 1926, .box_w = 101, .box_h = 150, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 60870, .adv_w = 1926, .box_w = 103, .box_h = 150, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 64770, .adv_w = 1926, .box_w = 96, .box_h = 147, .ofs_x = 13, .ofs_y = 2},
    {.bitmap_index = 68445, .adv_w = 1926, .box_w = 104, .box_h = 153, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 72576, .adv_w = 1926, .box_w = 103, .box_h = 150, .ofs_x = 9, .ofs_y = 2},
    {.bitmap_index = 76476, .adv_w = 1037, .box_w = 35, .box_h = 108, .ofs_x = 15, .ofs_y = 1},
    {.bitmap_index = 77448, .adv_w = 1021, .box_w = 36, .box_h = 136, .ofs_x = 14, .ofs_y = -27},
    {.bitmap_index = 78808, .adv_w = 2083, .box_w = 108, .box_h = 125, .ofs_x = 8, .ofs_y = 5},
    {.bitmap_index = 82308, .adv_w = 1907, .box_w = 109, .box_h = 63, .ofs_x = 5, .ofs_y = 36},
    {.bitmap_index = 84072, .adv_w = 2083, .box_w = 108, .box_h = 125, .ofs_x = 14, .ofs_y = 5},
    {.bitmap_index = 87572, .adv_w = 1693, .box_w = 93, .box_h = 152, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 91220, .adv_w = 2582, .box_w = 153, .box_h = 153, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 97187, .adv_w = 2336, .box_w = 146, .box_h = 148, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 102663, .adv_w = 2147, .box_w = 114, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 106926, .adv_w = 2266, .box_w = 133, .box_h = 153, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 112128, .adv_w = 2390, .box_w = 130, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 116979, .adv_w = 2006, .box_w = 106, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 120948, .adv_w = 1862, .box_w = 100, .box_h = 148, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 124796, .adv_w = 2336, .box_w = 133, .box_h = 153, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 129998, .adv_w = 2310, .box_w = 122, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 134555, .adv_w = 832, .box_w = 30, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 135731, .adv_w = 1654, .box_w = 90, .box_h = 150, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139181, .adv_w = 2173, .box_w = 124, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 143885, .adv_w = 1827, .box_w = 103, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 147707, .adv_w = 2854, .box_w = 156, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 153587, .adv_w = 2339, .box_w = 124, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 158291, .adv_w = 2550, .box_w = 147, .box_h = 153, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 163952, .adv_w = 2090, .box_w = 113, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 168215, .adv_w = 2550, .box_w = 147, .box_h = 165, .ofs_x = 6, .ofs_y = -12},
    {.bitmap_index = 174320, .adv_w = 2214, .box_w = 120, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 178877, .adv_w = 1901, .box_w = 111, .box_h = 153, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 183161, .adv_w = 1907, .box_w = 117, .box_h = 148, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 187601, .adv_w = 2346, .box_w = 122, .box_h = 150, .ofs_x = 12, .ofs_y = 0},
    {.bitmap_index = 192251, .adv_w = 2208, .box_w = 138, .box_h = 147, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 197396, .adv_w = 3235, .box_w = 200, .box_h = 147, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 204893, .adv_w = 2221, .box_w = 137, .box_h = 147, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 210038, .adv_w = 2131, .box_w = 133, .box_h = 147, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 215036, .adv_w = 1901, .box_w = 111, .box_h = 147, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 219152, .adv_w = 1098, .box_w = 47, .box_h = 184, .ofs_x = 21, .ofs_y = -18},
    {.bitmap_index = 221360, .adv_w = 1392, .box_w = 83, .box_h = 147, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 224447, .adv_w = 1098, .box_w = 48, .box_h = 184, .ofs_x = 0, .ofs_y = -18},
    {.bitmap_index = 226839, .adv_w = 1917, .box_w = 113, .box_h = 83, .ofs_x = 3, .ofs_y = 66},
    {.bitmap_index = 229246, .adv_w = 1766, .box_w = 111, .box_h = 23, .ofs_x = 0, .ofs_y = -20},
    {.bitmap_index = 229890, .adv_w = 1120, .box_w = 46, .box_h = 33, .ofs_x = 9, .ofs_y = 125},
    {.bitmap_index = 230286, .adv_w = 1776, .box_w = 97, .box_h = 110, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 233036, .adv_w = 1974, .box_w = 107, .box_h = 155, .ofs_x = 11, .ofs_y = 0},
    {.bitmap_index = 237221, .adv_w = 1677, .box_w = 99, .box_h = 109, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 239946, .adv_w = 1971, .box_w = 107, .box_h = 155, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 244131, .adv_w = 1786, .box_w = 103, .box_h = 109, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 246965, .adv_w = 1082, .box_w = 72, .box_h = 156, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 249929, .adv_w = 1958, .box_w = 107, .box_h = 153, .ofs_x = 5, .ofs_y = -43},
    {.bitmap_index = 254060, .adv_w = 1885, .box_w = 97, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 257885, .adv_w = 886, .box_w = 35, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 259262, .adv_w = 931, .box_w = 59, .box_h = 198, .ofs_x = -11, .ofs_y = -43},
    {.bitmap_index = 262232, .adv_w = 1827, .box_w = 103, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 266210, .adv_w = 803, .box_w = 28, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 267434, .adv_w = 2938, .box_w = 163, .box_h = 108, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 271862, .adv_w = 1875, .box_w = 97, .box_h = 108, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 274562, .adv_w = 1885, .box_w = 108, .box_h = 109, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 277614, .adv_w = 1978, .box_w = 107, .box_h = 151, .ofs_x = 12, .ofs_y = -41},
    {.bitmap_index = 281691, .adv_w = 1984, .box_w = 108, .box_h = 151, .ofs_x = 5, .ofs_y = -41},
    {.bitmap_index = 285919, .adv_w = 1270, .box_w = 69, .box_h = 108, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 287863, .adv_w = 1542, .box_w = 89, .box_h = 110, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 290393, .adv_w = 1232, .box_w = 76, .box_h = 140, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 293193, .adv_w = 1862, .box_w = 95, .box_h = 108, .ofs_x = 10, .ofs_y = 1},
    {.bitmap_index = 295785, .adv_w = 1712, .box_w = 107, .box_h = 106, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 298647, .adv_w = 2547, .box_w = 157, .box_h = 106, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 302887, .adv_w = 1837, .box_w = 111, .box_h = 106, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 305855, .adv_w = 1741, .box_w = 107, .box_h = 151, .ofs_x = 1, .ofs_y = -43},
    {.bitmap_index = 309932, .adv_w = 1584, .box_w = 91, .box_h = 106, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 312370, .adv_w = 1101, .box_w = 68, .box_h = 184, .ofs_x = 1, .ofs_y = -18},
    {.bitmap_index = 315682, .adv_w = 800, .box_w = 26, .box_h = 169, .ofs_x = 12, .ofs_y = -8},
    {.bitmap_index = 316865, .adv_w = 1101, .box_w = 67, .box_h = 184, .ofs_x = 0, .ofs_y = -18},
    {.bitmap_index = 319993, .adv_w = 1917, .box_w = 110, .box_h = 39, .ofs_x = 5, .ofs_y = 49}
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
    0, 0, 0, -47, 0, -70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -58, 0, 0,
    0, 0, -47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -47, 0, 0, 0, -15, -7, 0,
    -86, -7, -54, -23, 0, -58, 0, 0,
    -7, 0, -14, 0, 0, -10, 0, -10,
    0, 0, 0, 0, -14, -14, -24, -24,
    0, -21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -47, 0, -19, 0, 0,
    -23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, -3, 0, 0, 0,
    0, 0, -5, 0, 0, 0, -16, 0,
    0, 0, 0, -17, 0, 0, -3, 0,
    0, 0, -10, -10, -17, 0, 0, -7,
    0, -10, 0, 0, -14, -14, -17, -14,
    0, 0, 0, 0, -51, -15, 0, 0,
    0, -47, 0, -7, 0, 0, -47, -23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, -58,
    -37, 0, -93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -40, 0, -40, 0,
    0, 0, 0, 0, 0, 0, 0, -23,
    0, 0, 0, 0, -14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -26,
    0, -44, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -14, -14, -31, -31, 0,
    -28, 0, 0, -65, 0, 0, 0, -35,
    0, 0, -105, 0, -86, -58, 0, -93,
    0, 0, 0, 0, -21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    -44, -56, 0, -44, 0, 0, 0, 0,
    -81, -74, 0, -33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -47, 0, -34,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -40, 0, -26, 0, 0, -35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, -23, 0, -56, 0, -19, -23, 0,
    -35, -21, 0, -14, 0, -38, 0, 0,
    -14, -10, 0, 0, -7, 0, -14, 0,
    -10, -7, 0, 0, -7, 0, 0, 0,
    0, -81, -61, -34, -100, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -54, 0,
    2, 0, 0, -35, -7, 0, 0, -67,
    0, -93, -28, -67, -33, -36, -40, -33,
    -47, 0, 0, 0, -35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -14, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, -81,
    -86, -23, -107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -72, 0, -72, 0,
    0, 0, 0, 0, 0, -17, -17, -54,
    0, -47, -10, -10, -17, -10, -14, 0,
    0, 0, -58, -23, 0, -70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -59,
    0, -42, 0, 0, 0, 0, 0, 0,
    -14, -14, -17, 0, 0, -10, 0, 0,
    -10, -14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -30, 0, -49, 0, 0, 0,
    0, 0, 0, 0, 0, -19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -81, -98, -23, -107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -91, 0, -120,
    0, 0, -23, 0, 0, 0, -69, -24,
    -81, 0, -65, -41, -41, -48, -41, -41,
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
    0, 0, 0, 0, 0, 0, 0, -26,
    -17, -27, -15, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -14, 0,
    0, -35, 0, 0, -7, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, -3, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -31, 0, 0, -42, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -14, -10, -19,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 49, 0, 37, 49,
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
    -40, 0, -10, -29, -14, 0, 0, -19,
    -10, -22, 0, 0, 0, 0, 0, -28,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -47,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -36, 0, -33, 0,
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
    -12, 0, 0, 0, 0, 0, -47, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    -24, 0, 0, -34, 0, -21, 0, 0,
    0, 0, 0, 0, 0, 0, -14, 0,
    0, -9, -16, -5, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -17, 0, 0, -31, 0, 0, -40, 0,
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
    0, 0, 0, 0, 0, 49, 0, 0,
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
static const lv_font_fmt_txt_dsc_t font_dsc =
{
#else
static lv_font_fmt_txt_dsc_t font_dsc =
{
#endif
    .glyph_bitmap = UI_FONT_HONOR_200_GLYPH_BITMAP_BIN,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 44,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 1,
    .bitmap_format = 3,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_HONOR_200 =
{
#else
lv_font_t ui_font_HONOR_200 =
{
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 210,          /*The maximum line height required by the font*/
    .base_line = 43,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -14,
    .underline_thickness = 10,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HONOR_200*/
