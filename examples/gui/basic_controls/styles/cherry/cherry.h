//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v1.2 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleCherry();                                   //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2022 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define CHERRY_STYLE_PROPS_COUNT  16

// Custom style name: cherry
static const GuiStyleProp cherryStyleProps[CHERRY_STYLE_PROPS_COUNT] = {
    { 0, 0, 0xda5757ff },    // DEFAULT_BORDER_COLOR_NORMAL 
    { 0, 1, 0x753233ff },    // DEFAULT_BASE_COLOR_NORMAL 
    { 0, 2, 0xe17373ff },    // DEFAULT_TEXT_COLOR_NORMAL 
    { 0, 3, 0xfaaa97ff },    // DEFAULT_BORDER_COLOR_FOCUSED 
    { 0, 4, 0xe06262ff },    // DEFAULT_BASE_COLOR_FOCUSED 
    { 0, 5, 0xfdb4aaff },    // DEFAULT_TEXT_COLOR_FOCUSED 
    { 0, 6, 0xe03c46ff },    // DEFAULT_BORDER_COLOR_PRESSED 
    { 0, 7, 0x5b1e20ff },    // DEFAULT_BASE_COLOR_PRESSED 
    { 0, 8, 0xc2474fff },    // DEFAULT_TEXT_COLOR_PRESSED 
    { 0, 9, 0xa19292ff },    // DEFAULT_BORDER_COLOR_DISABLED 
    { 0, 10, 0x706060ff },    // DEFAULT_BASE_COLOR_DISABLED 
    { 0, 11, 0x9e8585ff },    // DEFAULT_TEXT_COLOR_DISABLED 
    { 0, 16, 0x0000000f },    // DEFAULT_TEXT_SIZE 
    { 0, 17, 0x00000000 },    // DEFAULT_TEXT_SPACING 
    { 0, 18, 0xfb8170ff },    // DEFAULT_LINE_COLOR 
    { 0, 19, 0x3a1720ff },    // DEFAULT_BACKGROUND_COLOR 
};

// WARNING: This style uses a custom font:  (size: 15, spacing: 0)

#define CHERRY_COMPRESSED_DATA_SIZE 1406

