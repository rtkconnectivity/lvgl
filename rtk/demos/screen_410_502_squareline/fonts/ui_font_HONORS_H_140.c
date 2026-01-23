/*******************************************************************************
 * Size: 140 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 140 --font lvgl_font_src/HONORSansCN-DemiBold.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONORS_H_140.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONORS_H_140
#define UI_FONT_HONORS_H_140 1
#endif

#if UI_FONT_HONORS_H_140


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONORS_H_140_glyph_bitmap.bin
 *Define UI_FONT_HONORS_H_140_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONORS_H_140_GLYPH_BITMAP_BIN
#define UI_FONT_HONORS_H_140_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONORS_H_140_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONORS_H_140_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 535, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 699, .box_w = 23, .box_h = 104, .ofs_x = 10, .ofs_y = 1},
    {.bitmap_index = 624, .adv_w = 836, .box_w = 42, .box_h = 38, .ofs_x = 5, .ofs_y = 67},
    {.bitmap_index = 1042, .adv_w = 1427, .box_w = 84, .box_h = 103, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 3205, .adv_w = 1292, .box_w = 75, .box_h = 127, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 5618, .adv_w = 2041, .box_w = 119, .box_h = 108, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 8858, .adv_w = 1568, .box_w = 96, .box_h = 108, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 11450, .adv_w = 410, .box_w = 15, .box_h = 38, .ofs_x = 5, .ofs_y = 67},
    {.bitmap_index = 11602, .adv_w = 719, .box_w = 35, .box_h = 130, .ofs_x = 8, .ofs_y = -13},
    {.bitmap_index = 12772, .adv_w = 719, .box_w = 36, .box_h = 130, .ofs_x = 1, .ofs_y = -13},
    {.bitmap_index = 13942, .adv_w = 1075, .box_w = 61, .box_h = 57, .ofs_x = 3, .ofs_y = 48},
    {.bitmap_index = 14854, .adv_w = 1333, .box_w = 75, .box_h = 76, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 16298, .adv_w = 582, .box_w = 23, .box_h = 42, .ofs_x = 7, .ofs_y = -19},
    {.bitmap_index = 16550, .adv_w = 1102, .box_w = 53, .box_h = 15, .ofs_x = 8, .ofs_y = 40},
    {.bitmap_index = 16760, .adv_w = 643, .box_w = 24, .box_h = 23, .ofs_x = 8, .ofs_y = 1},
    {.bitmap_index = 16898, .adv_w = 950, .box_w = 56, .box_h = 103, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 18340, .adv_w = 1328, .box_w = 69, .box_h = 107, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 20266, .adv_w = 1328, .box_w = 38, .box_h = 103, .ofs_x = 17, .ofs_y = 2},
    {.bitmap_index = 21296, .adv_w = 1328, .box_w = 67, .box_h = 105, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 23081, .adv_w = 1328, .box_w = 70, .box_h = 107, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 25007, .adv_w = 1328, .box_w = 71, .box_h = 103, .ofs_x = 6, .ofs_y = 2},
    {.bitmap_index = 26861, .adv_w = 1328, .box_w = 70, .box_h = 105, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 28751, .adv_w = 1328, .box_w = 71, .box_h = 105, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 30641, .adv_w = 1328, .box_w = 66, .box_h = 104, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 32409, .adv_w = 1328, .box_w = 72, .box_h = 107, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 34335, .adv_w = 1328, .box_w = 71, .box_h = 106, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 36243, .adv_w = 699, .box_w = 23, .box_h = 74, .ofs_x = 10, .ofs_y = 1},
    {.bitmap_index = 36687, .adv_w = 692, .box_w = 23, .box_h = 94, .ofs_x = 10, .ofs_y = -19},
    {.bitmap_index = 37251, .adv_w = 1454, .box_w = 76, .box_h = 85, .ofs_x = 5, .ofs_y = 5},
    {.bitmap_index = 38866, .adv_w = 1326, .box_w = 75, .box_h = 41, .ofs_x = 4, .ofs_y = 27},
    {.bitmap_index = 39645, .adv_w = 1454, .box_w = 75, .box_h = 85, .ofs_x = 10, .ofs_y = 5},
    {.bitmap_index = 41260, .adv_w = 1176, .box_w = 64, .box_h = 106, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 42956, .adv_w = 1803, .box_w = 107, .box_h = 107, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 45845, .adv_w = 1590, .box_w = 100, .box_h = 104, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 48445, .adv_w = 1481, .box_w = 78, .box_h = 103, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 50505, .adv_w = 1572, .box_w = 92, .box_h = 107, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 52966, .adv_w = 1660, .box_w = 89, .box_h = 103, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 55335, .adv_w = 1387, .box_w = 73, .box_h = 103, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 57292, .adv_w = 1281, .box_w = 69, .box_h = 103, .ofs_x = 10, .ofs_y = 2},
    {.bitmap_index = 59146, .adv_w = 1617, .box_w = 92, .box_h = 107, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 61607, .adv_w = 1597, .box_w = 84, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 63770, .adv_w = 549, .box_w = 19, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 64285, .adv_w = 1136, .box_w = 61, .box_h = 105, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65965, .adv_w = 1476, .box_w = 84, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 68128, .adv_w = 1248, .box_w = 70, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 69982, .adv_w = 1969, .box_w = 107, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 72763, .adv_w = 1615, .box_w = 85, .box_h = 103, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 75029, .adv_w = 1779, .box_w = 103, .box_h = 107, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 77811, .adv_w = 1438, .box_w = 78, .box_h = 104, .ofs_x = 10, .ofs_y = 1},
    {.bitmap_index = 79891, .adv_w = 1779, .box_w = 103, .box_h = 115, .ofs_x = 4, .ofs_y = -8},
    {.bitmap_index = 82881, .adv_w = 1523, .box_w = 82, .box_h = 104, .ofs_x = 10, .ofs_y = 1},
    {.bitmap_index = 85065, .adv_w = 1301, .box_w = 76, .box_h = 107, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 87098, .adv_w = 1324, .box_w = 81, .box_h = 104, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 89282, .adv_w = 1622, .box_w = 84, .box_h = 105, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 91487, .adv_w = 1510, .box_w = 95, .box_h = 103, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 93959, .adv_w = 2227, .box_w = 137, .box_h = 103, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 97564, .adv_w = 1487, .box_w = 93, .box_h = 103, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 100036, .adv_w = 1438, .box_w = 90, .box_h = 103, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 102405, .adv_w = 1310, .box_w = 76, .box_h = 103, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 104362, .adv_w = 732, .box_w = 31, .box_h = 130, .ofs_x = 15, .ofs_y = -12},
    {.bitmap_index = 105402, .adv_w = 950, .box_w = 56, .box_h = 103, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 106844, .adv_w = 732, .box_w = 31, .box_h = 130, .ofs_x = 0, .ofs_y = -12},
    {.bitmap_index = 107884, .adv_w = 1333, .box_w = 78, .box_h = 58, .ofs_x = 3, .ofs_y = 47},
    {.bitmap_index = 109044, .adv_w = 1216, .box_w = 76, .box_h = 14, .ofs_x = 0, .ofs_y = -13},
    {.bitmap_index = 109310, .adv_w = 764, .box_w = 31, .box_h = 22, .ofs_x = 6, .ofs_y = 88},
    {.bitmap_index = 109486, .adv_w = 1230, .box_w = 66, .box_h = 77, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 110795, .adv_w = 1366, .box_w = 74, .box_h = 109, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 112866, .adv_w = 1160, .box_w = 68, .box_h = 77, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 114175, .adv_w = 1364, .box_w = 74, .box_h = 109, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 116246, .adv_w = 1245, .box_w = 71, .box_h = 77, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 117632, .adv_w = 728, .box_w = 49, .box_h = 109, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 119049, .adv_w = 1355, .box_w = 73, .box_h = 107, .ofs_x = 4, .ofs_y = -30},
    {.bitmap_index = 121082, .adv_w = 1304, .box_w = 67, .box_h = 108, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 122918, .adv_w = 596, .box_w = 22, .box_h = 106, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 123554, .adv_w = 596, .box_w = 38, .box_h = 137, .ofs_x = -8, .ofs_y = -30},
    {.bitmap_index = 124924, .adv_w = 1239, .box_w = 70, .box_h = 108, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 126868, .adv_w = 533, .box_w = 18, .box_h = 108, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 127408, .adv_w = 2050, .box_w = 113, .box_h = 75, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 129583, .adv_w = 1301, .box_w = 66, .box_h = 75, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 130858, .adv_w = 1310, .box_w = 74, .box_h = 77, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 132321, .adv_w = 1373, .box_w = 74, .box_h = 106, .ofs_x = 8, .ofs_y = -29},
    {.bitmap_index = 134335, .adv_w = 1373, .box_w = 74, .box_h = 106, .ofs_x = 4, .ofs_y = -29},
    {.bitmap_index = 136349, .adv_w = 856, .box_w = 47, .box_h = 75, .ofs_x = 8, .ofs_y = 2},
    {.bitmap_index = 137249, .adv_w = 1064, .box_w = 61, .box_h = 77, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 138481, .adv_w = 844, .box_w = 52, .box_h = 98, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 139755, .adv_w = 1284, .box_w = 65, .box_h = 75, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 141030, .adv_w = 1158, .box_w = 72, .box_h = 74, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 142362, .adv_w = 1756, .box_w = 108, .box_h = 74, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 144360, .adv_w = 1263, .box_w = 77, .box_h = 74, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 145840, .adv_w = 1180, .box_w = 74, .box_h = 106, .ofs_x = 0, .ofs_y = -30},
    {.bitmap_index = 147854, .adv_w = 1095, .box_w = 62, .box_h = 74, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 149038, .adv_w = 730, .box_w = 45, .box_h = 130, .ofs_x = 1, .ofs_y = -12},
    {.bitmap_index = 150598, .adv_w = 535, .box_w = 17, .box_h = 118, .ofs_x = 8, .ofs_y = -6},
    {.bitmap_index = 151188, .adv_w = 730, .box_w = 45, .box_h = 130, .ofs_x = 0, .ofs_y = -12},
    {.bitmap_index = 152748, .adv_w = 1333, .box_w = 76, .box_h = 25, .ofs_x = 4, .ofs_y = 35}
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
    0, -21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -58, 0, 0,
    0, 0, -46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -46, 0, 0, 0, -14, -5, 0,
    -82, -5, -51, -23, 0, -58, 0, 0,
    -5, 0, -9, 0, 0, -7, 0, -7,
    0, 0, 0, 0, -9, -9, -16, -16,
    0, -14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -46, 0, -16, 0, 0,
    -23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -2, 0, 0, 0,
    0, 0, -7, 0, 0, 0, -24, 0,
    0, 0, 0, -17, 0, 0, -2, 0,
    0, 0, -7, -7, -12, 0, 0, -5,
    0, -7, 0, 0, -9, -9, -12, -9,
    0, 0, 0, 0, -53, -14, 0, 0,
    0, -52, 0, -10, 0, 0, -46, -23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -58,
    -32, 0, -92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -42, 0, -42, 0,
    0, 0, 0, 0, 0, 0, 0, -23,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -27,
    0, -43, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -9, -9, -21, -21, 0,
    -18, 0, 0, -74, 0, 0, 0, -40,
    0, 0, -104, 0, -88, -58, 0, -92,
    0, 0, 0, 0, -31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -24,
    -49, -60, 0, -49, 0, 0, 0, 0,
    -81, -71, 0, -37, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -46, 0, -36,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -42, 0, -21, 0, 0, -35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, -23, 0, -54, 0, -16, -23, 0,
    -35, -20, 0, -9, 0, -37, 0, 0,
    -9, -7, 0, 0, -5, 0, -9, 0,
    -7, -5, 0, 0, -5, 0, 0, 0,
    0, -81, -61, -36, -103, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -57, 0,
    -8, 0, 0, -40, -5, 0, 0, -72,
    0, -92, -42, -72, -37, -39, -42, -37,
    -46, 0, 0, 0, -35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -81,
    -82, -23, -102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -67, 0, -67, 0,
    0, 0, 0, 0, 0, -12, -12, -51,
    0, -46, -7, -7, -12, -7, -9, 0,
    0, 0, -58, -23, 0, -69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -51,
    0, -39, 0, 0, 0, 0, 0, 0,
    -9, -9, -12, 0, 0, -7, 0, 0,
    -7, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -28, 0, -44, 0, 0, 0,
    0, 0, 0, 0, 0, -16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -81, -94, -23, -102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -77, 0, -118,
    0, 0, -23, 0, 0, 0, -76, -16,
    -81, 0, -62, -35, -35, -39, -35, -35,
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
    -18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -5, -5, -5,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, -16, 0, 0, -28, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, -24,
    -17, -25, -14, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -23, 0, 0, -5, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -2, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -21, 0, 0, -28, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, -9, -7, -16,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 44, 0, 32, 44,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -18, 0, 0, -9, 0, 0,
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
    -18, 0, 0, -23, 0, 0, -12, -2,
    -36, 0, -7, -27, -9, 0, 0, -16,
    -7, -18, 0, 0, 0, 0, 0, -24,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -46,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -39, 0, -37, 0,
    0, -9, -9, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -18,
    0, -16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -16, 0, -23, -21, -23,
    -23, 0, 0, 12, 47, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, -5,
    0, 57, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, 0, -16, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, -58, 0, 0, 0, 0,
    0, 0, -7, 0, 0, -16, 0, 0,
    -12, 0, -25, 0, 0, 0, -7, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    -12, 0, 0, 0, 0, 0, -46, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    -16, 0, 0, -30, 0, -20, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -8, -13, -7, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, 0, -21, 0, 0, -36, 0,
    -25, 0, 0, -5, -2, -2, -2, -7,
    0, -18, -2, -5, -12, -12, 0, 0,
    0, 0, 0, 0, -58, 0, 0, 0,
    0, -9, 0, -7, 0, 0, -16, 0,
    0, -9, 0, -17, 5, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -7, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -16, 0, 0, -9, 0, -18, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0,
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
const lv_font_t ui_font_HONORS_H_140 = {
#else
lv_font_t ui_font_HONORS_H_140 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 148,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_HONORS_H_140*/
