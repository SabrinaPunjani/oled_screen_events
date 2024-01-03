/***************************************************
//Web: http://www.buydisplay.com
EastRising Technology Co.,LTD
Examples for ER-OLEDM013-1
Display is Hardward SPI 4-Wire SPI Interface 
Tested and worked with: 
Works with Raspberry pi
****************************************************/

#include <bcm2835.h>
#include <stdio.h>
#include <time.h>
#include "sh1106.h"

char value[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int main(int argc, char **argv)
{
    time_t now;
    struct tm *timenow;
    if(!bcm2835_init())
    {
        return -1;
    }
    printf("OLED begin\r\n");
    SH1106_begin();
    printf("OLED bitmap\r\n");
    SH1106_bitmap(0, 0, PIC1, 128, 64);
    SH1106_display();
    bcm2835_delay(3000);
    printf("OLED clear\r\n");
    SH1106_clear();
    printf("OLED bitmap\r\n");
    SH1106_bitmap(0, 0, PIC2, 128, 64);
    SH1106_display();
    bcm2835_delay(3000);
    printf("OLED clear\r\n");
    SH1106_clear();
    printf("OLED display time\r\n");
    while(1)
    {
        time(&now);
        timenow = localtime(&now);

        SH1106_bitmap(0, 2, Signal816, 16, 8); 
        SH1106_bitmap(24, 2, Bluetooth88, 8, 8); 
        SH1106_bitmap(40, 2, Msg816, 16, 8); 
        SH1106_bitmap(64, 2, GPRS88, 8, 8); 
        SH1106_bitmap(90, 2, Alarm88, 8, 8); 
        SH1106_bitmap(112, 2, Bat816, 16, 8); 

	if((timenow->tm_sec % 2)==0)
        SH1106_string(10, 52, "www.buydisplay.com", 12, 0); 
        else
        SH1106_string(10, 52, "www.buydisplay.com", 12, 1); 

        SH1106_char3216(0, 16, value[timenow->tm_hour / 10]);
        SH1106_char3216(16, 16, value[timenow->tm_hour % 10]);
        SH1106_char3216(32, 16, ':');
        SH1106_char3216(48, 16, value[timenow->tm_min / 10]);
        SH1106_char3216(64, 16, value[timenow->tm_min % 10]);
        SH1106_char3216(80, 16, ':');
        SH1106_char3216(96, 16, value[timenow->tm_sec / 10]);
        SH1106_char3216(112, 16, value[timenow->tm_sec % 10]);
        
        SH1106_display();
    }
    bcm2835_spi_end();
    bcm2835_close();
    return 0;
}

