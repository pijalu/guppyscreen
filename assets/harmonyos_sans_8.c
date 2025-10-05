/*******************************************************************************
 * Size: 8 px
 * Bpp: 4
 * Opts: --font HarmonyOS_Sans_Black.ttf --size 8 --bpp 4 --format lvgl --range 0x20-0x7F -o harmonyos_sans_8.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef HARMONYOS_SANS_8
#define HARMONYOS_SANS_8 1
#endif

#if HARMONYOS_SANS_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x8c, 0x7, 0xf1, 0x22, 0x3d, 0xac, 0x0,

    /* U+0022 "\"" */
    0x44, 0x8f, 0x75, 0xd6, 0x22, 0xf,

    /* U+0023 "#" */
    0x2, 0xf1, 0xf1, 0x6, 0x12, 0x1, 0x5b, 0x1c,
    0x9, 0x53, 0x84, 0x78, 0xd3, 0x84, 0x70, 0xb2,
    0xa1, 0xd1,

    /* U+0024 "$" */
    0x0, 0x48, 0x4, 0xec, 0xe1, 0x34, 0x13, 0x2,
    0x0, 0xc8, 0x85, 0x86, 0xac, 0xf8, 0x27, 0xea,
    0x3, 0x4a, 0x68, 0x61, 0x80,

    /* U+0025 "%" */
    0x6e, 0x90, 0xaa, 0x0, 0x2e, 0x99, 0x16, 0x0,
    0x17, 0x4d, 0xe, 0x40, 0x6, 0xef, 0x2f, 0xe8,
    0x0, 0xa2, 0xe7, 0x5c, 0x1, 0x4, 0xad, 0xac,
    0x0,

    /* U+0026 "&" */
    0x7, 0xed, 0x20, 0xa, 0x2c, 0x28, 0x2, 0x3b,
    0xc, 0x30, 0x62, 0x23, 0x45, 0x5, 0x26, 0x31,
    0xd0, 0x42, 0x78, 0xa7, 0x88,

    /* U+0027 "'" */
    0x44, 0x6e, 0x84, 0x40,

    /* U+0028 "(" */
    0x8, 0xb0, 0x27, 0x90, 0x51, 0x20, 0xf2, 0x0,
    0x78, 0x80, 0x14, 0x88, 0x4, 0xd2, 0x0,

    /* U+0029 ")" */
    0x8b, 0x8, 0x55, 0x2, 0x78, 0x1b, 0x1, 0xb0,
    0x27, 0xc1, 0x28,

    /* U+002A "*" */
    0x49, 0x82, 0x23, 0x30, 0x41, 0x1d, 0xcd, 0x52,
    0x80,

    /* U+002B "+" */
    0x1, 0xf0, 0x4, 0xf0, 0x7c, 0x43, 0x3, 0x64,
    0x44, 0x4, 0x20,

    /* U+002C "," */
    0x14, 0x7a, 0x57, 0x9,

    /* U+002D "-" */
    0x8e, 0xe3, 0xc7, 0xf9, 0xc0,

    /* U+002E "." */
    0x23, 0x58,

    /* U+002F "/" */
    0x0, 0x72, 0x82, 0x2, 0x87, 0x38, 0x1, 0x68,
    0x18, 0x8c, 0x36, 0x80, 0x0,

    /* U+0030 "0" */
    0xb, 0xfa, 0x7, 0x4a, 0x55, 0x69, 0xa8, 0xe8,
    0x4, 0x61, 0xa6, 0x85, 0xae, 0x96, 0xaa,

    /* U+0031 "1" */
    0x6, 0xe9, 0x5b, 0x0, 0x26, 0x98, 0x8, 0x7,
    0xfc,

    /* U+0032 "2" */
    0x2c, 0xf9, 0x4, 0x79, 0x63, 0x6b, 0x0, 0x10,
    0x1c, 0xb8, 0x96, 0x9c, 0x85, 0x89, 0xf4, 0x80,

    /* U+0033 "3" */
    0x2c, 0xf9, 0x5, 0x79, 0x63, 0x7a, 0x20, 0x9,
    0x6c, 0xce, 0x2a, 0x36, 0xb, 0xa3, 0x40,

    /* U+0034 "4" */
    0x1, 0xf6, 0x0, 0x30, 0xb0, 0x2, 0x5d, 0x41,
    0x87, 0x28, 0x74, 0x28, 0x32, 0xb6, 0x83, 0x80,

    /* U+0035 "5" */
    0xf, 0xf8, 0xc8, 0x37, 0x8d, 0x83, 0x2c, 0x16,
    0x29, 0x58, 0xf4, 0x2, 0x36, 0xb5, 0x60,

    /* U+0036 "6" */
    0x0, 0x73, 0x80, 0x24, 0x9c, 0xd, 0x8e, 0xc6,
    0xc7, 0x16, 0x40, 0xe, 0x21, 0x2b, 0x69, 0x20,

    /* U+0037 "7" */
    0x9f, 0xf9, 0xe3, 0x68, 0x10, 0x4b, 0x8, 0xc0,
    0xd, 0x40, 0x5, 0x6, 0x0, 0x4a, 0x8, 0x0,

    /* U+0038 "8" */
    0x1c, 0xfb, 0x17, 0x3c, 0x44, 0x38, 0x60, 0xac,
    0x8e, 0xb, 0x10, 0x5, 0xd0, 0x58, 0x92,

    /* U+0039 "9" */
    0x1c, 0xfa, 0x8, 0x2c, 0x57, 0x33, 0x10, 0x2,
    0x4f, 0x81, 0x4f, 0x89, 0xc8, 0x20, 0x20, 0x0,

    /* U+003A ":" */
    0x6c, 0x78, 0x0, 0x3c, 0x0,

    /* U+003B ";" */
    0x5d, 0x4, 0x80, 0x0, 0x82, 0x58, 0x32, 0x80,
    0xd0, 0x0,

    /* U+003C "<" */
    0x0, 0xb, 0x31, 0x2f, 0xb4, 0xb5, 0x16, 0x12,
    0x70, 0xf6, 0x0, 0xe7, 0xa8,

    /* U+003D "=" */
    0x9f, 0xfa, 0x21, 0xbb, 0x4d, 0xee, 0xd3, 0x7b,
    0xb4, 0x80,

    /* U+003E ">" */
    0x76, 0x0, 0x8a, 0xbe, 0x8d, 0x7d, 0x16, 0xe7,
    0x4b, 0x22, 0xfa, 0x4c, 0x0,

    /* U+003F "?" */
    0x7, 0xee, 0x38, 0x2, 0xad, 0x20, 0x1, 0xac,
    0x8e, 0x1, 0x7b, 0x40, 0x5, 0x14, 0x1, 0xbd,
    0x40, 0x0,

    /* U+0040 "@" */
    0x2, 0xad, 0xd6, 0x28, 0xe, 0x7e, 0xeb, 0xa1,
    0x66, 0x43, 0xb7, 0xd3, 0xc4, 0x71, 0x5a, 0x20,
    0xe4, 0x73, 0x58, 0xd3, 0x13, 0x41, 0xb5, 0xda,
    0x83, 0x98, 0xdd, 0x78, 0x0,

    /* U+0041 "A" */
    0x0, 0x6e, 0x0, 0x46, 0x46, 0x40, 0xa, 0x31,
    0xa0, 0x3, 0x5b, 0xb0, 0x30, 0x43, 0xa, 0xd2,
    0xee, 0x8f, 0x80,

    /* U+0042 "B" */
    0x6f, 0xf6, 0xa0, 0x0, 0x79, 0xe8, 0x2, 0x13,
    0x0, 0x87, 0xd9, 0x0, 0x3, 0x8e, 0xa4, 0x3,
    0x8e, 0xa4,

    /* U+0043 "C" */
    0x6, 0xee, 0x50, 0x2c, 0xca, 0x9c, 0xbc, 0x9d,
    0x34, 0x80, 0x3d, 0xe4, 0xe9, 0xa4, 0xb1, 0x36,
    0xe4,

    /* U+0044 "D" */
    0x6f, 0xf7, 0x38, 0x5, 0xd1, 0x5, 0x0, 0xb,
    0x1f, 0x0, 0x70, 0x80, 0x5, 0x8f, 0xc0, 0x1d,
    0x10, 0x50,

    /* U+0045 "E" */
    0x6f, 0xfa, 0x0, 0x1d, 0xc8, 0x0, 0x8, 0x80,
    0x2f, 0xf1, 0x80, 0x2e, 0xc4, 0x0, 0xbb, 0x40,

    /* U+0046 "F" */
    0x6f, 0xfa, 0x0, 0x1b, 0xa9, 0x0, 0x11, 0x4,
    0x1, 0xfe, 0x30, 0x6, 0xe8, 0xc0, 0x4, 0x40,

    /* U+0047 "G" */
    0x7, 0xef, 0xa1, 0x58, 0x9b, 0x45, 0xf2, 0x74,
    0xe4, 0x1, 0xc, 0xf8, 0xf3, 0x79, 0x10, 0x58,
    0x9a, 0x5a,

    /* U+0048 "H" */
    0x6f, 0x0, 0x55, 0x80, 0x7f, 0xf0, 0xbf, 0xca,
    0x1, 0x6e, 0x90, 0x2, 0x22, 0x8, 0x0,

    /* U+0049 "I" */
    0x6f, 0x0, 0xff, 0x0,

    /* U+004A "J" */
    0x0, 0x3f, 0x0, 0x7f, 0xf0, 0x21, 0xf4, 0xbe,
    0x1e, 0x0,

    /* U+004B "K" */
    0x6f, 0x4, 0xf6, 0x0, 0x8a, 0xe1, 0x80, 0x2f,
    0x27, 0x0, 0xc2, 0x4c, 0x1, 0xb1, 0x64, 0x80,
    0x35, 0x8f, 0x0,

    /* U+004C "L" */
    0x6f, 0x0, 0xff, 0xe4, 0x11, 0x4, 0x1, 0xba,
    0x90,

    /* U+004D "M" */
    0x6e, 0x10, 0x6, 0xc0, 0xc, 0x4, 0x10, 0x0,
    0x59, 0xdc, 0x20, 0x3, 0x98, 0x81, 0x0, 0x4d,
    0x4e, 0x1, 0xca, 0x1, 0x0,

    /* U+004E "N" */
    0x6e, 0x10, 0xa9, 0x1, 0xd0, 0xc, 0x26, 0xe0,
    0x11, 0xd4, 0x38, 0x4, 0xac, 0x40, 0x1a, 0x48,
    0x0,

    /* U+004F "O" */
    0x7, 0xef, 0xa1, 0x5, 0x89, 0xb4, 0xb0, 0xf2,
    0x74, 0x65, 0x0, 0xfd, 0xe4, 0xe8, 0xca, 0xb,
    0x13, 0x69, 0x60,

    /* U+0050 "P" */
    0x6f, 0xf7, 0x20, 0x5, 0xcf, 0x60, 0x10, 0x88,
    0x3, 0x7b, 0xc8, 0x5, 0xde, 0xc0, 0x10, 0x80,
    0x40,

    /* U+0051 "Q" */
    0x7, 0xef, 0xa1, 0x5, 0x89, 0xb4, 0xb0, 0xf2,
    0x74, 0x65, 0x0, 0xfd, 0xe4, 0xe8, 0xca, 0xb,
    0x13, 0x63, 0x60, 0x7, 0xed, 0x3c, 0x20,

    /* U+0052 "R" */
    0x6f, 0xf7, 0x28, 0x5, 0xcf, 0x40, 0x10, 0x88,
    0x3, 0x7b, 0xc0, 0x5, 0xa3, 0xe0, 0x11, 0x5b,
    0xa0,

    /* U+0053 "S" */
    0x2c, 0xfc, 0x28, 0x1c, 0x66, 0x11, 0x27, 0x92,
    0x28, 0x6d, 0xe7, 0x20, 0x7b, 0x53, 0x16, 0x0,

    /* U+0054 "T" */
    0xff, 0xed, 0xb0, 0xbd, 0x27, 0x6, 0x20, 0xf,
    0xfe, 0x18,

    /* U+0055 "U" */
    0x7e, 0x0, 0x5d, 0x0, 0x7f, 0xf1, 0x8c, 0x59,
    0x11, 0xa8, 0xf1, 0x6a, 0xe0,

    /* U+0056 "V" */
    0xcc, 0x0, 0x32, 0xe4, 0xc8, 0x4f, 0xd4, 0x69,
    0xc5, 0x1, 0xd6, 0x98, 0x1, 0x64, 0x74, 0x0,
    0x23, 0x31, 0x0,

    /* U+0057 "W" */
    0xc9, 0x8, 0xd0, 0x5f, 0xb, 0x70, 0x52, 0x26,
    0x28, 0x28, 0xa1, 0xa, 0xa7, 0x81, 0x12, 0x4d,
    0xa8, 0x90, 0x0, 0xa5, 0x76, 0x23, 0x10, 0x5,
    0x82, 0x98, 0xd8, 0x0,

    /* U+0058 "X" */
    0x8f, 0x22, 0x7b, 0xc1, 0xf7, 0x11, 0xc3, 0x8c,
    0xa8, 0x0, 0x20, 0x24, 0x0, 0xe6, 0x3e, 0xa,
    0x9, 0xe2, 0x80,

    /* U+0059 "Y" */
    0xae, 0x2, 0xf5, 0x81, 0x89, 0x35, 0x27, 0x72,
    0x78, 0x2, 0x5, 0xc, 0x2, 0x33, 0x0, 0x7e,

    /* U+005A "Z" */
    0xaf, 0xfa, 0x2f, 0x54, 0x24, 0x44, 0xb0, 0x21,
    0xe4, 0xe0, 0xc7, 0x64, 0x36, 0x13, 0xb6,

    /* U+005B "[" */
    0x6f, 0xf0, 0x8, 0xb4, 0x2, 0x20, 0xf, 0xfe,
    0x10, 0xf8, 0x3e, 0xe8, 0x0,

    /* U+005C "\\" */
    0xb7, 0x0, 0x6d, 0x0, 0x18, 0x8c, 0x0, 0xb4,
    0x0, 0xe7, 0x0, 0x20, 0x28,

    /* U+005D "]" */
    0xdf, 0x8f, 0x31, 0x27, 0x0, 0xff, 0x6a, 0x6,
    0x6c, 0x0,

    /* U+005E "^" */
    0x9, 0xf1, 0x1, 0x64, 0x90, 0x85, 0x97, 0x10,

    /* U+005F "_" */
    0xee, 0xc3, 0xff, 0x84,

    /* U+0060 "`" */
    0x0, 0x8b, 0x84, 0xb0, 0x0,

    /* U+0061 "a" */
    0x2d, 0xf9, 0x1, 0x2, 0x61, 0x97, 0xe0, 0x3e,
    0x4f, 0x0, 0x0,

    /* U+0062 "b" */
    0x8c, 0x0, 0xfe, 0x2e, 0xd3, 0x0, 0x63, 0x78,
    0x7, 0x8f, 0x1b, 0xc0,

    /* U+0063 "c" */
    0x2c, 0xf9, 0x8, 0xd, 0xa0, 0xf, 0x40, 0x6d,
    0x0,

    /* U+0064 "d" */
    0x0, 0xaa, 0x80, 0x1c, 0x5b, 0xce, 0x10, 0x38,
    0x1, 0x39, 0x8, 0x43, 0x70, 0x80,

    /* U+0065 "e" */
    0x2c, 0xfa, 0x8, 0x32, 0x43, 0x2, 0xc8, 0x38,
    0x1e, 0xc0,

    /* U+0066 "f" */
    0xa, 0xf6, 0x35, 0xb6, 0xc0, 0xb2, 0xb0, 0xe2,
    0x0, 0x8, 0x7, 0x0,

    /* U+0067 "g" */
    0x2c, 0xec, 0xa8, 0xc, 0x10, 0xf, 0x40, 0x61,
    0x80, 0xde, 0x6, 0x85, 0x6a, 0x38,

    /* U+0068 "h" */
    0x8c, 0x0, 0xfe, 0x2d, 0xe2, 0x0, 0x78, 0x28,
    0x11, 0x5e, 0x1, 0xc0,

    /* U+0069 "i" */
    0x7b, 0x5f, 0xa8, 0x0, 0xf0,

    /* U+006A "j" */
    0x0, 0x3d, 0x0, 0x16, 0x40, 0x15, 0xe0, 0x1f,
    0xfc, 0x12, 0x23, 0xe, 0x24, 0x80,

    /* U+006B "k" */
    0x8c, 0x0, 0xff, 0x27, 0xa0, 0x15, 0xc2, 0x0,
    0x95, 0x0, 0xf, 0xe, 0x0,

    /* U+006C "l" */
    0x8c, 0x0, 0xff, 0x0,

    /* U+006D "m" */
    0x8d, 0xec, 0xbe, 0x40, 0x6, 0x9f, 0x2e, 0x80,
    0x90, 0x31, 0x18, 0x7, 0xc0,

    /* U+006E "n" */
    0x8d, 0xee, 0x10, 0x1f, 0x2, 0x81, 0x1, 0x78,
    0x7, 0x0,

    /* U+006F "o" */
    0x1b, 0xfa, 0xb, 0x7e, 0x47, 0x0, 0x18, 0x2,
    0x3, 0x51, 0xc0,

    /* U+0070 "p" */
    0x8d, 0xd8, 0xc0, 0xf5, 0xfc, 0x0, 0x42, 0x1,
    0x63, 0x78, 0x17, 0x69, 0x80, 0x70,

    /* U+0071 "q" */
    0x2d, 0xec, 0xa8, 0x1f, 0x10, 0x8, 0xc0, 0x10,
    0x38, 0x0, 0x2d, 0xe7, 0x0, 0xf0,

    /* U+0072 "r" */
    0x8d, 0xe7, 0x2, 0xe7, 0x3, 0x0, 0xf0,

    /* U+0073 "s" */
    0x5e, 0xe2, 0x79, 0xb2, 0xf5, 0x34, 0xe4, 0x86,
    0x0,

    /* U+0074 "t" */
    0x3f, 0x10, 0xc0, 0xe5, 0xb0, 0xe5, 0x70, 0x20,
    0x33, 0x63, 0x0,

    /* U+0075 "u" */
    0x9b, 0xd, 0x70, 0xe, 0x16, 0x12, 0xb, 0x3c,
    0x20,

    /* U+0076 "v" */
    0xca, 0xd, 0x78, 0x54, 0x26, 0x42, 0xa6, 0x10,
    0xb1, 0xb0,

    /* U+0077 "w" */
    0xc8, 0x5f, 0x2b, 0x8a, 0x5f, 0xa, 0x4a, 0x62,
    0x58, 0x73, 0x20, 0x64, 0x71, 0xa0,

    /* U+0078 "x" */
    0x9d, 0x6e, 0x29, 0x9, 0xa2, 0x1, 0x1, 0x9,
    0x9, 0xa2,

    /* U+0079 "y" */
    0xca, 0xd, 0x89, 0x53, 0x29, 0x51, 0xe4, 0x10,
    0x92, 0xf0, 0x11, 0x12, 0x6, 0xc4, 0x80, 0x0,

    /* U+007A "z" */
    0xaf, 0xf4, 0xd4, 0xc, 0x1c, 0x50, 0xf8, 0x5d,
    0x80,

    /* U+007B "{" */
    0x7, 0xe5, 0xa, 0x45, 0x12, 0xc0, 0xd1, 0x70,
    0x81, 0x40, 0x42, 0xd0, 0x2, 0x3a, 0x84, 0xf2,
    0x80,

    /* U+007C "|" */
    0x99, 0x0, 0x7f, 0xf0, 0x0,

    /* U+007D "}" */
    0xdc, 0x10, 0xe3, 0x50, 0x31, 0x30, 0x3, 0x42,
    0x3, 0x31, 0x44, 0x5a, 0x38, 0x2a, 0x19, 0xc2,
    0x0,

    /* U+007E "~" */
    0x2d, 0x79, 0x7b, 0x4c, 0x64, 0x89, 0xbf, 0x30
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 35, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 63, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13, .adv_w = 91, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 79, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 52, .adv_w = 114, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 98, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 102, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 117, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 128, .adv_w = 61, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 137, .adv_w = 79, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 148, .adv_w = 38, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 152, .adv_w = 63, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 157, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 57, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 79, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 38, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 40, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 336, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 79, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 65, .box_w = 6, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 419, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 89, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 89, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 75, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 101, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 40, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 99, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 75, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 113, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 101, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 84, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 102, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 695, .adv_w = 90, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 77, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 99, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 751, .adv_w = 95, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 131, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 95, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 90, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 77, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 50, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 861, .adv_w = 57, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 50, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 884, .adv_w = 72, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 892, .adv_w = 66, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 896, .adv_w = 47, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 901, .adv_w = 73, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 65, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 933, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 72, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 957, .adv_w = 51, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 983, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1000, .adv_w = 36, .box_w = 4, .box_h = 8, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 1014, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1027, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1031, .adv_w = 113, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 79, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 77, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1079, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1093, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 61, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1109, .adv_w = 57, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1120, .adv_w = 79, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1129, .adv_w = 75, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1139, .adv_w = 108, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1153, .adv_w = 71, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1163, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1179, .adv_w = 62, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 56, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1205, .adv_w = 32, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1210, .adv_w = 56, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1227, .adv_w = 79, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1}
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
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 2, 3, 0, 4, 0, 4, 0,
    5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    6, 7, 8, 9, 10, 7, 11, 12,
    13, 14, 14, 15, 16, 17, 14, 14,
    7, 18, 0, 19, 20, 21, 15, 5,
    22, 23, 24, 25, 2, 8, 3, 0,
    0, 0, 26, 27, 28, 29, 30, 31,
    32, 26, 0, 33, 34, 29, 26, 26,
    27, 27, 0, 35, 36, 37, 32, 38,
    38, 39, 38, 40, 2, 0, 3, 4
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 0,
    2, 0, 3, 0, 4, 5, 4, 5,
    6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0,
    7, 8, 6, 9, 8, 9, 9, 9,
    8, 9, 9, 10, 9, 9, 9, 9,
    8, 9, 8, 9, 11, 12, 13, 14,
    15, 16, 17, 18, 0, 14, 3, 0,
    5, 0, 19, 20, 21, 21, 21, 22,
    21, 20, 0, 23, 20, 20, 24, 24,
    21, 0, 21, 24, 25, 26, 27, 28,
    28, 29, 30, 31, 0, 0, 3, 4
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 3, 3,
    1, 0, 1, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 1, 3, -7,
    -21, -15, 3, -7, 0, -18, -3, 2,
    0, 0, 0, 0, 0, 0, -13, 0,
    -12, -6, 0, -10, -10, -4, -9, -8,
    -9, -8, -9, 0, 0, 0, -5, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -6, -6,
    0, 0, 0, -4, 0, -4, 0, -7,
    -4, -6, -10, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, -14, 0, -9, 2, 0, -10,
    -6, 0, 0, 0, -13, -3, -15, -12,
    0, -17, 3, 0, 0, -2, 0, 0,
    0, 0, 0, 0, -8, 0, -8, 0,
    0, -3, 0, 0, 0, -3, 0, 0,
    0, 2, 0, -5, 0, -7, -4, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, -5, 2, 0, 5, -3, 0,
    0, 0, 0, 0, -2, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -3, 0, 0, 0,
    0, 0, 1, 0, 3, -1, 0, 1,
    0, 0, 0, -2, 0, 0, -2, 0,
    -1, 0, -1, -1, 0, 0, -1, -2,
    -1, -3, -1, -3, 0, -1, 3, 0,
    1, -17, -9, 6, -1, 0, -17, 0,
    4, 0, 0, 0, 0, 0, 0, -4,
    0, -2, -1, 0, -1, 0, -1, 0,
    -4, -4, -4, -2, 0, 0, 0, 1,
    1, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -3,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -13, 2, 0, -4,
    -9, -3, 0, -4, 0, -5, 0, 0,
    0, 0, 0, -6, 0, -6, -6, 0,
    -3, -3, -9, -7, -11, -6, -11, 0,
    -6, -14, 0, -12, 2, 0, -10, -4,
    0, 3, 0, -18, -5, -19, -15, 0,
    -24, 0, -1, 0, -2, -2, 0, 0,
    0, -5, -2, -12, 0, -12, 0, -1,
    1, 0, 1, -19, -11, 4, 0, 0,
    -21, 0, 0, 0, -2, -2, -5, 0,
    -3, -5, 0, -2, 0, 0, 0, 0,
    0, 0, 1, 0, 1, 0, 0, -3,
    0, 0, 3, 0, 0, -2, 0, 0,
    1, -4, -2, -5, -4, 0, -8, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 3,
    0, 0, -3, 0, 0, -5, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 4, 0, -10,
    -16, -13, 6, -4, 0, -18, 0, 4,
    0, 2, 3, 0, 0, 0, -17, 0,
    -15, -5, 0, -13, -13, -4, -13, -14,
    -15, -14, -12, -1, 1, 0, -5, -11,
    -12, 0, -4, 0, -13, -1, 3, 0,
    0, 0, 0, 0, 0, -11, 0, -9,
    -3, 0, -7, -9, 0, -8, -5, -6,
    -5, -6, 0, 0, 3, -13, 1, 0,
    1, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -6, 0,
    0, -2, -3, -6, -6, -9, 0, -9,
    0, -4, 1, 3, -10, -20, -17, 2,
    -10, 0, -19, -6, 0, 0, 0, 0,
    0, 0, 0, -16, 0, -17, -8, 0,
    -13, -14, -7, -13, -12, -14, -12, -12,
    0, 0, 1, -4, 3, 0, 2, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, -6, 0, -6, 0, 0,
    -5, 0, -1, 0, 0, -5, 0, 0,
    0, 0, -12, 0, -12, -10, -1, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, -4, 0, -4, 0, 0, -6,
    0, -1, -3, 0, -6, 0, 0, 0,
    0, -15, 0, -12, -9, -6, -17, 0,
    -1, 0, 0, -1, 0, 0, 0, -1,
    0, -5, -4, -5, -3, 0, 1, 0,
    2, 3, 0, -2, 0, 0, 0, 0,
    -11, 0, -9, -6, 1, -13, 0, 0,
    0, 0, 3, 0, 0, 0, 4, 0,
    0, 1, 0, 3, 0, 0, 1, 0,
    0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 1, -2,
    0, -4, 0, 0, 0, 0, -10, 0,
    -13, -9, -3, -17, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, -3, -2,
    -3, 0, 0, 9, 0, 1, -10, 0,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -2, 1,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, -13, 0, -10, -7,
    0, -13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -5, 2, 0, -7, 0, 0,
    0, 0, -10, 0, -9, -9, 0, -13,
    0, -2, 0, -3, 0, 0, 0, -1,
    0, -3, 0, 0, 0, 0, 0, 5,
    0, 1, -16, -11, -4, 0, 0, -19,
    0, 0, 0, -9, 0, -11, -13, 0,
    -5, 0, -5, 0, 0, 0, -2, 4,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    -12, 0, -12, -8, -3, -16, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0,
    -2, 0, -2, 2, 0, 0, 2, 0,
    4, 0, -3, 0, 0, 0, 0, -7,
    0, -9, 0, -1, -12, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -13,
    -8, -4, 0, 0, -13, 0, -14, 0,
    -8, -5, -9, -12, 0, -4, 0, -5,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, -1, 0, 0, 0, -3, 0, 0,
    -3, 0, 0, 0, 0, -15, 0, -9,
    -6, 0, -14, 0, -3, 0, -4, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, -5,
    0, 0, 0, 0, -11, 0, -9, -6,
    0, -12, 0, -2, 0, -2, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 40,
    .right_class_cnt     = 31,
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
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 1,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t harmonyos_sans_8 = {
#else
lv_font_t harmonyos_sans_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if HARMONYOS_SANS_8*/

