/*******************************************************************************
 * Size: 80 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 80 --font lvgl_font_src/HONORSansCN-DemiBold.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONOR_80.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONOR_80
#define UI_FONT_HONOR_80 1
#endif

#if UI_FONT_HONOR_80


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONOR_80_glyph_bitmap.bin
 *Define UI_FONT_HONOR_80_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONOR_80_GLYPH_BITMAP_BIN
#define UI_FONT_HONOR_80_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONOR_80_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONOR_80_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 306, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 399, .box_w = 13, .box_h = 60, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 477, .box_w = 24, .box_h = 22, .ofs_x = 3, .ofs_y = 38},
    {.bitmap_index = 372, .adv_w = 815, .box_w = 49, .box_h = 59, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1139, .adv_w = 739, .box_w = 44, .box_h = 73, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 1942, .adv_w = 1166, .box_w = 69, .box_h = 61, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3040, .adv_w = 896, .box_w = 55, .box_h = 62, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3908, .adv_w = 234, .box_w = 9, .box_h = 22, .ofs_x = 3, .ofs_y = 38},
    {.bitmap_index = 3974, .adv_w = 411, .box_w = 21, .box_h = 75, .ofs_x = 4, .ofs_y = -8},
    {.bitmap_index = 4424, .adv_w = 411, .box_w = 20, .box_h = 75, .ofs_x = 1, .ofs_y = -8},
    {.bitmap_index = 4799, .adv_w = 614, .box_w = 35, .box_h = 33, .ofs_x = 2, .ofs_y = 27},
    {.bitmap_index = 5096, .adv_w = 762, .box_w = 44, .box_h = 44, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 5580, .adv_w = 333, .box_w = 13, .box_h = 25, .ofs_x = 4, .ofs_y = -11},
    {.bitmap_index = 5680, .adv_w = 630, .box_w = 31, .box_h = 9, .ofs_x = 4, .ofs_y = 23},
    {.bitmap_index = 5752, .adv_w = 367, .box_w = 13, .box_h = 14, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 5808, .adv_w = 543, .box_w = 32, .box_h = 59, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 6280, .adv_w = 759, .box_w = 40, .box_h = 62, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 6900, .adv_w = 759, .box_w = 23, .box_h = 59, .ofs_x = 9, .ofs_y = 1},
    {.bitmap_index = 7254, .adv_w = 759, .box_w = 39, .box_h = 60, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 7854, .adv_w = 759, .box_w = 41, .box_h = 62, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 8536, .adv_w = 759, .box_w = 41, .box_h = 59, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 9185, .adv_w = 759, .box_w = 40, .box_h = 61, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9795, .adv_w = 759, .box_w = 41, .box_h = 61, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 10466, .adv_w = 759, .box_w = 38, .box_h = 59, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 11056, .adv_w = 759, .box_w = 41, .box_h = 62, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 11738, .adv_w = 759, .box_w = 41, .box_h = 60, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 12398, .adv_w = 399, .box_w = 13, .box_h = 43, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 12570, .adv_w = 396, .box_w = 13, .box_h = 55, .ofs_x = 6, .ofs_y = -11},
    {.bitmap_index = 12790, .adv_w = 831, .box_w = 44, .box_h = 48, .ofs_x = 3, .ofs_y = 3},
    {.bitmap_index = 13318, .adv_w = 758, .box_w = 44, .box_h = 23, .ofs_x = 2, .ofs_y = 15},
    {.bitmap_index = 13571, .adv_w = 831, .box_w = 44, .box_h = 48, .ofs_x = 5, .ofs_y = 3},
    {.bitmap_index = 14099, .adv_w = 672, .box_w = 37, .box_h = 61, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 14709, .adv_w = 1030, .box_w = 61, .box_h = 62, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 15701, .adv_w = 909, .box_w = 57, .box_h = 59, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 16586, .adv_w = 846, .box_w = 46, .box_h = 59, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 17294, .adv_w = 899, .box_w = 53, .box_h = 62, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 18162, .adv_w = 948, .box_w = 52, .box_h = 59, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 18929, .adv_w = 792, .box_w = 42, .box_h = 59, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 19578, .adv_w = 732, .box_w = 40, .box_h = 59, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 20168, .adv_w = 924, .box_w = 53, .box_h = 62, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 21036, .adv_w = 913, .box_w = 49, .box_h = 59, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 21803, .adv_w = 314, .box_w = 11, .box_h = 59, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 21980, .adv_w = 649, .box_w = 35, .box_h = 61, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22529, .adv_w = 844, .box_w = 49, .box_h = 59, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 23296, .adv_w = 713, .box_w = 41, .box_h = 59, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 23945, .adv_w = 1125, .box_w = 62, .box_h = 59, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 24889, .adv_w = 923, .box_w = 49, .box_h = 59, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 25656, .adv_w = 1016, .box_w = 59, .box_h = 62, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 26586, .adv_w = 822, .box_w = 45, .box_h = 59, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 27294, .adv_w = 1016, .box_w = 59, .box_h = 67, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 28299, .adv_w = 870, .box_w = 48, .box_h = 59, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 29007, .adv_w = 744, .box_w = 44, .box_h = 62, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29689, .adv_w = 756, .box_w = 47, .box_h = 59, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 30397, .adv_w = 927, .box_w = 48, .box_h = 61, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 31129, .adv_w = 863, .box_w = 54, .box_h = 59, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 31955, .adv_w = 1272, .box_w = 79, .box_h = 59, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 33135, .adv_w = 850, .box_w = 53, .box_h = 59, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 33961, .adv_w = 822, .box_w = 52, .box_h = 59, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 34728, .adv_w = 749, .box_w = 44, .box_h = 59, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 35377, .adv_w = 419, .box_w = 18, .box_h = 74, .ofs_x = 8, .ofs_y = -7},
    {.bitmap_index = 35747, .adv_w = 543, .box_w = 32, .box_h = 59, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 36219, .adv_w = 419, .box_w = 18, .box_h = 74, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 36589, .adv_w = 762, .box_w = 45, .box_h = 33, .ofs_x = 1, .ofs_y = 27},
    {.bitmap_index = 36985, .adv_w = 695, .box_w = 44, .box_h = 8, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 37073, .adv_w = 436, .box_w = 18, .box_h = 13, .ofs_x = 3, .ofs_y = 50},
    {.bitmap_index = 37138, .adv_w = 703, .box_w = 38, .box_h = 44, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 37578, .adv_w = 781, .box_w = 43, .box_h = 62, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 38260, .adv_w = 663, .box_w = 39, .box_h = 45, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 38710, .adv_w = 780, .box_w = 43, .box_h = 62, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 39392, .adv_w = 712, .box_w = 41, .box_h = 44, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 39876, .adv_w = 416, .box_w = 28, .box_h = 62, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 40310, .adv_w = 774, .box_w = 42, .box_h = 62, .ofs_x = 2, .ofs_y = -17},
    {.bitmap_index = 40992, .adv_w = 745, .box_w = 39, .box_h = 61, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 41602, .adv_w = 340, .box_w = 14, .box_h = 61, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 41846, .adv_w = 340, .box_w = 23, .box_h = 79, .ofs_x = -5, .ofs_y = -17},
    {.bitmap_index = 42320, .adv_w = 708, .box_w = 41, .box_h = 61, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 42991, .adv_w = 305, .box_w = 11, .box_h = 61, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 43174, .adv_w = 1171, .box_w = 65, .box_h = 43, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 43905, .adv_w = 744, .box_w = 39, .box_h = 43, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 44335, .adv_w = 749, .box_w = 43, .box_h = 45, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 44830, .adv_w = 785, .box_w = 43, .box_h = 61, .ofs_x = 4, .ofs_y = -16},
    {.bitmap_index = 45501, .adv_w = 785, .box_w = 43, .box_h = 61, .ofs_x = 2, .ofs_y = -16},
    {.bitmap_index = 46172, .adv_w = 489, .box_w = 27, .box_h = 43, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 46473, .adv_w = 608, .box_w = 35, .box_h = 45, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46878, .adv_w = 483, .box_w = 30, .box_h = 57, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47334, .adv_w = 733, .box_w = 37, .box_h = 44, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 47774, .adv_w = 662, .box_w = 42, .box_h = 43, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 48247, .adv_w = 1004, .box_w = 63, .box_h = 43, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 48935, .adv_w = 722, .box_w = 44, .box_h = 43, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 49408, .adv_w = 675, .box_w = 42, .box_h = 61, .ofs_x = 0, .ofs_y = -17},
    {.bitmap_index = 50079, .adv_w = 626, .box_w = 37, .box_h = 43, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 50509, .adv_w = 417, .box_w = 26, .box_h = 74, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 51027, .adv_w = 306, .box_w = 9, .box_h = 68, .ofs_x = 5, .ofs_y = -3},
    {.bitmap_index = 51231, .adv_w = 417, .box_w = 26, .box_h = 74, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 51749, .adv_w = 762, .box_w = 44, .box_h = 15, .ofs_x = 2, .ofs_y = 20}
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
    0, 0, 0, -46, 0, -68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -57, 0, 0,
    0, 0, -46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -46, 0, 0, 0, -14, -5, 0,
    -81, -5, -50, -23, 0, -57, 0, 0,
    -5, 0, -9, 0, 0, -7, 0, -7,
    0, 0, 0, 0, -9, -9, -16, -16,
    0, -14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -46, 0, -16, 0, 0,
    -23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -2, 0, 0, 0,
    0, 0, -7, 0, 0, 0, -24, 0,
    0, 0, 0, -17, 0, 0, -2, 0,
    0, 0, -7, -7, -11, 0, 0, -5,
    0, -7, 0, 0, -9, -9, -11, -9,
    0, 0, 0, 0, -52, -14, 0, 0,
    0, -51, 0, -10, 0, 0, -46, -23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -57,
    -32, 0, -91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -41, 0, -41, 0,
    0, 0, 0, 0, 0, 0, 0, -23,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -26,
    0, -42, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -9, -9, -20, -20, 0,
    -18, 0, 0, -73, 0, 0, 0, -40,
    0, 0, -102, 0, -86, -57, 0, -91,
    0, 0, 0, 0, -31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -24,
    -48, -59, 0, -48, 0, 0, 0, 0,
    -80, -69, 0, -36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -46, 0, -35,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -41, 0, -20, 0, 0, -34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, -23, 0, -53, 0, -16, -23, 0,
    -34, -19, 0, -9, 0, -36, 0, 0,
    -9, -7, 0, 0, -5, 0, -9, 0,
    -7, -5, 0, 0, -5, 0, 0, 0,
    0, -80, -60, -35, -101, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -56, 0,
    -8, 0, 0, -40, -5, 0, 0, -71,
    0, -91, -41, -71, -36, -39, -41, -36,
    -46, 0, 0, 0, -34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -80,
    -81, -23, -100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -66, 0, -66, 0,
    0, 0, 0, 0, 0, -11, -11, -50,
    0, -46, -7, -7, -11, -7, -9, 0,
    0, 0, -57, -23, 0, -68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -50,
    0, -39, 0, 0, 0, 0, 0, 0,
    -9, -9, -11, 0, 0, -7, 0, 0,
    -7, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -27, 0, -43, 0, 0, 0,
    0, 0, 0, 0, 0, -16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -80, -92, -23, -100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -76, 0, -116,
    0, 0, -23, 0, 0, 0, -75, -16,
    -80, 0, -61, -34, -34, -39, -34, -34,
    0, 0, 0, 0, 0, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, 0, -34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -5, -5, -5,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, -16, 0, 0, -27, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, -24,
    -17, -25, -14, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -23, 0, 0, -5, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -2, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -20, 0, 0, -27, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, -9, -7, -16,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 43, 0, 32, 43,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -18, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -11, -11, -2, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -18, 0, 0, -23, 0, 0, -11, -2,
    -35, 0, -7, -26, -9, 0, 0, -16,
    -7, -18, 0, 0, 0, 0, 0, -24,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -46,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -39, 0, -36, 0,
    0, -9, -9, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -18,
    0, -16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -16, 0, -23, -20, -23,
    -23, 0, 0, 11, 47, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, -5,
    0, 56, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, 0, -16, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, -57, 0, 0, 0, 0,
    0, 0, -7, 0, 0, -16, 0, 0,
    -11, 0, -25, 0, 0, 0, -7, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    -11, 0, 0, 0, 0, 0, -46, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    -16, 0, 0, -30, 0, -19, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -8, -13, -7, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, 0, -20, 0, 0, -35, 0,
    -25, 0, 0, -5, -2, -2, -2, -7,
    0, -18, -2, -5, -11, -11, 0, 0,
    0, 0, 0, 0, -57, 0, 0, 0,
    0, -9, 0, -7, 0, 0, -16, 0,
    0, -9, 0, -17, 5, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -7, -11, 0, 0, 0, 0, 0, 0,
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
    .kern_scale = 18,
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
const lv_font_t ui_font_HONOR_80 = {
#else
lv_font_t ui_font_HONOR_80 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 84,          /*The maximum line height required by the font*/
    .base_line = 17,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -6,
    .underline_thickness = 4,
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



#endif /*#if UI_FONT_HONOR_80*/
