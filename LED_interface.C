//Code to signify that which LED will be ON out of N LED bulbs.
//Just like in diwali , alternate LED's are ON.

#include <reg51.h>

void delay()
{
	int i;
	for(i=0;i<=30000;i++);
}

void main()
{
	while(1)
	{
		P0=0X01; //00000001
		delay();
		
		P0=0X02; //00000010
		delay();
		
		P0=0X04; //00000100
		delay();
		
		P0=0X08; //00001000
		delay();
		
		P0=0X10; //00010000
		delay();
		
		P0=0X20; //00100000
		delay();
		
		P0=0X40; //01000000
		delay();
		
		P0=0X80; //10000000
		delay();
		
	}
}
