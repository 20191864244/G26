# include<stdio.h>
int main()
{
	int i,a,n,sum=0,term=0;
	printf("������һ��a������");
	scanf("%d",&a);
	printf("������һ��n������");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		term=term*10+a;
		sum=sum+term;
	}
	printf("a+aa+aaa+...+a...a=%d\n",sum);
	return 0;
}

