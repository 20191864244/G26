// 535.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int	p,r,n,m,temp;
scanf("%d,%d",&m,&n);
	if(n>m)
	{temp=n;
	n=m;
	m=temp;}
	p=n*m;
	while(m!=0)
	{	r=n%m;
		n=m;
		m=r;
}
printf("最大公约数:%d\n",n);
printf("最小公倍数:%d\n",p/n);


	return 0;
}

