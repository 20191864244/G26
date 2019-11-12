# include<stdio.h>
int main()
{
	long a,b,c,d,e,x;
	printf("请输入一个不多于5位的正整数");
	scanf("%ld",&x);
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if(a!=0)
		printf("这个数为5位数，逆序为:%ld%ld%ld%ld%ld",e,d,c,b,a);
	else if(b!=0)
		printf("这个数为4位数，逆序为:%ld%ld%ld%ld",e,d,c,b);
	else if(c!=0)
		printf("这个数为3位数，逆序为:%ld%ld%ld",e,d,c);
	else if(d!=0)
		printf("这个数为2位数，逆序为:%ld%ld",e,d);
	else
		printf("这个数为1位数，逆序为:%ld",e);
	return 0;
}
