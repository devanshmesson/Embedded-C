//Send values -4 to +4 to port P1 
#include <reg51.h>
void main(void)
{
	char mynum[]={+1,-1,+2,-2,+3,-3,+4,-4};
	unsigned char z;
	for(z=0;z<=10;z++)
	{
		P1=mynum[z];
	}
	
}
