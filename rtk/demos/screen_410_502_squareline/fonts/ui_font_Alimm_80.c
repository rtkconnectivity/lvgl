/*******************************************************************************
 * Size: 80 px
 * Bpp: 2
 * Opts: --pixel-order LSB --no-compress --extract-glyph-bitmap --stride 1 --bpp 2 --size 80 --font lvgl_font_src/AlimamaFangYuanTiVF-Thin.ttf -r 0x20-0x7F --format lvgl -o lvgl_output\ui_font_Alimm_80.c --no-prefilter --force-fast-kern-format
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

#ifndef UI_FONT_ALIMM_80
#define UI_FONT_ALIMM_80 1
#endif

#if UI_FONT_ALIMM_80


#include "../root_image_lvgl/ui_resource.h"
/*-----------------
 *    BITMAPS
 *----------------*/

/*Glyph bitmap data is stored in external binary file: ui_font_Alimm_80_glyph_bitmap.bin
 *Define UI_FONT_ALIMM_80_GLYPH_BITMAP_BIN as the memory address where the binary is loaded.*/
#ifndef UI_FONT_ALIMM_80_GLYPH_BITMAP_BIN
#define UI_FONT_ALIMM_80_GLYPH_BITMAP_BIN 0
#warning "Please define UI_FONT_ALIMM_80_GLYPH_BITMAP_BIN to the flash memory address"
#endif

