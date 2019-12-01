// 55.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
int main(int argc, char* argv[])
{
	int word(char c);
	int longest(char str[]);
	int i;
	char str[80];
	printf("输入一行字符串\n\n");
	gets(str);
	printf("\n\n最长的单词为：\n\n");
	for(i=longest(str);word(str[i]);i++)
		printf("%c",str[i]);
		printf("\n");
	return 0;
}

int word(char c)
{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) 
		return 1;
	else 
		return 0;
}
int longest(char str[]) 
{
	int i,flag=1,len=0,point,max_len=0,max_point;
	for(i=0;i<=strlen(str);i++)
	{
		if(word(str[i]))     
			{
				if(flag==1)       
					{
					point=i;       
					flag=0;
					}
				else len++; 
				}
					else        
					{
						flag=1;       
					if(len>max_len)
					{
						max_len=len;
						max_point=point;
					}
							len=0;
					}
				}
			return (max_point);
}