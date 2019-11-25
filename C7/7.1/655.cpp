// 655.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int hcf(int u,int v);
	int lcd(int u,int v,int h);
	int u,v,h,l;
	scanf("%d %d",&u,&v);
	h=hcf(u,v);
	printf("hcf=%d\n",h);
	l=lcd(u,v,h);
	printf("lcd=%d\n",l);
	return 0;
}

	int hcf(int u,int v)
	{
		int t,r;
		if(v>u)
		{t=u;u=v;v=t;}
		while((r=u%v)!=0)
		{u=v;v=r;}
		return(v);
	}
	
	int lcd(int u,int v,int h)
	{
	return(u*v/h);
	}

