/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/
#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FONT_ICON_16
#define FONT_ICON_16 1
#endif

#if FONT_ICON_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+F0C2 "" */
    0x0, 0x0, 0x2, 0x9e, 0xfe, 0x91, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xfa, 0x8a, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x0, 0x1, 0xec, 0x10,
    0x0, 0x1d, 0xff, 0xc5, 0x0, 0x0, 0x0, 0x8,
    0xf1, 0x0, 0x0, 0x2, 0xc8, 0xdf, 0x50, 0x0,
    0x0, 0x4e, 0xa0, 0x0, 0x0, 0x0, 0x0, 0xd,
    0xc0, 0x0, 0x8, 0xfd, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xf7, 0x0, 0x4f, 0x90, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xbf, 0xb0, 0xbd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xf7,
    0xe9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xbd, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0xbd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbd, 0x4f, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xf8,
    0x8, 0xfd, 0x97, 0x77, 0x77, 0x77, 0x77, 0x78,
    0xbf, 0xc0, 0x0, 0x4b, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd8, 0x0,

    /* U+F0ED "" */
    0x0, 0x0, 0x2, 0x9e, 0xfe, 0x91, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xe9, 0x8b, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x0, 0x1, 0xeb, 0x0,
    0x0, 0x3e, 0xff, 0xc5, 0x0, 0x0, 0x0, 0x8,
    0xd0, 0x0, 0x0, 0x4, 0xb8, 0xdf, 0x50, 0x0,
    0x0, 0x4e, 0x80, 0x0, 0xd8, 0x0, 0x0, 0xe,
    0xc0, 0x0, 0x8, 0xfd, 0x30, 0x0, 0xe9, 0x0,
    0x0, 0xa, 0xf7, 0x0, 0x4f, 0x90, 0x0, 0x0,
    0xe9, 0x0, 0x0, 0x6, 0xbf, 0xb0, 0xbd, 0x0,
    0x9, 0xc1, 0xe9, 0x3f, 0x40, 0x0, 0x6, 0xf7,
    0xe9, 0x0, 0x3, 0xfc, 0xfc, 0xfd, 0x10, 0x0,
    0x0, 0xbd, 0xf9, 0x0, 0x0, 0x3f, 0xff, 0xd1,
    0x0, 0x0, 0x0, 0x8f, 0xbd, 0x0, 0x0, 0x3,
    0xfd, 0x10, 0x0, 0x0, 0x0, 0xbd, 0x4f, 0xa0,
    0x0, 0x0, 0x31, 0x0, 0x0, 0x0, 0x5, 0xf8,
    0x8, 0xfd, 0x97, 0x77, 0x77, 0x77, 0x77, 0x78,
    0xbf, 0xc0, 0x0, 0x4b, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd8, 0x0,

    /* U+F0EE "" */
    0x0, 0x0, 0x2, 0x9e, 0xfe, 0x91, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xe9, 0x8b, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x0, 0x1, 0xeb, 0x0,
    0x0, 0x3e, 0xff, 0xc5, 0x0, 0x0, 0x0, 0x8,
    0xd0, 0x0, 0x31, 0x4, 0xb8, 0xdf, 0x50, 0x0,
    0x0, 0x4e, 0x80, 0x4, 0xfd, 0x10, 0x0, 0xe,
    0xc0, 0x0, 0x8, 0xfd, 0x30, 0x4f, 0xff, 0xd1,
    0x0, 0xa, 0xf7, 0x0, 0x4f, 0x90, 0x4, 0xfc,
    0xfc, 0xfd, 0x10, 0x6, 0xbf, 0xb0, 0xbd, 0x0,
    0x9, 0xc1, 0xe9, 0x3f, 0x40, 0x0, 0x6, 0xf7,
    0xe9, 0x0, 0x0, 0x0, 0xe9, 0x0, 0x0, 0x0,
    0x0, 0xbd, 0xf9, 0x0, 0x0, 0x0, 0xe9, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0xbd, 0x0, 0x0, 0x0,
    0xd8, 0x0, 0x0, 0x0, 0x0, 0xbd, 0x4f, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xf8,
    0x8, 0xfd, 0x97, 0x77, 0x77, 0x77, 0x77, 0x78,
    0xbf, 0xc0, 0x0, 0x4b, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd8, 0x0,

    /* U+F1EB "" */
    0x0, 0x0, 0x3, 0x8c, 0xdf, 0xfd, 0xc8, 0x30,
    0x0, 0x0, 0x0, 0x6, 0xef, 0xfb, 0x98, 0x89,
    0xbf, 0xfe, 0x60, 0x0, 0x3, 0xdf, 0xc4, 0x0,
    0x0, 0x0, 0x0, 0x4b, 0xfd, 0x30, 0x7f, 0xd4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3d, 0xf7,
    0xba, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xab, 0x0, 0x0, 0x0, 0x49, 0xdf, 0xfd,
    0x94, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3c, 0xfe,
    0xa8, 0x8a, 0xef, 0xc3, 0x0, 0x0, 0x0, 0x4,
    0xfd, 0x50, 0x0, 0x0, 0x5, 0xdf, 0x40, 0x0,
    0x0, 0x1, 0x80, 0x0, 0x0, 0x0, 0x0, 0x8,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0xe7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xfb, 0xbf, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xf0, 0xf, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xfb, 0xbf, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0xe7,
    0x0, 0x0, 0x0, 0x0,

    /* U+F6AC "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0x90, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xfc,
    0x10, 0x18, 0xce, 0xff, 0xec, 0x94, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xe4, 0x6, 0xc9, 0x88, 0x9c,
    0xff, 0xe7, 0x0, 0x0, 0x0, 0x2, 0xdf, 0x70,
    0x0, 0x0, 0x0, 0x4, 0xbf, 0xe4, 0x0, 0x7,
    0xc1, 0xa, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xdf, 0x70, 0xb, 0xa0, 0x0, 0x6f, 0xd2, 0x0,
    0x0, 0x0, 0x0, 0xa, 0xb0, 0x0, 0x0, 0x0,
    0x3, 0xef, 0x50, 0x29, 0x50, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0x90, 0x1c, 0xf8, 0x2, 0xdd,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xd3, 0x0,
    0x8f, 0xc1, 0xa, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x18, 0x0, 0x0, 0x5, 0xfe, 0x30, 0x61, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x80, 0x2d,
    0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xb7, 0x10, 0xaf, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0xe2, 0x7, 0xfd,
    0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xbb,
    0xf3, 0x0, 0x4e, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xee, 0x60, 0x0, 0x1, 0xcf, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+F977 "亮" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6c, 0xff, 0xd7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xb6, 0x6b,
    0xfb, 0x21, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x60,
    0x0, 0x5, 0xff, 0xfa, 0x0, 0x0, 0x0, 0xe,
    0xa0, 0x0, 0x0, 0x6, 0x47, 0xf9, 0x0, 0x0,
    0x1b, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x1e, 0xe7, 0x0, 0x0, 0x0, 0x8, 0x0,
    0x6f, 0xd3, 0x9, 0xf2, 0x0, 0x21, 0x0, 0xb,
    0xe2, 0x1, 0x4c, 0xf3, 0xd8, 0x0, 0xb, 0xd1,
    0xb, 0xe2, 0x0, 0x0, 0xe, 0xae, 0x50, 0x0,
    0x1d, 0xdb, 0xe2, 0x0, 0x0, 0x0, 0x8e, 0xd8,
    0x0, 0x0, 0x1d, 0xe2, 0x0, 0x0, 0x0, 0x9,
    0xd8, 0xf3, 0x0, 0x0, 0x12, 0x0, 0x0, 0x0,
    0x1, 0xe9, 0xd, 0xf8, 0x54, 0x43, 0x33, 0x33,
    0x33, 0x36, 0xde, 0x10, 0x1a, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x20, 0x0, 0x0, 0x12,
    0x22, 0x22, 0x22, 0x22, 0x10, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 320, .box_w = 20, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 140, .adv_w = 320, .box_w = 20, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 280, .adv_w = 320, .box_w = 20, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 420, .adv_w = 320, .box_w = 20, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 560, .adv_w = 320, .box_w = 22, .box_h = 18, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 758, .adv_w = 256, .box_w = 19, .box_h = 15, .ofs_x = 0, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x2b, 0x2c, 0x129, 0x5ea, 0x8b5
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 61634, .range_length = 2230, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 6, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t font_icon_16 = {
#else
lv_font_t font_icon_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_ICON_16*/

