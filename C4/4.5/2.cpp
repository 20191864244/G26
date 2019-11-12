#include<stdio.h>
int main()
{	int max(int a,int b,int c);
	int a,b,c,i;
	scanf("%d,%d,%d",&a,&b,&c);
	i=max(a,b,c);
		printf("最大的为%d\n",i);
	return 0;
}
int max(int a,int b,int c)
{
	int e,f;
	if (a>b)
		e=a;
	else
		e=b;
	if (e>c)
		f=e;
	else
		f=c;
	return(f);
}