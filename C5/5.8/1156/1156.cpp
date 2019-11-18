// 1156.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c,i;
	for(i=100;i<=999;i++)
	{	
		a=i/100;
		b=i%100/10;
		c=i%10;
	
	if(a*100+b*10+c==a*a*a+b*b*b+c*c*c)
	printf("%d\n",a*100+b*10+c);

	}
	return 0;
}

