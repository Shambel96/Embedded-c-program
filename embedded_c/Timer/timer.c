// write an 8051 C Program to toggle all the bits of 
// port P1 continuosly with some delay in between.
// Use time 0 16 - bit  mode to generate the delay.

// 16 nit is m1, 13 bit is m0, m3 is 8/8 split, m2 is auto 8 bit

// Gate means on/off
// 1. Timers Time
// fc  = 11.0592mhz, ft = fc/12 = 11.0592/12 = 0.9216mhz
// Tc = 1/fT = 1/0.9216 = 1.085microSec
// fc is digital frequency, ft is Timer frequency

// Tc is clock time pulse.


// 2. Number of clock pulses
//  = 50mSec/1.085microSec = 46.0829x10^3 = 46082


// 3. THo and TLo
// mode 1 (16-bit)        THo TLo
// 2^16 = 65536 - 46082 = (19,454)10 is  decimal = (4bFE)16 is hexa
// 65536 is maximum clock pulse.
// THO = 4B, TLo = FE

// Use timer 0 means C/T' = 0.
// Tmod

#include <reg51.h>

void delay(void);

// unsigned char i;

void main(){
	while(1){
		P1  = 0x55; // p1 = 0101 0101
		delay();
		P1 = 0xAA;  // p1 = 1010 1010
		delay();
	}
}

void delay(void){
	TMOD  = 0X01; // timer 0 in mode 1
//	TH0 = 0X35;
//	TL0 = 0X00;
	TH0 = 0xAB; //0x4B;
	TL0 = 0xCD; //0xFE;
	TR0 = 1; // Timer Run bit = 1 Timer start
	
	while(TF0==0);  // Timer Flag Bit = 0
		TR0 = 0;
		TF0 = 0;
}