static const uint8_t * const glyph_bitmap = (const uint8_t *)UI_FONT_ALIMM_80_GLYPH_BITMAP_BIN;

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 410, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 428, .box_w = 7, .box_h = 59, .ofs_x = 10, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 421, .box_w = 14, .box_h = 19, .ofs_x = 6, .ofs_y = 43},
    {.bitmap_index = 194, .adv_w = 849, .box_w = 47, .box_h = 60, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 914, .adv_w = 841, .box_w = 42, .box_h = 72, .ofs_x = 5, .ofs_y = -7},
    {.bitmap_index = 1706, .adv_w = 1078, .box_w = 59, .box_h = 61, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 2621, .adv_w = 973, .box_w = 52, .box_h = 62, .ofs_x = 5, .ofs_y = -2},
    {.bitmap_index = 3427, .adv_w = 256, .box_w = 4, .box_h = 19, .ofs_x = 6, .ofs_y = 43},
    {.bitmap_index = 3446, .adv_w = 433, .box_w = 17, .box_h = 80, .ofs_x = 5, .ofs_y = -13},
    {.bitmap_index = 3846, .adv_w = 433, .box_w = 17, .box_h = 80, .ofs_x = 5, .ofs_y = -13},
    {.bitmap_index = 4246, .adv_w = 545, .box_w = 28, .box_h = 31, .ofs_x = 3, .ofs_y = 28},
    {.bitmap_index = 4463, .adv_w = 712, .box_w = 38, .box_h = 38, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 4843, .adv_w = 397, .box_w = 10, .box_h = 19, .ofs_x = 5, .ofs_y = -11},
    {.bitmap_index = 4900, .adv_w = 589, .box_w = 30, .box_h = 2, .ofs_x = 3, .ofs_y = 23},
    {.bitmap_index = 4916, .adv_w = 396, .box_w = 7, .box_h = 6, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 4928, .adv_w = 657, .box_w = 29, .box_h = 68, .ofs_x = 6, .ofs_y = -7},
    {.bitmap_index = 5472, .adv_w = 717, .box_w = 40, .box_h = 61, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 6082, .adv_w = 461, .box_w = 15, .box_h = 60, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 6322, .adv_w = 717, .box_w = 38, .box_h = 60, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 6922, .adv_w = 717, .box_w = 39, .box_h = 61, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 7532, .adv_w = 717, .box_w = 38, .box_h = 60, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 8132, .adv_w = 717, .box_w = 39, .box_h = 60, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 8732, .adv_w = 717, .box_w = 37, .box_h = 60, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 9332, .adv_w = 640, .box_w = 36, .box_h = 59, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9863, .adv_w = 717, .box_w = 39, .box_h = 61, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 10473, .adv_w = 717, .box_w = 37, .box_h = 60, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 11073, .adv_w = 396, .box_w = 7, .box_h = 42, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 11157, .adv_w = 397, .box_w = 11, .box_h = 54, .ofs_x = 5, .ofs_y = -11},
    {.bitmap_index = 11319, .adv_w = 698, .box_w = 38, .box_h = 40, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 11719, .adv_w = 712, .box_w = 38, .box_h = 21, .ofs_x = 3, .ofs_y = 16},
    {.bitmap_index = 11929, .adv_w = 698, .box_w = 38, .box_h = 40, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 12329, .adv_w = 631, .box_w = 31, .box_h = 60, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 12809, .adv_w = 1171, .box_w = 62, .box_h = 67, .ofs_x = 6, .ofs_y = -7},
    {.bitmap_index = 13881, .adv_w = 822, .box_w = 50, .box_h = 60, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 14661, .adv_w = 765, .box_w = 37, .box_h = 59, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 15251, .adv_w = 945, .box_w = 54, .box_h = 61, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 16105, .adv_w = 872, .box_w = 46, .box_h = 59, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 16813, .adv_w = 722, .box_w = 35, .box_h = 59, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 17344, .adv_w = 695, .box_w = 35, .box_h = 59, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 17875, .adv_w = 1042, .box_w = 59, .box_h = 61, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 18790, .adv_w = 868, .box_w = 42, .box_h = 60, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 19450, .adv_w = 248, .box_w = 3, .box_h = 60, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 19510, .adv_w = 621, .box_w = 31, .box_h = 60, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 19990, .adv_w = 699, .box_w = 37, .box_h = 61, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 20600, .adv_w = 655, .box_w = 35, .box_h = 59, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 21131, .adv_w = 1167, .box_w = 61, .box_h = 60, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 22091, .adv_w = 878, .box_w = 43, .box_h = 60, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 22751, .adv_w = 1091, .box_w = 62, .box_h = 61, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 23727, .adv_w = 735, .box_w = 37, .box_h = 59, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 24317, .adv_w = 1093, .box_w = 62, .box_h = 61, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 25293, .adv_w = 746, .box_w = 38, .box_h = 59, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 25883, .adv_w = 762, .box_w = 42, .box_h = 63, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 26576, .adv_w = 716, .box_w = 43, .box_h = 60, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 27236, .adv_w = 883, .box_w = 43, .box_h = 60, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 27896, .adv_w = 835, .box_w = 52, .box_h = 60, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 28676, .adv_w = 1091, .box_w = 66, .box_h = 60, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 29696, .adv_w = 809, .box_w = 50, .box_h = 60, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30476, .adv_w = 750, .box_w = 47, .box_h = 60, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 31196, .adv_w = 882, .box_w = 46, .box_h = 59, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 31904, .adv_w = 428, .box_w = 16, .box_h = 78, .ofs_x = 7, .ofs_y = -12},
    {.bitmap_index = 32216, .adv_w = 668, .box_w = 37, .box_h = 70, .ofs_x = 2, .ofs_y = -8},
    {.bitmap_index = 32916, .adv_w = 428, .box_w = 17, .box_h = 78, .ofs_x = 3, .ofs_y = -12},
    {.bitmap_index = 33306, .adv_w = 753, .box_w = 37, .box_h = 32, .ofs_x = 5, .ofs_y = 27},
    {.bitmap_index = 33626, .adv_w = 579, .box_w = 41, .box_h = 2, .ofs_x = -2, .ofs_y = -14},
    {.bitmap_index = 33648, .adv_w = 426, .box_w = 13, .box_h = 12, .ofs_x = 7, .ofs_y = 46},
    {.bitmap_index = 33696, .adv_w = 824, .box_w = 44, .box_h = 44, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 34180, .adv_w = 824, .box_w = 44, .box_h = 62, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 34862, .adv_w = 745, .box_w = 42, .box_h = 44, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 35346, .adv_w = 824, .box_w = 44, .box_h = 62, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 36028, .adv_w = 804, .box_w = 45, .box_h = 44, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 36556, .adv_w = 476, .box_w = 26, .box_h = 61, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 36983, .adv_w = 824, .box_w = 44, .box_h = 61, .ofs_x = 3, .ofs_y = -18},
    {.bitmap_index = 37654, .adv_w = 724, .box_w = 36, .box_h = 62, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 38212, .adv_w = 205, .box_w = 3, .box_h = 62, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 38274, .adv_w = 282, .box_w = 16, .box_h = 79, .ofs_x = -4, .ofs_y = -18},
    {.bitmap_index = 38590, .adv_w = 572, .box_w = 31, .box_h = 62, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 39086, .adv_w = 205, .box_w = 3, .box_h = 62, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 39148, .adv_w = 1137, .box_w = 61, .box_h = 44, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 39852, .adv_w = 724, .box_w = 36, .box_h = 44, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 40248, .adv_w = 819, .box_w = 45, .box_h = 44, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 40776, .adv_w = 824, .box_w = 44, .box_h = 62, .ofs_x = 5, .ofs_y = -19},
    {.bitmap_index = 41458, .adv_w = 824, .box_w = 44, .box_h = 62, .ofs_x = 3, .ofs_y = -19},
    {.bitmap_index = 42140, .adv_w = 399, .box_w = 19, .box_h = 44, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 42360, .adv_w = 622, .box_w = 35, .box_h = 46, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 42774, .adv_w = 525, .box_w = 29, .box_h = 56, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 43222, .adv_w = 724, .box_w = 36, .box_h = 44, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 43618, .adv_w = 648, .box_w = 38, .box_h = 44, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 44058, .adv_w = 1055, .box_w = 66, .box_h = 44, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 44806, .adv_w = 625, .box_w = 37, .box_h = 44, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 45246, .adv_w = 685, .box_w = 41, .box_h = 61, .ofs_x = 1, .ofs_y = -18},
    {.bitmap_index = 45917, .adv_w = 681, .box_w = 35, .box_h = 42, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 46295, .adv_w = 517, .box_w = 22, .box_h = 78, .ofs_x = 7, .ofs_y = -12},
    {.bitmap_index = 46763, .adv_w = 236, .box_w = 3, .box_h = 82, .ofs_x = 6, .ofs_y = -17},
    {.bitmap_index = 46845, .adv_w = 517, .box_w = 22, .box_h = 78, .ofs_x = 3, .ofs_y = -12},
    {.bitmap_index = 47313, .adv_w = 768, .box_w = 42, .box_h = 13, .ofs_x = 3, .ofs_y = 21}
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
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 3, 3,
    4, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 6, 7, 0, 8, 0, 9,
    10, 0, 0, 0, 11, 12, 0, 0,
    10, 13, 8, 7, 0, 14, 0, 15,
    16, 17, 18, 19, 1, 0, 0, 0,
    0, 0, 0, 20, 20, 0, 20, 21,
    0, 0, 0, 0, 22, 0, 0, 0,
    20, 23, 0, 24, 25, 26, 0, 27,
    28, 28, 29, 28, 1, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 1,
    0, 0, 0, 0, 0, 2, 0, 3,
    4, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 7, 0, 0, 0,
    7, 0, 0, 8, 0, 0, 0, 0,
    7, 0, 7, 0, 0, 9, 0, 10,
    11, 12, 13, 14, 0, 0, 0, 0,
    0, 0, 15, 0, 15, 15, 15, 16,
    15, 0, 17, 18, 0, 0, 19, 19,
    15, 19, 15, 19, 20, 21, 19, 22,
    23, 24, 25, 26, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -32, -22, -22, -22, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -22, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -22, -22, -22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -86, -97, -32, 0, -108, 0,
    0, 0, 0, 0, 0, 0, 0, -54,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -32, -32, -22,
    0, -22, -22, -54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -75, 0, 0,
    0, 0, 0, 0, 0, 0, -43, 0,
    -22, -65, -22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -32, -32, -32, 0, -22, -32, -54,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -43, 0, 0, 0, 0, 0,
    0, 0, -43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -43, 0, -108, -108,
    -54, 0, -108, 0, -43, 0, 0, 0,
    0, 0, 0, -65, -65, 0, -65, 0,
    0, 0, 0, 0, 0, -65, 0, 0,
    0, 0, 0, 0, 0, 0, -32, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -86,
    -32, -65, 0, 0, 0, 0, 0, 0,
    -119, 0, -11, -65, -119, -108, -54, -75,
    -75, -75, -75, -75, 0, 0, 0, 0,
    0, -97, -32, 0, 0, 0, 0, 0,
    0, 0, -75, 0, -22, -43, -22, -75,
    -22, 0, 0, 0, 0, -22, 0, 0,
    0, 0, 0, -32, 0, 0, 0, 0,
    0, 0, 0, 0, -32, 0, -11, -32,
    -11, -43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -22, 0,
    0, 0, 0, 0, 0, 0, -43, 0,
    0, 0, 0, 0, -22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -65,
    -32, 0, 0, 0, 0, 0, 0, 0,
    -108, 0, -32, -43, -32, -86, -32, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -54, 0, 0, 0, 0, 0,
    0, 0, -43, 0, 0, 0, 0, 0,
    -22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -119, -75,
    -32, -43, -108, -43, 0, -22, 0, 0,
    0, 0, -43, -22, -22, -22, -22, -22,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -32, 0,
    0, -43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -119, -75, -32, -32,
    -86, -43, 0, -22, 0, 0, 0, 0,
    -43, -22, -22, -22, -22, -22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -22, 0, 0, 0,
    0, -22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -108, -75, -43, 0, -86, 0, 0, 0,
    0, 0, 0, 0, -22, 0, 0, 0,
    -22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -43, 0, 0, 0, 0, -22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -54, 0, 0, -75, 0, 0, 0,
    0, 0, -22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -75, 0,
    0, 0, 0, 0, -22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -75, 0, 0, 0, 0, 0, -22, 0,
    0, 0, 0, -22, 0, 0, 0, 0,
    0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 29,
    .right_class_cnt     = 26,
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
    .kern_scale = 19,
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
const lv_font_t ui_font_Alimm_80 = {
#else
lv_font_t ui_font_Alimm_80 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 86,          /*The maximum line height required by the font*/
    .base_line = 19,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -8,
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



#endif /*#if UI_FONT_ALIMM_80*/
