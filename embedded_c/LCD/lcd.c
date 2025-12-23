#include <reg51.h>

void lcdcmd(unsigned char);// Signature for command function
void lcddat(unsigned char);// Signature for data function

sbit rs = P1^0; // Register Select: 0=Command, 1=Data
sbit rw = P1^1; // Read/Write: 0=Write, 1=Read
sbit en = P1^2; // Enable

void delay(); // Signature for delay function

void lcdcmd(unsigned char val){
	P2 = val;
	rs=0; // pass cmd rs logic 0
	rw=0; // rw logic to 0
	en=1; // enable make high to low with some time delay
	delay();
	en=0; // accept the command
}

void lcddat(unsigned char val){
	P2 = val;
	rs=1; // change control line while passing data make rs logic 1
	rw=0; // rw remain 0
	en=1; 
	delay();
	en=0; // accept the data
}

void delay(){
	unsigned int i;
	for (i=0;i<20000;i++);
}
 
void main(){
	P2 = 0x00;  //0xFF; output declaration d0-d7  connected with P2
	while(1){
		lcdcmd(0x38); // cmd value for declaration of dot matrix
		delay();
		lcdcmd(0x01); // cmd for clear screen
		delay();
		lcdcmd(0xE); // for cursor position and blinking
		delay();
		lcdcmd(0x0c); // for display on
		delay();
		lcdcmd(0x80); // force curso to first line first position
		
		delay();
		lcddat('W');
		delay();
		lcddat('E');
		delay();
		lcddat('L');
		delay();
		lcddat('C');
		delay();
		lcddat('O');
		delay();
		lcddat('M');
		delay();
		lcddat('E');
		delay();
		lcddat(' ');
		delay();
		lcddat('T');
		delay();
		lcddat('O');
		delay();
		
		lcdcmd(0xC0); // cmd for second line
		
		delay();
		lcddat('A');
		delay();
		lcddat('Q');
		delay();
		lcddat('W');
		delay();
		lcddat('A');
		delay();
		lcddat('Q');
		delay();
		lcddat('A');
		delay();
		lcddat('M');
		delay();
		lcddat(' ');
		delay();
		lcddat('R');
		delay();
		lcddat('E');
		delay();
		lcddat('C');
		delay();
		lcddat('O');
		delay();
		lcddat('R');
		delay();
		lcddat('D');
		delay();
		lcddat('S');
		delay();
	}
}

