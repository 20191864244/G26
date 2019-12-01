// 547.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <malloc.h>
#include <string.h>
void inverse(char[]);
int main(int argc, char* argv[])
{
	char str[100],a[100];
	gets(a);
	inverse(a);
	puts(a);
	return 0;
}

void inverse(char str[])
{
	char c;
	int begin=0,end=strlen(str)-1,mid=end/2;
	do
	{
		c=str[end];
		str[end--]=str[begin];
		str[begin++]=c;
	}while(begin<mid);
}
