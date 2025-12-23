#include <reg51.h>

void main(){
	P0 = 0x56;
	P1 = 0x55;
	P2 = 0x44;
	P3 = 0x32;
}
void delay(unsigned int count){
unsigned int i;
while(count){
	i=115;
	while(i>0){
		i--;
		count --;
	}
}
}