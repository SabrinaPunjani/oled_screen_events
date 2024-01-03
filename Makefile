oled:oled.o sh1106.o
	gcc -Wall -o oled oled.o sh1106.o -lbcm2835
sh1106.o:sh1106.c sh1106.h
	gcc -Wall -c sh1106.c -lbcm2835
oled.o:oled.c sh1106.h 
	gcc -Wall -c oled.c -lbcm2835
clean:
	rm sh1106.o oled.o oled
