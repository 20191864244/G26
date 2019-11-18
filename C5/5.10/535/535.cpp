// 535.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
double f1=1,f2=1,s=0;
int i;
for(i=1;i<=20;i++)
{
if(i%2==0);
f1=f1+f2;
s=f1/f2+s;
f2=f2+f1;
}
printf("%f\n",s);


	return 0;
}

