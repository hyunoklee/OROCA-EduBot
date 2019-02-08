const unsigned char logo [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x30,
0x00, 0x00, 0x0C, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00,
0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0xC0, 0xC0,
0xC3, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC3, 0x30, 0xCC, 0xC3, 0x00, 0x00, 0xC3,
0x30, 0xCC, 0xC3, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00,
0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00,
0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x0F, 0xF0, 0x03, 0x00, 0x00, 0xC0,
0x0F, 0xF0, 0x03, 0x00, 0x00, 0x30, 0x30, 0x0C, 0x0C, 0x00, 0x00, 0x30, 0x30, 0x0C, 0x0C, 0x00,
0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0xC0, 0x03,
0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x03, 0xC3, 0x03, 0xC0, 0xC3, 0xC0, 0x03, 0xC3,
0x03, 0xC0, 0xC3, 0xC0, 0x0C, 0x0C, 0x0C, 0x30, 0x30, 0x30, 0x0C, 0x0C, 0x0C, 0x30, 0x30, 0x30,
0x03, 0x0C, 0x30, 0x0C, 0x30, 0xC0, 0x03, 0x0C, 0x30, 0x0C, 0x30, 0xC0, 0x00, 0xF0, 0x30, 0x0C,
0x0F, 0x00, 0x00, 0xF0, 0x30, 0x0C, 0x0F, 0x00, 0x00, 0x30, 0x0C, 0x30, 0x0C, 0x00, 0x00, 0x30,
0x0C, 0x30, 0x0C, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00,
0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
0xFC, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F,
0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0C, 0x00,
0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x3F,
0x03, 0x00, 0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC0,
0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC3, 0x30, 0xCC, 0xC3, 0x00, 0x00, 0xC3, 0x30, 0xCC, 0xC3, 0x00,
0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC0, 0x00, 0x3F,
0x03, 0x00, 0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0,
0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x0F, 0xF0, 0x03, 0x00, 0x00, 0xC0, 0x0F, 0xF0, 0x03, 0x00,
0x00, 0x30, 0x30, 0x0C, 0x0C, 0x00, 0x00, 0x30, 0x30, 0x0C, 0x0C, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x03, 0xC0, 0xC0, 0x03, 0x03, 0xC0, 0x03, 0xC0,
0xC0, 0x03, 0x03, 0xC0, 0x0C, 0x03, 0x00, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0x00, 0xC0, 0x30,
0x0C, 0x0C, 0x0F, 0xF0, 0x30, 0x30, 0x0C, 0x0C, 0x0F, 0xF0, 0x30, 0x30, 0x0C, 0x0C, 0x30, 0x0C,
0x30, 0x30, 0x0C, 0x0C, 0x30, 0x0C, 0x30, 0x30, 0x00, 0x30, 0xC0, 0x03, 0x0C, 0x00, 0x00, 0x30,
0xC0, 0x03, 0x0C, 0x00, 0x00, 0x30, 0x30, 0x0C, 0x0C, 0x00, 0x00, 0x30, 0x30, 0x0C, 0x0C, 0x00,
0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00,
0x00, 0x30, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0C, 0x00, 0x00, 0xC0, 0x00, 0x00,
0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0,
0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00,
0x00, 0xC3, 0x30, 0xCC, 0xC3, 0x00, 0x00, 0xC3, 0x30, 0xCC, 0xC3, 0x00, 0x00, 0xC0, 0xC0, 0xC0,
0xC3, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0,
0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00,
0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0x30, 0x3F, 0xFC,
0x0C, 0x00, 0x00, 0x30, 0x3F, 0xFC, 0x0C, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F,
0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0x0C, 0x00, 0x00, 0x30, 0xF0, 0x0F, 0x0C, 0x00, 0x00, 0x30, 0xF0,
0x30, 0x30, 0x00, 0x00, 0x0C, 0x0C, 0x30, 0x30, 0x00, 0x00, 0x0C, 0x0C, 0xC0, 0x30, 0x00, 0x00,
0x0C, 0x03, 0xC0, 0x30, 0x00, 0x00, 0x0C, 0x03, 0xC0, 0xC0, 0x3C, 0x3C, 0x03, 0x03, 0xC0, 0xC0,
0x3C, 0x3C, 0x03, 0x03, 0x00, 0xC0, 0xC0, 0x03, 0x03, 0x00, 0x00, 0xC0, 0xC0, 0x03, 0x03, 0x00,
0x03, 0x03, 0x00, 0x00, 0xC0, 0xC0, 0x03, 0x03, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xFF, 0xFF, 0xFF,
0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F,
0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0C, 0x00,
0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x3F,
0x03, 0x00, 0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC0,
0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC3, 0x30, 0xCC, 0xC3, 0x00, 0x00, 0xC3, 0x30, 0xCC, 0xC3, 0x00,
0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC3, 0x00, 0x00, 0xC0, 0x00, 0x3F,
0x03, 0x00, 0x00, 0xC0, 0x00, 0x3F, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0,
0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00,
0x00, 0x30, 0x3F, 0xFC, 0x0C, 0x00, 0x00, 0x30, 0x3F, 0xFC, 0x0C, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x03, 0xC0, 0xC0, 0x03, 0x03, 0xC0, 0x03, 0xC0,
0xC0, 0x03, 0x03, 0xC0, 0x0C, 0x03, 0x00, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0x00, 0xC0, 0x30,
0x0C, 0x0C, 0x0F, 0xF0, 0x30, 0x30, 0x0C, 0x0C, 0x0F, 0xF0, 0x30, 0x30, 0x0C, 0x0C, 0x30, 0x0C,
0x30, 0x30, 0x0C, 0x0C, 0x30, 0x0C, 0x30, 0x30, 0x00, 0x30, 0xC0, 0x03, 0x0C, 0x00, 0x00, 0x30,
0xC0, 0x03, 0x0C, 0x00, 0x00, 0x30, 0x30, 0x0C, 0x0C, 0x00, 0x00, 0x30, 0x30, 0x0C, 0x0C, 0x00,
0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};