/*******************************************************************************
 * Size: 120 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 120 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONOR_M_120.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONOR_M_120
#define UI_FONT_HONOR_M_120 1
#endif

#if UI_FONT_HONOR_M_120


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONOR_M_120_glyph_bitmap.bin
 *Define UI_FONT_HONOR_M_120_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONOR_M_120_GLYPH_BITMAP_BIN
#define UI_FONT_HONOR_M_120_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONOR_M_120_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONOR_M_120_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 459, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 578, .box_w = 18, .box_h = 89, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 445, .adv_w = 659, .box_w = 31, .box_h = 32, .ofs_x = 5, .ofs_y = 59},
    {.bitmap_index = 701, .adv_w = 1208, .box_w = 70, .box_h = 88, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 2285, .adv_w = 1075, .box_w = 62, .box_h = 109, .ofs_x = 3, .ofs_y = -9},
    {.bitmap_index = 4029, .adv_w = 1699, .box_w = 98, .box_h = 92, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 6329, .adv_w = 1340, .box_w = 82, .box_h = 92, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8261, .adv_w = 332, .box_w = 11, .box_h = 32, .ofs_x = 5, .ofs_y = 59},
    {.bitmap_index = 8357, .adv_w = 584, .box_w = 29, .box_h = 111, .ofs_x = 7, .ofs_y = -11},
    {.bitmap_index = 9245, .adv_w = 584, .box_w = 29, .box_h = 111, .ofs_x = 1, .ofs_y = -11},
    {.bitmap_index = 10133, .adv_w = 904, .box_w = 51, .box_h = 47, .ofs_x = 3, .ofs_y = 43},
    {.bitmap_index = 10744, .adv_w = 1137, .box_w = 65, .box_h = 64, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 11832, .adv_w = 478, .box_w = 18, .box_h = 34, .ofs_x = 6, .ofs_y = -16},
    {.bitmap_index = 12002, .adv_w = 948, .box_w = 46, .box_h = 11, .ofs_x = 7, .ofs_y = 35},
    {.bitmap_index = 12134, .adv_w = 536, .box_w = 18, .box_h = 18, .ofs_x = 8, .ofs_y = 1},
    {.bitmap_index = 12224, .adv_w = 791, .box_w = 46, .box_h = 88, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 13280, .adv_w = 1119, .box_w = 58, .box_h = 92, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 14660, .adv_w = 1119, .box_w = 30, .box_h = 89, .ofs_x = 15, .ofs_y = 1},
    {.bitmap_index = 15372, .adv_w = 1119, .box_w = 57, .box_h = 90, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 16722, .adv_w = 1119, .box_w = 59, .box_h = 92, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 18102, .adv_w = 1119, .box_w = 58, .box_h = 89, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 19437, .adv_w = 1119, .box_w = 59, .box_h = 90, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 20787, .adv_w = 1119, .box_w = 60, .box_h = 90, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 22137, .adv_w = 1119, .box_w = 56, .box_h = 89, .ofs_x = 7, .ofs_y = 2},
    {.bitmap_index = 23383, .adv_w = 1119, .box_w = 60, .box_h = 92, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 24763, .adv_w = 1119, .box_w = 60, .box_h = 90, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 26113, .adv_w = 578, .box_w = 18, .box_h = 63, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 26428, .adv_w = 572, .box_w = 18, .box_h = 80, .ofs_x = 9, .ofs_y = -16},
    {.bitmap_index = 26828, .adv_w = 1244, .box_w = 64, .box_h = 69, .ofs_x = 5, .ofs_y = 6},
    {.bitmap_index = 27932, .adv_w = 1131, .box_w = 65, .box_h = 32, .ofs_x = 3, .ofs_y = 25},
    {.bitmap_index = 28476, .adv_w = 1244, .box_w = 65, .box_h = 69, .ofs_x = 8, .ofs_y = 6},
    {.bitmap_index = 29649, .adv_w = 998, .box_w = 54, .box_h = 91, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 30923, .adv_w = 1542, .box_w = 91, .box_h = 92, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 33039, .adv_w = 1325, .box_w = 83, .box_h = 88, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 34887, .adv_w = 1252, .box_w = 65, .box_h = 89, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 36400, .adv_w = 1336, .box_w = 77, .box_h = 92, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 38240, .adv_w = 1411, .box_w = 75, .box_h = 89, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 39931, .adv_w = 1173, .box_w = 61, .box_h = 89, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 41355, .adv_w = 1081, .box_w = 57, .box_h = 88, .ofs_x = 9, .ofs_y = 2},
    {.bitmap_index = 42675, .adv_w = 1373, .box_w = 78, .box_h = 92, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 44515, .adv_w = 1352, .box_w = 71, .box_h = 89, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 46117, .adv_w = 444, .box_w = 14, .box_h = 89, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 46473, .adv_w = 956, .box_w = 50, .box_h = 90, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 47643, .adv_w = 1225, .box_w = 69, .box_h = 89, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 49245, .adv_w = 1044, .box_w = 58, .box_h = 88, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 50565, .adv_w = 1665, .box_w = 90, .box_h = 89, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 52612, .adv_w = 1365, .box_w = 71, .box_h = 89, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 54214, .adv_w = 1519, .box_w = 87, .box_h = 92, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 56238, .adv_w = 1212, .box_w = 65, .box_h = 89, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 57751, .adv_w = 1519, .box_w = 87, .box_h = 99, .ofs_x = 4, .ofs_y = -7},
    {.bitmap_index = 59929, .adv_w = 1281, .box_w = 68, .box_h = 88, .ofs_x = 9, .ofs_y = 2},
    {.bitmap_index = 61425, .adv_w = 1089, .box_w = 63, .box_h = 92, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 62897, .adv_w = 1127, .box_w = 68, .box_h = 89, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 64410, .adv_w = 1375, .box_w = 70, .box_h = 90, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 66030, .adv_w = 1261, .box_w = 79, .box_h = 88, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 67790, .adv_w = 1874, .box_w = 115, .box_h = 88, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 70342, .adv_w = 1215, .box_w = 76, .box_h = 89, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 72033, .adv_w = 1188, .box_w = 74, .box_h = 88, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 73705, .adv_w = 1104, .box_w = 65, .box_h = 89, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 75218, .adv_w = 595, .box_w = 24, .box_h = 111, .ofs_x = 13, .ofs_y = -11},
    {.bitmap_index = 75884, .adv_w = 791, .box_w = 46, .box_h = 88, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 76940, .adv_w = 595, .box_w = 24, .box_h = 111, .ofs_x = 0, .ofs_y = -11},
    {.bitmap_index = 77606, .adv_w = 1133, .box_w = 65, .box_h = 50, .ofs_x = 3, .ofs_y = 40},
    {.bitmap_index = 78456, .adv_w = 1023, .box_w = 64, .box_h = 10, .ofs_x = 0, .ofs_y = -10},
    {.bitmap_index = 78616, .adv_w = 639, .box_w = 25, .box_h = 19, .ofs_x = 6, .ofs_y = 76},
    {.bitmap_index = 78749, .adv_w = 1043, .box_w = 55, .box_h = 66, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 79673, .adv_w = 1160, .box_w = 62, .box_h = 93, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 81161, .adv_w = 983, .box_w = 58, .box_h = 66, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 82151, .adv_w = 1158, .box_w = 63, .box_h = 93, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 83639, .adv_w = 1064, .box_w = 61, .box_h = 66, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 84695, .adv_w = 597, .box_w = 40, .box_h = 94, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 85635, .adv_w = 1146, .box_w = 62, .box_h = 92, .ofs_x = 3, .ofs_y = -26},
    {.bitmap_index = 87107, .adv_w = 1102, .box_w = 56, .box_h = 92, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 88395, .adv_w = 488, .box_w = 17, .box_h = 90, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 88845, .adv_w = 463, .box_w = 30, .box_h = 117, .ofs_x = -7, .ofs_y = -26},
    {.bitmap_index = 89781, .adv_w = 1029, .box_w = 58, .box_h = 92, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 91161, .adv_w = 432, .box_w = 13, .box_h = 92, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 91529, .adv_w = 1753, .box_w = 96, .box_h = 65, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 93089, .adv_w = 1106, .box_w = 56, .box_h = 65, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 93999, .adv_w = 1116, .box_w = 63, .box_h = 66, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 95055, .adv_w = 1165, .box_w = 63, .box_h = 91, .ofs_x = 7, .ofs_y = -25},
    {.bitmap_index = 96511, .adv_w = 1165, .box_w = 63, .box_h = 91, .ofs_x = 3, .ofs_y = -25},
    {.bitmap_index = 97967, .adv_w = 707, .box_w = 38, .box_h = 65, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 98617, .adv_w = 897, .box_w = 51, .box_h = 66, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 99475, .adv_w = 708, .box_w = 43, .box_h = 84, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100399, .adv_w = 1085, .box_w = 54, .box_h = 65, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 101309, .adv_w = 960, .box_w = 60, .box_h = 64, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 102269, .adv_w = 1482, .box_w = 91, .box_h = 64, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 103741, .adv_w = 1064, .box_w = 64, .box_h = 64, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 104765, .adv_w = 977, .box_w = 61, .box_h = 91, .ofs_x = 0, .ofs_y = -26},
    {.bitmap_index = 106221, .adv_w = 929, .box_w = 52, .box_h = 64, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 107053, .adv_w = 593, .box_w = 36, .box_h = 111, .ofs_x = 1, .ofs_y = -11},
    {.bitmap_index = 108052, .adv_w = 440, .box_w = 12, .box_h = 101, .ofs_x = 8, .ofs_y = -5},
    {.bitmap_index = 108355, .adv_w = 593, .box_w = 36, .box_h = 111, .ofs_x = 0, .ofs_y = -11},
    {.bitmap_index = 109354, .adv_w = 1133, .box_w = 63, .box_h = 20, .ofs_x = 4, .ofs_y = 31}
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
    0, 0, 0, -47, 0, -71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -59, 0, 0,
    0, 0, -47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -47, 0, 0, 0, -13, -2, 0,
    -80, -2, -50, -24, 0, -59, 0, 0,
    -2, 0, -5, 0, 0, -4, 0, -4,
    0, 0, 0, 0, -5, -5, -8, -8,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -47, 0, -14, 0, 0,
    -24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -1, 0, 0, 0,
    0, 0, -9, 0, 0, 0, -33, 0,
    0, 0, 0, -18, 0, 0, -1, 0,
    0, 0, -4, -4, -6, 0, 0, -2,
    0, -4, 0, 0, -5, -5, -6, -5,
    0, 0, 0, 0, -57, -13, 0, 0,
    0, -59, 0, -14, 0, 0, -47, -24,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -59,
    -28, 0, -95, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -45, 0, -45, 0,
    0, 0, 0, 0, 0, 0, 0, -24,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -28,
    0, -43, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -5, -5, -11, -11, 0,
    -9, 0, 0, -85, 0, 0, 0, -47,
    0, 0, -106, 0, -92, -59, 0, -95,
    0, 0, 0, 0, -43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -33,
    -54, -66, 0, -54, 0, 0, 0, 0,
    -83, -69, 0, -43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -47, 0, -39,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -45, 0, -17, 0, 0, -35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, -24, 0, -54, 0, -14, -24, 0,
    -35, -19, 0, -5, 0, -37, 0, 0,
    -5, -4, 0, 0, -2, 0, -5, 0,
    -4, -2, 0, 0, -2, 0, 0, 0,
    0, -83, -64, -39, -109, 0, 0, 0,
    0, 0, 0, -5, 0, 0, -61, 0,
    -19, 0, 0, -47, -2, 0, 0, -78,
    0, -95, -57, -78, -43, -44, -45, -43,
    -47, 0, 0, 0, -35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -83,
    -80, -24, -99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -64, 0, -64, 0,
    0, 0, 0, 0, 0, -6, -6, -50,
    0, -47, -4, -4, -6, -4, -5, 0,
    0, 0, -59, -24, 0, -71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -44,
    0, -38, 0, 0, 0, 0, 0, 0,
    -5, -5, -6, 0, 0, -4, 0, 0,
    -4, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -26, 0, -40, 0, 0, 0,
    0, 0, 0, 0, 0, -14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -83, -92, -24, -99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -66, 0, -119,
    0, 0, -24, 0, 0, 0, -86, -8,
    -83, 0, -61, -30, -30, -32, -30, -30,
    0, 0, 0, 0, 0, -24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -19, 0, -47, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, -22,
    -18, -25, -13, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, -12, 0, 0, -2, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, 0, 0, -14, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -5, -4, -14,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 40, 0, 28, 40,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, 0, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, -12, -1, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, -12, 0, 0, -12, -1,
    -33, 0, -4, -24, -5, 0, 0, -14,
    -4, -15, 0, 0, 0, 0, 0, -21,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -47,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -44, 0, -43, 0,
    0, -5, -5, 0, 0, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -20, 0, -24, -22, -24,
    -24, 0, 0, 6, 45, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, -2,
    0, 50, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, -8, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -59, 0, 0, 0, 0,
    0, 0, -4, 0, 0, -8, 0, 0,
    -6, 0, -25, 0, 0, 0, -4, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    -12, 0, 0, 0, 0, 0, -47, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    -8, 0, 0, -27, 0, -19, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, -7, -9, -9, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, -11, 0, 0, -33, 0,
    -25, 0, 0, -2, -1, -1, -1, -4,
    0, -15, -1, -2, -12, -12, 0, 0,
    0, 0, 0, 0, -59, 0, 0, 0,
    0, -5, 0, -4, 0, 0, -8, 0,
    0, -5, 0, -18, 2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -5, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, -8, 0, 0, -11, 0, -21, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0,
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
    .kern_scale = 26,
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
const lv_font_t ui_font_HONOR_M_120 = {
#else
lv_font_t ui_font_HONOR_M_120 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 126,          /*The maximum line height required by the font*/
    .base_line = 26,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -8,
    .underline_thickness = 6,
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



#endif /*#if UI_FONT_HONOR_M_120*/
