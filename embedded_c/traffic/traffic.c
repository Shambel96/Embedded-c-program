#include <reg51.h>

// signal declaration
sbit red = P1^0;
sbit yellow = P1^1;
sbit green = P1^2;

//delay function
void delay(unsigned int qoyta){
	unsigned int i;
	for(i=0;i<qoyta;i++);
}

void main(){
	//unsigned int i;
	red=yellow=green=0;
	
	while(1){
		// turn on red
		red = 1;
		delay(60000);
		delay(60000);
		//for(i=0;i<60000;i++); // more delay incase needed
		red = 0; // turn off red
		
		// yellow on
		yellow = 1;
		delay(40000);
		yellow = 0; // yellow off
		
		// green on
		green = 1; 
		delay(60000);
		green = 0;  // green off
	}
}


