# include<stdio.h>
int main()
{
	int m,n,p,q,x;
	printf("����������������m,n");
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
	printf("���ǵ����Լ��Ϊ%d\n",n);
	printf("���ǵ���С������Ϊ%d\n",p/n);
	return ;
}