# include<stdio.h>
int main()
{
	int m,n,p,q,x;
	printf("请输入两个正整数m,n");
	scanf("%d%d",&m,&n);
	if(n<m)
	{
		x=n;
		n=m;
		m=x;
	}
	p=n*m;
	while(m!=0)
	{
		q=n%m;
		n=m;
		m=q;
	}
	printf("它们的最大公约数为%d\n",n);
	printf("它们的最小公倍数为%d\n",p/n);
	return ;
}