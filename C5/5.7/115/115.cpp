// 115.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main(int argc, char* argv[])
{
double k,s1=0,s2=0,s3=0;
for(k=1;k<=100;k++)
{s1=k+s1;}
for(k=1;k<=50;k++)
{s2=k*k+s2;}
for(k=1;k<=10;k++)
{s3=1/k+s3;}
printf("%lf\n",s1+s2+s3);
	return 0;
}

