// 651.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
int main(int argc, char* argv[])
{
	void insert(char str[]);
	char str[40];
	gets(str);
	insert(str);
	puts(str);
	return 0;
}

void insert(char str[])
{
	int i;
	for(i=strlen(str);i>0;i--)
	{
		str[2*i]=str[i];
		str[2*i-1]=' ';
	}

}