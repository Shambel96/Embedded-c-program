//bytewise all the led together on and off
//1 mili second delay function
//Led  blinking bytewise

#include <reg51.h>

// delay function
void delay(unsigned int count){
unsigned int i;
	 
while(count){
	i=115;
	while(i>0)
		i--;
	count --;
 }
}
// using single bit
		sbit led1 = P2^0;
		sbit led2 = P2^1;
		sbit led3 = P2^2;
		sbit led4 = P2^3;
		sbit led5 = P2^4;
		sbit led6 = P2^5;
		sbit led7 = P2^6;
		sbit led8 = P2^7;

void main(){
	P2 = 0x00;
	while(1){ // infinite loop
//		P2 = 0x00; // 8bit  -> 0000 0000
//		delay(1000); //1000 mili second delay
//		P2 = 0xFF; // 8bit  -> 1111 1111
//		delay(1000); //1000 mili second delay
		
		led1=1;
		led8=1;
		delay(50);
		led1=0;
		led8=0;
		delay(50);
		
		led2=1;
		led7=1;
		delay(50);
		led2=0;
		led7=0;
		delay(50);
		
		led3=1;
		led6=1;
		delay(50);
		led3=0;
		led6=0;
		delay(50);
		
		led4=1;
		led5=1;
		delay(50);
		led4=0;
		led5=0;
		delay(50);
		led6=1;
		led3=1;
		delay(50);
		led6=0;
		led3=0;
		delay(50);
		led7=1;
		led2=1;
		delay(50);
		led7=0;
		led2=0;
		delay(50);
		led8=1;
		led1=1;
		delay(50);
		led8=0;
		led1=0;
		delay(50);
		
		// return part
		
	}
}

