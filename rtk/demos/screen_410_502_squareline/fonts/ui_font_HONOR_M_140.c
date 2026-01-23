/*******************************************************************************
 * Size: 140 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 140 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONOR_M_140.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONOR_M_140
#define UI_FONT_HONOR_M_140 1
#endif

#if UI_FONT_HONOR_M_140


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONOR_M_140_glyph_bitmap.bin
 *Define UI_FONT_HONOR_M_140_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONOR_M_140_GLYPH_BITMAP_BIN
#define UI_FONT_HONOR_M_140_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONOR_M_140_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONOR_M_140_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 535, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 674, .box_w = 20, .box_h = 104, .ofs_x = 11, .ofs_y = 1},
    {.bitmap_index = 520, .adv_w = 768, .box_w = 36, .box_h = 37, .ofs_x = 6, .ofs_y = 68},
    {.bitmap_index = 853, .adv_w = 1409, .box_w = 82, .box_h = 104, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 3037, .adv_w = 1254, .box_w = 73, .box_h = 127, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 5450, .adv_w = 1982, .box_w = 114, .box_h = 107, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 8553, .adv_w = 1564, .box_w = 96, .box_h = 108, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 11145, .adv_w = 388, .box_w = 13, .box_h = 37, .ofs_x = 6, .ofs_y = 68},
    {.bitmap_index = 11293, .adv_w = 681, .box_w = 33, .box_h = 130, .ofs_x = 8, .ofs_y = -13},
    {.bitmap_index = 12463, .adv_w = 681, .box_w = 34, .box_h = 130, .ofs_x = 1, .ofs_y = -13},
    {.bitmap_index = 13633, .adv_w = 1055, .box_w = 59, .box_h = 55, .ofs_x = 4, .ofs_y = 50},
    {.bitmap_index = 14458, .adv_w = 1326, .box_w = 75, .box_h = 75, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 15883, .adv_w = 558, .box_w = 21, .box_h = 39, .ofs_x = 7, .ofs_y = -18},
    {.bitmap_index = 16117, .adv_w = 1107, .box_w = 53, .box_h = 13, .ofs_x = 8, .ofs_y = 41},
    {.bitmap_index = 16299, .adv_w = 625, .box_w = 21, .box_h = 21, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 16425, .adv_w = 923, .box_w = 54, .box_h = 103, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 17867, .adv_w = 1306, .box_w = 67, .box_h = 107, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 19686, .adv_w = 1306, .box_w = 36, .box_h = 103, .ofs_x = 17, .ofs_y = 2},
    {.bitmap_index = 20613, .adv_w = 1306, .box_w = 66, .box_h = 105, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 22398, .adv_w = 1306, .box_w = 68, .box_h = 107, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 24217, .adv_w = 1306, .box_w = 68, .box_h = 103, .ofs_x = 7, .ofs_y = 2},
    {.bitmap_index = 25968, .adv_w = 1306, .box_w = 68, .box_h = 105, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 27753, .adv_w = 1306, .box_w = 70, .box_h = 105, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 29643, .adv_w = 1306, .box_w = 66, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 31394, .adv_w = 1306, .box_w = 71, .box_h = 107, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 33320, .adv_w = 1306, .box_w = 70, .box_h = 106, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 35228, .adv_w = 674, .box_w = 20, .box_h = 73, .ofs_x = 11, .ofs_y = 1},
    {.bitmap_index = 35593, .adv_w = 668, .box_w = 20, .box_h = 92, .ofs_x = 11, .ofs_y = -18},
    {.bitmap_index = 36053, .adv_w = 1452, .box_w = 75, .box_h = 81, .ofs_x = 6, .ofs_y = 7},
    {.bitmap_index = 37592, .adv_w = 1319, .box_w = 75, .box_h = 37, .ofs_x = 4, .ofs_y = 29},
    {.bitmap_index = 38295, .adv_w = 1452, .box_w = 75, .box_h = 81, .ofs_x = 10, .ofs_y = 7},
    {.bitmap_index = 39834, .adv_w = 1165, .box_w = 63, .box_h = 106, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 41530, .adv_w = 1799, .box_w = 106, .box_h = 108, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 44446, .adv_w = 1546, .box_w = 97, .box_h = 103, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 47021, .adv_w = 1460, .box_w = 77, .box_h = 103, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 49081, .adv_w = 1559, .box_w = 90, .box_h = 107, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 51542, .adv_w = 1646, .box_w = 88, .box_h = 103, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 53808, .adv_w = 1369, .box_w = 71, .box_h = 103, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 55662, .adv_w = 1261, .box_w = 67, .box_h = 104, .ofs_x = 10, .ofs_y = 1},
    {.bitmap_index = 57430, .adv_w = 1602, .box_w = 90, .box_h = 107, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 59891, .adv_w = 1577, .box_w = 83, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 62054, .adv_w = 517, .box_w = 16, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 62466, .adv_w = 1116, .box_w = 59, .box_h = 105, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 64041, .adv_w = 1429, .box_w = 81, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 66204, .adv_w = 1219, .box_w = 68, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 67955, .adv_w = 1942, .box_w = 105, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 70736, .adv_w = 1593, .box_w = 83, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 72899, .adv_w = 1772, .box_w = 101, .box_h = 107, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 75681, .adv_w = 1413, .box_w = 76, .box_h = 103, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 77638, .adv_w = 1772, .box_w = 101, .box_h = 115, .ofs_x = 5, .ofs_y = -8},
    {.bitmap_index = 80628, .adv_w = 1494, .box_w = 80, .box_h = 103, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 82688, .adv_w = 1270, .box_w = 73, .box_h = 107, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 84721, .adv_w = 1315, .box_w = 80, .box_h = 104, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 86801, .adv_w = 1604, .box_w = 82, .box_h = 105, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 89006, .adv_w = 1472, .box_w = 92, .box_h = 103, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 91375, .adv_w = 2186, .box_w = 135, .box_h = 103, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 94877, .adv_w = 1418, .box_w = 89, .box_h = 103, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 97246, .adv_w = 1387, .box_w = 87, .box_h = 103, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 99512, .adv_w = 1288, .box_w = 75, .box_h = 103, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 101469, .adv_w = 694, .box_w = 28, .box_h = 129, .ofs_x = 15, .ofs_y = -12},
    {.bitmap_index = 102372, .adv_w = 923, .box_w = 54, .box_h = 103, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 103814, .adv_w = 694, .box_w = 28, .box_h = 129, .ofs_x = 0, .ofs_y = -12},
    {.bitmap_index = 104717, .adv_w = 1322, .box_w = 76, .box_h = 58, .ofs_x = 3, .ofs_y = 47},
    {.bitmap_index = 105819, .adv_w = 1194, .box_w = 75, .box_h = 12, .ofs_x = 0, .ofs_y = -12},
    {.bitmap_index = 106047, .adv_w = 746, .box_w = 29, .box_h = 22, .ofs_x = 7, .ofs_y = 89},
    {.bitmap_index = 106223, .adv_w = 1216, .box_w = 65, .box_h = 77, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 107532, .adv_w = 1353, .box_w = 73, .box_h = 109, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 109603, .adv_w = 1147, .box_w = 67, .box_h = 77, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 110912, .adv_w = 1351, .box_w = 73, .box_h = 109, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 112983, .adv_w = 1241, .box_w = 70, .box_h = 77, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 114369, .adv_w = 697, .box_w = 47, .box_h = 109, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 115677, .adv_w = 1337, .box_w = 72, .box_h = 107, .ofs_x = 4, .ofs_y = -30},
    {.bitmap_index = 117603, .adv_w = 1286, .box_w = 65, .box_h = 108, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 119439, .adv_w = 569, .box_w = 20, .box_h = 104, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 119959, .adv_w = 540, .box_w = 35, .box_h = 136, .ofs_x = -8, .ofs_y = -30},
    {.bitmap_index = 121183, .adv_w = 1201, .box_w = 68, .box_h = 108, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 123019, .adv_w = 504, .box_w = 15, .box_h = 108, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 123451, .adv_w = 2045, .box_w = 112, .box_h = 75, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 125551, .adv_w = 1290, .box_w = 65, .box_h = 75, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 126826, .adv_w = 1301, .box_w = 73, .box_h = 77, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 128289, .adv_w = 1360, .box_w = 72, .box_h = 106, .ofs_x = 9, .ofs_y = -29},
    {.bitmap_index = 130197, .adv_w = 1360, .box_w = 73, .box_h = 106, .ofs_x = 4, .ofs_y = -29},
    {.bitmap_index = 132211, .adv_w = 824, .box_w = 45, .box_h = 75, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 133111, .adv_w = 1046, .box_w = 60, .box_h = 77, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 134266, .adv_w = 827, .box_w = 50, .box_h = 98, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135540, .adv_w = 1266, .box_w = 63, .box_h = 75, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 136740, .adv_w = 1120, .box_w = 70, .box_h = 74, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 138072, .adv_w = 1729, .box_w = 106, .box_h = 74, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 140070, .adv_w = 1241, .box_w = 75, .box_h = 74, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 141476, .adv_w = 1140, .box_w = 71, .box_h = 106, .ofs_x = 0, .ofs_y = -30},
    {.bitmap_index = 143384, .adv_w = 1084, .box_w = 61, .box_h = 74, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 144568, .adv_w = 692, .box_w = 42, .box_h = 129, .ofs_x = 1, .ofs_y = -12},
    {.bitmap_index = 145987, .adv_w = 513, .box_w = 14, .box_h = 118, .ofs_x = 9, .ofs_y = -6},
    {.bitmap_index = 146459, .adv_w = 692, .box_w = 42, .box_h = 129, .ofs_x = 0, .ofs_y = -12},
    {.bitmap_index = 147878, .adv_w = 1322, .box_w = 74, .box_h = 23, .ofs_x = 4, .ofs_y = 36}
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
    0, -16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -58, 0, 0,
    0, 0, -46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -46, 0, 0, 0, -13, -2, 0,
    -79, -2, -49, -23, 0, -58, 0, 0,
    -2, 0, -5, 0, 0, -3, 0, -3,
    0, 0, 0, 0, -5, -5, -8, -8,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -46, 0, -14, 0, 0,
    -23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -1, 0, 0, 0,
    0, 0, -9, 0, 0, 0, -32, 0,
    0, 0, 0, -17, 0, 0, -1, 0,
    0, 0, -3, -3, -6, 0, 0, -2,
    0, -3, 0, 0, -5, -5, -6, -5,
    0, 0, 0, 0, -55, -13, 0, 0,
    0, -58, 0, -14, 0, 0, -46, -23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -58,
    -28, 0, -92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -44, 0, -44, 0,
    0, 0, 0, 0, 0, 0, 0, -23,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -28,
    0, -42, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -5, -5, -10, -10, 0,
    -9, 0, 0, -83, 0, 0, 0, -46,
    0, 0, -104, 0, -90, -58, 0, -92,
    0, 0, 0, 0, -42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -32,
    -53, -65, 0, -53, 0, 0, 0, 0,
    -81, -67, 0, -42, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -46, 0, -38,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -44, 0, -16, 0, 0, -35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, -23, 0, -53, 0, -14, -23, 0,
    -35, -18, 0, -5, 0, -36, 0, 0,
    -5, -3, 0, 0, -2, 0, -5, 0,
    -3, -2, 0, 0, -2, 0, 0, 0,
    0, -81, -62, -38, -106, 0, 0, 0,
    0, 0, 0, -5, 0, 0, -60, 0,
    -18, 0, 0, -46, -2, 0, 0, -76,
    0, -92, -55, -76, -42, -43, -44, -42,
    -46, 0, 0, 0, -35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -81,
    -79, -23, -97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -62, 0, -62, 0,
    0, 0, 0, 0, 0, -6, -6, -49,
    0, -46, -3, -3, -6, -3, -5, 0,
    0, 0, -58, -23, 0, -69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -43,
    0, -37, 0, 0, 0, 0, 0, 0,
    -5, -5, -6, 0, 0, -3, 0, 0,
    -3, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -25, 0, -39, 0, 0, 0,
    0, 0, 0, 0, 0, -14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -81, -90, -23, -97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -65, 0, -117,
    0, 0, -23, 0, 0, 0, -84, -8,
    -81, 0, -60, -29, -29, -31, -29, -29,
    0, 0, 0, 0, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -18, 0, -46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, -2, -2,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, -8, 0, 0, -14, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, -22,
    -17, -24, -13, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, -12, 0, 0, -2, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, -14, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -5, -3, -14,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 39, 0, 28, 39,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, 0, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, -12, -1, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, -12, 0, 0, -12, -1,
    -32, 0, -3, -23, -5, 0, 0, -14,
    -3, -15, 0, 0, 0, 0, 0, -21,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -46,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -43, 0, -42, 0,
    0, -5, -5, 0, 0, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -20, 0, -23, -22, -23,
    -23, 0, 0, 6, 44, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, -2,
    0, 49, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, -8, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -58, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -8, 0, 0,
    -6, 0, -24, 0, 0, 0, -3, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    -12, 0, 0, 0, 0, 0, -46, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -8, 0, 0, -27, 0, -18, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, -7, -9, -9, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, -10, 0, 0, -32, 0,
    -24, 0, 0, -2, -1, -1, -1, -3,
    0, -15, -1, -2, -12, -12, 0, 0,
    0, 0, 0, 0, -58, 0, 0, 0,
    0, -5, 0, -3, 0, 0, -8, 0,
    0, -5, 0, -17, 2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -5, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, -8, 0, 0, -10, 0, -21, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0,
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
    .kern_scale = 31,
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
const lv_font_t ui_font_HONOR_M_140 = {
#else
lv_font_t ui_font_HONOR_M_140 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 147,          /*The maximum line height required by the font*/
    .base_line = 30,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -10,
    .underline_thickness = 7,
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



#endif /*#if UI_FONT_HONOR_M_140*/