// Font image pixels data compressed (DEFLATE)
// NOTE: Original pixel data simplified to GRAYSCALE
static unsigned char cherryFontData[CHERRY_COMPRESSED_DATA_SIZE] = { 0xed,
    0xdd, 0x4b, 0x76, 0xe3, 0x36, 0x10, 0x05, 0x50, 0xed, 0x7f, 0xd3, 0x2f, 0x27, 0x93, 0xa4, 0x4f, 0x3a, 0x26, 0x50, 0x85,
    0xa2, 0xc4, 0xb6, 0xaf, 0xef, 0xcc, 0xb2, 0x28, 0x0a, 0x45, 0x82, 0xbf, 0x07, 0x38, 0x2f, 0x00, 0x80, 0xdf, 0xfc, 0xfd,
    0xf3, 0xd5, 0x6f, 0xff, 0xff, 0xb5, 0x5f, 0xdf, 0x95, 0xcb, 0x25, 0xf7, 0x3f, 0x3b, 0xc5, 0xa5, 0xa6, 0xf0, 0x77, 0xf9,
    0x72, 0x5d, 0xb2, 0xfd, 0x99, 0xf5, 0xef, 0x5d, 0xff, 0xae, 0x57, 0x6d, 0x9f, 0xd1, 0x2d, 0xe0, 0xeb, 0xdf, 0xae, 0xea,
    0xf0, 0x55, 0x7b, 0xfe, 0xfb, 0x73, 0xf5, 0x89, 0x29, 0xbe, 0xb6, 0x7a, 0x4f, 0xff, 0xb7, 0xab, 0xf6, 0xfe, 0xfa, 0xfb,
    0xe5, 0xa0, 0x9d, 0xaf, 0xdb, 0xa1, 0xde, 0x76, 0x93, 0xf5, 0xbf, 0xde, 0x6b, 0x73, 0xd9, 0x02, 0xb9, 0xdc, 0x82, 0xf2,
    0x4f, 0xef, 0x32, 0xf5, 0xfd, 0x52, 0xda, 0x52, 0xaa, 0xeb, 0x3b, 0xd3, 0x7a, 0xb5, 0x6d, 0x3d, 0xcb, 0x7e, 0xe4, 0x73,
    0xf5, 0x5f, 0xb7, 0xd5, 0xaa, 0x3d, 0xb3, 0xec, 0x27, 0x33, 0xb2, 0xfe, 0x69, 0x6d, 0xd1, 0x77, 0x1d, 0x67, 0xab, 0xdb,
    0x7a, 0x5a, 0x6d, 0xff, 0x8c, 0xfa, 0xaf, 0x6b, 0x98, 0xe2, 0x59, 0xc1, 0xbd, 0xf5, 0xbf, 0xa3, 0x5d, 0xef, 0xaa, 0xff,
    0xf4, 0x5a, 0xa6, 0x75, 0x04, 0x58, 0xad, 0x5f, 0x5a, 0xe7, 0x71, 0xff, 0xad, 0x45, 0xde, 0x52, 0xff, 0xd7, 0xad, 0x95,
    0x7f, 0x35, 0x8f, 0x75, 0xf9, 0xc8, 0x9a, 0x9e, 0x1f, 0xfd, 0xf7, 0x7a, 0xf9, 0xbd, 0x7d, 0xe2, 0x7d, 0xf5, 0xbf, 0xb3,
    0xef, 0xef, 0x1d, 0xcb, 0xf3, 0xa6, 0xea, 0xd7, 0xf7, 0x92, 0xfd, 0x6b, 0x83, 0xeb, 0xeb, 0xb0, 0x5c, 0x5e, 0x59, 0xe5,
    0xe8, 0xdc, 0xea, 0xb3, 0x7b, 0xc9, 0xe9, 0xb5, 0xdc, 0xd5, 0xb9, 0xf5, 0xec, 0x79, 0x4a, 0x9a, 0xc7, 0xdb, 0x6c, 0x1e,
    0x1f, 0x52, 0xbe, 0xfe, 0xcb, 0xc8, 0xb9, 0xf5, 0x93, 0xea, 0xff, 0xa4, 0x2d, 0x71, 0xe2, 0xfa, 0x6f, 0xbd, 0x77, 0x5e,
    0x6d, 0xa5, 0x59, 0x9e, 0x19, 0x66, 0x71, 0x8d, 0x78, 0x7a, 0x87, 0xe6, 0x19, 0xf7, 0xd8, 0xbe, 0xff, 0x9d, 0x45, 0x77,
    0x57, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0xce, 0x6d, 0xd4, 0xd2, 0x49, 0x59, 0x3c, 0x9f, 0x9e, 0x79, 0xcf, 0x6b,
    0x23, 0x29, 0x5c, 0x79, 0xb2, 0x94, 0xc1, 0x24, 0x55, 0x16, 0x19, 0xf8, 0xb4, 0x96, 0xbd, 0x7a, 0x86, 0x9f, 0x65, 0xfb,
    0x76, 0x9f, 0xc5, 0xd5, 0xb2, 0xe9, 0xbd, 0xa5, 0x55, 0xb3, 0xce, 0x57, 0xaf, 0x64, 0xfb, 0xb7, 0xeb, 0x77, 0x74, 0x96,
    0xb6, 0x93, 0x39, 0xcf, 0x32, 0x29, 0x33, 0xb9, 0xe4, 0xb3, 0x94, 0x62, 0x0a, 0xeb, 0x99, 0x52, 0x22, 0x7e, 0xa7, 0x37,
    0xe9, 0xa4, 0xe0, 0x4f, 0x47, 0x58, 0x9c, 0x8f, 0x82, 0xf9, 0x3a, 0x9f, 0x9d, 0x66, 0xc6, 0xe5, 0xba, 0xc6, 0x39, 0xc8,
    0x8c, 0xd6, 0x7b, 0xb2, 0x2c, 0xc7, 0x70, 0xd4, 0x7a, 0xa1, 0x7a, 0x6e, 0x69, 0x26, 0xd1, 0x9e, 0xcd, 0xcc, 0xe2, 0xab,
    0x99, 0x48, 0xbd, 0xaa, 0x51, 0x1a, 0xd9, 0xbe, 0x34, 0x93, 0x2b, 0x67, 0xe3, 0x3f, 0x32, 0x92, 0xd4, 0x3d, 0x19, 0xa3,
    0x33, 0x79, 0x54, 0xbb, 0x7b, 0xff, 0xdf, 0xc9, 0x2f, 0x76, 0x47, 0x40, 0x5d, 0xed, 0x5d, 0xf3, 0xf5, 0xcf, 0x41, 0xa6,
    0x34, 0x23, 0xb9, 0xe5, 0xbc, 0x25, 0xd5, 0xdc, 0x49, 0x33, 0xa6, 0x35, 0x9a, 0xef, 0xd7, 0x9e, 0xf3, 0xae, 0xfe, 0x7f,
    0xb2, 0xfe, 0x69, 0xec, 0xb1, 0x57, 0x23, 0xb8, 0xba, 0x47, 0xe7, 0xdc, 0x3e, 0xa2, 0xed, 0x1d, 0xa9, 0xff, 0x1c, 0x8d,
    0x71, 0x7c, 0xd2, 0xf1, 0x7f, 0x7d, 0x35, 0xf7, 0xba, 0x7d, 0xdc, 0x6a, 0xf5, 0xfa, 0xef, 0xf3, 0x29, 0xc6, 0x75, 0x2f,
    0x93, 0x76, 0xf2, 0x3f, 0x1b, 0xf9, 0xe8, 0x9f, 0x91, 0xad, 0xec, 0x26, 0x88, 0xdf, 0x71, 0xd7, 0x24, 0x1b, 0x67, 0x34,
    0xaf, 0x66, 0x86, 0x7f, 0xfe, 0xfa, 0xff, 0xbb, 0x65, 0x88, 0xf3, 0x80, 0x14, 0xf3, 0x4f, 0xab, 0x85, 0x6c, 0x39, 0xaa,
    0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x7b, 0x92, 0x9a, 0x46, 0x3e, 0xf6, 0xb5, 0x91, 0xe8, 0x9e, 0xcd, 0xe9, 0x76,
    0x96, 0xf7, 0xfb, 0xab, 0xab, 0x65, 0x74, 0xbf, 0x6d, 0x27, 0x0d, 0x9e, 0xad, 0x75, 0x4f, 0xb3, 0x6e, 0x7b, 0xb9, 0xa7,
    0x6e, 0xaa, 0x24, 0x97, 0xf3, 0x7d, 0x4d, 0xcf, 0x60, 0x9a, 0xa3, 0xdc, 0x7f, 0x36, 0x32, 0x02, 0xb9, 0x25, 0x7b, 0x9d,
    0xad, 0xef, 0xd5, 0xcd, 0x02, 0xe5, 0x20, 0x85, 0xde, 0x1d, 0x33, 0x31, 0x91, 0x46, 0xeb, 0xd6, 0x3f, 0xed, 0x75, 0xc9,
    0x32, 0x7b, 0x9f, 0x83, 0xf6, 0x4c, 0x33, 0xb3, 0x35, 0x31, 0x92, 0xa0, 0xb3, 0x57, 0xcf, 0x7e, 0xb3, 0x77, 0xd5, 0xff,
    0x64, 0x5b, 0xfc, 0x33, 0xeb, 0x9f, 0x83, 0x0c, 0xca, 0x7e, 0xfd, 0xb3, 0x75, 0x9c, 0xb9, 0x4e, 0x3a, 0x57, 0x53, 0xce,
    0xb3, 0xb9, 0xba, 0x9d, 0x6d, 0x31, 0xdb, 0x33, 0x0f, 0x77, 0xea, 0x9f, 0xe5, 0x18, 0x9a, 0xce, 0xac, 0xf6, 0xdd, 0xb9,
    0xb2, 0xdf, 0xb5, 0xff, 0x9f, 0x8f, 0x72, 0x79, 0xd7, 0xfe, 0x7f, 0x7f, 0xfd, 0x3b, 0x4b, 0xdd, 0xcd, 0xa5, 0xbf, 0xa7,
    0xff, 0x9f, 0xfc, 0x84, 0x7a, 0xfd, 0x73, 0xeb, 0xf1, 0xbf, 0xf2, 0x09, 0xfd, 0xfe, 0xff, 0xea, 0xb3, 0x67, 0xcf, 0xff,
    0x66, 0xfb, 0xff, 0xde, 0x37, 0x9b, 0x3d, 0xff, 0xdf, 0x1b, 0x3b, 0x90, 0x81, 0x6d, 0x31, 0x8d, 0x4a, 0x9d, 0xb6, 0xd2,
    0xd9, 0xf1, 0x3f, 0xad, 0x0c, 0xea, 0xfe, 0x38, 0xe6, 0x1c, 0x5c, 0x59, 0xcf, 0x5d, 0xff, 0xaf, 0xc7, 0x01, 0xac, 0xef,
    0x52, 0xac, 0xef, 0x1d, 0xdc, 0x75, 0xfd, 0xbf, 0x6e, 0xa5, 0xea, 0x7d, 0x8d, 0xbd, 0x3b, 0x0b, 0x52, 0xc8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xef, 0xcf, 0x10, 0xf7, 0x9e, 0xd6, 0x9e, 0x24, 0xb4, 0x4f, 0x9e, 0xdf, 0xee, 0xe5, 0xc1,
    0x2a, 0x73, 0x67, 0x56, 0x52, 0xc3, 0xfb, 0xcf, 0xa8, 0x5f, 0x07, 0x49, 0xef, 0xce, 0x13, 0xe0, 0xd3, 0x67, 0xbf, 0xd9,
    0xce, 0xde, 0x4e, 0x24, 0x34, 0x52, 0x5e, 0x83, 0x89, 0x04, 0x59, 0x16, 0x33, 0xdc, 0x76, 0xe7, 0x39, 0x9f, 0x4c, 0xe3,
    0xcc, 0xa5, 0xce, 0x6b, 0x33, 0x41, 0xa6, 0x9c, 0xbd, 0xef, 0xd5, 0x3f, 0xcd, 0xb4, 0x59, 0x06, 0x92, 0xe9, 0x73, 0x33,
    0x23, 0xf6, 0x52, 0xad, 0x29, 0xd6, 0xe1, 0x2c, 0x75, 0x54, 0x9d, 0x09, 0x74, 0x9d, 0x32, 0xca, 0xe6, 0xdf, 0xad, 0xda,
    0xa0, 0x93, 0x35, 0xcc, 0xf0, 0xc8, 0x84, 0xb3, 0xea, 0x9f, 0xee, 0xff, 0xf5, 0xfa, 0xd7, 0xb7, 0xb7, 0xe9, 0xfa, 0xaf,
    0x47, 0x9b, 0xec, 0xf6, 0xca, 0x19, 0xcc, 0xb8, 0x7e, 0xa6, 0xfe, 0xab, 0x2c, 0x77, 0x9a, 0x33, 0xb7, 0xd6, 0x67, 0xfc,
    0x5e, 0x7f, 0xda, 0x6c, 0xfd, 0x73, 0xbc, 0x87, 0x67, 0x78, 0x9c, 0xd1, 0x27, 0xe6, 0x00, 0xdd, 0x39, 0x5f, 0xe8, 0xd5,
    0x38, 0xa3, 0xc7, 0x9b, 0x5a, 0xf6, 0x2f, 0x9b, 0xfb, 0x6e, 0x8e, 0x7a, 0x9d, 0xbc, 0x69, 0xcb, 0xc8, 0xc7, 0xae, 0xa5,
    0x3a, 0x9f, 0xdf, 0x9f, 0xe5, 0x3c, 0x87, 0xaf, 0x57, 0xea, 0x7f, 0x9d, 0x53, 0x3d, 0xab, 0x7f, 0x16, 0x23, 0x1d, 0xf3,
    0xc7, 0xd4, 0x3f, 0xad, 0xfa, 0x67, 0xb8, 0xfe, 0x9d, 0x2d, 0x2a, 0x03, 0xe7, 0x88, 0x69, 0xcf, 0xe5, 0x7e, 0xfa, 0x7f,
    0x98, 0xaa, 0xe3, 0x69, 0xde, 0x7d, 0x64, 0xb8, 0xe3, 0x9d, 0xfd, 0x64, 0xf8, 0x77, 0xba, 0x77, 0xe5, 0x0e, 0x1e, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xec, 0x3f, 0x29, 0x9c, 0x79, 0xf2, 0x9a, 0xf6, 0x7f, 0xcb, 0xde, 0xf9, 0xab, 0xee, 0x1c,
    0xa4, 0xb9, 0xcc, 0x96, 0xd7, 0xf2, 0xdf, 0xeb, 0xff, 0x07, 0x3d, 0x31, 0x53, 0x5a, 0x27, 0x5d, 0xff, 0x1a, 0x4b, 0x89,
    0x9c, 0x2c, 0x29, 0xcb, 0x67, 0xdf, 0xfd, 0x39, 0xd4, 0xd7, 0x09, 0xd9, 0x34, 0xd3, 0xca, 0xb3, 0x39, 0xa5, 0x7e, 0x6e,
    0xfe, 0x2c, 0x7b, 0x7f, 0x52, 0xb5, 0x94, 0x93, 0xda, 0x39, 0xca, 0x2a, 0x4f, 0xd6, 0xf8, 0xa4, 0xfe, 0xf5, 0xfe, 0xf2,
    0xae, 0xfa, 0x4f, 0x64, 0xaf, 0xfb, 0xfb, 0x7f, 0xa7, 0xfe, 0xaf, 0x07, 0xd5, 0x3f, 0x8b, 0x54, 0x59, 0x86, 0x92, 0x75,
    0xdd, 0x1e, 0xea, 0xb5, 0x39, 0xb7, 0x71, 0x96, 0x7f, 0x95, 0x76, 0xfd, 0x33, 0x94, 0xb1, 0xeb, 0x2d, 0x27, 0x87, 0xa3,
    0x47, 0x56, 0xaf, 0x65, 0x30, 0x59, 0x9b, 0xad, 0x19, 0xe2, 0xab, 0x09, 0xbf, 0x1c, 0x67, 0xaf, 0x27, 0xfa, 0xff, 0x8c,
    0xd4, 0xbf, 0x3a, 0xb6, 0xa3, 0x32, 0x37, 0x6b, 0xe7, 0xdc, 0xab, 0x3f, 0xea, 0x62, 0xae, 0xff, 0x7f, 0x6d, 0x9c, 0xdf,
    0xdc, 0x9b, 0xbd, 0x3c, 0xa9, 0x7f, 0x6d, 0x06, 0xef, 0x67, 0x65, 0x72, 0xf3, 0x90, 0xb3, 0xdf, 0x3f, 0x21, 0x45, 0x99,
    0xe3, 0xdc, 0xe5, 0xc9, 0x11, 0xf5, 0x13, 0xd7, 0xb6, 0xb3, 0x39, 0xd9, 0x0c, 0x8e, 0x32, 0x7c, 0x7f, 0x1b, 0x9d, 0xb7,
    0x44, 0x2e, 0xae, 0x9b, 0x7f, 0xc6, 0x5c, 0xd4, 0xe6, 0xdb, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0xfb, 0xfc,
    0x37, 0x5b, 0x19, 0xea, 0x99, 0x6c, 0xb8, 0x67, 0xa7, 0xaf, 0x8f, 0x66, 0x64, 0xe6, 0xfe, 0x27, 0x7f, 0x0a, 0xc9, 0x90,
    0xdd, 0x99, 0x65, 0xf9, 0x44, 0xfd, 0xeb, 0x19, 0xc0, 0x6e, 0x66, 0xd0, 0xde, 0xff, 0xd4, 0xfc, 0xd7, 0xfd, 0xdb, 0x05,
    0x4f, 0x38, 0x07, 0xa8, 0x26, 0xaf, 0xa7, 0xe7, 0xf9, 0xe5, 0x19, 0xc7, 0x81, 0xfd, 0xf3, 0x3f, 0xfb, 0xff, 0xcf, 0x38,
    0xfe, 0xeb, 0xff, 0xe5, 0x56, 0x2b, 0x89, 0xe7, 0x94, 0x92, 0xe1, 0x7c, 0xb7, 0x2d, 0xe7, 0x49, 0xb3, 0x72, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x5f, 0xfa, 0x0b };

