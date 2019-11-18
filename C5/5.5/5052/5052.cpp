// 5052.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int i,j,a,n,s=0,h=0;
scanf("%d %d",&a,&n);
for(i=0;i<n;i++)
{
h=h+a;
s=s+h;
h=h*10;
}
printf("%d\n",s);
	return 0;
}

