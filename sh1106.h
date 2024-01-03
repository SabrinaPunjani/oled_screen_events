#ifndef _SH1106_H_
#define _SH1106_H_

void SH1106_begin();
void SH1106_display();
void SH1106_clear();
void SH1106_pixel(int x,int y,char color);
void SH1106_bitmap(unsigned char x, unsigned char y, const unsigned char *pBmp,
                        unsigned char chWidth, unsigned char chHeight);
void SH1106_string(uint8_t x, uint8_t y, const char *pString, uint8_t Size, uint8_t Mode);
void SH1106_char1616(uint8_t x, uint8_t y, uint8_t chChar);
void SH1106_char3216(uint8_t x, uint8_t y, uint8_t chChar);

static const unsigned char PIC1[1024]=
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,0X00,0X00,0X01,
0X80,0X00,0X00,0X40,0X00,0X00,0X00,0X00,0X00,0X06,0X00,0X06,0X03,0X80,0X00,0X01,
0X80,0X00,0X00,0XC0,0X00,0X00,0X00,0X00,0X00,0X0E,0X00,0X1F,0X07,0XFF,0XC0,0X01,
0X80,0X00,0X01,0XE0,0X00,0X00,0X00,0X00,0X00,0X1E,0X00,0X3F,0X9F,0X39,0XC0,0X01,
0X80,0X00,0X01,0XE0,0X00,0X00,0X00,0X00,0X00,0X1E,0X00,0X7F,0XF0,0X01,0X80,0X01,
0X80,0X00,0X03,0XE4,0X00,0X00,0X00,0X00,0X00,0X1F,0X00,0XFF,0XE0,0X00,0XC0,0X01,
0X80,0X00,0X07,0XEF,0XC0,0X00,0X00,0X00,0X00,0X3F,0X00,0XFF,0XF0,0X00,0XE1,0XE1,
0X80,0X00,0X0F,0XEF,0XFE,0X00,0X00,0X00,0X00,0X3F,0X01,0XFF,0XE0,0X00,0XF7,0XF1,
0X80,0X00,0X0F,0XE7,0XFF,0XE0,0X00,0X00,0X00,0X77,0X01,0XFF,0XF0,0X00,0XFF,0XF1,
0X80,0X00,0X07,0XE7,0X3F,0XFE,0X00,0X00,0X00,0X59,0X01,0XFF,0XFC,0X01,0X8F,0XF9,
0X80,0X00,0X07,0XE7,0X07,0XFF,0XF0,0X00,0X00,0XFD,0X00,0XFF,0X8E,0X3F,0XEF,0XF9,
0X80,0X00,0X07,0XE7,0X00,0XFF,0XFE,0X00,0X01,0XE7,0X80,0XFF,0XF7,0XFC,0X77,0XF9,
0X80,0X00,0X07,0XF7,0X00,0X1F,0XFE,0X00,0X07,0XF7,0X80,0X77,0XFB,0XFF,0XF7,0XF9,
0X80,0X00,0X03,0XF7,0X00,0X03,0XFE,0X00,0X07,0XFF,0X80,0X27,0XFE,0X7F,0XF3,0XF1,
0X80,0X00,0X03,0XF7,0X00,0X00,0X7E,0X00,0X00,0X01,0X80,0X27,0XFE,0X7F,0XF1,0XF1,
0X80,0X00,0X03,0XF3,0X00,0X00,0X1C,0X00,0X00,0X00,0XC0,0X41,0XFC,0X3F,0XF1,0XE1,
0X80,0X00,0X01,0XF3,0X00,0X00,0X1C,0X00,0X00,0X00,0XC0,0XC1,0XF0,0X1F,0XE1,0X01,
0X80,0XC0,0X01,0XF3,0X80,0X00,0X1C,0X00,0X00,0X00,0X40,0X87,0XE0,0X03,0X01,0X01,
0X80,0XF8,0X01,0XF3,0X80,0X00,0X3C,0X00,0X00,0X00,0X61,0X9F,0XF0,0X1C,0X01,0X81,
0X80,0X7F,0X00,0XF3,0X80,0X00,0X3C,0X00,0X00,0X00,0X7F,0XBF,0XF0,0X7F,0X01,0X81,
0X80,0X7F,0XC0,0XF3,0X80,0X00,0X38,0X00,0X00,0X00,0X63,0X7E,0X70,0X7F,0XC1,0X81,
0X80,0X3F,0XF8,0XF3,0X80,0X00,0X38,0X00,0X00,0X00,0XF3,0XFD,0XF0,0XFF,0XE1,0X81,
0X80,0X3F,0XFE,0XF9,0X80,0X00,0X38,0X00,0X00,0X01,0XBE,0XFF,0X60,0XE7,0XE1,0X81,
0X80,0X1D,0XFF,0X79,0X80,0X00,0X78,0X00,0X00,0X01,0X1E,0XFE,0X60,0XF7,0XE1,0X01,
0X80,0X1C,0X3F,0X79,0X80,0X00,0X70,0X00,0X00,0X01,0X1E,0XFC,0X80,0X97,0XF1,0X81,
0X80,0X1C,0X07,0X79,0X80,0X00,0X70,0X00,0X00,0X01,0X8E,0XFF,0X80,0X07,0XE1,0X81,
0X80,0X0E,0X00,0X39,0X80,0X00,0X70,0X00,0X00,0X00,0XC6,0X7F,0XE0,0X7F,0XE1,0X81,
0X80,0X0E,0X00,0X39,0XC0,0X00,0X70,0X00,0X00,0X00,0XEE,0X3E,0XE0,0X7F,0XE1,0X81,
0X80,0X06,0X00,0X39,0XC0,0X00,0X60,0X00,0X00,0X00,0X7E,0X00,0X40,0X1F,0XC1,0X81,
0X80,0X07,0X00,0X18,0XC0,0X00,0XE0,0X00,0X00,0X00,0X0F,0X00,0X00,0X07,0X03,0X01,
0X80,0X03,0X00,0X18,0XC0,0X00,0XE0,0X00,0X00,0X00,0X07,0X80,0X00,0X00,0X07,0X01,
0X80,0X03,0X00,0X1C,0XC0,0X00,0XE0,0X00,0X00,0X00,0X02,0XC3,0XF8,0X00,0X06,0X01,
0X80,0X01,0X80,0X1C,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X03,0X61,0XF0,0X00,0X0C,0X01,
0X80,0X01,0X80,0X0C,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X03,0X30,0X00,0X00,0X38,0X01,
0X80,0X00,0X80,0X0C,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X01,0X9C,0X00,0X00,0X70,0X01,
0X80,0X00,0X80,0X0C,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X87,0X00,0X01,0XC0,0X01,
0X80,0X00,0X00,0X04,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC7,0XFC,0X7F,0XC0,0X01,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XCF,0X1F,0XFF,0XE0,0X01,
0X87,0XE0,0X00,0X02,0X3F,0X0C,0X00,0XC0,0X00,0X00,0X00,0X6E,0X00,0X3B,0XE0,0X01,
0X86,0X00,0X00,0X06,0X31,0X80,0X00,0X00,0X00,0X00,0X00,0X38,0X00,0X30,0XE0,0X01,
0X86,0X03,0XC3,0XCF,0X31,0X8C,0X78,0XCD,0X86,0XC0,0X00,0X38,0X00,0X30,0X60,0X01,
0X86,0X04,0X66,0X66,0X31,0X8C,0XCC,0XCE,0XCD,0XC0,0X00,0X10,0X00,0X38,0X20,0X01,
0X87,0XE1,0XE7,0X06,0X3F,0X0C,0XE0,0XCC,0XCC,0XC0,0X00,0X30,0X00,0X0C,0X30,0X01,
0X86,0X03,0X63,0XC6,0X33,0X0C,0X78,0XCC,0XCC,0XC0,0X00,0X30,0X00,0X04,0X18,0X01,
0X86,0X06,0X60,0XE6,0X31,0X8C,0X1C,0XCC,0XCC,0XC0,0X00,0X30,0X00,0X06,0X18,0X01,
0X86,0X06,0X66,0X66,0X31,0X8C,0XCC,0XCC,0XCD,0XC0,0X00,0X20,0X00,0X03,0X0C,0X01,
0X87,0XE3,0XE3,0XC3,0X30,0XCC,0X78,0XCC,0XC6,0XC0,0X00,0X20,0X00,0X02,0X08,0X01,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0XC0,0X00,0X20,0X00,0X02,0X08,0X01,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0X80,0X00,0X20,0X00,0X03,0X98,0X01,
0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X20,0X00,0X01,0XF0,0X01,
0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X20,0X00,0X01,0XE0,0X01,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X20,0X00,0X01,0XC0,0X01,
0X90,0X00,0X00,0X50,0X00,0X40,0X00,0X00,0X00,0X00,0X00,0X20,0X00,0X01,0X80,0X01,
0X90,0X00,0X00,0X40,0X00,0X40,0X00,0X00,0X00,0X00,0X00,0X30,0X00,0X03,0X00,0X01,
0X9E,0X45,0X13,0XD1,0XDE,0X4E,0X44,0X31,0XCE,0XC0,0X00,0X30,0X00,0X03,0X00,0X01,
0X91,0X44,0XA4,0X52,0X11,0X41,0X28,0X4A,0X29,0X20,0X00,0X30,0X00,0X02,0X00,0X01,
0X91,0X44,0XA4,0X51,0X91,0X47,0X28,0X42,0X29,0X20,0X00,0X10,0XFC,0X02,0X00,0X01,
0X91,0X44,0XA4,0X50,0X51,0X49,0X28,0X4A,0X29,0X20,0X00,0X10,0X3C,0X06,0X00,0X01,
0X9E,0X3C,0X43,0XD3,0X9E,0X47,0X11,0X31,0XC9,0X20,0X00,0X18,0X08,0X06,0X00,0X01,
0X80,0X00,0X40,0X00,0X10,0X00,0X10,0X00,0X00,0X00,0X00,0X18,0X08,0X06,0X00,0X01,
0X80,0X01,0X80,0X00,0X10,0X00,0X60,0X00,0X00,0X00,0X00,0X0C,0X18,0X0C,0X00,0X01,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0X3C,0X00,0X01,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,

};

