// 504.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c;
	int e,s,d,o;
	scanf("e=%d,s=%d,d=%d,o=%d",&e,&s,&d,&o);
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='z')
			e++;
		else if(c==' ')
			s++;
		else if(d<='9'&&d>='0')
			d++;
		else
			o++;
	}
	printf("��ĸ��:%d\t,�ո���:%d\t,������:%d\t,�����ַ���:%d\t",e,s,d,o);

	return 0;
}

