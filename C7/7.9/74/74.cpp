// 74.cpp : Defines the entry point for the console application.
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
	int big=0,small=0,digital=0,space=0,other=0,i;
	for (i = 0; i < 40; i++)
		if(str[i]==' ')
			space++;
		else if(str[i]>='a' && str[i]<='z')
			small++;
		else if(str[i]>='A' && str[i]<='Z')
			big++;
		else if(str[i]>='0' && str[i]<='9')
			digital++;
		else
			other++;

		printf("big %d\tsmall %d\tdigital %d\tspace %d\tother %d\t",big,small,digital,space,other);

}
