// 746.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
float x1, x2, a;
	printf("请输入a=");
	scanf("%f", &a);
	x1 = a / 2;
	x2 = (x1 + a / x1) / 2;
	do
	{
		x1 = x2;
		x2 = (x1 + a / x1) / 2;
	} while (fabs(x1 - x2) >= 1e-5);
	printf("%8.5f的根是%8.5f\n", a,x2);


	return 0;
}

