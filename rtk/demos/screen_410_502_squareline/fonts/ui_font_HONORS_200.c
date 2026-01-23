/*******************************************************************************
 * Size: 200 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 200 --font lvgl_font_src/HONORSansCN-DemiBold.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_200.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONORS_200
#define UI_FONT_HONORS_200 1
#endif

#if UI_FONT_HONORS_200


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_200_glyph_bitmap.bin
 *Define UI_FONT_HONORS_200_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_200_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_200_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_200_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_200_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 765, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 998, .box_w = 32, .box_h = 148, .ofs_x = 15, .ofs_y = 1},
    {.bitmap_index = 1184, .adv_w = 1194, .box_w = 59, .box_h = 54, .ofs_x = 8, .ofs_y = 96},
    {.bitmap_index = 1994, .adv_w = 2038, .box_w = 119, .box_h = 147, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 6404, .adv_w = 1846, .box_w = 108, .box_h = 181, .ofs_x = 4, .ofs_y = -15},
    {.bitmap_index = 11291, .adv_w = 2915, .box_w = 169, .box_h = 153, .ofs_x = 7, .ofs_y = -1},
    {.bitmap_index = 17870, .adv_w = 2240, .box_w = 137, .box_h = 154, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 23260, .adv_w = 586, .box_w = 21, .box_h = 54, .ofs_x = 8, .ofs_y = 96},
    {.bitmap_index = 23584, .adv_w = 1027, .box_w = 50, .box_h = 185, .ofs_x = 12, .ofs_y = -18},
    {.bitmap_index = 25989, .adv_w = 1027, .box_w = 50, .box_h = 185, .ofs_x = 2, .ofs_y = -18},
    {.bitmap_index = 28394, .adv_w = 1536, .box_w = 86, .box_h = 81, .ofs_x = 5, .ofs_y = 68},
    {.bitmap_index = 30176, .adv_w = 1904, .box_w = 107, .box_h = 108, .ofs_x = 6, .ofs_y = 13},
    {.bitmap_index = 33092, .adv_w = 832, .box_w = 32, .box_h = 59, .ofs_x = 10, .ofs_y = -26},
    {.bitmap_index = 33564, .adv_w = 1574, .box_w = 76, .box_h = 21, .ofs_x = 11, .ofs_y = 57},
    {.bitmap_index = 33963, .adv_w = 918, .box_w = 33, .box_h = 32, .ofs_x = 12, .ofs_y = 1},
    {.bitmap_index = 34251, .adv_w = 1357, .box_w = 79, .box_h = 147, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 37191, .adv_w = 1898, .box_w = 98, .box_h = 153, .ofs_x = 10, .ofs_y = 0},
    {.bitmap_index = 41016, .adv_w = 1898, .box_w = 54, .box_h = 147, .ofs_x = 24, .ofs_y = 2},
    {.bitmap_index = 43074, .adv_w = 1898, .box_w = 96, .box_h = 150, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 46674, .adv_w = 1898, .box_w = 99, .box_h = 153, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 50499, .adv_w = 1898, .box_w = 100, .box_h = 147, .ofs_x = 9, .ofs_y = 2},
    {.bitmap_index = 54174, .adv_w = 1898, .box_w = 99, .box_h = 150, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 57924, .adv_w = 1898, .box_w = 101, .box_h = 150, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 61824, .adv_w = 1898, .box_w = 94, .box_h = 147, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 65352, .adv_w = 1898, .box_w = 102, .box_h = 153, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 69330, .adv_w = 1898, .box_w = 101, .box_h = 150, .ofs_x = 9, .ofs_y = 2},
    {.bitmap_index = 73230, .adv_w = 998, .box_w = 32, .box_h = 106, .ofs_x = 15, .ofs_y = 1},
    {.bitmap_index = 74078, .adv_w = 989, .box_w = 32, .box_h = 134, .ofs_x = 15, .ofs_y = -26},
    {.bitmap_index = 75150, .adv_w = 2077, .box_w = 108, .box_h = 120, .ofs_x = 8, .ofs_y = 8},
    {.bitmap_index = 78390, .adv_w = 1894, .box_w = 108, .box_h = 58, .ofs_x = 5, .ofs_y = 39},
    {.bitmap_index = 79956, .adv_w = 2077, .box_w = 108, .box_h = 120, .ofs_x = 14, .ofs_y = 8},
    {.bitmap_index = 83196, .adv_w = 1680, .box_w = 92, .box_h = 151, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 86669, .adv_w = 2576, .box_w = 152, .box_h = 154, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 92521, .adv_w = 2272, .box_w = 142, .box_h = 147, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 97813, .adv_w = 2115, .box_w = 112, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 101929, .adv_w = 2246, .box_w = 131, .box_h = 153, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 106978, .adv_w = 2371, .box_w = 128, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 111682, .adv_w = 1981, .box_w = 104, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 115504, .adv_w = 1830, .box_w = 98, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 119179, .adv_w = 2310, .box_w = 131, .box_h = 153, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 124228, .adv_w = 2282, .box_w = 120, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 128638, .adv_w = 784, .box_w = 27, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 129667, .adv_w = 1622, .box_w = 87, .box_h = 150, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 132967, .adv_w = 2109, .box_w = 120, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 137377, .adv_w = 1782, .box_w = 100, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 141052, .adv_w = 2813, .box_w = 153, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 146785, .adv_w = 2307, .box_w = 122, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 151342, .adv_w = 2541, .box_w = 146, .box_h = 153, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 157003, .adv_w = 2054, .box_w = 111, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 161119, .adv_w = 2541, .box_w = 146, .box_h = 165, .ofs_x = 6, .ofs_y = -12},
    {.bitmap_index = 167224, .adv_w = 2176, .box_w = 117, .box_h = 148, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 171664, .adv_w = 1859, .box_w = 107, .box_h = 153, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 175795, .adv_w = 1891, .box_w = 114, .box_h = 148, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 180087, .adv_w = 2317, .box_w = 119, .box_h = 150, .ofs_x = 13, .ofs_y = 0},
    {.bitmap_index = 184587, .adv_w = 2157, .box_w = 135, .box_h = 147, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 189585, .adv_w = 3181, .box_w = 196, .box_h = 147, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 196788, .adv_w = 2125, .box_w = 131, .box_h = 147, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 201639, .adv_w = 2054, .box_w = 128, .box_h = 147, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 206343, .adv_w = 1872, .box_w = 109, .box_h = 147, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 210459, .adv_w = 1046, .box_w = 44, .box_h = 185, .ofs_x = 21, .ofs_y = -18},
    {.bitmap_index = 212494, .adv_w = 1357, .box_w = 79, .box_h = 147, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 215434, .adv_w = 1046, .box_w = 43, .box_h = 185, .ofs_x = 1, .ofs_y = -18},
    {.bitmap_index = 217469, .adv_w = 1904, .box_w = 111, .box_h = 83, .ofs_x = 4, .ofs_y = 67},
    {.bitmap_index = 219793, .adv_w = 1738, .box_w = 109, .box_h = 19, .ofs_x = 0, .ofs_y = -18},
    {.bitmap_index = 220325, .adv_w = 1091, .box_w = 44, .box_h = 32, .ofs_x = 9, .ofs_y = 126},
    {.bitmap_index = 220677, .adv_w = 1757, .box_w = 94, .box_h = 110, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 223317, .adv_w = 1952, .box_w = 106, .box_h = 155, .ofs_x = 11, .ofs_y = 1},
    {.bitmap_index = 227502, .adv_w = 1658, .box_w = 97, .box_h = 110, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 230252, .adv_w = 1949, .box_w = 106, .box_h = 155, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 234437, .adv_w = 1779, .box_w = 101, .box_h = 110, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 237297, .adv_w = 1040, .box_w = 70, .box_h = 155, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 240087, .adv_w = 1936, .box_w = 104, .box_h = 153, .ofs_x = 6, .ofs_y = -43},
    {.bitmap_index = 244065, .adv_w = 1862, .box_w = 95, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 247737, .adv_w = 851, .box_w = 31, .box_h = 151, .ofs_x = 12, .ofs_y = 2},
    {.bitmap_index = 248945, .adv_w = 851, .box_w = 54, .box_h = 196, .ofs_x = -11, .ofs_y = -43},
    {.bitmap_index = 251689, .adv_w = 1770, .box_w = 100, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 255514, .adv_w = 762, .box_w = 25, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 256585, .adv_w = 2928, .box_w = 161, .box_h = 108, .ofs_x = 12, .ofs_y = 2},
    {.bitmap_index = 261013, .adv_w = 1859, .box_w = 94, .box_h = 108, .ofs_x = 12, .ofs_y = 2},
    {.bitmap_index = 263605, .adv_w = 1872, .box_w = 106, .box_h = 110, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 266575, .adv_w = 1962, .box_w = 105, .box_h = 151, .ofs_x = 12, .ofs_y = -41},
    {.bitmap_index = 270652, .adv_w = 1962, .box_w = 105, .box_h = 151, .ofs_x = 6, .ofs_y = -41},
    {.bitmap_index = 274729, .adv_w = 1222, .box_w = 66, .box_h = 108, .ofs_x = 12, .ofs_y = 2},
    {.bitmap_index = 276565, .adv_w = 1520, .box_w = 87, .box_h = 110, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 278985, .adv_w = 1206, .box_w = 74, .box_h = 140, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 281645, .adv_w = 1834, .box_w = 93, .box_h = 108, .ofs_x = 10, .ofs_y = 1},
    {.bitmap_index = 284237, .adv_w = 1654, .box_w = 103, .box_h = 106, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 286993, .adv_w = 2509, .box_w = 155, .box_h = 106, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 291127, .adv_w = 1805, .box_w = 109, .box_h = 106, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 294095, .adv_w = 1686, .box_w = 104, .box_h = 151, .ofs_x = 1, .ofs_y = -43},
    {.bitmap_index = 298021, .adv_w = 1565, .box_w = 89, .box_h = 106, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 300459, .adv_w = 1043, .box_w = 63, .box_h = 185, .ofs_x = 2, .ofs_y = -18},
    {.bitmap_index = 303419, .adv_w = 765, .box_w = 23, .box_h = 169, .ofs_x = 12, .ofs_y = -8},
    {.bitmap_index = 304433, .adv_w = 1043, .box_w = 64, .box_h = 185, .ofs_x = 0, .ofs_y = -18},
    {.bitmap_index = 307393, .adv_w = 1904, .box_w = 109, .box_h = 36, .ofs_x = 5, .ofs_y = 50}
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
    0, -21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -58, 0, 0,
    0, 0, -47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -47, 0, 0, 0, -14, -5, 0,
    -83, -5, -51, -23, 0, -58, 0, 0,
    -5, 0, -9, 0, 0, -7, 0, -7,
    0, 0, 0, 0, -9, -9, -16, -16,
    0, -14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -47, 0, -16, 0, 0,
    -23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -2, 0, 0, 0,
    0, 0, -7, 0, 0, 0, -24, 0,
    0, 0, 0, -17, 0, 0, -2, 0,
    0, 0, -7, -7, -12, 0, 0, -5,
    0, -7, 0, 0, -9, -9, -12, -9,
    0, 0, 0, 0, -54, -14, 0, 0,
    0, -52, 0, -10, 0, 0, -47, -23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -58,
    -33, 0, -93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -42, 0, -42, 0,
    0, 0, 0, 0, 0, 0, 0, -23,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -27,
    0, -43, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -9, -9, -21, -21, 0,
    -19, 0, 0, -74, 0, 0, 0, -41,
    0, 0, -105, 0, -88, -58, 0, -93,
    0, 0, 0, 0, -31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -24,
    -49, -61, 0, -49, 0, 0, 0, 0,
    -81, -71, 0, -37, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -47, 0, -36,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -42, 0, -21, 0, 0, -35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, -23, 0, -55, 0, -16, -23, 0,
    -35, -20, 0, -9, 0, -37, 0, 0,
    -9, -7, 0, 0, -5, 0, -9, 0,
    -7, -5, 0, 0, -5, 0, 0, 0,
    0, -81, -62, -36, -104, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -57, 0,
    -8, 0, 0, -41, -5, 0, 0, -72,
    0, -93, -42, -72, -37, -40, -42, -37,
    -47, 0, 0, 0, -35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -81,
    -83, -23, -102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -67, 0, -67, 0,
    0, 0, 0, 0, 0, -12, -12, -51,
    0, -47, -7, -7, -12, -7, -9, 0,
    0, 0, -58, -23, 0, -70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -51,
    0, -40, 0, 0, 0, 0, 0, 0,
    -9, -9, -12, 0, 0, -7, 0, 0,
    -7, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -28, 0, -44, 0, 0, 0,
    0, 0, 0, 0, 0, -16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -81, -94, -23, -102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -78, 0, -119,
    0, 0, -23, 0, 0, 0, -77, -16,
    -81, 0, -63, -35, -35, -40, -35, -35,
    0, 0, 0, 0, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, 0, -35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -5, -5, -5,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, -16, 0, 0, -28, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, -24,
    -17, -26, -14, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -23, 0, 0, -5, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -2, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -21, 0, 0, -28, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, -9, -7, -16,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 44, 0, 33, 44,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -19, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, -12, -2, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -19, 0, 0, -23, 0, 0, -12, -2,
    -36, 0, -7, -27, -9, 0, 0, -16,
    -7, -19, 0, 0, 0, 0, 0, -24,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -47,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -40, 0, -37, 0,
    0, -9, -9, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -19,
    0, -16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -16, 0, -23, -21, -23,
    -23, 0, 0, 12, 48, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, -5,
    0, 57, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, 0, -16, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, -58, 0, 0, 0, 0,
    0, 0, -7, 0, 0, -16, 0, 0,
    -12, 0, -26, 0, 0, 0, -7, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    -12, 0, 0, 0, 0, 0, -47, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    -16, 0, 0, -30, 0, -20, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -8, -13, -7, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, 0, -21, 0, 0, -36, 0,
    -26, 0, 0, -5, -2, -2, -2, -7,
    0, -19, -2, -5, -12, -12, 0, 0,
    0, 0, 0, 0, -58, 0, 0, 0,
    0, -9, 0, -7, 0, 0, -16, 0,
    0, -9, 0, -17, 5, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -7, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -16, 0, 0, -9, 0, -19, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0,
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
    .kern_scale = 44,
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
const lv_font_t ui_font_HONORS_200 = {
#else
lv_font_t ui_font_HONORS_200 = {
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

#if LV_VERSION_CHECK(9, 3, 0)
    .static_bitmap = 1,    /*Bitmaps are stored as const so they are always static if not compressed */
#endif

    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HONORS_200*/
