/*******************************************************************************
 * Size: 12 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/
#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FONT_EN_12
#define FONT_EN_12 1
#endif

#if FONT_EN_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xf, 0x20, 0xf2, 0xf, 0x10, 0xe0, 0xc, 0x0,
    0xa0, 0x4, 0x1, 0xf3,

    /* U+0022 "\"" */
    0xb2, 0xcb, 0x2c, 0xa2, 0xb0,

    /* U+0023 "#" */
    0x0, 0xa2, 0x57, 0x0, 0xd, 0x8, 0x40, 0x3c,
    0xfc, 0xec, 0x30, 0x2b, 0xc, 0x0, 0x3, 0x90,
    0xd0, 0x7, 0xdd, 0xcf, 0xb0, 0x8, 0x43, 0x90,
    0x0, 0xb2, 0x57, 0x0,

    /* U+0024 "$" */
    0x0, 0xa, 0x0, 0x0, 0x7e, 0xfc, 0x10, 0x3d,
    0x1a, 0x7b, 0x6, 0xb0, 0xa0, 0x40, 0x2e, 0x9b,
    0x0, 0x0, 0x17, 0xef, 0x70, 0x10, 0xa, 0x2e,
    0x28, 0x70, 0xa0, 0xd3, 0x2e, 0x8c, 0x9c, 0x0,
    0x17, 0xd5, 0x0, 0x0, 0x5, 0x0, 0x0,

    /* U+0025 "%" */
    0x3b, 0xb5, 0x0, 0xa, 0x50, 0xb2, 0x1d, 0x0,
    0x78, 0x0, 0xd0, 0xe, 0x4, 0xb0, 0x0, 0xb3,
    0x2c, 0x2c, 0x3a, 0xa2, 0x2a, 0xa3, 0xc2, 0xc2,
    0x3b, 0x0, 0xb, 0x40, 0xe0, 0xd, 0x0, 0x87,
    0x0, 0xd1, 0x2b, 0x5, 0xa0, 0x0, 0x5b, 0xb3,

    /* U+0026 "&" */
    0x1, 0xce, 0xb1, 0x0, 0x8, 0x90, 0xa6, 0x0,
    0x4, 0xc1, 0xd2, 0x0, 0x2, 0xdf, 0x30, 0x0,
    0x2d, 0x48, 0xa6, 0x80, 0x88, 0x0, 0xaf, 0x40,
    0x7c, 0x0, 0x7f, 0x70, 0x9, 0xde, 0xa2, 0xe5,

    /* U+0027 "'" */
    0xb1, 0xb1, 0xb1,

    /* U+0028 "(" */
    0x0, 0xb0, 0x8, 0x60, 0xe, 0x0, 0x4c, 0x0,
    0x6a, 0x0, 0x6a, 0x0, 0x3c, 0x0, 0xe, 0x0,
    0x7, 0x60, 0x0, 0xb0,

    /* U+0029 ")" */
    0xb, 0x10, 0x4, 0x90, 0x0, 0xe1, 0x0, 0xa5,
    0x0, 0x97, 0x0, 0x98, 0x0, 0xa5, 0x0, 0xe1,
    0x4, 0xa0, 0xb, 0x10,

    /* U+002A "*" */
    0x3, 0x60, 0x5b, 0xd7, 0xa, 0x92, 0x0, 0x0,

    /* U+002B "+" */
    0x0, 0xd, 0x0, 0x0, 0x0, 0xd0, 0x0, 0x0,
    0xd, 0x0, 0x5, 0xcc, 0xfc, 0xc7, 0x0, 0xd,
    0x0, 0x0, 0x0, 0xd0, 0x0,

    /* U+002C "," */
    0x41, 0xf5, 0x73, 0x60,

    /* U+002D "-" */
    0x5e, 0xee, 0x0,

    /* U+002E "." */
    0x41, 0xf5,

    /* U+002F "/" */
    0x0, 0x0, 0xc0, 0x0, 0x5, 0x80, 0x0, 0xc,
    0x10, 0x0, 0x3a, 0x0, 0x0, 0xa3, 0x0, 0x1,
    0xc0, 0x0, 0x8, 0x50, 0x0, 0xc, 0x0, 0x0,

    /* U+0030 "0" */
    0x5, 0xdd, 0xc2, 0x2, 0xe2, 0x7, 0xc0, 0x6b,
    0x0, 0xf, 0x7, 0x90, 0x0, 0xe2, 0x79, 0x0,
    0xe, 0x26, 0xb0, 0x0, 0xf0, 0x1f, 0x20, 0x7c,
    0x0, 0x6d, 0xdc, 0x20,

    /* U+0031 "1" */
    0x1, 0xc4, 0xbd, 0xf4, 0x0, 0xc4, 0x0, 0xc4,
    0x0, 0xc4, 0x0, 0xc4, 0x0, 0xc4, 0x0, 0xc4,

    /* U+0032 "2" */
    0x6, 0xdd, 0xb2, 0x3e, 0x10, 0x7b, 0x57, 0x0,
    0x3d, 0x0, 0x0, 0xa9, 0x0, 0x2c, 0x90, 0x7,
    0xc4, 0x0, 0x4c, 0x0, 0x0, 0x9e, 0xdd, 0xdb,

    /* U+0033 "3" */
    0x7, 0xdd, 0xb2, 0x3, 0xd0, 0x8, 0xa0, 0x23,
    0x0, 0x89, 0x0, 0x4, 0xde, 0x20, 0x0, 0x0,
    0x6e, 0x6, 0x50, 0x0, 0xf1, 0x5c, 0x0, 0x6d,
    0x0, 0x8d, 0xdb, 0x20,

    /* U+0034 "4" */
    0x0, 0x3, 0xf0, 0x0, 0x1, 0xbf, 0x0, 0x0,
    0xa2, 0xf0, 0x0, 0x76, 0xf, 0x0, 0x4a, 0x0,
    0xf0, 0x9, 0xdd, 0xdf, 0xd2, 0x0, 0x0, 0xf0,
    0x0, 0x0, 0xf, 0x0,

    /* U+0035 "5" */
    0xa, 0xdd, 0xd8, 0x0, 0xd0, 0x0, 0x0, 0x1e,
    0xbd, 0xa1, 0x3, 0xa1, 0x9, 0xb0, 0x0, 0x0,
    0xf, 0x4, 0x30, 0x0, 0xf0, 0x5d, 0x10, 0x8b,
    0x0, 0x7d, 0xda, 0x10,

    /* U+0036 "6" */
    0x3, 0xcd, 0xc3, 0x0, 0xe4, 0x5, 0xc0, 0x5b,
    0x0, 0x2, 0x7, 0xaa, 0xdc, 0x30, 0x8f, 0x30,
    0x4e, 0x6, 0xb0, 0x0, 0xe3, 0x1e, 0x20, 0x4e,
    0x0, 0x4d, 0xdc, 0x40,

    /* U+0037 "7" */
    0x5e, 0xee, 0xef, 0x10, 0x0, 0x7, 0x80, 0x0,
    0x3, 0xc0, 0x0, 0x0, 0xd3, 0x0, 0x0, 0x5b,
    0x0, 0x0, 0xc, 0x50, 0x0, 0x0, 0xf1, 0x0,
    0x0, 0x3e, 0x0, 0x0,

    /* U+0038 "8" */
    0x6, 0xdd, 0xc3, 0x1, 0xf1, 0x6, 0xc0, 0x1e,
    0x20, 0x7a, 0x0, 0x7f, 0xef, 0x20, 0x4e, 0x20,
    0x6e, 0x7, 0x90, 0x0, 0xf2, 0x4d, 0x10, 0x4e,
    0x0, 0x6d, 0xdc, 0x30,

    /* U+0039 "9" */
    0x7, 0xdd, 0xa1, 0x5, 0xc0, 0x7, 0xa0, 0x88,
    0x0, 0x2f, 0x5, 0xd1, 0x8, 0xf1, 0x7, 0xdd,
    0x6f, 0x11, 0x20, 0x2, 0xf0, 0x3d, 0x10, 0xa9,
    0x0, 0x7d, 0xea, 0x0,

    /* U+003A ":" */
    0xf5, 0x41, 0x0, 0x0, 0x41, 0xf5,

    /* U+003B ";" */
    0xf5, 0x41, 0x0, 0x0, 0x41, 0xf5, 0x73, 0x60,

    /* U+003C "<" */
    0x0, 0x0, 0x5, 0x60, 0x1, 0x7b, 0x60, 0x29,
    0xa4, 0x0, 0x4, 0xc7, 0x10, 0x0, 0x0, 0x5b,
    0x92, 0x0, 0x0, 0x2, 0x97, 0x0, 0x0, 0x0,
    0x0,

    /* U+003D "=" */
    0x5c, 0xcc, 0xcc, 0x70, 0x0, 0x0, 0x0, 0x5c,
    0xcc, 0xcc, 0x70,

    /* U+003E ">" */
    0x56, 0x0, 0x0, 0x0, 0x5b, 0x82, 0x0, 0x0,
    0x3, 0xaa, 0x30, 0x0, 0x6, 0xc6, 0x1, 0x8b,
    0x60, 0x5, 0xa4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+003F "?" */
    0x4, 0xdd, 0xc2, 0x1e, 0x10, 0x7b, 0x27, 0x0,
    0x4c, 0x0, 0x1, 0xc5, 0x0, 0xc, 0x50, 0x0,
    0x2d, 0x0, 0x0, 0x14, 0x0, 0x0, 0x6f, 0x0,

    /* U+0040 "@" */
    0x0, 0x4a, 0xaa, 0xa4, 0x0, 0x7, 0x95, 0xbb,
    0x7c, 0x70, 0x2b, 0x4c, 0x12, 0xf0, 0xd0, 0x76,
    0xa4, 0x1, 0xa0, 0xd0, 0x75, 0xb3, 0xa, 0x66,
    0x70, 0x2b, 0x2a, 0x96, 0xa7, 0x40, 0x8, 0x90,
    0x0, 0x1b, 0x20, 0x0, 0x5b, 0xaa, 0x92, 0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0xeb, 0x0, 0x0, 0x0, 0x5c, 0xf2,
    0x0, 0x0, 0xc, 0x6a, 0x90, 0x0, 0x3, 0xf0,
    0x4f, 0x0, 0x0, 0x99, 0x0, 0xe6, 0x0, 0x1f,
    0xee, 0xef, 0xd0, 0x7, 0xc0, 0x0, 0x1f, 0x30,
    0xd5, 0x0, 0x0, 0x9a,

    /* U+0042 "B" */
    0x1f, 0xee, 0xee, 0x80, 0x1f, 0x10, 0x1, 0xe3,
    0x1f, 0x10, 0x2, 0xe1, 0x1f, 0xee, 0xef, 0x90,
    0x1f, 0x10, 0x1, 0xc7, 0x1f, 0x10, 0x0, 0x7a,
    0x1f, 0x10, 0x0, 0xc6, 0x1f, 0xee, 0xee, 0x90,

    /* U+0043 "C" */
    0x0, 0x8d, 0xed, 0x80, 0x0, 0xab, 0x10, 0x1a,
    0xa0, 0x3e, 0x10, 0x0, 0x18, 0x7, 0xb0, 0x0,
    0x0, 0x0, 0x7b, 0x0, 0x0, 0x0, 0x3, 0xe0,
    0x0, 0x1, 0xf0, 0xb, 0xb1, 0x1, 0xb9, 0x0,
    0x9, 0xee, 0xd7, 0x0,

    /* U+0044 "D" */
    0x1f, 0xee, 0xec, 0x40, 0x1f, 0x10, 0x4, 0xe5,
    0x1f, 0x10, 0x0, 0x6c, 0x1f, 0x10, 0x0, 0x3f,
    0x1f, 0x10, 0x0, 0x3e, 0x1f, 0x10, 0x0, 0x7b,
    0x1f, 0x10, 0x4, 0xe4, 0x1f, 0xee, 0xec, 0x40,

    /* U+0045 "E" */
    0x1f, 0xee, 0xee, 0xc1, 0xf1, 0x0, 0x0, 0x1f,
    0x10, 0x0, 0x1, 0xfe, 0xee, 0xe7, 0x1f, 0x10,
    0x0, 0x1, 0xf1, 0x0, 0x0, 0x1f, 0x10, 0x0,
    0x1, 0xfe, 0xee, 0xec,

    /* U+0046 "F" */
    0x1f, 0xee, 0xee, 0x81, 0xf1, 0x0, 0x0, 0x1f,
    0x10, 0x0, 0x1, 0xfe, 0xee, 0xe0, 0x1f, 0x10,
    0x0, 0x1, 0xf1, 0x0, 0x0, 0x1f, 0x10, 0x0,
    0x1, 0xf1, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x7d, 0xee, 0xa2, 0x0, 0xac, 0x20, 0x6,
    0xe0, 0x2f, 0x10, 0x0, 0x1, 0x6, 0xb0, 0x5,
    0xee, 0xe5, 0x7b, 0x0, 0x0, 0xb, 0x53, 0xf1,
    0x0, 0x0, 0xe5, 0xa, 0xc2, 0x1, 0xbf, 0x50,
    0x7, 0xde, 0xd7, 0x75,

    /* U+0048 "H" */
    0x1f, 0x10, 0x0, 0x6b, 0x1f, 0x10, 0x0, 0x6b,
    0x1f, 0x10, 0x0, 0x6b, 0x1f, 0xee, 0xee, 0xfb,
    0x1f, 0x10, 0x0, 0x6b, 0x1f, 0x10, 0x0, 0x6b,
    0x1f, 0x10, 0x0, 0x6b, 0x1f, 0x10, 0x0, 0x6b,

    /* U+0049 "I" */
    0xf, 0x20, 0xf2, 0xf, 0x20, 0xf2, 0xf, 0x20,
    0xf2, 0xf, 0x20, 0xf2,

    /* U+004A "J" */
    0x0, 0x0, 0xd4, 0x0, 0x0, 0xd4, 0x0, 0x0,
    0xd4, 0x0, 0x0, 0xd4, 0x0, 0x0, 0xd4, 0x95,
    0x0, 0xd4, 0x9a, 0x1, 0xf2, 0x1b, 0xee, 0x70,

    /* U+004B "K" */
    0x1f, 0x10, 0x3, 0xe5, 0x1, 0xf1, 0x4, 0xe4,
    0x0, 0x1f, 0x15, 0xe3, 0x0, 0x1, 0xf7, 0xf8,
    0x0, 0x0, 0x1f, 0xc3, 0xe4, 0x0, 0x1, 0xf1,
    0x5, 0xe2, 0x0, 0x1f, 0x10, 0x8, 0xd0, 0x1,
    0xf1, 0x0, 0xc, 0xa0,

    /* U+004C "L" */
    0x1f, 0x10, 0x0, 0x1, 0xf1, 0x0, 0x0, 0x1f,
    0x10, 0x0, 0x1, 0xf1, 0x0, 0x0, 0x1f, 0x10,
    0x0, 0x1, 0xf1, 0x0, 0x0, 0x1f, 0x10, 0x0,
    0x1, 0xfe, 0xee, 0xe8,

    /* U+004D "M" */
    0xf, 0xb0, 0x0, 0x4, 0xf7, 0xf, 0xe1, 0x0,
    0xa, 0xe7, 0xf, 0x88, 0x0, 0x1e, 0x97, 0xf,
    0x2e, 0x0, 0x78, 0x97, 0xf, 0xa, 0x50, 0xd2,
    0x97, 0xf, 0x4, 0xb4, 0xb0, 0x97, 0xf, 0x0,
    0xdc, 0x50, 0x97, 0xf, 0x0, 0x7e, 0x0, 0x97,

    /* U+004E "N" */
    0x1f, 0x70, 0x0, 0x5c, 0x1f, 0xe3, 0x0, 0x5c,
    0x1f, 0x5d, 0x0, 0x5c, 0x1f, 0xa, 0x90, 0x5c,
    0x1f, 0x0, 0xd4, 0x5c, 0x1f, 0x0, 0x4e, 0x6c,
    0x1f, 0x0, 0x8, 0xec, 0x1f, 0x0, 0x0, 0xdc,

    /* U+004F "O" */
    0x0, 0x7d, 0xee, 0x80, 0x0, 0xbb, 0x10, 0x19,
    0xc0, 0x4e, 0x0, 0x0, 0xc, 0x67, 0xa0, 0x0,
    0x0, 0x89, 0x7a, 0x0, 0x0, 0x8, 0x94, 0xe0,
    0x0, 0x0, 0xc6, 0xb, 0xb1, 0x1, 0x9c, 0x0,
    0x8, 0xde, 0xe9, 0x0,

    /* U+0050 "P" */
    0x1f, 0xee, 0xee, 0x60, 0x1f, 0x10, 0x3, 0xf2,
    0x1f, 0x10, 0x0, 0xd4, 0x1f, 0x10, 0x4, 0xf1,
    0x1f, 0xee, 0xed, 0x50, 0x1f, 0x10, 0x0, 0x0,
    0x1f, 0x10, 0x0, 0x0, 0x1f, 0x10, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x7d, 0xee, 0x80, 0x0, 0xbb, 0x10, 0x19,
    0xc0, 0x4e, 0x0, 0x0, 0xc, 0x67, 0xa0, 0x0,
    0x0, 0x89, 0x7a, 0x0, 0x0, 0x8, 0x94, 0xe0,
    0x0, 0x20, 0xd5, 0xb, 0xb1, 0xc, 0xdc, 0x0,
    0x8, 0xde, 0xea, 0xd2, 0x0, 0x0, 0x0, 0x3,
    0x10,

    /* U+0052 "R" */
    0x1f, 0xee, 0xee, 0x90, 0x1f, 0x10, 0x1, 0xd6,
    0x1f, 0x10, 0x0, 0x98, 0x1f, 0x10, 0x2, 0xd4,
    0x1f, 0xee, 0xef, 0x90, 0x1f, 0x10, 0x1, 0xe3,
    0x1f, 0x10, 0x0, 0xb6, 0x1f, 0x10, 0x0, 0x89,

    /* U+0053 "S" */
    0x4, 0xce, 0xea, 0x10, 0x1f, 0x30, 0x9, 0xb0,
    0x3e, 0x10, 0x1, 0x60, 0x8, 0xea, 0x73, 0x0,
    0x0, 0x3, 0x7d, 0xb0, 0x57, 0x0, 0x0, 0xe4,
    0x3e, 0x40, 0x4, 0xf2, 0x4, 0xce, 0xec, 0x40,

    /* U+0054 "T" */
    0xee, 0xef, 0xee, 0xc0, 0x2, 0xf0, 0x0, 0x0,
    0x2f, 0x0, 0x0, 0x2, 0xf0, 0x0, 0x0, 0x2f,
    0x0, 0x0, 0x2, 0xf0, 0x0, 0x0, 0x2f, 0x0,
    0x0, 0x2, 0xf0, 0x0,

    /* U+0055 "U" */
    0x1f, 0x0, 0x0, 0x5c, 0x1f, 0x0, 0x0, 0x5c,
    0x1f, 0x0, 0x0, 0x5c, 0x1f, 0x0, 0x0, 0x5c,
    0x1f, 0x0, 0x0, 0x5c, 0xf, 0x10, 0x0, 0x7b,
    0xb, 0xa0, 0x2, 0xd6, 0x1, 0x9e, 0xed, 0x70,

    /* U+0056 "V" */
    0xd, 0x60, 0x0, 0xf, 0x20, 0x7b, 0x0, 0x5,
    0xc0, 0x1, 0xf1, 0x0, 0xb6, 0x0, 0xb, 0x70,
    0x1f, 0x0, 0x0, 0x4c, 0x6, 0xa0, 0x0, 0x0,
    0xe2, 0xc4, 0x0, 0x0, 0x8, 0xad, 0x0, 0x0,
    0x0, 0x2f, 0x80, 0x0,

    /* U+0057 "W" */
    0xb7, 0x0, 0x3f, 0x50, 0x4, 0xd7, 0xb0, 0x7,
    0xd9, 0x0, 0x98, 0x2e, 0x0, 0xc4, 0xe0, 0xd,
    0x40, 0xe3, 0x1d, 0xd, 0x21, 0xf0, 0x9, 0x75,
    0x90, 0x87, 0x5a, 0x0, 0x5b, 0xa4, 0x3, 0xb9,
    0x60, 0x1, 0xee, 0x0, 0xe, 0xe1, 0x0, 0xc,
    0xa0, 0x0, 0xad, 0x0,

    /* U+0058 "X" */
    0x7, 0xd0, 0x0, 0x7c, 0x0, 0xb, 0x80, 0x3e,
    0x20, 0x0, 0x1e, 0x4d, 0x50, 0x0, 0x0, 0x5f,
    0x90, 0x0, 0x0, 0x7, 0xec, 0x0, 0x0, 0x3,
    0xe2, 0xc8, 0x0, 0x0, 0xd5, 0x2, 0xf4, 0x0,
    0xa9, 0x0, 0x6, 0xe1,

    /* U+0059 "Y" */
    0x9b, 0x0, 0x0, 0xd6, 0xd, 0x60, 0x8, 0xb0,
    0x3, 0xe1, 0x3e, 0x10, 0x0, 0x8b, 0xd5, 0x0,
    0x0, 0xd, 0xa0, 0x0, 0x0, 0xa, 0x70, 0x0,
    0x0, 0xa, 0x70, 0x0, 0x0, 0xa, 0x70, 0x0,

    /* U+005A "Z" */
    0x4e, 0xee, 0xef, 0xe0, 0x0, 0x0, 0x1d, 0x60,
    0x0, 0x0, 0xc9, 0x0, 0x0, 0xa, 0xb0, 0x0,
    0x0, 0x8c, 0x0, 0x0, 0x5, 0xe1, 0x0, 0x0,
    0x3e, 0x20, 0x0, 0x0, 0xbf, 0xee, 0xee, 0xe1,

    /* U+005B "[" */
    0x2f, 0xc1, 0x2d, 0x0, 0x2d, 0x0, 0x2d, 0x0,
    0x2d, 0x0, 0x2d, 0x0, 0x2d, 0x0, 0x2d, 0x0,
    0x2d, 0x0, 0x2f, 0xc1,

    /* U+005C "\\" */
    0xc, 0x0, 0x0, 0x8, 0x50, 0x0, 0x1, 0xc0,
    0x0, 0x0, 0xa3, 0x0, 0x0, 0x3a, 0x0, 0x0,
    0xc, 0x10, 0x0, 0x5, 0x80, 0x0, 0x0, 0xc0,

    /* U+005D "]" */
    0xce, 0x40, 0xb4, 0xb, 0x40, 0xb4, 0xb, 0x40,
    0xb4, 0xb, 0x40, 0xb4, 0xb, 0x4c, 0xf4,

    /* U+005E "^" */
    0x0, 0x1f, 0x30, 0x0, 0x9, 0x5b, 0x0, 0x1,
    0xb0, 0x84, 0x0, 0x93, 0x1, 0xb0, 0x2b, 0x0,
    0x7, 0x50,

    /* U+005F "_" */
    0x99, 0x99, 0x99,

    /* U+0060 "`" */
    0x7, 0x10, 0x4, 0xa0,

    /* U+0061 "a" */
    0x7, 0xdd, 0xc2, 0x3, 0xc0, 0x8, 0x90, 0x1,
    0x58, 0xda, 0x4, 0xd6, 0x36, 0xa0, 0x89, 0x0,
    0xba, 0x2, 0xde, 0xc6, 0xe3,

    /* U+0062 "b" */
    0x3d, 0x0, 0x0, 0x3, 0xd0, 0x0, 0x0, 0x3d,
    0xad, 0xd7, 0x3, 0xf5, 0x1, 0xd4, 0x3d, 0x0,
    0x7, 0x93, 0xd0, 0x0, 0x79, 0x3f, 0x50, 0x1d,
    0x53, 0xda, 0xdd, 0x70,

    /* U+0063 "c" */
    0x5, 0xdd, 0xc3, 0x2, 0xe2, 0x4, 0xd0, 0x79,
    0x0, 0x0, 0x7, 0x90, 0x0, 0x30, 0x3e, 0x10,
    0x5d, 0x0, 0x6d, 0xdc, 0x20,

    /* U+0064 "d" */
    0x0, 0x0, 0xb, 0x50, 0x0, 0x0, 0xb5, 0x6,
    0xdd, 0xac, 0x53, 0xe2, 0x3, 0xf5, 0x79, 0x0,
    0xc, 0x57, 0x90, 0x0, 0xb5, 0x3e, 0x10, 0x2f,
    0x50, 0x5c, 0xbb, 0xc5,

    /* U+0065 "e" */
    0x5, 0xcd, 0xb2, 0x2, 0xc0, 0x4, 0xd0, 0x7e,
    0xdd, 0xde, 0x17, 0x90, 0x0, 0x20, 0x2e, 0x20,
    0x4c, 0x0, 0x5d, 0xdc, 0x20,

    /* U+0066 "f" */
    0x7, 0xe7, 0xc, 0x30, 0xbf, 0xe5, 0xd, 0x30,
    0xd, 0x30, 0xd, 0x30, 0xd, 0x30, 0xd, 0x30,

    /* U+0067 "g" */
    0x5, 0xdd, 0x9d, 0x22, 0xe1, 0x6, 0xf2, 0x79,
    0x0, 0xf, 0x27, 0x90, 0x0, 0xf2, 0x3e, 0x10,
    0x6f, 0x20, 0x6d, 0xd9, 0xe1, 0x27, 0x0, 0x3d,
    0x0, 0x8d, 0xcc, 0x30,

    /* U+0068 "h" */
    0x3c, 0x0, 0x0, 0x3c, 0x0, 0x0, 0x3c, 0xad,
    0xd4, 0x3f, 0x30, 0x4c, 0x3d, 0x0, 0x1e, 0x3c,
    0x0, 0x1e, 0x3c, 0x0, 0x1e, 0x3c, 0x0, 0x1e,

    /* U+0069 "i" */
    0x2d, 0x2, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d,

    /* U+006A "j" */
    0x2, 0xd0, 0x2, 0x2, 0xd0, 0x2d, 0x2, 0xd0,
    0x2d, 0x2, 0xd0, 0x2d, 0x3, 0xd2, 0xe7,

    /* U+006B "k" */
    0x2d, 0x0, 0x0, 0x2, 0xd0, 0x0, 0x0, 0x2d,
    0x1, 0xc7, 0x2, 0xd1, 0xd6, 0x0, 0x2e, 0xdd,
    0x0, 0x2, 0xf3, 0xb8, 0x0, 0x2d, 0x2, 0xe3,
    0x2, 0xd0, 0x6, 0xd0,

    /* U+006C "l" */
    0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d,

    /* U+006D "m" */
    0x3c, 0x9b, 0xd6, 0xab, 0xc1, 0x3f, 0x20, 0x8d,
    0x0, 0xa6, 0x3c, 0x0, 0x6a, 0x0, 0x87, 0x3c,
    0x0, 0x6a, 0x0, 0x87, 0x3c, 0x0, 0x6a, 0x0,
    0x87, 0x3c, 0x0, 0x6a, 0x0, 0x87,

    /* U+006E "n" */
    0x3c, 0x9b, 0xd4, 0x3f, 0x20, 0x3c, 0x3c, 0x0,
    0x1e, 0x3c, 0x0, 0x1e, 0x3c, 0x0, 0x1e, 0x3c,
    0x0, 0x1e,

    /* U+006F "o" */
    0x5, 0xdd, 0xc4, 0x3, 0xe2, 0x3, 0xe1, 0x79,
    0x0, 0xb, 0x57, 0x90, 0x0, 0xb5, 0x2e, 0x20,
    0x3e, 0x10, 0x5d, 0xdc, 0x40,

    /* U+0070 "p" */
    0x3e, 0xbb, 0xc7, 0x3, 0xf3, 0x0, 0xd4, 0x3d,
    0x0, 0x7, 0x93, 0xd0, 0x0, 0x79, 0x3f, 0x50,
    0x1d, 0x53, 0xda, 0xdd, 0x70, 0x3d, 0x0, 0x0,
    0x3, 0xd0, 0x0, 0x0,

    /* U+0071 "q" */
    0x6, 0xdd, 0xac, 0x53, 0xe1, 0x3, 0xf5, 0x79,
    0x0, 0xb, 0x57, 0x90, 0x0, 0xb5, 0x3e, 0x20,
    0x3f, 0x50, 0x5d, 0xeb, 0xc5, 0x0, 0x0, 0xb,
    0x50, 0x0, 0x0, 0xb5,

    /* U+0072 "r" */
    0x4b, 0x9e, 0x4f, 0x60, 0x4d, 0x0, 0x4c, 0x0,
    0x4c, 0x0, 0x4c, 0x0,

    /* U+0073 "s" */
    0x1b, 0xed, 0x90, 0x7a, 0x0, 0xa3, 0x2e, 0xa7,
    0x20, 0x0, 0x37, 0xe5, 0x79, 0x0, 0x98, 0x1a,
    0xed, 0xb1,

    /* U+0074 "t" */
    0x6, 0x10, 0xd, 0x30, 0xcf, 0xe5, 0xd, 0x30,
    0xd, 0x30, 0xd, 0x30, 0xd, 0x30, 0x9, 0xe5,

    /* U+0075 "u" */
    0x3c, 0x0, 0x1e, 0x3c, 0x0, 0x1e, 0x3c, 0x0,
    0x1e, 0x3c, 0x0, 0x2e, 0x2e, 0x0, 0x7e, 0x8,
    0xca, 0x7e,

    /* U+0076 "v" */
    0xa7, 0x0, 0x6a, 0x4d, 0x0, 0xb4, 0xd, 0x21,
    0xd0, 0x7, 0x86, 0x80, 0x1, 0xdc, 0x20, 0x0,
    0xbc, 0x0,

    /* U+0077 "w" */
    0xa7, 0x1, 0xf4, 0x4, 0xb4, 0xc0, 0x5d, 0x80,
    0x96, 0xe, 0x9, 0x4c, 0xd, 0x10, 0xa5, 0xd0,
    0xd3, 0xb0, 0x4, 0xbb, 0x9, 0xc6, 0x0, 0xf,
    0x60, 0x4f, 0x10,

    /* U+0078 "x" */
    0x5d, 0x0, 0xb7, 0x0, 0x9a, 0x7a, 0x0, 0x0,
    0xde, 0x0, 0x0, 0x1e, 0xe4, 0x0, 0xc, 0x64,
    0xe1, 0x8, 0xb0, 0x8, 0xb0,

    /* U+0079 "y" */
    0xb7, 0x0, 0x5b, 0x4d, 0x0, 0xb4, 0xd, 0x31,
    0xd0, 0x6, 0x97, 0x70, 0x0, 0xdd, 0x10, 0x0,
    0x89, 0x0, 0x0, 0xc2, 0x0, 0x4e, 0x80, 0x0,

    /* U+007A "z" */
    0x6d, 0xdd, 0xf4, 0x0, 0x8, 0x90, 0x0, 0x6c,
    0x0, 0x4, 0xd1, 0x0, 0x2d, 0x20, 0x0, 0xbe,
    0xdd, 0xd6,

    /* U+007B "{" */
    0x2, 0xd7, 0x6, 0x80, 0x6, 0x80, 0x9, 0x70,
    0x5d, 0x0, 0xa, 0x60, 0x6, 0x80, 0x6, 0x80,
    0x6, 0x80, 0x1, 0xc7,

    /* U+007C "|" */
    0x5, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b,
    0x1b, 0x1b, 0x1b, 0x1b,

    /* U+007D "}" */
    0x7d, 0x20, 0x8, 0x60, 0x8, 0x60, 0x7, 0x90,
    0x0, 0xd5, 0x6, 0xa0, 0x8, 0x60, 0x8, 0x60,
    0x8, 0x60, 0x7c, 0x10,

    /* U+007E "~" */
    0x8, 0xb7, 0x5, 0x20, 0x60, 0x4b, 0x90
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 53, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 50, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 82, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 17, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 107, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 84, .adv_w = 192, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 121, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 53, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 159, .adv_w = 50, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 179, .adv_w = 50, .box_w = 4, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 199, .adv_w = 68, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 207, .adv_w = 115, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 53, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 232, .adv_w = 75, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 235, .adv_w = 53, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 64, .box_w = 6, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 107, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 53, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 53, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 539, .adv_w = 115, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 564, .adv_w = 115, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 575, .adv_w = 115, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 600, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 154, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 124, .box_w = 9, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 132, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 139, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 768, .adv_w = 135, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 146, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 50, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 996, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1024, .adv_w = 167, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1064, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1096, .adv_w = 146, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1164, .adv_w = 146, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1205, .adv_w = 132, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1237, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1269, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1329, .adv_w = 117, .box_w = 9, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1365, .adv_w = 178, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1409, .adv_w = 117, .box_w = 9, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1445, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1477, .adv_w = 117, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1509, .adv_w = 50, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1529, .adv_w = 64, .box_w = 6, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1553, .adv_w = 50, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1568, .adv_w = 115, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1586, .adv_w = 96, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1589, .adv_w = 43, .box_w = 4, .box_h = 2, .ofs_x = -1, .ofs_y = 7},
    {.bitmap_index = 1593, .adv_w = 103, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1614, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1642, .adv_w = 103, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1663, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1691, .adv_w = 103, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1712, .adv_w = 57, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1728, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1756, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1780, .adv_w = 43, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1788, .adv_w = 43, .box_w = 3, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1803, .adv_w = 100, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1831, .adv_w = 43, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1839, .adv_w = 164, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1869, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1887, .adv_w = 110, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1908, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1936, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1964, .adv_w = 64, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1976, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1994, .adv_w = 60, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2010, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2028, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2046, .adv_w = 146, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2073, .adv_w = 99, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2094, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2118, .adv_w = 92, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2136, .adv_w = 64, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2156, .adv_w = 43, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2168, .adv_w = 64, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2188, .adv_w = 115, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 2}
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


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    34, 55,
    34, 87,
    39, 13,
    39, 15,
    39, 34,
    45, 55,
    49, 13,
    49, 15,
    49, 34,
    51, 55,
    53, 13,
    53, 14,
    53, 15,
    53, 27,
    53, 28,
    55, 13,
    55, 14,
    55, 15,
    55, 27,
    55, 28,
    55, 34,
    55, 66,
    55, 70,
    55, 74,
    55, 80,
    55, 83,
    55, 86,
    55, 90,
    56, 13,
    56, 15,
    56, 27,
    56, 28,
    58, 13,
    58, 14,
    58, 15,
    58, 27,
    58, 28,
    58, 81,
    58, 82,
    58, 87,
    71, 71,
    83, 13,
    83, 14,
    83, 15,
    83, 82,
    87, 13,
    87, 15,
    88, 13,
    88, 15,
    90, 13,
    90, 15
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -9, -3, -30, -30, -11, -18, -34, -34,
    -14, -3, -21, -25, -21, -21, -21, -25,
    -11, -25, -9, -9, -9, -11, -11, -3,
    -11, -7, -7, -3, -14, -14, -3, -3,
    -27, -21, -27, -18, -18, -14, -18, -11,
    -3, -18, -11, -18, -3, -14, -14, -11,
    -11, -14, -14
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 51,
    .glyph_ids_size = 0
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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
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
const lv_font_t font_en_12 = {
#else
lv_font_t font_en_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_EN_12*/

