// 25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int   prime(int n)
{
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
			return 1;
}


int main(int argc, char* argv[])
{
	int i;
	scanf("%d",&i);
	if(prime(i))
		printf("%d是素数\n",i);
	else
		printf("%d不是素数\n",i);
	return 0;
}

