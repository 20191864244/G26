# include<stdio.h>
int main()
{
	long a,b,c,d,e,x;
	printf("������һ��������5λ��������");
	scanf("%ld",&x);
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if(a!=0)
		printf("�����Ϊ5λ��������Ϊ:%ld%ld%ld%ld%ld",e,d,c,b,a);
	else if(b!=0)
		printf("�����Ϊ4λ��������Ϊ:%ld%ld%ld%ld",e,d,c,b);
	else if(c!=0)
		printf("�����Ϊ3λ��������Ϊ:%ld%ld%ld",e,d,c);
	else if(d!=0)
		printf("�����Ϊ2λ��������Ϊ:%ld%ld",e,d);
	else
		printf("�����Ϊ1λ��������Ϊ:%ld",e);
	return 0;
}