// Font characters rectangles data
static const Rectangle cherryFontRecs[95] = {
    { 4, 4, 5 , 15 },
    { 17, 4, 3 , 10 },
    { 28, 4, 5 , 2 },
    { 41, 4, 10 , 10 },
    { 59, 4, 7 , 11 },
    { 74, 4, 7 , 10 },
    { 89, 4, 8 , 10 },
    { 105, 4, 1 , 2 },
    { 114, 4, 3 , 10 },
    { 125, 4, 3 , 10 },
    { 136, 4, 3 , 3 },
    { 147, 4, 7 , 7 },
    { 162, 4, 2 , 2 },
    { 172, 4, 6 , 3 },
    { 186, 4, 1 , 1 },
    { 195, 4, 4 , 10 },
    { 207, 4, 5 , 8 },
    { 220, 4, 5 , 8 },
    { 233, 4, 5 , 8 },
    { 4, 27, 5 , 8 },
    { 17, 27, 5 , 8 },
    { 30, 27, 5 , 8 },
    { 43, 27, 5 , 8 },
    { 56, 27, 5 , 8 },
    { 69, 27, 5 , 8 },
    { 82, 27, 5 , 8 },
    { 95, 27, 3 , 10 },
    { 106, 27, 3 , 12 },
    { 117, 27, 6 , 7 },
    { 131, 27, 6 , 4 },
    { 145, 27, 6 , 7 },
    { 159, 27, 5 , 10 },
    { 172, 27, 8 , 10 },
    { 188, 27, 7 , 9 },
    { 203, 27, 7 , 9 },
    { 218, 27, 6 , 9 },
    { 232, 27, 6 , 9 },
    { 4, 50, 7 , 9 },
    { 19, 50, 6 , 9 },
    { 33, 50, 6 , 9 },
    { 47, 50, 7 , 9 },
    { 62, 50, 3 , 9 },
    { 73, 50, 6 , 9 },
    { 87, 50, 7 , 9 },
    { 102, 50, 7 , 9 },
    { 117, 50, 11 , 9 },
    { 136, 50, 8 , 9 },
    { 152, 50, 6 , 9 },
    { 166, 50, 6 , 9 },
    { 180, 50, 7 , 9 },
    { 195, 50, 7 , 9 },
    { 210, 50, 6 , 9 },
    { 224, 50, 7 , 9 },
    { 239, 50, 8 , 9 },
    { 4, 73, 9 , 9 },
    { 21, 73, 11 , 9 },
    { 40, 73, 7 , 9 },
    { 55, 73, 7 , 9 },
    { 70, 73, 7 , 9 },
    { 85, 73, 3 , 9 },
    { 96, 73, 4 , 10 },
    { 108, 73, 3 , 9 },
    { 119, 73, 3 , 3 },
    { 130, 73, 7 , 2 },
    { 145, 73, 2 , 2 },
    { 155, 73, 6 , 6 },
    { 169, 73, 6 , 9 },
    { 183, 73, 6 , 6 },
    { 197, 73, 6 , 9 },
    { 211, 73, 6 , 6 },
    { 225, 73, 5 , 9 },
    { 238, 73, 5 , 9 },
    { 4, 96, 7 , 9 },
    { 19, 96, 3 , 7 },
    { 30, 96, 3 , 8 },
    { 41, 96, 6 , 9 },
    { 55, 96, 4 , 9 },
    { 67, 96, 11 , 6 },
    { 86, 96, 7 , 6 },
    { 101, 96, 5 , 6 },
    { 114, 96, 6 , 8 },
    { 128, 96, 6 , 8 },
    { 142, 96, 5 , 6 },
    { 155, 96, 5 , 6 },
    { 168, 96, 5 , 9 },
    { 181, 96, 7 , 6 },
    { 196, 96, 7 , 6 },
    { 211, 96, 11 , 6 },
    { 230, 96, 7 , 6 },
    { 4, 119, 7 , 8 },
    { 19, 119, 6 , 6 },
    { 33, 119, 5 , 9 },
    { 46, 119, 1 , 9 },
    { 55, 119, 5 , 9 },
    { 68, 119, 7 , 3 },
};

