//Code to signify how numbers are being generated in the traffic signals.
#include <reg51.h>

void delay()
{
	int i;
	for(i=0;i<=30000;i++);
}

char arr[10]={0xbf,0x86,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xef};

void main()
{
	int a;
	for(a=0;a<10;a++)
	{
		P2=0x0f; //If a two digit number is to be generated then we need two ports to show the number.P2 will show the number at tens place
		P0=arr[a];//and P0 will show number at 1s place.
		delay();
	}
}
