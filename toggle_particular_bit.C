//Toggle 0th bit of port P1 50000 times
#include <reg51.h>
sbit MYBIT = P1^0; //set 0th bit of port p1
void main(void)
{
	unsigned int z;
	for(int z=0;z<=50000;z++)
	{
		MYBIT=0;
		MYBIT=1;
	}
	
}
