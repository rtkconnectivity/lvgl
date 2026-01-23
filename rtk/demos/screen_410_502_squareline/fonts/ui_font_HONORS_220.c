/*******************************************************************************
 * Size: 220 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 220 --font lvgl_font_src/HONORSansCN-DemiBold.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_220.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONORS_220
#define UI_FONT_HONORS_220 1
#endif

#if UI_FONT_HONORS_220


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_220_glyph_bitmap.bin
 *Define UI_FONT_HONORS_220_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_220_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_220_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_220_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_220_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 841, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 1098, .box_w = 35, .box_h = 163, .ofs_x = 17, .ofs_y = 2},
    {.bitmap_index = 1467, .adv_w = 1313, .box_w = 65, .box_h = 60, .ofs_x = 9, .ofs_y = 105},
    {.bitmap_index = 2487, .adv_w = 2242, .box_w = 132, .box_h = 162, .ofs_x = 4, .ofs_y = 3},
    {.bitmap_index = 7833, .adv_w = 2031, .box_w = 119, .box_h = 199, .ofs_x = 4, .ofs_y = -16},
    {.bitmap_index = 13803, .adv_w = 3207, .box_w = 186, .box_h = 169, .ofs_x = 7, .ofs_y = -1},
    {.bitmap_index = 21746, .adv_w = 2464, .box_w = 151, .box_h = 169, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 28168, .adv_w = 644, .box_w = 23, .box_h = 60, .ofs_x = 9, .ofs_y = 105},
    {.bitmap_index = 28528, .adv_w = 1130, .box_w = 55, .box_h = 204, .ofs_x = 13, .ofs_y = -20},
    {.bitmap_index = 31384, .adv_w = 1130, .box_w = 56, .box_h = 204, .ofs_x = 2, .ofs_y = -20},
    {.bitmap_index = 34240, .adv_w = 1690, .box_w = 95, .box_h = 89, .ofs_x = 5, .ofs_y = 75},
    {.bitmap_index = 36376, .adv_w = 2094, .box_w = 119, .box_h = 119, .ofs_x = 6, .ofs_y = 14},
    {.bitmap_index = 39946, .adv_w = 915, .box_w = 35, .box_h = 65, .ofs_x = 11, .ofs_y = -29},
    {.bitmap_index = 40531, .adv_w = 1732, .box_w = 84, .box_h = 23, .ofs_x = 12, .ofs_y = 62},
    {.bitmap_index = 41014, .adv_w = 1010, .box_w = 36, .box_h = 35, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 41329, .adv_w = 1492, .box_w = 87, .box_h = 162, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 44893, .adv_w = 2087, .box_w = 108, .box_h = 168, .ofs_x = 11, .ofs_y = 0},
    {.bitmap_index = 49429, .adv_w = 2087, .box_w = 59, .box_h = 162, .ofs_x = 27, .ofs_y = 3},
    {.bitmap_index = 51859, .adv_w = 2087, .box_w = 106, .box_h = 165, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 56314, .adv_w = 2087, .box_w = 109, .box_h = 168, .ofs_x = 10, .ofs_y = 0},
    {.bitmap_index = 61018, .adv_w = 2087, .box_w = 110, .box_h = 162, .ofs_x = 10, .ofs_y = 3},
    {.bitmap_index = 65554, .adv_w = 2087, .box_w = 109, .box_h = 165, .ofs_x = 10, .ofs_y = 0},
    {.bitmap_index = 70174, .adv_w = 2087, .box_w = 111, .box_h = 165, .ofs_x = 10, .ofs_y = 0},
    {.bitmap_index = 74794, .adv_w = 2087, .box_w = 104, .box_h = 162, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 79006, .adv_w = 2087, .box_w = 112, .box_h = 168, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 83710, .adv_w = 2087, .box_w = 111, .box_h = 166, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 88358, .adv_w = 1098, .box_w = 35, .box_h = 117, .ofs_x = 17, .ofs_y = 2},
    {.bitmap_index = 89411, .adv_w = 1088, .box_w = 36, .box_h = 148, .ofs_x = 16, .ofs_y = -29},
    {.bitmap_index = 90743, .adv_w = 2284, .box_w = 118, .box_h = 132, .ofs_x = 9, .ofs_y = 8},
    {.bitmap_index = 94703, .adv_w = 2084, .box_w = 118, .box_h = 64, .ofs_x = 6, .ofs_y = 42},
    {.bitmap_index = 96623, .adv_w = 2284, .box_w = 119, .box_h = 132, .ofs_x = 15, .ofs_y = 8},
    {.bitmap_index = 100583, .adv_w = 1848, .box_w = 100, .box_h = 166, .ofs_x = 6, .ofs_y = 2},
    {.bitmap_index = 104733, .adv_w = 2834, .box_w = 168, .box_h = 169, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 111831, .adv_w = 2499, .box_w = 156, .box_h = 162, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 118149, .adv_w = 2327, .box_w = 123, .box_h = 162, .ofs_x = 16, .ofs_y = 3},
    {.bitmap_index = 123171, .adv_w = 2471, .box_w = 144, .box_h = 168, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 129219, .adv_w = 2608, .box_w = 140, .box_h = 162, .ofs_x = 16, .ofs_y = 3},
    {.bitmap_index = 134889, .adv_w = 2179, .box_w = 114, .box_h = 162, .ofs_x = 16, .ofs_y = 3},
    {.bitmap_index = 139587, .adv_w = 2013, .box_w = 107, .box_h = 162, .ofs_x = 16, .ofs_y = 2},
    {.bitmap_index = 143961, .adv_w = 2541, .box_w = 144, .box_h = 168, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 150009, .adv_w = 2510, .box_w = 132, .box_h = 162, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 155355, .adv_w = 862, .box_w = 29, .box_h = 162, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 156651, .adv_w = 1785, .box_w = 96, .box_h = 165, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 160611, .adv_w = 2320, .box_w = 132, .box_h = 162, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 165957, .adv_w = 1961, .box_w = 111, .box_h = 162, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 170493, .adv_w = 3094, .box_w = 169, .box_h = 162, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 177459, .adv_w = 2538, .box_w = 134, .box_h = 162, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 182967, .adv_w = 2795, .box_w = 161, .box_h = 168, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 189855, .adv_w = 2260, .box_w = 122, .box_h = 162, .ofs_x = 16, .ofs_y = 2},
    {.bitmap_index = 194877, .adv_w = 2795, .box_w = 161, .box_h = 181, .ofs_x = 7, .ofs_y = -13},
    {.bitmap_index = 202298, .adv_w = 2394, .box_w = 128, .box_h = 162, .ofs_x = 16, .ofs_y = 3},
    {.bitmap_index = 207482, .adv_w = 2045, .box_w = 118, .box_h = 168, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 212522, .adv_w = 2080, .box_w = 126, .box_h = 163, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 217738, .adv_w = 2548, .box_w = 131, .box_h = 165, .ofs_x = 14, .ofs_y = 0},
    {.bitmap_index = 223183, .adv_w = 2372, .box_w = 148, .box_h = 162, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 229177, .adv_w = 3499, .box_w = 216, .box_h = 162, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 237925, .adv_w = 2337, .box_w = 144, .box_h = 162, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 243757, .adv_w = 2260, .box_w = 141, .box_h = 162, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 249589, .adv_w = 2059, .box_w = 120, .box_h = 162, .ofs_x = 4, .ofs_y = 3},
    {.bitmap_index = 254449, .adv_w = 1151, .box_w = 48, .box_h = 203, .ofs_x = 23, .ofs_y = -20},
    {.bitmap_index = 256885, .adv_w = 1492, .box_w = 87, .box_h = 162, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 260449, .adv_w = 1151, .box_w = 47, .box_h = 203, .ofs_x = 1, .ofs_y = -20},
    {.bitmap_index = 262885, .adv_w = 2094, .box_w = 121, .box_h = 91, .ofs_x = 5, .ofs_y = 73},
    {.bitmap_index = 265706, .adv_w = 1911, .box_w = 120, .box_h = 21, .ofs_x = 0, .ofs_y = -20},
    {.bitmap_index = 266336, .adv_w = 1200, .box_w = 48, .box_h = 35, .ofs_x = 10, .ofs_y = 139},
    {.bitmap_index = 266756, .adv_w = 1932, .box_w = 103, .box_h = 121, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 269902, .adv_w = 2147, .box_w = 117, .box_h = 171, .ofs_x = 12, .ofs_y = 1},
    {.bitmap_index = 275032, .adv_w = 1823, .box_w = 107, .box_h = 121, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 278299, .adv_w = 2144, .box_w = 116, .box_h = 171, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 283258, .adv_w = 1957, .box_w = 112, .box_h = 120, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 286618, .adv_w = 1144, .box_w = 77, .box_h = 171, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 290038, .adv_w = 2130, .box_w = 115, .box_h = 168, .ofs_x = 6, .ofs_y = -47},
    {.bitmap_index = 294910, .adv_w = 2049, .box_w = 105, .box_h = 169, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 299473, .adv_w = 936, .box_w = 34, .box_h = 166, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 300967, .adv_w = 936, .box_w = 60, .box_h = 216, .ofs_x = -12, .ofs_y = -47},
    {.bitmap_index = 304207, .adv_w = 1947, .box_w = 111, .box_h = 169, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 308939, .adv_w = 838, .box_w = 28, .box_h = 169, .ofs_x = 12, .ofs_y = 3},
    {.bitmap_index = 310122, .adv_w = 3221, .box_w = 177, .box_h = 119, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 315477, .adv_w = 2045, .box_w = 104, .box_h = 119, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 318571, .adv_w = 2059, .box_w = 117, .box_h = 121, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 322201, .adv_w = 2158, .box_w = 116, .box_h = 166, .ofs_x = 13, .ofs_y = -45},
    {.bitmap_index = 327015, .adv_w = 2158, .box_w = 116, .box_h = 166, .ofs_x = 6, .ofs_y = -45},
    {.bitmap_index = 331829, .adv_w = 1345, .box_w = 72, .box_h = 119, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 333971, .adv_w = 1672, .box_w = 96, .box_h = 121, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 336875, .adv_w = 1327, .box_w = 81, .box_h = 154, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 340109, .adv_w = 2017, .box_w = 102, .box_h = 119, .ofs_x = 11, .ofs_y = 1},
    {.bitmap_index = 343203, .adv_w = 1820, .box_w = 114, .box_h = 116, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 346567, .adv_w = 2760, .box_w = 170, .box_h = 116, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 351555, .adv_w = 1985, .box_w = 119, .box_h = 117, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 355065, .adv_w = 1855, .box_w = 114, .box_h = 166, .ofs_x = 1, .ofs_y = -47},
    {.bitmap_index = 359879, .adv_w = 1721, .box_w = 97, .box_h = 116, .ofs_x = 5, .ofs_y = 3},
    {.bitmap_index = 362779, .adv_w = 1148, .box_w = 70, .box_h = 203, .ofs_x = 2, .ofs_y = -20},
    {.bitmap_index = 366433, .adv_w = 841, .box_w = 25, .box_h = 186, .ofs_x = 14, .ofs_y = -9},
    {.bitmap_index = 367735, .adv_w = 1148, .box_w = 70, .box_h = 203, .ofs_x = 0, .ofs_y = -20},
    {.bitmap_index = 371389, .adv_w = 2094, .box_w = 119, .box_h = 39, .ofs_x = 6, .ofs_y = 55}
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
    0, 0, 0, 0, 0, -59, 0, 0,
    0, 0, -47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -47, 0, 0, 0, -14, -5, 0,
    -83, -5, -52, -23, 0, -59, 0, 0,
    -5, 0, -9, 0, 0, -7, 0, -7,
    0, 0, 0, 0, -9, -9, -16, -16,
    0, -14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -47, 0, -16, 0, 0,
    -23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -2, 0, 0, 0,
    0, 0, -7, 0, 0, 0, -25, 0,
    0, 0, 0, -18, 0, 0, -2, 0,
    0, 0, -7, -7, -12, 0, 0, -5,
    0, -7, 0, 0, -9, -9, -12, -9,
    0, 0, 0, 0, -54, -14, 0, 0,
    0, -53, 0, -11, 0, 0, -47, -23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -59,
    -33, 0, -94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -42, 0, -42, 0,
    0, 0, 0, 0, 0, 0, 0, -23,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -27,
    0, -43, 0, 0, 0, 0, 0, 0,
    0, 0, -4, -9, -9, -21, -21, 0,
    -19, 0, 0, -75, 0, 0, 0, -41,
    0, 0, -106, 0, -89, -59, 0, -94,
    0, 0, 0, 0, -32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -25,
    -49, -61, 0, -49, 0, 0, 0, 0,
    -82, -72, 0, -38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -47, 0, -36,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -42, 0, -21, 0, 0, -35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, -23, 0, -55, 0, -16, -23, 0,
    -35, -20, 0, -9, 0, -38, 0, 0,
    -9, -7, 0, 0, -5, 0, -9, 0,
    -7, -5, 0, 0, -5, 0, 0, 0,
    0, -82, -62, -36, -104, 0, 0, 0,
    0, 0, 0, -4, 0, 0, -57, 0,
    -8, 0, 0, -41, -5, 0, 0, -73,
    0, -94, -42, -73, -38, -40, -42, -38,
    -47, 0, 0, 0, -35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -82,
    -83, -23, -103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -68, 0, -68, 0,
    0, 0, 0, 0, 0, -12, -12, -52,
    0, -47, -7, -7, -12, -7, -9, 0,
    0, 0, -59, -23, 0, -70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -52,
    0, -40, 0, 0, 0, 0, 0, 0,
    -9, -9, -12, 0, 0, -7, 0, 0,
    -7, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -28, 0, -45, 0, 0, 0,
    0, 0, 0, 0, 0, -16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -82, -95, -23, -103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -79, 0, -120,
    0, 0, -23, 0, 0, 0, -77, -16,
    -82, 0, -63, -35, -35, -40, -35, -35,
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
    0, 0, 0, 0, 0, 0, 0, -25,
    -18, -26, -14, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -23, 0, 0, -5, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -2, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -21, 0, 0, -28, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, -9, -7, -16,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 45, 0, 33, 45,
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
    -7, -19, 0, 0, 0, 0, 0, -25,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -47,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -40, 0, -38, 0,
    0, -9, -9, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -19,
    0, -16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -16, 0, -23, -21, -23,
    -23, 0, 0, 12, 48, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, -5,
    0, 57, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, 0, -16, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, -59, 0, 0, 0, 0,
    0, 0, -7, 0, 0, -16, 0, 0,
    -12, 0, -26, 0, 0, 0, -7, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    -12, 0, 0, 0, 0, 0, -47, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    -16, 0, 0, -31, 0, -20, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -8, -13, -7, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, 0, -21, 0, 0, -36, 0,
    -26, 0, 0, -5, -2, -2, -2, -7,
    0, -19, -2, -5, -12, -12, 0, 0,
    0, 0, 0, 0, -59, 0, 0, 0,
    0, -9, 0, -7, 0, 0, -16, 0,
    0, -9, 0, -18, 5, 0, 0, 0,
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
    .kern_scale = 48,
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
const lv_font_t ui_font_HONORS_220 = {
#else
lv_font_t ui_font_HONORS_220 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 231,          /*The maximum line height required by the font*/
    .base_line = 47,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -15,
    .underline_thickness = 11,
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
#  error "Too large font or glyphs in UI_FONT_HONORS_220. Enable LV_FONT_FMT_TXT_LARGE in lv_conf.h")
#endif


#endif /*#if UI_FONT_HONORS_220*/
