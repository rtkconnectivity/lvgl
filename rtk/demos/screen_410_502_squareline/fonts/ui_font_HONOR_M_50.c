/*******************************************************************************
 * Size: 50 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 50 --font lvgl_font_src/HONORSansCN-Medium.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_HONOR_M_50.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_HONOR_M_50
#define UI_FONT_HONOR_M_50 1
#endif

#if UI_FONT_HONOR_M_50


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_HONOR_M_50_glyph_bitmap.bin
 *Define UI_FONT_HONOR_M_50_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_HONOR_M_50_GLYPH_BITMAP_BIN
#define UI_FONT_HONOR_M_50_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_HONOR_M_50_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_HONOR_M_50_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 191, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 241, .box_w = 7, .box_h = 37, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 74, .adv_w = 274, .box_w = 13, .box_h = 14, .ofs_x = 2, .ofs_y = 24},
    {.bitmap_index = 130, .adv_w = 503, .box_w = 30, .box_h = 37, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 426, .adv_w = 448, .box_w = 26, .box_h = 46, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 748, .adv_w = 708, .box_w = 42, .box_h = 39, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1177, .adv_w = 558, .box_w = 34, .box_h = 39, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1528, .adv_w = 138, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = 24},
    {.bitmap_index = 1556, .adv_w = 243, .box_w = 12, .box_h = 48, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 1700, .adv_w = 243, .box_w = 13, .box_h = 48, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1892, .adv_w = 377, .box_w = 22, .box_h = 20, .ofs_x = 1, .ofs_y = 18},
    {.bitmap_index = 2012, .adv_w = 474, .box_w = 27, .box_h = 27, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2201, .adv_w = 199, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 2229, .adv_w = 395, .box_w = 20, .box_h = 5, .ofs_x = 2, .ofs_y = 15},
    {.bitmap_index = 2254, .adv_w = 223, .box_w = 8, .box_h = 8, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 2270, .adv_w = 330, .box_w = 20, .box_h = 37, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2455, .adv_w = 466, .box_w = 25, .box_h = 39, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2728, .adv_w = 466, .box_w = 13, .box_h = 37, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 2876, .adv_w = 466, .box_w = 24, .box_h = 38, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 3104, .adv_w = 466, .box_w = 25, .box_h = 39, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3377, .adv_w = 466, .box_w = 25, .box_h = 37, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 3636, .adv_w = 466, .box_w = 25, .box_h = 38, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3902, .adv_w = 466, .box_w = 25, .box_h = 38, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4168, .adv_w = 466, .box_w = 24, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 4390, .adv_w = 466, .box_w = 25, .box_h = 39, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4663, .adv_w = 466, .box_w = 25, .box_h = 38, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 4929, .adv_w = 241, .box_w = 7, .box_h = 27, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 4983, .adv_w = 238, .box_w = 7, .box_h = 34, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 5051, .adv_w = 518, .box_w = 27, .box_h = 30, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 5261, .adv_w = 471, .box_w = 27, .box_h = 14, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 5359, .adv_w = 518, .box_w = 28, .box_h = 30, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 5569, .adv_w = 416, .box_w = 23, .box_h = 38, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 5797, .adv_w = 642, .box_w = 38, .box_h = 39, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6187, .adv_w = 552, .box_w = 35, .box_h = 37, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 6520, .adv_w = 522, .box_w = 28, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 6779, .adv_w = 557, .box_w = 33, .box_h = 39, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7130, .adv_w = 588, .box_w = 32, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 7426, .adv_w = 489, .box_w = 26, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 7685, .adv_w = 450, .box_w = 25, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 7944, .adv_w = 572, .box_w = 33, .box_h = 39, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8295, .adv_w = 563, .box_w = 30, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 8591, .adv_w = 185, .box_w = 6, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 8665, .adv_w = 398, .box_w = 22, .box_h = 38, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8893, .adv_w = 510, .box_w = 29, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 9189, .adv_w = 435, .box_w = 25, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 9448, .adv_w = 694, .box_w = 38, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 9818, .adv_w = 569, .box_w = 30, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 10114, .adv_w = 633, .box_w = 37, .box_h = 39, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10504, .adv_w = 505, .box_w = 28, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 10763, .adv_w = 633, .box_w = 37, .box_h = 42, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 11183, .adv_w = 534, .box_w = 29, .box_h = 37, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 11479, .adv_w = 454, .box_w = 26, .box_h = 39, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11752, .adv_w = 470, .box_w = 29, .box_h = 37, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 12048, .adv_w = 573, .box_w = 30, .box_h = 38, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 12352, .adv_w = 526, .box_w = 33, .box_h = 37, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 12685, .adv_w = 781, .box_w = 49, .box_h = 37, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 13166, .adv_w = 506, .box_w = 32, .box_h = 37, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 13462, .adv_w = 495, .box_w = 31, .box_h = 37, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 13758, .adv_w = 460, .box_w = 27, .box_h = 37, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 14017, .adv_w = 248, .box_w = 11, .box_h = 47, .ofs_x = 5, .ofs_y = -5},
    {.bitmap_index = 14158, .adv_w = 330, .box_w = 20, .box_h = 37, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 14343, .adv_w = 248, .box_w = 10, .box_h = 47, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 14484, .adv_w = 472, .box_w = 28, .box_h = 21, .ofs_x = 1, .ofs_y = 17},
    {.bitmap_index = 14631, .adv_w = 426, .box_w = 27, .box_h = 5, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 14666, .adv_w = 266, .box_w = 11, .box_h = 8, .ofs_x = 2, .ofs_y = 32},
    {.bitmap_index = 14690, .adv_w = 434, .box_w = 24, .box_h = 27, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 14852, .adv_w = 483, .box_w = 26, .box_h = 39, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 15125, .adv_w = 410, .box_w = 25, .box_h = 27, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 15314, .adv_w = 482, .box_w = 27, .box_h = 39, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 15587, .adv_w = 443, .box_w = 26, .box_h = 27, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 15776, .adv_w = 249, .box_w = 17, .box_h = 40, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 15976, .adv_w = 478, .box_w = 26, .box_h = 38, .ofs_x = 1, .ofs_y = -10},
    {.bitmap_index = 16242, .adv_w = 459, .box_w = 23, .box_h = 39, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 16476, .adv_w = 203, .box_w = 7, .box_h = 38, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 16552, .adv_w = 193, .box_w = 13, .box_h = 49, .ofs_x = -3, .ofs_y = -10},
    {.bitmap_index = 16748, .adv_w = 429, .box_w = 24, .box_h = 39, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 16982, .adv_w = 180, .box_w = 6, .box_h = 39, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 17060, .adv_w = 730, .box_w = 40, .box_h = 27, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 17330, .adv_w = 461, .box_w = 23, .box_h = 27, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 17492, .adv_w = 465, .box_w = 27, .box_h = 27, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 17681, .adv_w = 486, .box_w = 26, .box_h = 38, .ofs_x = 3, .ofs_y = -10},
    {.bitmap_index = 17947, .adv_w = 486, .box_w = 27, .box_h = 38, .ofs_x = 1, .ofs_y = -10},
    {.bitmap_index = 18213, .adv_w = 294, .box_w = 16, .box_h = 27, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 18321, .adv_w = 374, .box_w = 21, .box_h = 27, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 18483, .adv_w = 295, .box_w = 18, .box_h = 36, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 18663, .adv_w = 452, .box_w = 23, .box_h = 26, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 18819, .adv_w = 400, .box_w = 25, .box_h = 26, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 19001, .adv_w = 618, .box_w = 39, .box_h = 26, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 19261, .adv_w = 443, .box_w = 28, .box_h = 26, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 19443, .adv_w = 407, .box_w = 26, .box_h = 37, .ofs_x = 0, .ofs_y = -10},
    {.bitmap_index = 19702, .adv_w = 387, .box_w = 22, .box_h = 26, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 19858, .adv_w = 247, .box_w = 16, .box_h = 47, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 20046, .adv_w = 183, .box_w = 6, .box_h = 43, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 20132, .adv_w = 247, .box_w = 15, .box_h = 47, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 20320, .adv_w = 472, .box_w = 27, .box_h = 9, .ofs_x = 1, .ofs_y = 13}
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
    0, 0, 0, -32, 0, -48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -40, 0, 0,
    0, 0, -32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -32, 0, 0, 0, -9, -2, 0,
    -54, -2, -34, -16, 0, -40, 0, 0,
    -2, 0, -3, 0, 0, -2, 0, -2,
    0, 0, 0, 0, -3, -3, -6, -6,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -32, 0, -10, 0, 0,
    -16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -1, 0, 0, 0,
    0, 0, -6, 0, 0, 0, -22, 0,
    0, 0, 0, -12, 0, 0, -1, 0,
    0, 0, -2, -2, -4, 0, 0, -2,
    0, -2, 0, 0, -3, -3, -4, -3,
    0, 0, 0, 0, -38, -9, 0, 0,
    0, -40, 0, -10, 0, 0, -32, -16,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -40,
    -19, 0, -64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -30, 0, -30, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -19,
    0, -29, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -3, -3, -7, -7, 0,
    -6, 0, 0, -58, 0, 0, 0, -32,
    0, 0, -72, 0, -62, -40, 0, -64,
    0, 0, 0, 0, -29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -22,
    -37, -45, 0, -37, 0, 0, 0, 0,
    -56, -46, 0, -29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -32, 0, -26,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -30, 0, -11, 0, 0, -24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, -16, 0, -37, 0, -10, -16, 0,
    -24, -13, 0, -3, 0, -25, 0, 0,
    -3, -2, 0, 0, -2, 0, -3, 0,
    -2, -2, 0, 0, -2, 0, 0, 0,
    0, -56, -43, -26, -74, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -42, 0,
    -13, 0, 0, -32, -2, 0, 0, -53,
    0, -64, -38, -53, -29, -30, -30, -29,
    -32, 0, 0, 0, -24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -56,
    -54, -16, -67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -43, 0, -43, 0,
    0, 0, 0, 0, 0, -4, -4, -34,
    0, -32, -2, -2, -4, -2, -3, 0,
    0, 0, -40, -16, 0, -48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -30,
    0, -26, 0, 0, 0, 0, 0, 0,
    -3, -3, -4, 0, 0, -2, 0, 0,
    -2, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -18, 0, -27, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -56, -62, -16, -67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -45, 0, -81,
    0, 0, -16, 0, 0, 0, -58, -6,
    -56, 0, -42, -20, -20, -22, -20, -20,
    0, 0, 0, 0, 0, -16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, -32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, -2, -2,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, -6, 0, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, -15,
    -12, -17, -9, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -8, 0, 0, -2, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, -10, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -3, -2, -10,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 27, 0, 19, 27,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -8, -1, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, -8, 0, 0, -8, -1,
    -22, 0, -2, -16, -3, 0, 0, -10,
    -2, -10, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -32,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -30, 0, -29, 0,
    0, -3, -3, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, -16, -15, -16,
    -16, 0, 0, 4, 30, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, -2,
    0, 34, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, -6, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, -40, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -6, 0, 0,
    -4, 0, -17, 0, 0, 0, -2, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, -32, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -6, 0, 0, -18, 0, -13, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -5, -6, -6, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -7, 0, 0, -22, 0,
    -17, 0, 0, -2, -1, -1, -1, -2,
    0, -10, -1, -2, -8, -8, 0, 0,
    0, 0, 0, 0, -40, 0, 0, 0,
    0, -3, 0, -2, 0, 0, -6, 0,
    0, -3, 0, -12, 2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -3, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -6, 0, 0, -7, 0, -14, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0,
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
const lv_font_t ui_font_HONOR_M_50 = {
#else
lv_font_t ui_font_HONOR_M_50 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 53,          /*The maximum line height required by the font*/
    .base_line = 10,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
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



#endif /*#if UI_FONT_HONOR_M_50*/
