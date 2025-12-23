#include <reg51.h>

void main()
{
    // 1. Initialize Serial Control Register (SCON)
    // 0x50: Serial Port Mode 1 (8-bit UART, variable baud rate), REN=0
    SCON = 0x40;
    // 2. Initialize Timer/Counter Mode Control Register (TMOD)
    // 0x20: Timer 1 in Mode 2 (8-bit auto-reload) for baud rate generation
    TMOD = 0x20;
    // 3. Set Baud Rate (Assuming 11.0592 MHz crystal for 9600 baud)
    // 256 - (11059200 / (384 * 9600)) = 256 - 3 = 253 (0xFD)
    TH1 = -3;//0xFD; // This is the correct value for 9600 baud
    // 4. Start Timer 1
    TR1 = 1;
	while(TI == 0){
		SBUF = 'D';
    while(TI == 0);
    TI = 0;
	}
    
}