static const unsigned char PIC2[1024]=
{0XE0,0X00,0X01,0X00,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,
0X80,0X00,0X01,0X00,0X00,0X00,0X00,0XC0,0X00,0XC0,0X70,0X00,0X00,0X00,0X00,0X01,
0X80,0X00,0X07,0XF0,0X00,0X00,0X01,0XC0,0X03,0XE0,0XFF,0XF8,0X00,0X00,0X00,0X01,
0X00,0X01,0XCD,0XF0,0XF0,0X00,0X03,0XC0,0X07,0XF3,0XE7,0X38,0X00,0X00,0X00,0X03,
0X00,0X0F,0XF8,0X39,0XFF,0XC0,0X03,0XC0,0X0F,0XFE,0X00,0X30,0X00,0X00,0X00,0X03,
0X00,0X3C,0X10,0X19,0XFF,0XC0,0X03,0XE0,0X1F,0XFC,0X00,0X18,0X00,0X00,0X00,0X03,
0X00,0X18,0X00,0XFF,0XFF,0XC0,0X07,0XE0,0X1F,0XFE,0X00,0X1C,0X3C,0X00,0X00,0X03,
0X00,0X18,0X03,0XF3,0XFF,0XC0,0X07,0XE0,0X3F,0XFC,0X00,0X1E,0XFE,0X00,0X00,0X03,
0X00,0X1B,0XFF,0XFB,0XFF,0XE0,0X0E,0XE0,0X3F,0XFE,0X00,0X1F,0XFE,0X00,0X00,0X03,
0X00,0X1F,0XBF,0XFF,0XFF,0XF0,0X0B,0X20,0X3F,0XFF,0X80,0X31,0XFF,0X00,0X00,0X06,
0X00,0X3F,0XF3,0XF9,0XFF,0XF0,0X1F,0XA0,0X1F,0XF1,0XC7,0XFD,0XFF,0X00,0X00,0X0C,
0X3E,0X7F,0XE0,0XF0,0XFF,0XF8,0X3C,0XF0,0X1F,0XFE,0XFF,0X8E,0XFF,0X00,0X00,0X0F,
0X3F,0XFF,0XC0,0X3E,0X7F,0XFC,0XFE,0XF0,0X0E,0XFF,0X7F,0XFE,0XFF,0X00,0X00,0X1F,
0XFF,0XDF,0X00,0XFF,0XBF,0XF8,0XFF,0XF0,0X04,0XFF,0XCF,0XFE,0X7E,0X00,0X00,0X38,
0XFF,0XC1,0XC0,0XFF,0XFF,0XF0,0X00,0X30,0X04,0XFF,0XCF,0XFE,0X3E,0X00,0X00,0XF1,
0XFF,0X87,0XF1,0XCF,0XFF,0XF0,0X00,0X18,0X08,0X3F,0X87,0XFE,0X3C,0X00,0X01,0XB3,
0XFF,0X8F,0XF9,0X83,0XFF,0XE0,0X00,0X18,0X18,0X3E,0X03,0XFC,0X20,0X00,0X03,0X33,
0XFF,0X1F,0X99,0X83,0XFF,0XE0,0X00,0X08,0X10,0XFC,0X00,0X60,0X20,0X00,0X06,0X37,
0XFF,0X1E,0X09,0X31,0XFF,0XC0,0X00,0X0C,0X33,0XFE,0X03,0X80,0X30,0X00,0X0C,0X18,
0X3F,0X3E,0X09,0X59,0XFF,0XC0,0X00,0X0F,0XF7,0XFE,0X0F,0XE0,0X30,0X00,0X08,0X07,
0X1F,0X3C,0XF0,0X41,0XFF,0XC0,0X00,0X0C,0X6F,0XCE,0X0F,0XF8,0X30,0X00,0X18,0X07,
0X03,0X3C,0X90,0X03,0XFF,0XC0,0X00,0X1E,0X7F,0XBE,0X1F,0XFC,0X30,0X00,0X19,0X00,
0X03,0X3C,0X80,0X0F,0XEF,0XC0,0X00,0X37,0XDF,0XEC,0X1C,0XFC,0X30,0X00,0X19,0X80,
0X03,0X3C,0X10,0X0F,0XCF,0XC0,0X00,0X23,0XDF,0XCC,0X1E,0XFC,0X20,0X00,0X18,0X84,
0X03,0X3E,0X33,0X80,0X0F,0XC0,0X00,0X23,0XDF,0X90,0X12,0XFE,0X30,0X00,0X18,0X7E,
0X03,0X3F,0XE7,0X80,0X0F,0XC0,0X00,0X31,0XDF,0XF0,0X00,0XFC,0X30,0X02,0X08,0X32,
0X03,0X3F,0XC1,0X18,0X0F,0XC0,0X00,0X18,0XCF,0XFC,0X0F,0XFC,0X30,0X07,0X0C,0X03,
0X03,0X1F,0X81,0X98,0X0F,0XC0,0X00,0X1D,0XC7,0XDC,0X0F,0XFC,0X30,0X0F,0X84,0X01,
0X03,0X00,0X0F,0XF0,0X0F,0XC0,0X00,0X0F,0XC0,0X08,0X03,0XF8,0X30,0X1F,0X86,0X00,
0X03,0X00,0X0E,0X00,0X0F,0XC0,0X00,0X01,0XE0,0X00,0X00,0XE0,0X60,0X3F,0XF3,0X00,
0X03,0X00,0X00,0X00,0X0F,0XC0,0X00,0X00,0XF0,0X00,0X00,0X00,0XE0,0X7F,0XFD,0X00,
0X03,0X00,0X00,0X00,0X1F,0XC0,0X00,0X00,0X58,0X7F,0X00,0X00,0XC0,0X7F,0XFF,0X80,
0X03,0X00,0X00,0X00,0X1F,0XC0,0X00,0X00,0X6C,0X3E,0X00,0X01,0X80,0X7E,0X7F,0XE0,
0X03,0X00,0X00,0X00,0X3F,0XC0,0X00,0X00,0X66,0X00,0X00,0X07,0X00,0X3F,0XBF,0XF8,
0X01,0X80,0X00,0X00,0X7F,0X80,0X00,0X00,0X33,0X80,0X00,0X0E,0X00,0X3D,0XBF,0XFC,
0X01,0XC0,0X00,0X01,0XFF,0X80,0X00,0X00,0X30,0XE0,0X00,0X38,0X00,0X39,0XBF,0XFF,
0X00,0XE0,0X00,0X03,0X3F,0X80,0X00,0X00,0X18,0XFF,0X8F,0XF8,0X00,0X79,0XBF,0XFF,
0X00,0X7C,0X00,0X0C,0X0F,0X80,0X00,0X00,0X19,0XE3,0XFF,0XFC,0X00,0X71,0X7F,0XFF,
0X00,0X0F,0XFF,0XC0,0X03,0X80,0X00,0X00,0X0D,0XC0,0X07,0X7C,0X00,0XFB,0X7F,0XFF,
0X00,0X00,0XFF,0X00,0X03,0X00,0X00,0X00,0X0D,0X80,0X06,0X3C,0X00,0XEE,0XFF,0XFF,
0X00,0X00,0X7C,0X00,0X01,0X00,0X00,0X00,0X07,0X00,0X06,0X1C,0X03,0XF1,0XE7,0XFF,
0X00,0X00,0XFC,0X00,0X01,0X00,0X00,0X00,0X07,0X00,0X06,0X0C,0X03,0XFF,0XC9,0XFF,
0X00,0X01,0XF8,0X00,0X01,0X80,0X00,0X00,0X02,0X00,0X07,0X04,0X03,0XFF,0X81,0XFF,
0X00,0X01,0XF8,0X00,0X01,0X80,0X00,0X00,0X06,0X00,0X01,0X86,0X00,0XFF,0XB9,0XFF,
0X00,0X03,0XF8,0X00,0X01,0X80,0X00,0X00,0X06,0X00,0X00,0X83,0X00,0X7F,0X8D,0XFF,
0X00,0X03,0XFC,0X00,0X00,0X80,0X00,0X00,0X06,0X00,0X00,0XC3,0X00,0X3F,0XC5,0XF9,
0X00,0X03,0XFC,0X00,0X00,0X80,0X00,0X00,0X04,0X00,0X00,0X61,0X80,0X0F,0XE3,0XF8,
0X00,0X03,0XF8,0X00,0X00,0X80,0X00,0X00,0X04,0X00,0X00,0X41,0X00,0X01,0XFF,0XF0,
0X00,0X01,0XF8,0X00,0X00,0X80,0X00,0X00,0X04,0X00,0X00,0X41,0X00,0X00,0X7F,0XF0,
0X00,0X01,0XF8,0X00,0X00,0X80,0X00,0X00,0X04,0X00,0X00,0X73,0X00,0X00,0X7F,0XE0,
0X00,0X00,0XF8,0X00,0X00,0XC0,0X00,0X00,0X04,0X00,0X00,0X3E,0X00,0X00,0X63,0XC0,
0X00,0X00,0X70,0X00,0X00,0XC0,0X00,0X00,0X04,0X00,0X00,0X3C,0X00,0X00,0X20,0X00,
0X00,0X00,0X20,0X00,0X00,0XC0,0X00,0X00,0X04,0X00,0X00,0X38,0X00,0X00,0X20,0X00,
0X00,0X00,0X60,0X00,0X00,0XC0,0X20,0X00,0X00,0XA0,0X00,0X80,0X00,0X00,0X00,0X00,
0X00,0X00,0X60,0X00,0X00,0XC0,0X20,0X00,0X00,0X80,0X00,0X80,0X00,0X00,0X00,0X00,
0X00,0X00,0X60,0X00,0X00,0X80,0X2C,0X8A,0X26,0XA7,0X2C,0X9C,0X88,0X38,0XE5,0XE0,
0X00,0X00,0X60,0X00,0X00,0X80,0X32,0X8A,0X29,0XA8,0XB2,0XA2,0X88,0X45,0X16,0X90,
0X00,0X00,0X40,0X00,0X00,0X80,0X22,0X89,0X48,0XA6,0X22,0X9E,0X50,0X41,0X14,0X90,
0X00,0X00,0X40,0X30,0X00,0X80,0X22,0X89,0X48,0XA1,0X22,0XA2,0X50,0X41,0X14,0X90,
0X00,0X00,0X40,0X1F,0X01,0X80,0X32,0X98,0X89,0XA8,0XB2,0XA6,0X20,0X45,0X14,0X90,
0X00,0X00,0X40,0X12,0X01,0X00,0X2C,0X68,0X86,0XA7,0X2C,0X9A,0X21,0X38,0XE4,0X90,
0X80,0X00,0X60,0X32,0X01,0X00,0X00,0X00,0X80,0X00,0X20,0X00,0X20,0X00,0X00,0X01,
0X80,0X00,0X30,0X23,0X07,0XC0,0X00,0X01,0X00,0X00,0X20,0X00,0X40,0X00,0X00,0X01,
0XE0,0X00,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,
};