// Font characters info data
// NOTE: No chars.image data provided
static const GlyphInfo cherryFontChars[95] = {
    { 32, 0, 12, 5, { 0 }},
    { 33, 0, 2, 4, { 0 }},
    { 34, 0, 2, 6, { 0 }},
    { 35, 0, 2, 11, { 0 }},
    { 36, 0, 2, 8, { 0 }},
    { 37, 0, 2, 8, { 0 }},
    { 38, 0, 2, 9, { 0 }},
    { 39, 0, 2, 2, { 0 }},
    { 40, 0, 2, 4, { 0 }},
    { 41, 0, 2, 4, { 0 }},
    { 42, 0, 2, 4, { 0 }},
    { 43, 0, 4, 8, { 0 }},
    { 44, 0, 11, 3, { 0 }},
    { 45, 0, 6, 7, { 0 }},
    { 46, 0, 11, 2, { 0 }},
    { 47, 0, 2, 5, { 0 }},
    { 48, 0, 4, 6, { 0 }},
    { 49, 0, 4, 6, { 0 }},
    { 50, 0, 4, 6, { 0 }},
    { 51, 0, 4, 6, { 0 }},
    { 52, 0, 4, 6, { 0 }},
    { 53, 0, 4, 6, { 0 }},
    { 54, 0, 4, 6, { 0 }},
    { 55, 0, 4, 6, { 0 }},
    { 56, 0, 4, 6, { 0 }},
    { 57, 0, 4, 6, { 0 }},
    { 58, 0, 2, 4, { 0 }},
    { 59, 0, 2, 4, { 0 }},
    { 60, 0, 4, 7, { 0 }},
    { 61, 0, 5, 7, { 0 }},
    { 62, 0, 4, 7, { 0 }},
    { 63, 0, 2, 6, { 0 }},
    { 64, 0, 2, 9, { 0 }},
    { 65, 0, 3, 8, { 0 }},
    { 66, 0, 3, 8, { 0 }},
    { 67, 0, 3, 7, { 0 }},
    { 68, 0, 3, 7, { 0 }},
    { 69, 0, 3, 8, { 0 }},
    { 70, 0, 3, 7, { 0 }},
    { 71, 0, 3, 7, { 0 }},
    { 72, 0, 3, 8, { 0 }},
    { 73, 0, 3, 4, { 0 }},
    { 74, 0, 3, 7, { 0 }},
    { 75, 0, 3, 8, { 0 }},
    { 76, 0, 3, 8, { 0 }},
    { 77, 0, 3, 12, { 0 }},
    { 78, 0, 3, 9, { 0 }},
    { 79, 0, 3, 7, { 0 }},
    { 80, 0, 3, 7, { 0 }},
    { 81, 0, 3, 8, { 0 }},
    { 82, 0, 3, 8, { 0 }},
    { 83, 0, 3, 7, { 0 }},
    { 84, 0, 3, 8, { 0 }},
    { 85, 0, 3, 9, { 0 }},
    { 86, 0, 3, 10, { 0 }},
    { 87, 0, 3, 12, { 0 }},
    { 88, 0, 3, 8, { 0 }},
    { 89, 0, 3, 8, { 0 }},
    { 90, 0, 3, 8, { 0 }},
    { 91, 0, 3, 4, { 0 }},
    { 92, 0, 2, 5, { 0 }},
    { 93, 0, 3, 4, { 0 }},
    { 94, 0, 3, 4, { 0 }},
    { 95, 0, 10, 8, { 0 }},
    { 96, 0, 2, 3, { 0 }},
    { 97, 0, 6, 7, { 0 }},
    { 98, 0, 3, 7, { 0 }},
    { 99, 0, 6, 7, { 0 }},
    { 100, 0, 3, 7, { 0 }},
    { 101, 0, 6, 7, { 0 }},
    { 102, 0, 3, 6, { 0 }},
    { 103, 0, 5, 6, { 0 }},
    { 104, 0, 3, 8, { 0 }},
    { 105, 0, 5, 4, { 0 }},
    { 106, 0, 5, 4, { 0 }},
    { 107, 0, 3, 7, { 0 }},
    { 108, 0, 3, 5, { 0 }},
    { 109, 0, 6, 12, { 0 }},
    { 110, 0, 6, 8, { 0 }},
    { 111, 0, 6, 6, { 0 }},
    { 112, 0, 6, 7, { 0 }},
    { 113, 0, 6, 7, { 0 }},
    { 114, 0, 6, 6, { 0 }},
    { 115, 0, 6, 6, { 0 }},
    { 116, 0, 3, 6, { 0 }},
    { 117, 0, 6, 8, { 0 }},
    { 118, 0, 6, 8, { 0 }},
    { 119, 0, 6, 12, { 0 }},
    { 120, 0, 6, 8, { 0 }},
    { 121, 0, 6, 8, { 0 }},
    { 122, 0, 6, 7, { 0 }},
    { 123, 0, 3, 6, { 0 }},
    { 124, 0, 3, 2, { 0 }},
    { 125, 0, 3, 6, { 0 }},
    { 126, 0, 6, 8, { 0 }},
};

// Style loading function: cherry
static void GuiLoadStyleCherry(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < CHERRY_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(cherryStyleProps[i].controlId, cherryStyleProps[i].propertyId, cherryStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int cherryFontDataSize = 0;
    unsigned char *data = DecompressData(cherryFontData, CHERRY_COMPRESSED_DATA_SIZE, &cherryFontDataSize);
    Image imFont = { data, 256, 256, 1, 2 };

    Font font = { 0 };
    font.baseSize = 15;
    font.glyphCount = 95;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);
    UnloadImage(imFont);  // Uncompressed data can be unloaded from memory

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (Rectangle *)malloc(font.glyphCount*sizeof(Rectangle));
    memcpy(font.recs, cherryFontRecs, font.glyphCount*sizeof(Rectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)malloc(font.glyphCount*sizeof(GlyphInfo));
    memcpy(font.glyphs, cherryFontChars, font.glyphCount*sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // this way we make sure all gui can be drawn on a single pass because no texture change is required
    // NOTE: Setting up this rectangle is a manual process (for the moment)
    Rectangle whiteChar = { 17, 30, 2, 2 };
    SetShapesTexture(font.texture, whiteChar);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}