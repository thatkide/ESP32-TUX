/*******************************************************************************
 * Size: 58 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FONT_7SEG_58
#define FONT_7SEG_58 1
#endif

#if FONT_7SEG_58

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0027 "'" */
    0x0, 0x2, 0x0, 0x0, 0x0, 0x7e, 0x20, 0x0,
    0x0, 0xef, 0xe1, 0x0, 0x2, 0xff, 0xfd, 0x10,
    0x4, 0xff, 0xff, 0xd0, 0x5, 0xff, 0xff, 0xf1,
    0x6, 0xff, 0xff, 0xf0, 0x7, 0xff, 0xff, 0xf0,
    0x8, 0xff, 0xff, 0xe0, 0x9, 0xff, 0xff, 0xd0,
    0xa, 0xff, 0xff, 0xc0, 0xb, 0xff, 0xff, 0xb0,
    0xc, 0xff, 0xff, 0xa0, 0xd, 0xff, 0xff, 0x80,
    0xe, 0xff, 0xff, 0x70, 0xf, 0xff, 0xff, 0x60,
    0xf, 0xff, 0xff, 0x50, 0x1f, 0xff, 0xf7, 0x0,
    0xa, 0xfd, 0x30, 0x0, 0x0, 0x50, 0x0, 0x0,

    /* U+002E "." */
    0x47, 0x76, 0xbf, 0xfe, 0xcf, 0xfd, 0xdf, 0xfc,
    0xef, 0xfb, 0xff, 0xfa,

    /* U+0030 "0" */
    0x0, 0x0, 0x2, 0x9e, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x40, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x94,
    0xfb, 0x0, 0x0, 0x3, 0x90, 0xcf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x2b, 0xff, 0x80, 0x0,
    0xc, 0xf8, 0x1d, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x2f, 0xff, 0xe0, 0x0, 0x1f, 0xff, 0x81,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x8f, 0xff,
    0xf1, 0x0, 0x3f, 0xff, 0xf7, 0x17, 0x77, 0x77,
    0x77, 0x77, 0x60, 0xef, 0xff, 0xf2, 0x0, 0x4f,
    0xff, 0xff, 0x10, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xff, 0xff, 0xf1, 0x0, 0x5f, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0xf0,
    0x0, 0x7f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xf0, 0x0, 0x8f, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0xff, 0xe0, 0x0, 0x9f, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xff, 0xff, 0xd0, 0x0,
    0xaf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xff, 0xff, 0xc0, 0x0, 0xbf, 0xff, 0xfb,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xb0, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xc, 0xff, 0xff, 0xa0, 0x0, 0xdf,
    0xff, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd,
    0xff, 0xff, 0x90, 0x0, 0xef, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x80,
    0x0, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0x70, 0x0, 0xff, 0xff,
    0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0x60, 0x1, 0xff, 0xff, 0xb1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0x50, 0x0,
    0xdf, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xfe, 0x20, 0x0, 0x9, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x91,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x18,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x70, 0x0, 0x3, 0xef, 0xd3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfb, 0x0,
    0x7, 0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1c, 0xff, 0xff, 0x0, 0x8, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff,
    0xfe, 0x0, 0x9, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0xff, 0xfd, 0x0, 0xa,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xaf, 0xff, 0xfc, 0x0, 0xb, 0xff, 0xff, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xfb,
    0x0, 0xc, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0xd, 0xff,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0xff, 0xf9, 0x0, 0xe, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xef, 0xff, 0xf8, 0x0,
    0xf, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf7, 0x0, 0xf, 0xff, 0xff,
    0x60, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xf6, 0x0, 0x1f, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xf5, 0x0, 0x2f,
    0xff, 0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xf4, 0x0, 0x3f, 0xff, 0xff, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xff, 0xf3,
    0x0, 0x4f, 0xff, 0xf7, 0x27, 0x77, 0x77, 0x77,
    0x77, 0x61, 0xff, 0xff, 0xf2, 0x0, 0x4f, 0xff,
    0x62, 0xef, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xbf,
    0xff, 0xf0, 0x0, 0x1f, 0xf5, 0x3e, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf6, 0x7f, 0xff, 0xb0, 0x0,
    0x9, 0x44, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x2f, 0xff, 0x30, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd, 0xf5,
    0x0, 0x0, 0x0, 0x7, 0xdf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x44, 0x10, 0x0, 0x0,

    /* U+0031 "1" */
    0x0, 0x0, 0x1c, 0x30, 0x0, 0x0, 0x7, 0xff,
    0x20, 0x0, 0x0, 0xdf, 0xfb, 0x0, 0x0, 0x5f,
    0xff, 0xf0, 0x0, 0xb, 0xff, 0xff, 0x20, 0x2,
    0xff, 0xff, 0xf2, 0x0, 0x5f, 0xff, 0xff, 0x10,
    0x6, 0xff, 0xff, 0xf0, 0x0, 0x7f, 0xff, 0xff,
    0x0, 0x8, 0xff, 0xff, 0xe0, 0x0, 0x9f, 0xff,
    0xfd, 0x0, 0xa, 0xff, 0xff, 0xc0, 0x0, 0xbf,
    0xff, 0xfb, 0x0, 0xd, 0xff, 0xff, 0xa0, 0x0,
    0xef, 0xff, 0xf9, 0x0, 0xf, 0xff, 0xff, 0x80,
    0x0, 0xff, 0xff, 0xf7, 0x0, 0xf, 0xff, 0xff,
    0x60, 0x0, 0x4e, 0xff, 0xf5, 0x0, 0x0, 0x2d,
    0xfb, 0x10, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6a, 0x10, 0x0,
    0x1, 0xaf, 0xfd, 0x0, 0x3, 0xef, 0xff, 0xf0,
    0x0, 0x8f, 0xff, 0xfe, 0x0, 0x9, 0xff, 0xff,
    0xd0, 0x0, 0xaf, 0xff, 0xfc, 0x0, 0xb, 0xff,
    0xff, 0xb0, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0xd,
    0xff, 0xff, 0x90, 0x0, 0xff, 0xff, 0xf8, 0x0,
    0xf, 0xff, 0xff, 0x70, 0x1, 0xff, 0xff, 0xf6,
    0x0, 0x2f, 0xff, 0xff, 0x50, 0x3, 0xff, 0xff,
    0xf4, 0x0, 0x4f, 0xff, 0xff, 0x30, 0x1, 0xff,
    0xff, 0xf2, 0x0, 0xb, 0xff, 0xff, 0x0, 0x0,
    0x7f, 0xff, 0xb0, 0x0, 0x2, 0xff, 0xf3, 0x0,
    0x0, 0xd, 0xf4, 0x0, 0x0, 0x0, 0x41, 0x0,
    0x0, 0x0,

    /* U+0032 "2" */
    0x0, 0x0, 0x2, 0x9e, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x40, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x94,
    0xfb, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x2b, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x1d, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x2f, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x1,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x8f, 0xff,
    0xf1, 0x0, 0x0, 0x0, 0x0, 0x17, 0x77, 0x77,
    0x77, 0x77, 0x60, 0xff, 0xff, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xc, 0xff, 0xff, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd,
    0xff, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x1, 0x66, 0x66,
    0x66, 0x66, 0x66, 0x25, 0xff, 0xff, 0x50, 0x0,
    0x0, 0x0, 0x4e, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf4, 0x2d, 0xfb, 0x10, 0x0, 0x0, 0x8, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x50,
    0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe2, 0x0, 0x0, 0x0, 0x3b,
    0x23, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb,
    0x10, 0x0, 0x0, 0x4, 0xff, 0xf5, 0x1c, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x9, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x4f, 0xff, 0xf7, 0x27, 0x77, 0x77, 0x77,
    0x77, 0x60, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xff,
    0x62, 0xef, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xf5, 0x3e, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x9, 0x44, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xdf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0,

    /* U+0033 "3" */
    0x0, 0x2, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x40, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x94, 0xfb, 0x0,
    0x0, 0x0, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x2b, 0xff, 0x80, 0x0, 0x0, 0x1d, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfb, 0x2f, 0xff, 0xe0,
    0x0, 0x0, 0x1, 0xdf, 0xff, 0xff, 0xff, 0xff,
    0xf4, 0x8f, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x17,
    0x77, 0x77, 0x77, 0x77, 0x60, 0xff, 0xff, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x9, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xff, 0xff, 0xb0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xff, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xd, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x60,
    0x0, 0x0, 0x1, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x25, 0xff, 0xff, 0x50, 0x0, 0x0, 0x4e, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf4, 0x2d, 0xfb, 0x10,
    0x0, 0x8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x50, 0x0, 0x0, 0x4f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x0, 0x0,
    0x0, 0x3, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x16, 0xa0, 0x0, 0x0, 0x0, 0x1c, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x71, 0xaf, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3d, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x9f, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xfa, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xdf, 0xff, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xf6, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x27, 0x77,
    0x77, 0x77, 0x77, 0x61, 0xff, 0xff, 0xf2, 0x0,
    0x0, 0x2, 0xef, 0xff, 0xff, 0xff, 0xff, 0xf2,
    0xbf, 0xff, 0xf0, 0x0, 0x0, 0x3e, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf6, 0x6f, 0xff, 0xb0, 0x0,
    0x4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb,
    0x2f, 0xff, 0x30, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xd, 0xf4, 0x0, 0x0,
    0x7, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x44, 0x10, 0x0, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1b, 0x20, 0x0, 0x0, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff,
    0x20, 0x0, 0x7e, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xdf, 0xfb, 0x0, 0xe, 0xfd,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xff, 0xf0, 0x2, 0xff, 0xfd, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0x20, 0x4f,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xf2, 0x5, 0xff, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xff, 0x10,
    0x6f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x6, 0xff, 0xff, 0xf0, 0x7, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0x0, 0x8f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xff, 0xe0, 0x9, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff,
    0xfd, 0x0, 0xaf, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xff, 0xff, 0xc0, 0xb, 0xff,
    0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xfb, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xa0, 0xd,
    0xff, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xef, 0xff, 0xf9, 0x0, 0xef, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x80,
    0xf, 0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf7, 0x0, 0xff, 0xff, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0x60, 0x1f, 0xff, 0xf7, 0x16, 0x66, 0x66, 0x66,
    0x66, 0x62, 0x5f, 0xff, 0xf5, 0x0, 0xaf, 0xd3,
    0x4e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x2d,
    0xfb, 0x10, 0x0, 0x51, 0x8f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x5, 0x0, 0x0, 0x0,
    0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe2, 0x0, 0x0, 0x0, 0x0, 0x3e, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xb1, 0x6a, 0x0, 0x0,
    0x0, 0x0, 0x1c, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x71, 0xaf, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xdf, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd,
    0xff, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0x50, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xf4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xff, 0xff, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xc, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xf3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x41, 0x0,
    0x0, 0x0,

    /* U+0035 "5" */
    0x0, 0x0, 0x29, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x90, 0x0, 0x0,
    0x39, 0xc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf2, 0x0, 0x0, 0xc, 0xf9, 0x1d, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfb, 0x0, 0x0, 0x1, 0xff,
    0xf8, 0x1d, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x3f, 0xff, 0xf7, 0x17, 0x77, 0x77,
    0x77, 0x77, 0x60, 0x0, 0x0, 0x4, 0xff, 0xff,
    0xf1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xff, 0xff, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xef, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf5, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xf7, 0x16, 0x66, 0x66, 0x66, 0x66, 0x62,
    0x0, 0x0, 0x0, 0xaf, 0xd3, 0x4e, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x51,
    0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe2, 0x0, 0x0, 0x0, 0x3e,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb1, 0x6a,
    0x0, 0x0, 0x0, 0x1c, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x71, 0xaf, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xdf, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xff, 0xff, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xf6, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0x50, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xff,
    0xff, 0x30, 0x0, 0x0, 0x27, 0x77, 0x77, 0x77,
    0x77, 0x61, 0xff, 0xff, 0xf2, 0x0, 0x0, 0x2e,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x2b, 0xff, 0xff,
    0x0, 0x0, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf6, 0x6f, 0xff, 0xb0, 0x0, 0x4f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xb2, 0xff, 0xf3, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xd, 0xf4, 0x0, 0x0, 0x7d, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf4, 0x41, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x2, 0x9e, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x90, 0x0,
    0x0, 0x3, 0x90, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x20, 0x0, 0x0, 0xc, 0xf9, 0x1d,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0x81, 0xdf, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xf7,
    0x17, 0x77, 0x77, 0x77, 0x77, 0x60, 0x0, 0x0,
    0x0, 0x4f, 0xff, 0xff, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xfa,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xdf, 0xff, 0xf9, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xef, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x71, 0x66, 0x66, 0x66, 0x66,
    0x66, 0x20, 0x0, 0x0, 0x0, 0xaf, 0xd3, 0x4e,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x5, 0x18, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x4f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x0,
    0x0, 0x3b, 0x23, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfb, 0x16, 0xa0, 0x4, 0xff, 0xf5, 0x1c,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x71, 0xaf, 0xfd,
    0x8, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3d, 0xff, 0xff, 0x8, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xfe,
    0x9, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0xfd, 0xa, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xfc,
    0xb, 0xff, 0xff, 0xb0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xfb, 0xc, 0xff, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xfa,
    0xd, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xdf, 0xff, 0xf9, 0xe, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf8,
    0xf, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf7, 0xf, 0xff, 0xff, 0x50,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xf6,
    0x1f, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xf5, 0x2f, 0xff, 0xff, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf4,
    0x3f, 0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x4, 0xff, 0xff, 0xf3, 0x4f, 0xff, 0xf7, 0x27,
    0x77, 0x77, 0x77, 0x77, 0x61, 0xff, 0xff, 0xf2,
    0x4f, 0xff, 0x62, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xf2, 0xbf, 0xff, 0xf0, 0x1f, 0xf5, 0x3e, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf6, 0x6f, 0xff, 0xb0,
    0x9, 0x44, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x2f, 0xff, 0x30, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd, 0xf4, 0x0,
    0x0, 0x7, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x44, 0x10, 0x0,

    /* U+0037 "7" */
    0x2, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x40, 0x0, 0xb, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x94, 0xfa, 0x0, 0x0, 0xcf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2b, 0xff,
    0x80, 0x0, 0x1d, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x2f, 0xff, 0xe0, 0x0, 0x1, 0xdf, 0xff,
    0xff, 0xff, 0xff, 0xf4, 0x8f, 0xff, 0xf1, 0x0,
    0x0, 0x17, 0x77, 0x77, 0x77, 0x77, 0x60, 0xef,
    0xff, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xb0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xff,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0x30, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5, 0xc2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x30, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3e, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xaf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xbf, 0xff, 0xfb, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xdf, 0xff, 0xf9, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xef, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xf6, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xf3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xef, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe, 0xfb, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x0, 0x2, 0x9e, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x40, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x94,
    0xfb, 0x0, 0x0, 0x3, 0x90, 0xcf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x2b, 0xff, 0x80, 0x0,
    0xc, 0xf9, 0x1d, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x2f, 0xff, 0xe0, 0x0, 0x1f, 0xff, 0x81,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x8f, 0xff,
    0xf1, 0x0, 0x3f, 0xff, 0xf7, 0x17, 0x77, 0x77,
    0x77, 0x77, 0x60, 0xff, 0xff, 0xf2, 0x0, 0x4f,
    0xff, 0xff, 0x10, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xff, 0xff, 0xf1, 0x0, 0x6f, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0xf0,
    0x0, 0x7f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xf0, 0x0, 0x8f, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0xff, 0xe0, 0x0, 0x9f, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xff, 0xff, 0xd0, 0x0,
    0xaf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xff, 0xff, 0xc0, 0x0, 0xbf, 0xff, 0xfb,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xb0, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xc, 0xff, 0xff, 0xa0, 0x0, 0xdf,
    0xff, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd,
    0xff, 0xff, 0x90, 0x0, 0xef, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x80,
    0x0, 0xff, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0x70, 0x0, 0xff, 0xff,
    0xf5, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0x60, 0x1, 0xff, 0xff, 0x71, 0x66, 0x66,
    0x66, 0x66, 0x66, 0x25, 0xff, 0xff, 0x50, 0x0,
    0xaf, 0xd3, 0x4e, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf4, 0x2d, 0xfb, 0x10, 0x0, 0x5, 0x18, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x50,
    0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe2, 0x0, 0x0, 0x0, 0x3b,
    0x23, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb,
    0x16, 0xa0, 0x0, 0x4, 0xff, 0xf5, 0x1c, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x71, 0xaf, 0xfd, 0x0,
    0x8, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3d, 0xff, 0xff, 0x0, 0x8, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff,
    0xfe, 0x0, 0x9, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0xff, 0xfd, 0x0, 0xa,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xaf, 0xff, 0xfc, 0x0, 0xb, 0xff, 0xff, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xfb,
    0x0, 0xc, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0xd, 0xff,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0xff, 0xf9, 0x0, 0xe, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf8, 0x0,
    0xf, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf7, 0x0, 0xf, 0xff, 0xff,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xf6, 0x0, 0x1f, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xf5, 0x0, 0x2f,
    0xff, 0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xf4, 0x0, 0x3f, 0xff, 0xff, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xff, 0xf3,
    0x0, 0x4f, 0xff, 0xf7, 0x27, 0x77, 0x77, 0x77,
    0x77, 0x61, 0xff, 0xff, 0xf2, 0x0, 0x4f, 0xff,
    0x62, 0xef, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xbf,
    0xff, 0xf0, 0x0, 0x1f, 0xf5, 0x3e, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf6, 0x6f, 0xff, 0xb0, 0x0,
    0x9, 0x44, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x2f, 0xff, 0x30, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd, 0xf4,
    0x0, 0x0, 0x0, 0x7, 0xdf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x44, 0x10, 0x0, 0x0,

    /* U+0039 "9" */
    0x0, 0x0, 0x29, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x4, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x94, 0xfb,
    0x0, 0x0, 0x39, 0xc, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf2, 0xbf, 0xf8, 0x0, 0xc, 0xf9,
    0x1d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x2f,
    0xff, 0xe0, 0x1, 0xff, 0xf8, 0x1d, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x48, 0xff, 0xff, 0x10, 0x3f,
    0xff, 0xf7, 0x17, 0x77, 0x77, 0x77, 0x77, 0x60,
    0xff, 0xff, 0xf2, 0x4, 0xff, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xff, 0x10,
    0x6f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x6, 0xff, 0xff, 0xf0, 0x7, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0x0, 0x8f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xff, 0xe0, 0x9, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff,
    0xfd, 0x0, 0xaf, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xff, 0xff, 0xc0, 0xb, 0xff,
    0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xfb, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xc, 0xff, 0xff, 0xa0, 0xd,
    0xff, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xdf, 0xff, 0xf9, 0x0, 0xef, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x80,
    0xf, 0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf7, 0x0, 0xff, 0xff, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0x60, 0x1f, 0xff, 0xf7, 0x16, 0x66, 0x66, 0x66,
    0x66, 0x62, 0x5f, 0xff, 0xf5, 0x0, 0xaf, 0xd3,
    0x4e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x2d,
    0xfb, 0x10, 0x0, 0x51, 0x8f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x5, 0x0, 0x0, 0x0,
    0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe2, 0x0, 0x0, 0x0, 0x0, 0x3e, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xb1, 0x6a, 0x0, 0x0,
    0x0, 0x0, 0x1c, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x71, 0xaf, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xdf, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd,
    0xff, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0x50, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xf4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xff, 0xff, 0x30, 0x0, 0x0,
    0x0, 0x27, 0x77, 0x77, 0x77, 0x77, 0x61, 0xff,
    0xff, 0xf2, 0x0, 0x0, 0x0, 0x2e, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x2b, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6,
    0x6f, 0xff, 0xb0, 0x0, 0x0, 0x4f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xb2, 0xff, 0xf3, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xd, 0xf4, 0x0, 0x0, 0x0, 0x7d, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x41, 0x0,
    0x0, 0x0,

    /* U+003A ":" */
    0x0, 0x47, 0x77, 0x75, 0x0, 0xcf, 0xff, 0xfb,
    0x0, 0xdf, 0xff, 0xfa, 0x0, 0xef, 0xff, 0xf9,
    0x0, 0xff, 0xff, 0xf8, 0x0, 0xff, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0x77, 0x77, 0x30,
    0xf, 0xff, 0xff, 0x70, 0xf, 0xff, 0xff, 0x60,
    0x1f, 0xff, 0xff, 0x50, 0x2f, 0xff, 0xff, 0x40,
    0x3f, 0xff, 0xff, 0x30
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 435, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 435, .box_w = 8, .box_h = 20, .ofs_x = 3, .ofs_y = 22},
    {.bitmap_index = 80, .adv_w = 0, .box_w = 4, .box_h = 6, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 92, .adv_w = 435, .box_w = 26, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 435, .box_w = 9, .box_h = 43, .ofs_x = 19, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 435, .box_w = 26, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1404, .adv_w = 435, .box_w = 24, .box_h = 43, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1920, .adv_w = 435, .box_w = 25, .box_h = 43, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2458, .adv_w = 435, .box_w = 23, .box_h = 43, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2953, .adv_w = 435, .box_w = 24, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3469, .adv_w = 435, .box_w = 22, .box_h = 44, .ofs_x = 6, .ofs_y = -1},
    {.bitmap_index = 3953, .adv_w = 435, .box_w = 26, .box_h = 43, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4512, .adv_w = 435, .box_w = 25, .box_h = 43, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 5050, .adv_w = 163, .box_w = 8, .box_h = 25, .ofs_x = 2, .ofs_y = 10}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x7, 0xe
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 4,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 3
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    109
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 1,
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
    .cmap_num = 2,
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
const lv_font_t font_7seg_58 = {
#else
lv_font_t font_7seg_58 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 46,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_7SEG_58*/