static const uint8_t Font1206[95][12] = {
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
    {0x00,0x00,0x00,0x00,0x3F,0x40,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
    {0x00,0x00,0x30,0x00,0x40,0x00,0x30,0x00,0x40,0x00,0x00,0x00},/*""",2*/
    {0x09,0x00,0x0B,0xC0,0x3D,0x00,0x0B,0xC0,0x3D,0x00,0x09,0x00},/*"#",3*/
    {0x18,0xC0,0x24,0x40,0x7F,0xE0,0x22,0x40,0x31,0x80,0x00,0x00},/*"$",4*/
    {0x18,0x00,0x24,0xC0,0x1B,0x00,0x0D,0x80,0x32,0x40,0x01,0x80},/*"%",5*/
    {0x03,0x80,0x1C,0x40,0x27,0x40,0x1C,0x80,0x07,0x40,0x00,0x40},/*"&",6*/
    {0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x20,0x40,0x40,0x20},/*"(",8*/
    {0x00,0x00,0x40,0x20,0x20,0x40,0x1F,0x80,0x00,0x00,0x00,0x00},/*")",9*/
    {0x09,0x00,0x06,0x00,0x1F,0x80,0x06,0x00,0x09,0x00,0x00,0x00},/*"*",10*/
    {0x04,0x00,0x04,0x00,0x3F,0x80,0x04,0x00,0x04,0x00,0x00,0x00},/*"+",11*/
    {0x00,0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
    {0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00},/*"-",13*/
    {0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
    {0x00,0x20,0x01,0xC0,0x06,0x00,0x38,0x00,0x40,0x00,0x00,0x00},/*"/",15*/
    {0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"0",16*/
    {0x00,0x00,0x10,0x40,0x3F,0xC0,0x00,0x40,0x00,0x00,0x00,0x00},/*"1",17*/
    {0x18,0xC0,0x21,0x40,0x22,0x40,0x24,0x40,0x18,0x40,0x00,0x00},/*"2",18*/
    {0x10,0x80,0x20,0x40,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"3",19*/
    {0x02,0x00,0x0D,0x00,0x11,0x00,0x3F,0xC0,0x01,0x40,0x00,0x00},/*"4",20*/
    {0x3C,0x80,0x24,0x40,0x24,0x40,0x24,0x40,0x23,0x80,0x00,0x00},/*"5",21*/
    {0x1F,0x80,0x24,0x40,0x24,0x40,0x34,0x40,0x03,0x80,0x00,0x00},/*"6",22*/
    {0x30,0x00,0x20,0x00,0x27,0xC0,0x38,0x00,0x20,0x00,0x00,0x00},/*"7",23*/
    {0x1B,0x80,0x24,0x40,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"8",24*/
    {0x1C,0x00,0x22,0xC0,0x22,0x40,0x22,0x40,0x1F,0x80,0x00,0x00},/*"9",25*/
    {0x00,0x00,0x00,0x00,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
    {0x00,0x00,0x00,0x00,0x04,0x60,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
    {0x00,0x00,0x04,0x00,0x0A,0x00,0x11,0x00,0x20,0x80,0x40,0x40},/*"<",28*/
    {0x09,0x00,0x09,0x00,0x09,0x00,0x09,0x00,0x09,0x00,0x00,0x00},/*"=",29*/
    {0x00,0x00,0x40,0x40,0x20,0x80,0x11,0x00,0x0A,0x00,0x04,0x00},/*">",30*/
    {0x18,0x00,0x20,0x00,0x23,0x40,0x24,0x00,0x18,0x00,0x00,0x00},/*"?",31*/
    {0x1F,0x80,0x20,0x40,0x27,0x40,0x29,0x40,0x1F,0x40,0x00,0x00},/*"@",32*/
    {0x00,0x40,0x07,0xC0,0x39,0x00,0x0F,0x00,0x01,0xC0,0x00,0x40},/*"A",33*/
    {0x20,0x40,0x3F,0xC0,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"B",34*/
    {0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x30,0x80,0x00,0x00},/*"C",35*/
    {0x20,0x40,0x3F,0xC0,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"D",36*/
    {0x20,0x40,0x3F,0xC0,0x24,0x40,0x2E,0x40,0x30,0xC0,0x00,0x00},/*"E",37*/
    {0x20,0x40,0x3F,0xC0,0x24,0x40,0x2E,0x00,0x30,0x00,0x00,0x00},/*"F",38*/
    {0x0F,0x00,0x10,0x80,0x20,0x40,0x22,0x40,0x33,0x80,0x02,0x00},/*"G",39*/
    {0x20,0x40,0x3F,0xC0,0x04,0x00,0x04,0x00,0x3F,0xC0,0x20,0x40},/*"H",40*/
    {0x20,0x40,0x20,0x40,0x3F,0xC0,0x20,0x40,0x20,0x40,0x00,0x00},/*"I",41*/
    {0x00,0x60,0x20,0x20,0x20,0x20,0x3F,0xC0,0x20,0x00,0x20,0x00},/*"J",42*/
    {0x20,0x40,0x3F,0xC0,0x24,0x40,0x0B,0x00,0x30,0xC0,0x20,0x40},/*"K",43*/
    {0x20,0x40,0x3F,0xC0,0x20,0x40,0x00,0x40,0x00,0x40,0x00,0xC0},/*"L",44*/
    {0x3F,0xC0,0x3C,0x00,0x03,0xC0,0x3C,0x00,0x3F,0xC0,0x00,0x00},/*"M",45*/
    {0x20,0x40,0x3F,0xC0,0x0C,0x40,0x23,0x00,0x3F,0xC0,0x20,0x00},/*"N",46*/
    {0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"O",47*/
    {0x20,0x40,0x3F,0xC0,0x24,0x40,0x24,0x00,0x18,0x00,0x00,0x00},/*"P",48*/
    {0x1F,0x80,0x21,0x40,0x21,0x40,0x20,0xE0,0x1F,0xA0,0x00,0x00},/*"Q",49*/
    {0x20,0x40,0x3F,0xC0,0x24,0x40,0x26,0x00,0x19,0xC0,0x00,0x40},/*"R",50*/
    {0x18,0xC0,0x24,0x40,0x24,0x40,0x22,0x40,0x31,0x80,0x00,0x00},/*"S",51*/
    {0x30,0x00,0x20,0x40,0x3F,0xC0,0x20,0x40,0x30,0x00,0x00,0x00},/*"T",52*/
    {0x20,0x00,0x3F,0x80,0x00,0x40,0x00,0x40,0x3F,0x80,0x20,0x00},/*"U",53*/
    {0x20,0x00,0x3E,0x00,0x01,0xC0,0x07,0x00,0x38,0x00,0x20,0x00},/*"V",54*/
    {0x38,0x00,0x07,0xC0,0x3C,0x00,0x07,0xC0,0x38,0x00,0x00,0x00},/*"W",55*/
    {0x20,0x40,0x39,0xC0,0x06,0x00,0x39,0xC0,0x20,0x40,0x00,0x00},/*"X",56*/
    {0x20,0x00,0x38,0x40,0x07,0xC0,0x38,0x40,0x20,0x00,0x00,0x00},/*"Y",57*/
    {0x30,0x40,0x21,0xC0,0x26,0x40,0x38,0x40,0x20,0xC0,0x00,0x00},/*"Z",58*/
    {0x00,0x00,0x00,0x00,0x7F,0xE0,0x40,0x20,0x40,0x20,0x00,0x00},/*"[",59*/
    {0x00,0x00,0x70,0x00,0x0C,0x00,0x03,0x80,0x00,0x40,0x00,0x00},/*"\",60*/
    {0x00,0x00,0x40,0x20,0x40,0x20,0x7F,0xE0,0x00,0x00,0x00,0x00},/*"]",61*/
    {0x00,0x00,0x20,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
    {0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10},/*"_",63*/
    {0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
    {0x00,0x00,0x02,0x80,0x05,0x40,0x05,0x40,0x03,0xC0,0x00,0x40},/*"a",65*/
    {0x20,0x00,0x3F,0xC0,0x04,0x40,0x04,0x40,0x03,0x80,0x00,0x00},/*"b",66*/
    {0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x40,0x06,0x40,0x00,0x00},/*"c",67*/
    {0x00,0x00,0x03,0x80,0x04,0x40,0x24,0x40,0x3F,0xC0,0x00,0x40},/*"d",68*/
    {0x00,0x00,0x03,0x80,0x05,0x40,0x05,0x40,0x03,0x40,0x00,0x00},/*"e",69*/
    {0x00,0x00,0x04,0x40,0x1F,0xC0,0x24,0x40,0x24,0x40,0x20,0x00},/*"f",70*/
    {0x00,0x00,0x02,0xE0,0x05,0x50,0x05,0x50,0x06,0x50,0x04,0x20},/*"g",71*/
    {0x20,0x40,0x3F,0xC0,0x04,0x40,0x04,0x00,0x03,0xC0,0x00,0x40},/*"h",72*/
    {0x00,0x00,0x04,0x40,0x27,0xC0,0x00,0x40,0x00,0x00,0x00,0x00},/*"i",73*/
    {0x00,0x10,0x00,0x10,0x04,0x10,0x27,0xE0,0x00,0x00,0x00,0x00},/*"j",74*/
    {0x20,0x40,0x3F,0xC0,0x01,0x40,0x07,0x00,0x04,0xC0,0x04,0x40},/*"k",75*/
    {0x20,0x40,0x20,0x40,0x3F,0xC0,0x00,0x40,0x00,0x40,0x00,0x00},/*"l",76*/
    {0x07,0xC0,0x04,0x00,0x07,0xC0,0x04,0x00,0x03,0xC0,0x00,0x00},/*"m",77*/
    {0x04,0x40,0x07,0xC0,0x04,0x40,0x04,0x00,0x03,0xC0,0x00,0x40},/*"n",78*/
    {0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x40,0x03,0x80,0x00,0x00},/*"o",79*/
    {0x04,0x10,0x07,0xF0,0x04,0x50,0x04,0x40,0x03,0x80,0x00,0x00},/*"p",80*/
    {0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x50,0x07,0xF0,0x00,0x10},/*"q",81*/
    {0x04,0x40,0x07,0xC0,0x02,0x40,0x04,0x00,0x04,0x00,0x00,0x00},/*"r",82*/
    {0x00,0x00,0x06,0x40,0x05,0x40,0x05,0x40,0x04,0xC0,0x00,0x00},/*"s",83*/
    {0x00,0x00,0x04,0x00,0x1F,0x80,0x04,0x40,0x00,0x40,0x00,0x00},/*"t",84*/
    {0x04,0x00,0x07,0x80,0x00,0x40,0x04,0x40,0x07,0xC0,0x00,0x40},/*"u",85*/
    {0x04,0x00,0x07,0x00,0x04,0xC0,0x01,0x80,0x06,0x00,0x04,0x00},/*"v",86*/
    {0x06,0x00,0x01,0xC0,0x07,0x00,0x01,0xC0,0x06,0x00,0x00,0x00},/*"w",87*/
    {0x04,0x40,0x06,0xC0,0x01,0x00,0x06,0xC0,0x04,0x40,0x00,0x00},/*"x",88*/
    {0x04,0x10,0x07,0x10,0x04,0xE0,0x01,0x80,0x06,0x00,0x04,0x00},/*"y",89*/
    {0x00,0x00,0x04,0x40,0x05,0xC0,0x06,0x40,0x04,0x40,0x00,0x00},/*"z",90*/
    {0x00,0x00,0x00,0x00,0x04,0x00,0x7B,0xE0,0x40,0x20,0x00,0x00},/*"{",91*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x00,0x00},/*"|",92*/
    {0x00,0x00,0x40,0x20,0x7B,0xE0,0x04,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
    {0x40,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x20,0x00,0x40,0x00},/*"~",94*/
}; 

static const uint8_t Font1608[95][16] = {      
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xCC,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
    {0x00,0x00,0x08,0x00,0x30,0x00,0x60,0x00,0x08,0x00,0x30,0x00,0x60,0x00,0x00,0x00},/*""",2*/
    {0x02,0x20,0x03,0xFC,0x1E,0x20,0x02,0x20,0x03,0xFC,0x1E,0x20,0x02,0x20,0x00,0x00},/*"#",3*/
    {0x00,0x00,0x0E,0x18,0x11,0x04,0x3F,0xFF,0x10,0x84,0x0C,0x78,0x00,0x00,0x00,0x00},/*"$",4*/
    {0x0F,0x00,0x10,0x84,0x0F,0x38,0x00,0xC0,0x07,0x78,0x18,0x84,0x00,0x78,0x00,0x00},/*"%",5*/
    {0x00,0x78,0x0F,0x84,0x10,0xC4,0x11,0x24,0x0E,0x98,0x00,0xE4,0x00,0x84,0x00,0x08},/*"&",6*/
    {0x08,0x00,0x68,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x18,0x18,0x20,0x04,0x40,0x02,0x00,0x00},/*"(",8*/
    {0x00,0x00,0x40,0x02,0x20,0x04,0x18,0x18,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*")",9*/
    {0x02,0x40,0x02,0x40,0x01,0x80,0x0F,0xF0,0x01,0x80,0x02,0x40,0x02,0x40,0x00,0x00},/*"*",10*/
    {0x00,0x80,0x00,0x80,0x00,0x80,0x0F,0xF8,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00},/*"+",11*/
    {0x00,0x01,0x00,0x0D,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
    {0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80},/*"-",13*/
    {0x00,0x00,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
    {0x00,0x00,0x00,0x06,0x00,0x18,0x00,0x60,0x01,0x80,0x06,0x00,0x18,0x00,0x20,0x00},/*"/",15*/
    {0x00,0x00,0x07,0xF0,0x08,0x08,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"0",16*/
    {0x00,0x00,0x08,0x04,0x08,0x04,0x1F,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"1",17*/
    {0x00,0x00,0x0E,0x0C,0x10,0x14,0x10,0x24,0x10,0x44,0x11,0x84,0x0E,0x0C,0x00,0x00},/*"2",18*/
    {0x00,0x00,0x0C,0x18,0x10,0x04,0x11,0x04,0x11,0x04,0x12,0x88,0x0C,0x70,0x00,0x00},/*"3",19*/
    {0x00,0x00,0x00,0xE0,0x03,0x20,0x04,0x24,0x08,0x24,0x1F,0xFC,0x00,0x24,0x00,0x00},/*"4",20*/
    {0x00,0x00,0x1F,0x98,0x10,0x84,0x11,0x04,0x11,0x04,0x10,0x88,0x10,0x70,0x00,0x00},/*"5",21*/
    {0x00,0x00,0x07,0xF0,0x08,0x88,0x11,0x04,0x11,0x04,0x18,0x88,0x00,0x70,0x00,0x00},/*"6",22*/
    {0x00,0x00,0x1C,0x00,0x10,0x00,0x10,0xFC,0x13,0x00,0x1C,0x00,0x10,0x00,0x00,0x00},/*"7",23*/
    {0x00,0x00,0x0E,0x38,0x11,0x44,0x10,0x84,0x10,0x84,0x11,0x44,0x0E,0x38,0x00,0x00},/*"8",24*/
    {0x00,0x00,0x07,0x00,0x08,0x8C,0x10,0x44,0x10,0x44,0x08,0x88,0x07,0xF0,0x00,0x00},/*"9",25*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0C,0x03,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
    {0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
    {0x00,0x00,0x00,0x80,0x01,0x40,0x02,0x20,0x04,0x10,0x08,0x08,0x10,0x04,0x00,0x00},/*"<",28*/
    {0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x02,0x20,0x00,0x00},/*"=",29*/
    {0x00,0x00,0x10,0x04,0x08,0x08,0x04,0x10,0x02,0x20,0x01,0x40,0x00,0x80,0x00,0x00},/*">",30*/
    {0x00,0x00,0x0E,0x00,0x12,0x00,0x10,0x0C,0x10,0x6C,0x10,0x80,0x0F,0x00,0x00,0x00},/*"?",31*/
    {0x03,0xE0,0x0C,0x18,0x13,0xE4,0x14,0x24,0x17,0xC4,0x08,0x28,0x07,0xD0,0x00,0x00},/*"@",32*/
    {0x00,0x04,0x00,0x3C,0x03,0xC4,0x1C,0x40,0x07,0x40,0x00,0xE4,0x00,0x1C,0x00,0x04},/*"A",33*/
    {0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x04,0x11,0x04,0x0E,0x88,0x00,0x70,0x00,0x00},/*"B",34*/
    {0x03,0xE0,0x0C,0x18,0x10,0x04,0x10,0x04,0x10,0x04,0x10,0x08,0x1C,0x10,0x00,0x00},/*"C",35*/
    {0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"D",36*/
    {0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x04,0x17,0xC4,0x10,0x04,0x08,0x18,0x00,0x00},/*"E",37*/
    {0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x00,0x17,0xC0,0x10,0x00,0x08,0x00,0x00,0x00},/*"F",38*/
    {0x03,0xE0,0x0C,0x18,0x10,0x04,0x10,0x04,0x10,0x44,0x1C,0x78,0x00,0x40,0x00,0x00},/*"G",39*/
    {0x10,0x04,0x1F,0xFC,0x10,0x84,0x00,0x80,0x00,0x80,0x10,0x84,0x1F,0xFC,0x10,0x04},/*"H",40*/
    {0x00,0x00,0x10,0x04,0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x04,0x00,0x00,0x00,0x00},/*"I",41*/
    {0x00,0x03,0x00,0x01,0x10,0x01,0x10,0x01,0x1F,0xFE,0x10,0x00,0x10,0x00,0x00,0x00},/*"J",42*/
    {0x10,0x04,0x1F,0xFC,0x11,0x04,0x03,0x80,0x14,0x64,0x18,0x1C,0x10,0x04,0x00,0x00},/*"K",43*/
    {0x10,0x04,0x1F,0xFC,0x10,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x0C,0x00,0x00},/*"L",44*/
    {0x10,0x04,0x1F,0xFC,0x1F,0x00,0x00,0xFC,0x1F,0x00,0x1F,0xFC,0x10,0x04,0x00,0x00},/*"M",45*/
    {0x10,0x04,0x1F,0xFC,0x0C,0x04,0x03,0x00,0x00,0xE0,0x10,0x18,0x1F,0xFC,0x10,0x00},/*"N",46*/
    {0x07,0xF0,0x08,0x08,0x10,0x04,0x10,0x04,0x10,0x04,0x08,0x08,0x07,0xF0,0x00,0x00},/*"O",47*/
    {0x10,0x04,0x1F,0xFC,0x10,0x84,0x10,0x80,0x10,0x80,0x10,0x80,0x0F,0x00,0x00,0x00},/*"P",48*/
    {0x07,0xF0,0x08,0x18,0x10,0x24,0x10,0x24,0x10,0x1C,0x08,0x0A,0x07,0xF2,0x00,0x00},/*"Q",49*/
    {0x10,0x04,0x1F,0xFC,0x11,0x04,0x11,0x00,0x11,0xC0,0x11,0x30,0x0E,0x0C,0x00,0x04},/*"R",50*/
    {0x00,0x00,0x0E,0x1C,0x11,0x04,0x10,0x84,0x10,0x84,0x10,0x44,0x1C,0x38,0x00,0x00},/*"S",51*/
    {0x18,0x00,0x10,0x00,0x10,0x04,0x1F,0xFC,0x10,0x04,0x10,0x00,0x18,0x00,0x00,0x00},/*"T",52*/
    {0x10,0x00,0x1F,0xF8,0x10,0x04,0x00,0x04,0x00,0x04,0x10,0x04,0x1F,0xF8,0x10,0x00},/*"U",53*/
    {0x10,0x00,0x1E,0x00,0x11,0xE0,0x00,0x1C,0x00,0x70,0x13,0x80,0x1C,0x00,0x10,0x00},/*"V",54*/
    {0x1F,0xC0,0x10,0x3C,0x00,0xE0,0x1F,0x00,0x00,0xE0,0x10,0x3C,0x1F,0xC0,0x00,0x00},/*"W",55*/
    {0x10,0x04,0x18,0x0C,0x16,0x34,0x01,0xC0,0x01,0xC0,0x16,0x34,0x18,0x0C,0x10,0x04},/*"X",56*/
    {0x10,0x00,0x1C,0x00,0x13,0x04,0x00,0xFC,0x13,0x04,0x1C,0x00,0x10,0x00,0x00,0x00},/*"Y",57*/
    {0x08,0x04,0x10,0x1C,0x10,0x64,0x10,0x84,0x13,0x04,0x1C,0x04,0x10,0x18,0x00,0x00},/*"Z",58*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x40,0x02,0x40,0x02,0x40,0x02,0x00,0x00},/*"[",59*/
    {0x00,0x00,0x30,0x00,0x0C,0x00,0x03,0x80,0x00,0x60,0x00,0x1C,0x00,0x03,0x00,0x00},/*"\",60*/
    {0x00,0x00,0x40,0x02,0x40,0x02,0x40,0x02,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00},/*"]",61*/
    {0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x00,0x00},/*"^",62*/
    {0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01},/*"_",63*/
    {0x00,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
    {0x00,0x00,0x00,0x98,0x01,0x24,0x01,0x44,0x01,0x44,0x01,0x44,0x00,0xFC,0x00,0x04},/*"a",65*/
    {0x10,0x00,0x1F,0xFC,0x00,0x88,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x70,0x00,0x00},/*"b",66*/
    {0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x00},/*"c",67*/
    {0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x11,0x08,0x1F,0xFC,0x00,0x04},/*"d",68*/
    {0x00,0x00,0x00,0xF8,0x01,0x44,0x01,0x44,0x01,0x44,0x01,0x44,0x00,0xC8,0x00,0x00},/*"e",69*/
    {0x00,0x00,0x01,0x04,0x01,0x04,0x0F,0xFC,0x11,0x04,0x11,0x04,0x11,0x00,0x18,0x00},/*"f",70*/
    {0x00,0x00,0x00,0xD6,0x01,0x29,0x01,0x29,0x01,0x29,0x01,0xC9,0x01,0x06,0x00,0x00},/*"g",71*/
    {0x10,0x04,0x1F,0xFC,0x00,0x84,0x01,0x00,0x01,0x00,0x01,0x04,0x00,0xFC,0x00,0x04},/*"h",72*/
    {0x00,0x00,0x01,0x04,0x19,0x04,0x19,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"i",73*/
    {0x00,0x00,0x00,0x03,0x00,0x01,0x01,0x01,0x19,0x01,0x19,0xFE,0x00,0x00,0x00,0x00},/*"j",74*/
    {0x10,0x04,0x1F,0xFC,0x00,0x24,0x00,0x40,0x01,0xB4,0x01,0x0C,0x01,0x04,0x00,0x00},/*"k",75*/
    {0x00,0x00,0x10,0x04,0x10,0x04,0x1F,0xFC,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},/*"l",76*/
    {0x01,0x04,0x01,0xFC,0x01,0x04,0x01,0x00,0x01,0xFC,0x01,0x04,0x01,0x00,0x00,0xFC},/*"m",77*/
    {0x01,0x04,0x01,0xFC,0x00,0x84,0x01,0x00,0x01,0x00,0x01,0x04,0x00,0xFC,0x00,0x04},/*"n",78*/
    {0x00,0x00,0x00,0xF8,0x01,0x04,0x01,0x04,0x01,0x04,0x01,0x04,0x00,0xF8,0x00,0x00},/*"o",79*/
    {0x01,0x01,0x01,0xFF,0x00,0x85,0x01,0x04,0x01,0x04,0x00,0x88,0x00,0x70,0x00,0x00},/*"p",80*/
    {0x00,0x00,0x00,0x70,0x00,0x88,0x01,0x04,0x01,0x04,0x01,0x05,0x01,0xFF,0x00,0x01},/*"q",81*/
    {0x01,0x04,0x01,0x04,0x01,0xFC,0x00,0x84,0x01,0x04,0x01,0x00,0x01,0x80,0x00,0x00},/*"r",82*/
    {0x00,0x00,0x00,0xCC,0x01,0x24,0x01,0x24,0x01,0x24,0x01,0x24,0x01,0x98,0x00,0x00},/*"s",83*/
    {0x00,0x00,0x01,0x00,0x01,0x00,0x07,0xF8,0x01,0x04,0x01,0x04,0x00,0x00,0x00,0x00},/*"t",84*/
    {0x01,0x00,0x01,0xF8,0x00,0x04,0x00,0x04,0x00,0x04,0x01,0x08,0x01,0xFC,0x00,0x04},/*"u",85*/
    {0x01,0x00,0x01,0x80,0x01,0x70,0x00,0x0C,0x00,0x10,0x01,0x60,0x01,0x80,0x01,0x00},/*"v",86*/
    {0x01,0xF0,0x01,0x0C,0x00,0x30,0x01,0xC0,0x00,0x30,0x01,0x0C,0x01,0xF0,0x01,0x00},/*"w",87*/
    {0x00,0x00,0x01,0x04,0x01,0x8C,0x00,0x74,0x01,0x70,0x01,0x8C,0x01,0x04,0x00,0x00},/*"x",88*/
    {0x01,0x01,0x01,0x81,0x01,0x71,0x00,0x0E,0x00,0x18,0x01,0x60,0x01,0x80,0x01,0x00},/*"y",89*/
    {0x00,0x00,0x01,0x84,0x01,0x0C,0x01,0x34,0x01,0x44,0x01,0x84,0x01,0x0C,0x00,0x00},/*"z",90*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x3E,0xFC,0x40,0x02,0x40,0x02},/*"{",91*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},/*"|",92*/
    {0x00,0x00,0x40,0x02,0x40,0x02,0x3E,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
    {0x00,0x00,0x60,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x40,0x00,0x20,0x00,0x20,0x00},/*"~",94*/
};

static const uint8_t Font1612[11][32] = 
{
    {0x00,0x00,0x3F,0xFC,0x3F,0xFC,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,
    0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x3F,0xFC,0x3F,0xFC,0x00,0x00},/*"0",0*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,
    0x30,0x00,0x3F,0xFC,0x3F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"1",1*/
    {0x00,0x00,0x39,0xFC,0x39,0xFC,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,
    0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x3F,0x8C,0x3F,0x8C,0x00,0x00},/*"2",2*/
    {0x00,0x00,0x38,0x1C,0x38,0x1C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,
    0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x3F,0xFC,0x3F,0xFC,0x00,0x00},/*"3",3*/
    {0x00,0x00,0x3F,0x80,0x3F,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
    0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x3F,0xFC,0x3F,0xFC,0x00,0x00},/*"4",4*/
    {0x00,0x00,0x3F,0xBC,0x3F,0xBC,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,
    0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0xFC,0x31,0xFC,0x00,0x00},/*"5",5*/
    {0x00,0x00,0x3F,0x9C,0x3F,0x9C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,
    0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0xFC,0x31,0xFC,0x00,0x00},/*"6",6*/
    {0x00,0x00,0x38,0x00,0x38,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,
    0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0xFC,0x3F,0xFC,0x00,0x00},/*"7",7*/
    {0x00,0x00,0x3F,0xFC,0x3F,0xFC,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,
    0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x3F,0xFC,0x3F,0xFC,0x00,0x00},/*"8",8*/
    {0x00,0x00,0x3F,0x9C,0x3F,0x9C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,
    0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x31,0x8C,0x3F,0xFC,0x3F,0xFC,0x00,0x00},/*"9",9*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x30,
    0x18,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",10*/
};

static const uint8_t Font3216[11][64] = 
{
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,    /*"0",0*/
    0x30,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,
    0x30,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,
    0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /*"1",1*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
    0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x01,0xFF,0xFC,0x3C,0x01,0xFF,0xFC,   /*"2",2*/
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x3F,0xFF,0x80,0x0C,0x3F,0xFF,0x80,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x3C,0x38,0x00,0x00,0x3C,   /*"3",3*/
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0x80,0x00,0x3F,0xFF,0x80,0x00,  /*"4",4*/
    0x00,0x01,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x01,0x80,0x00,
    0x00,0x01,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x01,0x80,0x00,
    0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0x80,0x3C,0x3F,0xFF,0x80,0x3C,  /*"5",5*/
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x30,0x01,0xFF,0xFC,0x30,0x01,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,  /*"6",6*/
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x3C,0x01,0xFF,0xFC,0x3C,0x01,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
        
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,  /*"7",7*/
    0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
    0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
    0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},    

    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,  /*"8",8*/
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0x80,0x3C,0x3F,0xFF,0x80,0x3C,  /*"9",9*/
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,0x30,0x01,0x80,0x0C,
    0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  /*":",10*/
    0x00,0x00,0x00,0x00,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0C,0x00,0x00,0x30,
    0x0C,0x00,0x00,0x30,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};    

static const uint8_t Bmp4016[96] =  //SUN
{
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF1,0x81,0x8F,0xFC,0x3F,
    0xF1,0x81,0x8F,0xFC,0x30,0x31,0x81,0x8C,0x0C,0x30,0x01,0x81,0x8C,0x0C,0x30,0x01,
    0x81,0x8C,0x0C,0x3F,0xF1,0x81,0x8C,0x0C,0x3F,0xF1,0x81,0x8C,0x0C,0x00,0x31,0x81,
    0x8C,0x0C,0x00,0x31,0x81,0x8C,0x0C,0x30,0x31,0x81,0x8C,0x0C,0x3F,0xF1,0xFF,0x8C,
    0x0C,0x3F,0xF1,0xFF,0x8C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

static const uint8_t Signal816[16] = //mobie singal
{
    0xFE,0x02,0x92,0x0A,0x54,0x2A,0x38,0xAA,0x12,0xAA,0x12,0xAA,0x12,0xAA,0x12,0xAA
};

static const uint8_t Msg816[16] =  //message
{
    0x1F,0xF8,0x10,0x08,0x18,0x18,0x14,0x28,0x13,0xC8,0x10,0x08,0x10,0x08,0x1F,0xF8
};

static const uint8_t Bat816[16] = //batery
{
    0x0F,0xFE,0x30,0x02,0x26,0xDA,0x26,0xDA,0x26,0xDA,0x26,0xDA,0x30,0x02,0x0F,0xFE
};

static const uint8_t Bluetooth88[8] = // bluetooth
{
    0x18,0x54,0x32,0x1C,0x1C,0x32,0x54,0x18
};

static const uint8_t GPRS88[8] = //GPRS
{
    0xC3,0x99,0x24,0x20,0x2C,0x24,0x99,0xC3
};

static const uint8_t Alarm88[8] = //alram
{
    0xC3,0xBD,0x42,0x52,0x4E,0x42,0x3C,0xC3
};

#endif
