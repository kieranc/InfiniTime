/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef JETBRAINS_MONO_BOLD_16
#define JETBRAINS_MONO_BOLD_16 1
#endif

#if JETBRAINS_MONO_BOLD_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xbd, 0x80,

    /* U+0023 "#" */
    0x13, 0x9, 0x84, 0x8f, 0xf7, 0xf9, 0x90, 0x99,
    0xfe, 0xff, 0x12, 0x19, 0xc, 0x80,

    /* U+0024 "$" */
    0x10, 0x10, 0x3c, 0xfe, 0xd3, 0xd0, 0xf0, 0x7c,
    0x3e, 0x17, 0x13, 0xd3, 0xfe, 0x3c, 0x10, 0x10,

    /* U+0025 "%" */
    0x71, 0xed, 0xb6, 0xdb, 0xc7, 0xc0, 0x60, 0x60,
    0x3e, 0x3d, 0xb6, 0xdb, 0x78, 0xe0,

    /* U+0026 "&" */
    0x3c, 0x7e, 0x66, 0x60, 0x70, 0x70, 0xdb, 0xcf,
    0xce, 0xc6, 0xff, 0x7b,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0x0, 0xce, 0xcc, 0x63, 0x18, 0xc6, 0x31, 0x86,
    0x38, 0xe1,

    /* U+0029 ")" */
    0x6, 0x38, 0x63, 0x8c, 0x63, 0x18, 0xc6, 0x33,
    0x3b, 0x90,

    /* U+002A "*" */
    0x18, 0x18, 0xdb, 0xff, 0x18, 0x3c, 0x66, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x37, 0x66, 0x40,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x6, 0x6, 0x6, 0xc, 0xc, 0x1c, 0x18, 0x18,
    0x30, 0x30, 0x30, 0x60, 0x60, 0xe0, 0xc0,

    /* U+0030 "0" */
    0x38, 0xfb, 0x1e, 0x3c, 0x7b, 0xf7, 0xe3, 0xc7,
    0x8d, 0xf1, 0xc0,

    /* U+0031 "1" */
    0x38, 0xf3, 0x64, 0xc1, 0x83, 0x6, 0xc, 0x18,
    0x33, 0xff, 0xf0,

    /* U+0032 "2" */
    0x3c, 0xff, 0x1e, 0x30, 0x61, 0x87, 0x1c, 0x71,
    0xc3, 0xff, 0xf0,

    /* U+0033 "3" */
    0xfe, 0xfe, 0x6, 0xc, 0x38, 0x3e, 0x3, 0x3,
    0xc3, 0xc3, 0x7e, 0x3c,

    /* U+0034 "4" */
    0xc, 0x30, 0x61, 0x87, 0xc, 0xf1, 0xe3, 0xff,
    0xfc, 0x18, 0x30,

    /* U+0035 "5" */
    0xff, 0xff, 0x6, 0xd, 0xdf, 0xf1, 0x83, 0x7,
    0x8f, 0xfb, 0xc0,

    /* U+0036 "6" */
    0x1c, 0x18, 0x30, 0x30, 0x7e, 0x7e, 0xe7, 0xc3,
    0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0037 "7" */
    0xff, 0xff, 0xc3, 0xc6, 0x6, 0xe, 0xc, 0xc,
    0x18, 0x18, 0x30, 0x30,

    /* U+0038 "8" */
    0x3c, 0xfe, 0xe7, 0xc3, 0xc3, 0x7e, 0x7e, 0xc3,
    0xc3, 0xc7, 0xff, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xe7, 0x7e, 0x7e,
    0xc, 0xc, 0x18, 0x38,

    /* U+003A ":" */
    0xfc, 0x0, 0x7, 0xe0,

    /* U+003B ";" */
    0x77, 0x0, 0x0, 0x7, 0x66, 0x6c,

    /* U+003C "<" */
    0x0, 0x1c, 0xf7, 0x8c, 0x1c, 0xf, 0x7, 0x2,

    /* U+003D "=" */
    0xff, 0xfc, 0x0, 0xf, 0xff, 0xc0,

    /* U+003E ">" */
    0x1, 0x81, 0xe0, 0xf0, 0x61, 0xce, 0x70, 0x80,

    /* U+003F "?" */
    0xf3, 0xe0, 0xc3, 0xd, 0xf7, 0x98, 0x60, 0x6,
    0x18,

    /* U+0040 "@" */
    0x3e, 0x3f, 0xb8, 0xf8, 0x3c, 0xfe, 0xcf, 0x67,
    0xb3, 0xd9, 0xec, 0xf3, 0xf8, 0xe, 0x3, 0xe0,
    0xf0,

    /* U+0041 "A" */
    0x38, 0x38, 0x3c, 0x2c, 0x6c, 0x64, 0x66, 0x7e,
    0xfe, 0xc6, 0xc3, 0xc3,

    /* U+0042 "B" */
    0xfc, 0xfe, 0xc6, 0xc6, 0xc6, 0xfc, 0xfe, 0xc7,
    0xc3, 0xc3, 0xfe, 0xfc,

    /* U+0043 "C" */
    0x38, 0xfb, 0x1e, 0x3c, 0x18, 0x30, 0x60, 0xc7,
    0x8d, 0xf3, 0xc0,

    /* U+0044 "D" */
    0xf9, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0xf7, 0xc0,

    /* U+0045 "E" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xff, 0xe0, 0xc1,
    0x83, 0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0047 "G" */
    0x38, 0xff, 0x1e, 0xc, 0x1b, 0xf7, 0xe3, 0xc7,
    0x8d, 0xf3, 0xc0,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x7f, 0xff, 0xe3, 0xc7,
    0x8f, 0x1e, 0x30,

    /* U+0049 "I" */
    0xff, 0xfc, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x30,
    0x63, 0xff, 0xf0,

    /* U+004A "J" */
    0x3f, 0x3f, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0xc3, 0xe7, 0x7e, 0x3c,

    /* U+004B "K" */
    0xc7, 0xc6, 0xce, 0xcc, 0xcc, 0xf8, 0xf8, 0xcc,
    0xcc, 0xc6, 0xc6, 0xc7,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xff, 0xf0,

    /* U+004D "M" */
    0xe7, 0xe7, 0xe7, 0xff, 0xdb, 0xdb, 0xdb, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3,

    /* U+004E "N" */
    0xe7, 0xcf, 0x9f, 0x3f, 0x7a, 0xf5, 0xef, 0xdf,
    0x9f, 0x3e, 0x70,

    /* U+004F "O" */
    0x7d, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0xfb, 0xc0,

    /* U+0050 "P" */
    0xfc, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xfc,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf1, 0xc0, 0xc1, 0x81, 0x80,

    /* U+0052 "R" */
    0xfc, 0xfe, 0xc7, 0xc3, 0xc3, 0xfe, 0xfc, 0xcc,
    0xce, 0xc6, 0xc7, 0xc3,

    /* U+0053 "S" */
    0x3c, 0xfe, 0xc3, 0xc0, 0xe0, 0x78, 0x1e, 0x3,
    0x3, 0xc3, 0x7e, 0x3c,

    /* U+0054 "T" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0xfb, 0xe0,

    /* U+0056 "V" */
    0xc3, 0xc3, 0xc6, 0xc6, 0x66, 0x66, 0x64, 0x6c,
    0x3c, 0x3c, 0x38, 0x38,

    /* U+0057 "W" */
    0x4c, 0x93, 0x24, 0xc9, 0xb6, 0x6d, 0x9b, 0x67,
    0xb9, 0xce, 0x73, 0x9c, 0xe3, 0x30, 0xcc,

    /* U+0058 "X" */
    0x61, 0xb9, 0x8c, 0xc7, 0xc1, 0xe0, 0xe0, 0x70,
    0x3c, 0x36, 0x19, 0x98, 0xcc, 0x30,

    /* U+0059 "Y" */
    0xc3, 0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x3c, 0x18,
    0x18, 0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xfc, 0x38, 0x61, 0xc3, 0xc, 0x38, 0x61,
    0xc3, 0xff, 0xf0,

    /* U+005B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x7f, 0xe0,

    /* U+005C "\\" */
    0xc0, 0x60, 0x60, 0x60, 0x30, 0x30, 0x30, 0x18,
    0x18, 0x1c, 0xc, 0xc, 0x6, 0x6, 0x6,

    /* U+005D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0xff, 0xe0,

    /* U+005E "^" */
    0x18, 0x38, 0x3c, 0x2c, 0x64, 0x66, 0xc6,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0x63,

    /* U+0061 "a" */
    0x3e, 0x7f, 0xe3, 0x3, 0x7f, 0xc3, 0xc3, 0xff,
    0x7b,

    /* U+0062 "b" */
    0xc1, 0x83, 0x6, 0xef, 0xf8, 0xf1, 0xe3, 0xc7,
    0x8f, 0xfe, 0xe0,

    /* U+0063 "c" */
    0x3d, 0xff, 0x1e, 0xc, 0x18, 0x31, 0xff, 0x3c,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xbf, 0xf8, 0xf1, 0xe3, 0xc7,
    0x8f, 0xfb, 0xb0,

    /* U+0065 "e" */
    0x39, 0xfb, 0x1e, 0x3f, 0xf8, 0x31, 0xbe, 0x38,

    /* U+0066 "f" */
    0x1f, 0x3f, 0x30, 0x30, 0xff, 0xff, 0x30, 0x30,
    0x30, 0x30, 0x30, 0x30,

    /* U+0067 "g" */
    0x77, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x76,
    0xd, 0xfb, 0xe0,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xef, 0xf8, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x30,

    /* U+0069 "i" */
    0x18, 0x18, 0x0, 0xf8, 0xf8, 0x18, 0x18, 0x18,
    0x18, 0x18, 0xff, 0xff,

    /* U+006A "j" */
    0xc, 0x30, 0x3f, 0xfc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xf, 0xef, 0x0,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc6, 0xce, 0xcc, 0xf8, 0xf8,
    0xcc, 0xce, 0xc6, 0xc7,

    /* U+006C "l" */
    0xf8, 0x7c, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x7, 0xe1, 0xf0,

    /* U+006D "m" */
    0xf6, 0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,
    0xdb,

    /* U+006E "n" */
    0xdd, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,

    /* U+006F "o" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x78,

    /* U+0070 "p" */
    0xdd, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0xdd,
    0x83, 0x6, 0x0,

    /* U+0071 "q" */
    0x77, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x76,
    0xc, 0x18, 0x30,

    /* U+0072 "r" */
    0xdd, 0xff, 0x1e, 0x3c, 0x18, 0x30, 0x60, 0xc0,

    /* U+0073 "s" */
    0x7d, 0xff, 0x1e, 0x7, 0xc0, 0xf1, 0xff, 0x7c,

    /* U+0074 "t" */
    0x30, 0x30, 0x30, 0xff, 0xff, 0x30, 0x30, 0x30,
    0x30, 0x30, 0x3f, 0x1f,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xfe, 0x7c,

    /* U+0076 "v" */
    0xc3, 0xc7, 0xc6, 0x66, 0x66, 0x6c, 0x3c, 0x3c,
    0x38,

    /* U+0077 "w" */
    0xcc, 0xa6, 0xd3, 0x6b, 0xb7, 0x5b, 0xa9, 0xdc,
    0xe6, 0x33, 0x0,

    /* U+0078 "x" */
    0xc7, 0x66, 0x7c, 0x3c, 0x18, 0x3c, 0x6c, 0x66,
    0xc7,

    /* U+0079 "y" */
    0xc3, 0xc6, 0x66, 0x66, 0x6c, 0x3c, 0x3c, 0x38,
    0x18, 0x18, 0x30, 0x30,

    /* U+007A "z" */
    0xff, 0xfc, 0x38, 0xe3, 0x8e, 0x38, 0x7f, 0xfe,

    /* U+007B "{" */
    0xe, 0x3c, 0x60, 0xc1, 0x83, 0x3c, 0x78, 0x18,
    0x30, 0x60, 0xc1, 0x83, 0xc3, 0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xe1, 0xe0, 0xc1, 0x83, 0x6, 0x7, 0x8f, 0x30,
    0x60, 0xc1, 0x83, 0x1e, 0x38, 0x0,

    /* U+007E "~" */
    0x73, 0xfb, 0xdf, 0xce,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xf0, 0xff, 0xff,

    /* U+00A2 "¢" */
    0x10, 0x10, 0x7c, 0xfe, 0xd6, 0xd0, 0xd0, 0xd0,
    0xd6, 0xfe, 0x3c, 0x10, 0x10,

    /* U+00A3 "£" */
    0x7d, 0xff, 0x1e, 0x6, 0x1f, 0xbf, 0x18, 0x71,
    0xc3, 0xff, 0xf0,

    /* U+00A4 "¤" */
    0x41, 0x7f, 0xdf, 0xcc, 0x66, 0x33, 0x19, 0xfd,
    0xff, 0x41, 0x0,

    /* U+00A5 "¥" */
    0x61, 0x98, 0x63, 0x30, 0xcc, 0x1e, 0x7, 0x87,
    0xf9, 0xfe, 0xc, 0x1f, 0xe7, 0xf8, 0x30,

    /* U+00A6 "¦" */
    0xff, 0xf0, 0x3f, 0xfc,

    /* U+00A7 "§" */
    0x7c, 0xfe, 0xc3, 0xc0, 0x78, 0x3e, 0xc3, 0xc3,
    0xe3, 0x7c, 0xf, 0x3, 0xc3, 0xff, 0x7e,

    /* U+00A8 "¨" */
    0xcf, 0x30,

    /* U+00A9 "©" */
    0x3c, 0x42, 0x99, 0xa5, 0xa1, 0xa1, 0xa5, 0x99,
    0x42, 0x3c,

    /* U+00AA "ª" */
    0x71, 0xf9, 0xf0,

    /* U+00AB "«" */
    0x19, 0x99, 0x99, 0x99, 0x86, 0x61, 0x98, 0x66,

    /* U+00AC "¬" */
    0xff, 0xff, 0x3, 0x3,

    /* U+00AD "­" */
    0xff, 0xc0,

    /* U+00AE "®" */
    0x3c, 0x42, 0xb9, 0xa5, 0xa5, 0xbd, 0xad, 0xa5,
    0x42, 0x3c,

    /* U+00AF "¯" */
    0xff, 0xf0,

    /* U+00B0 "°" */
    0x74, 0x63, 0x17, 0x0,

    /* U+00B1 "±" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0xff,
    0xff,

    /* U+00B2 "²" */
    0x76, 0x42, 0x33, 0x73, 0xe0,

    /* U+00B3 "³" */
    0x78, 0xcc, 0x70, 0xa5, 0xc0,

    /* U+00B4 "´" */
    0x36,

    /* U+00B5 "µ" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0xf7,
    0x83, 0x6, 0x0,

    /* U+00B6 "¶" */
    0x7b, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0x7b, 0x1b,
    0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b,

    /* U+00B7 "·" */
    0xff, 0x80,

    /* U+00B8 "¸" */
    0x46, 0x3f,

    /* U+00B9 "¹" */
    0x67, 0x8, 0x42, 0x13, 0xe0,

    /* U+00BA "º" */
    0x69, 0x99, 0x60,

    /* U+00BB "»" */
    0x66, 0x1b, 0x8e, 0xc3, 0x33, 0xb1, 0xb9, 0x98,

    /* U+00BC "¼" */
    0x21, 0xe2, 0x26, 0x24, 0xfc, 0x8, 0x18, 0x16,
    0x34, 0x29, 0x6f, 0x41,

    /* U+00BD "½" */
    0x21, 0x71, 0x88, 0x84, 0xcf, 0xc0, 0x60, 0x60,
    0x3e, 0x34, 0x90, 0xd9, 0x88, 0xf0,

    /* U+00BE "¾" */
    0xf2, 0x32, 0x22, 0x14, 0x94, 0x78, 0x8, 0x12,
    0x12, 0x25, 0x27, 0x41,

    /* U+00BF "¿" */
    0x18, 0x60, 0x6, 0x19, 0xef, 0xb0, 0xc3, 0x7,
    0xcf,

    /* U+00C0 "À" */
    0x30, 0x18, 0x0, 0x38, 0x38, 0x3c, 0x2c, 0x6c,
    0x64, 0x66, 0x7e, 0xfe, 0xc6, 0xc3, 0xc3,

    /* U+00C1 "Á" */
    0xc, 0x18, 0x0, 0x38, 0x38, 0x3c, 0x2c, 0x6c,
    0x64, 0x66, 0x7e, 0xfe, 0xc6, 0xc3, 0xc3,

    /* U+00C2 "Â" */
    0x18, 0x3c, 0x64, 0x0, 0x38, 0x38, 0x3c, 0x2c,
    0x6c, 0x64, 0x66, 0x7e, 0xfe, 0xc6, 0xc3, 0xc3,

    /* U+00C3 "Ã" */
    0x36, 0x7c, 0x4c, 0x0, 0x38, 0x38, 0x3c, 0x2c,
    0x6c, 0x64, 0x66, 0x7e, 0xfe, 0xc6, 0xc3, 0xc3,

    /* U+00C4 "Ä" */
    0x66, 0x66, 0x0, 0x3c, 0x3c, 0x3c, 0x3c, 0x66,
    0x66, 0x66, 0x7e, 0x7e, 0xc3, 0xc3, 0xc3,

    /* U+00C5 "Å" */
    0x18, 0x24, 0x24, 0x18, 0x18, 0x3c, 0x3c, 0x3c,
    0x24, 0x66, 0x66, 0x7e, 0x7e, 0xc3, 0xc3, 0xc3,

    /* U+00C6 "Æ" */
    0x1f, 0xcf, 0xf3, 0x60, 0xd8, 0x36, 0x9, 0xe6,
    0x79, 0xf8, 0x7e, 0x19, 0x86, 0x7d, 0x1f,

    /* U+00C7 "Ç" */
    0x38, 0xfb, 0x1e, 0x3c, 0x18, 0x30, 0x60, 0xc7,
    0x8d, 0xf1, 0xe3, 0x1, 0xe, 0x0,

    /* U+00C8 "È" */
    0x30, 0x70, 0x7, 0xff, 0xf8, 0x30, 0x60, 0xff,
    0xff, 0x6, 0xc, 0x1f, 0xff, 0x80,

    /* U+00C9 "É" */
    0xc, 0x30, 0x7, 0xff, 0xf8, 0x30, 0x60, 0xff,
    0xff, 0x6, 0xc, 0x1f, 0xff, 0x80,

    /* U+00CA "Ê" */
    0x18, 0x79, 0xb0, 0xf, 0xff, 0xf0, 0x60, 0xc1,
    0xff, 0xfe, 0xc, 0x18, 0x3f, 0xff,

    /* U+00CB "Ë" */
    0x66, 0xcc, 0x7, 0xff, 0xf8, 0x30, 0x60, 0xff,
    0xff, 0x6, 0xc, 0x1f, 0xff, 0x80,

    /* U+00CC "Ì" */
    0x60, 0x60, 0x7, 0xff, 0xe6, 0xc, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x1f, 0xff, 0x80,

    /* U+00CD "Í" */
    0x1c, 0x60, 0x7, 0xff, 0xe6, 0xc, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x1f, 0xff, 0x80,

    /* U+00CE "Î" */
    0x30, 0xf1, 0x30, 0xf, 0xff, 0xcc, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x6, 0x3f, 0xff,

    /* U+00CF "Ï" */
    0xcd, 0x98, 0x7, 0xff, 0xe6, 0xc, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x1f, 0xff, 0x80,

    /* U+00D0 "Ð" */
    0x7c, 0x7e, 0x63, 0x63, 0x63, 0xf3, 0xf3, 0x63,
    0x63, 0x63, 0x7e, 0x7c,

    /* U+00D1 "Ñ" */
    0x74, 0xf9, 0x60, 0xe, 0x7c, 0xf9, 0xf3, 0xf7,
    0xaf, 0x5e, 0xfd, 0xf9, 0xf3, 0xe7,

    /* U+00D2 "Ò" */
    0x60, 0x60, 0x3, 0xef, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x7f, 0xde, 0x0,

    /* U+00D3 "Ó" */
    0xc, 0x30, 0x3, 0xef, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x7f, 0xde, 0x0,

    /* U+00D4 "Ô" */
    0x10, 0x71, 0xb0, 0x7, 0xdf, 0xb1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xbc,

    /* U+00D5 "Õ" */
    0x74, 0xf9, 0x70, 0x7, 0xdf, 0xb1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xbc,

    /* U+00D6 "Ö" */
    0x66, 0xcc, 0x3, 0xef, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x7f, 0xde, 0x0,

    /* U+00D7 "×" */
    0x0, 0xcd, 0xf1, 0xc3, 0xcd, 0xd1, 0x80,

    /* U+00D8 "Ø" */
    0x3d, 0xbf, 0x98, 0xcc, 0xe6, 0x73, 0x79, 0xac,
    0xe6, 0x73, 0x31, 0x9f, 0xcb, 0xcc, 0x0,

    /* U+00D9 "Ù" */
    0x60, 0x60, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x7f, 0xdf, 0x0,

    /* U+00DA "Ú" */
    0xc, 0x30, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x7f, 0xdf, 0x0,

    /* U+00DB "Û" */
    0x10, 0x71, 0xb0, 0xc, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xbe,

    /* U+00DC "Ü" */
    0x66, 0xcc, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x7f, 0xdf, 0x0,

    /* U+00DD "Ý" */
    0xc, 0x18, 0x0, 0xc3, 0xc3, 0x66, 0x66, 0x3c,
    0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+00DE "Þ" */
    0xc0, 0xc0, 0xfc, 0xfe, 0xc3, 0xc3, 0xc3, 0xfe,
    0xfc, 0xc0, 0xc0, 0xc0,

    /* U+00DF "ß" */
    0x3c, 0xff, 0x1e, 0x3c, 0x7b, 0x37, 0x63, 0xc7,
    0x8f, 0x7e, 0xe0,

    /* U+00E0 "à" */
    0x30, 0x18, 0x0, 0x0, 0x3e, 0x7f, 0xe3, 0x3,
    0x7f, 0xc3, 0xc3, 0xff, 0x7b,

    /* U+00E1 "á" */
    0xe, 0x1c, 0x0, 0x0, 0x3e, 0x7f, 0xe3, 0x3,
    0x7f, 0xc3, 0xc3, 0xff, 0x7b,

    /* U+00E2 "â" */
    0x1c, 0x36, 0x63, 0x0, 0x3e, 0x7f, 0xe3, 0x3,
    0x7f, 0xc3, 0xc3, 0xff, 0x7b,

    /* U+00E3 "ã" */
    0x3a, 0x7e, 0x6e, 0x0, 0x3e, 0x7f, 0xe3, 0x3,
    0x7f, 0xc3, 0xc3, 0xff, 0x7b,

    /* U+00E4 "ä" */
    0x66, 0x66, 0x0, 0x0, 0x3e, 0x7f, 0x63, 0x3,
    0x7f, 0xc3, 0xc3, 0xff, 0x7b,

    /* U+00E5 "å" */
    0x18, 0x24, 0x24, 0x18, 0x0, 0x3e, 0x7f, 0x63,
    0x3, 0x7f, 0xc3, 0xc3, 0xff, 0x7b,

    /* U+00E6 "æ" */
    0x66, 0xff, 0xdb, 0x1b, 0x7f, 0xd8, 0xdb, 0xff,
    0x66,

    /* U+00E7 "ç" */
    0x3d, 0xff, 0x1e, 0xc, 0x18, 0x31, 0xbf, 0x3c,
    0x60, 0x21, 0xc0,

    /* U+00E8 "è" */
    0x60, 0x60, 0x0, 0x3, 0x9f, 0xb1, 0xe3, 0xff,
    0x83, 0x1b, 0xe3, 0x80,

    /* U+00E9 "é" */
    0x8, 0x30, 0x0, 0x3, 0x9f, 0xb1, 0xe3, 0xff,
    0x83, 0x1b, 0xe3, 0x80,

    /* U+00EA "ê" */
    0x38, 0xd9, 0x10, 0x3, 0x9f, 0xb1, 0xe3, 0xff,
    0x83, 0x1b, 0xe3, 0x80,

    /* U+00EB "ë" */
    0x66, 0xcc, 0x0, 0x3, 0x9f, 0xb1, 0xe3, 0xff,
    0x83, 0x1b, 0xf3, 0x80,

    /* U+00EC "ì" */
    0x30, 0x18, 0x0, 0x0, 0xf8, 0xf8, 0x18, 0x18,
    0x18, 0x18, 0x18, 0xff, 0xff,

    /* U+00ED "í" */
    0xc, 0x18, 0x0, 0x0, 0xf8, 0xf8, 0x18, 0x18,
    0x18, 0x18, 0x18, 0xff, 0xff,

    /* U+00EE "î" */
    0x18, 0x3c, 0x66, 0x0, 0xf8, 0xf8, 0x18, 0x18,
    0x18, 0x18, 0x18, 0xff, 0xff,

    /* U+00EF "ï" */
    0x66, 0x66, 0x0, 0xf8, 0xf8, 0x18, 0x18, 0x18,
    0x18, 0x18, 0xff, 0xff,

    /* U+00F0 "ð" */
    0x36, 0x3e, 0x78, 0x4c, 0xe, 0x7e, 0xff, 0xc3,
    0xc3, 0xc3, 0x7e, 0x3c,

    /* U+00F1 "ñ" */
    0x74, 0xf9, 0x70, 0xd, 0xdf, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x60,

    /* U+00F2 "ò" */
    0x60, 0x60, 0x0, 0x7, 0xdf, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xf7, 0x80,

    /* U+00F3 "ó" */
    0xc, 0x30, 0x0, 0x7, 0xdf, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xf7, 0x80,

    /* U+00F4 "ô" */
    0x38, 0xd9, 0x10, 0x7, 0xdf, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xf7, 0x80,

    /* U+00F5 "õ" */
    0x74, 0xf9, 0x70, 0x7, 0xdf, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xf7, 0x80,

    /* U+00F6 "ö" */
    0x66, 0xcc, 0x0, 0x7, 0xdf, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xf7, 0x80,

    /* U+00F7 "÷" */
    0x30, 0xc0, 0x3f, 0xfc, 0x3, 0xc,

    /* U+00F8 "ø" */
    0x1, 0x9f, 0x9f, 0x8c, 0xe6, 0xf3, 0x59, 0xcc,
    0xe6, 0x7f, 0x3f, 0x30, 0x0,

    /* U+00F9 "ù" */
    0x60, 0x60, 0x0, 0xc, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xe7, 0xc0,

    /* U+00FA "ú" */
    0xc, 0x30, 0x0, 0xc, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xe7, 0xc0,

    /* U+00FB "û" */
    0x38, 0xdb, 0x18, 0xc, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xe7, 0xc0,

    /* U+00FC "ü" */
    0x6c, 0xd8, 0x0, 0xc, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xe7, 0xc0,

    /* U+00FD "ý" */
    0xc, 0x18, 0x0, 0xc3, 0xc6, 0x66, 0x66, 0x6c,
    0x3c, 0x3c, 0x38, 0x18, 0x18, 0x30, 0x30,

    /* U+00FE "þ" */
    0xc1, 0x83, 0x6, 0xef, 0xf8, 0xf1, 0xe3, 0xc7,
    0x8f, 0xfe, 0xec, 0x18, 0x30, 0x0,

    /* U+00FF "ÿ" */
    0x66, 0x66, 0x0, 0xc3, 0xc3, 0x66, 0x66, 0x76,
    0x3c, 0x3c, 0x3c, 0x18, 0x18, 0x30, 0x30
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 154, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 154, .box_w = 2, .box_h = 12, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 154, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 8, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 154, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 38, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 154, .box_w = 2, .box_h = 5, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 66, .adv_w = 154, .box_w = 5, .box_h = 16, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 76, .adv_w = 154, .box_w = 5, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 86, .adv_w = 154, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 94, .adv_w = 154, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 101, .adv_w = 154, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 104, .adv_w = 154, .box_w = 5, .box_h = 2, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 106, .adv_w = 154, .box_w = 3, .box_h = 3, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 123, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 154, .box_w = 3, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 154, .box_w = 4, .box_h = 12, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 248, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 256, .adv_w = 154, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 262, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 270, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 154, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 296, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 493, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 552, .adv_w = 154, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 154, .box_w = 5, .box_h = 15, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 614, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 629, .adv_w = 154, .box_w = 5, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 639, .adv_w = 154, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 646, .adv_w = 154, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 648, .adv_w = 154, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 649, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 677, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 719, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 154, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 754, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 816, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 827, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 872, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 904, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 926, .adv_w = 154, .box_w = 2, .box_h = 15, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 930, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 944, .adv_w = 154, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 948, .adv_w = 154, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 154, .box_w = 2, .box_h = 12, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 952, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 965, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 976, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 987, .adv_w = 154, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 154, .box_w = 2, .box_h = 15, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 1006, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1021, .adv_w = 154, .box_w = 6, .box_h = 2, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 1023, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1033, .adv_w = 154, .box_w = 4, .box_h = 5, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 1036, .adv_w = 154, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1044, .adv_w = 154, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1048, .adv_w = 154, .box_w = 5, .box_h = 2, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 1050, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1060, .adv_w = 154, .box_w = 6, .box_h = 2, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 1062, .adv_w = 154, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 1066, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 154, .box_w = 5, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 1080, .adv_w = 154, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 1085, .adv_w = 154, .box_w = 4, .box_h = 2, .ofs_x = 3, .ofs_y = 10},
    {.bitmap_index = 1086, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1097, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1112, .adv_w = 154, .box_w = 3, .box_h = 3, .ofs_x = 3, .ofs_y = 4},
    {.bitmap_index = 1114, .adv_w = 154, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 1116, .adv_w = 154, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 1121, .adv_w = 154, .box_w = 4, .box_h = 5, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 1124, .adv_w = 154, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1132, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1144, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1158, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1170, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1179, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1209, .adv_w = 154, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1225, .adv_w = 154, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1241, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1256, .adv_w = 154, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1272, .adv_w = 154, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1287, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1301, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1315, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1329, .adv_w = 154, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1343, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1357, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1371, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1385, .adv_w = 154, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1399, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1413, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1425, .adv_w = 154, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1453, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1467, .adv_w = 154, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1481, .adv_w = 154, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1495, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1509, .adv_w = 154, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1516, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1531, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1545, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1559, .adv_w = 154, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1573, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1587, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1602, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1614, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1625, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1638, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1651, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1664, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1677, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1690, .adv_w = 154, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1704, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1713, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1724, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1736, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1748, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1760, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1772, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1785, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1811, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1823, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1835, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1847, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1859, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1871, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1883, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1895, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1907, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1913, .adv_w = 154, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1926, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1938, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1950, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1962, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1974, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1989, .adv_w = 154, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2003, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -3}
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
    },
    {
        .range_start = 160, .range_length = 96, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
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
    .cmap_num = 2,
    .bpp = 1,
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
const lv_font_t jetbrains_mono_bold_16 = {
#else
lv_font_t jetbrains_mono_bold_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if JETBRAINS_MONO_BOLD_16*/

