#include<reg52.h>
sbit LED = P2^0;

void Delay()
{
  int i;
	int j;
	for(i=0;i<10;i++)
	{
	   for (j=0;j<10000;j++)
		{
		
		
		}
	
	}
}

void main()
{
	while(1)
	{
	  LED=0;
		Delay();
		LED=1;
		Delay();
	}
	
	
	
	
	
	
	
	
}