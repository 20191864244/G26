// 351.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int n=0,i=0,sum;
for (n = 2; n < 1000; n++)
{
sum = 0;
for (i = 1; i < n; i++)
{
if (n%i == 0)
{
sum += i;
}
}
if (sum == n)
{
printf("%d its factors are ", n);
for (i = 1; i < n; i++)
{
if (n%i == 0)
{
printf("%d ", i);
}
}
printf("\n");
}
}
	return 0;
}

