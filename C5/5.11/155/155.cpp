// 155.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
double i,s=0,h0=100,ht;
for(i=1;i<=10;i++)
{
    s=h0+s/2;
	ht=h0/pow(2,i);
}
printf("总高度=%f\n第十次=%f\n",s,ht);

	return 0;
}

