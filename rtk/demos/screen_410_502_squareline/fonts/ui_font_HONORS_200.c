/*******************************************************************************
 * Size: 200 px
 * Bpp: 2
 * Opts: --byte-align --no-compress --no-prefilter --bpp 2 --size 200 --font G:/LVGL/rtk_scripts/scripts/built_in_font/sq/ttf/HONORSans-Demibold.ttf -r 0x20-0x7F --format lvgl -o G:/LVGL/rtk_scripts/scripts/built_in_font/sq/ttf\ui_font_HONORS_200.c --force-fast-kern-format
 ******************************************************************************/

#include "../ui.h"



#ifndef UI_FONT_HONORS_200
#define UI_FONT_HONORS_200 1
#endif

#if UI_FONT_HONORS_200

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
    {.bitmap_index = 0, .adv_w = 998, .box_w = 32, .box_h = 148, .ofs_x = 15, .ofs_y = 1},
    {.bitmap_index = 1332, .adv_w = 1194, .box_w = 59, .box_h = 54, .ofs_x = 8, .ofs_y = 96},
    {.bitmap_index = 2142, .adv_w = 2038, .box_w = 119, .box_h = 147, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 6552, .adv_w = 1846, .box_w = 108, .box_h = 181, .ofs_x = 4, .ofs_y = -15},
    {.bitmap_index = 11620, .adv_w = 2854, .box_w = 162, .box_h = 149, .ofs_x = 8, .ofs_y = 1},
    {.bitmap_index = 17729, .adv_w = 2240, .box_w = 137, .box_h = 154, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 23119, .adv_w = 586, .box_w = 21, .box_h = 54, .ofs_x = 8, .ofs_y = 96},
    {.bitmap_index = 23443, .adv_w = 1027, .box_w = 50, .box_h = 185, .ofs_x = 12, .ofs_y = -18},
    {.bitmap_index = 25848, .adv_w = 1027, .box_w = 50, .box_h = 185, .ofs_x = 2, .ofs_y = -18},
    {.bitmap_index = 28253, .adv_w = 1536, .box_w = 86, .box_h = 81, .ofs_x = 5, .ofs_y = 68},
    {.bitmap_index = 30035, .adv_w = 1904, .box_w = 107, .box_h = 108, .ofs_x = 6, .ofs_y = 13},
    {.bitmap_index = 32951, .adv_w = 832, .box_w = 32, .box_h = 59, .ofs_x = 10, .ofs_y = -26},
    {.bitmap_index = 33482, .adv_w = 1574, .box_w = 76, .box_h = 21, .ofs_x = 11, .ofs_y = 57},
    {.bitmap_index = 33902, .adv_w = 918, .box_w = 33, .box_h = 32, .ofs_x = 12, .ofs_y = 1},
    {.bitmap_index = 34190, .adv_w = 1357, .box_w = 79, .box_h = 147, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 37130, .adv_w = 1898, .box_w = 98, .box_h = 153, .ofs_x = 10, .ofs_y = 0},
    {.bitmap_index = 40955, .adv_w = 1898, .box_w = 54, .box_h = 147, .ofs_x = 24, .ofs_y = 2},
    {.bitmap_index = 43013, .adv_w = 1898, .box_w = 96, .box_h = 150, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 46763, .adv_w = 1898, .box_w = 99, .box_h = 153, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 50588, .adv_w = 1898, .box_w = 100, .box_h = 147, .ofs_x = 9, .ofs_y = 2},
    {.bitmap_index = 54410, .adv_w = 1898, .box_w = 99, .box_h = 150, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 58160, .adv_w = 1898, .box_w = 101, .box_h = 150, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 62060, .adv_w = 1898, .box_w = 94, .box_h = 147, .ofs_x = 13, .ofs_y = 3},
    {.bitmap_index = 65588, .adv_w = 1898, .box_w = 102, .box_h = 153, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 69566, .adv_w = 1898, .box_w = 101, .box_h = 150, .ofs_x = 9, .ofs_y = 2},
    {.bitmap_index = 73466, .adv_w = 998, .box_w = 32, .box_h = 106, .ofs_x = 15, .ofs_y = 1},
    {.bitmap_index = 74420, .adv_w = 989, .box_w = 32, .box_h = 134, .ofs_x = 15, .ofs_y = -26},
    {.bitmap_index = 75626, .adv_w = 2077, .box_w = 108, .box_h = 120, .ofs_x = 8, .ofs_y = 8},
    {.bitmap_index = 78986, .adv_w = 1894, .box_w = 108, .box_h = 58, .ofs_x = 5, .ofs_y = 39},
    {.bitmap_index = 80610, .adv_w = 2077, .box_w = 108, .box_h = 120, .ofs_x = 14, .ofs_y = 8},
    {.bitmap_index = 83970, .adv_w = 1680, .box_w = 92, .box_h = 151, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 87594, .adv_w = 2576, .box_w = 152, .box_h = 154, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 93600, .adv_w = 2272, .box_w = 142, .box_h = 147, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 98892, .adv_w = 2115, .box_w = 112, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 103155, .adv_w = 2246, .box_w = 131, .box_h = 153, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 108204, .adv_w = 2371, .box_w = 128, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 113055, .adv_w = 1981, .box_w = 104, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 117024, .adv_w = 1830, .box_w = 98, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 120699, .adv_w = 2310, .box_w = 131, .box_h = 153, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 125748, .adv_w = 2282, .box_w = 120, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 130305, .adv_w = 784, .box_w = 27, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 131334, .adv_w = 1622, .box_w = 87, .box_h = 150, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 134634, .adv_w = 2109, .box_w = 120, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 139191, .adv_w = 1782, .box_w = 100, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 143013, .adv_w = 2813, .box_w = 153, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 148746, .adv_w = 2307, .box_w = 122, .box_h = 147, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 153303, .adv_w = 2541, .box_w = 146, .box_h = 153, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 158964, .adv_w = 2054, .box_w = 111, .box_h = 147, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 163080, .adv_w = 2541, .box_w = 146, .box_h = 165, .ofs_x = 6, .ofs_y = -12},
    {.bitmap_index = 169185, .adv_w = 2176, .box_w = 117, .box_h = 148, .ofs_x = 14, .ofs_y = 2},
    {.bitmap_index = 173625, .adv_w = 1859, .box_w = 107, .box_h = 153, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 177756, .adv_w = 1891, .box_w = 114, .box_h = 148, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 182048, .adv_w = 2317, .box_w = 119, .box_h = 150, .ofs_x = 13, .ofs_y = 0},
    {.bitmap_index = 186548, .adv_w = 2157, .box_w = 135, .box_h = 147, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 191546, .adv_w = 3181, .box_w = 196, .box_h = 147, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 198896, .adv_w = 2125, .box_w = 131, .box_h = 147, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 203747, .adv_w = 2054, .box_w = 128, .box_h = 147, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 208598, .adv_w = 1872, .box_w = 109, .box_h = 147, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 212714, .adv_w = 1046, .box_w = 44, .box_h = 185, .ofs_x = 21, .ofs_y = -18},
    {.bitmap_index = 214934, .adv_w = 1357, .box_w = 79, .box_h = 147, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 217874, .adv_w = 1046, .box_w = 43, .box_h = 185, .ofs_x = 1, .ofs_y = -18},
    {.bitmap_index = 219909, .adv_w = 1904, .box_w = 111, .box_h = 83, .ofs_x = 4, .ofs_y = 67},
    {.bitmap_index = 222233, .adv_w = 1738, .box_w = 109, .box_h = 19, .ofs_x = 0, .ofs_y = -18},
    {.bitmap_index = 222765, .adv_w = 1091, .box_w = 44, .box_h = 32, .ofs_x = 9, .ofs_y = 126},
    {.bitmap_index = 223149, .adv_w = 1757, .box_w = 94, .box_h = 110, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 225789, .adv_w = 1952, .box_w = 106, .box_h = 155, .ofs_x = 11, .ofs_y = 1},
    {.bitmap_index = 229974, .adv_w = 1658, .box_w = 97, .box_h = 110, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 232724, .adv_w = 1949, .box_w = 106, .box_h = 155, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 236909, .adv_w = 1779, .box_w = 101, .box_h = 110, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 239769, .adv_w = 1040, .box_w = 70, .box_h = 155, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 242559, .adv_w = 1936, .box_w = 104, .box_h = 153, .ofs_x = 6, .ofs_y = -43},
    {.bitmap_index = 246690, .adv_w = 1862, .box_w = 95, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 250362, .adv_w = 851, .box_w = 31, .box_h = 151, .ofs_x = 12, .ofs_y = 2},
    {.bitmap_index = 251570, .adv_w = 851, .box_w = 54, .box_h = 196, .ofs_x = -11, .ofs_y = -43},
    {.bitmap_index = 254314, .adv_w = 1770, .box_w = 100, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 258292, .adv_w = 762, .box_w = 25, .box_h = 153, .ofs_x = 11, .ofs_y = 2},
    {.bitmap_index = 259363, .adv_w = 2928, .box_w = 161, .box_h = 108, .ofs_x = 12, .ofs_y = 2},
    {.bitmap_index = 263791, .adv_w = 1859, .box_w = 94, .box_h = 108, .ofs_x = 12, .ofs_y = 2},
    {.bitmap_index = 266383, .adv_w = 1872, .box_w = 106, .box_h = 110, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 269353, .adv_w = 1962, .box_w = 105, .box_h = 151, .ofs_x = 12, .ofs_y = -41},
    {.bitmap_index = 273430, .adv_w = 1962, .box_w = 105, .box_h = 151, .ofs_x = 6, .ofs_y = -41},
    {.bitmap_index = 277507, .adv_w = 1222, .box_w = 66, .box_h = 108, .ofs_x = 12, .ofs_y = 2},
    {.bitmap_index = 279343, .adv_w = 1520, .box_w = 87, .box_h = 110, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 281763, .adv_w = 1206, .box_w = 74, .box_h = 140, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 284423, .adv_w = 1834, .box_w = 93, .box_h = 108, .ofs_x = 10, .ofs_y = 1},
    {.bitmap_index = 287015, .adv_w = 1654, .box_w = 103, .box_h = 106, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 289771, .adv_w = 2509, .box_w = 155, .box_h = 106, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 293905, .adv_w = 1805, .box_w = 109, .box_h = 106, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 296873, .adv_w = 1686, .box_w = 104, .box_h = 151, .ofs_x = 1, .ofs_y = -43},
    {.bitmap_index = 300950, .adv_w = 1565, .box_w = 89, .box_h = 106, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 303388, .adv_w = 1043, .box_w = 63, .box_h = 185, .ofs_x = 2, .ofs_y = -18},
    {.bitmap_index = 306348, .adv_w = 765, .box_w = 23, .box_h = 169, .ofs_x = 12, .ofs_y = -8},
    {.bitmap_index = 307362, .adv_w = 1043, .box_w = 64, .box_h = 185, .ofs_x = 0, .ofs_y = -18},
    {.bitmap_index = 310507, .adv_w = 1904, .box_w = 109, .box_h = 36, .ofs_x = 5, .ofs_y = 50}
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
    .glyph_bitmap = UI_FONT_HONORS_200_GLYPH_BITMAP_BIN,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
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
const lv_font_t ui_font_HONORS_200 =
{
#else
lv_font_t ui_font_HONORS_200 =
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
    .underline_position = -20,
    .underline_thickness = 10,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HONORS_200*/
