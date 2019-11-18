# include<stdio.h>
int main()
{
	int a[5],i,j;
	printf("请输入数组a:\n");
	for(i=0;i<5;i++)
		scanf("%4d",&a[i]);
	printf("数组a:\n");
	for(i=0;i<5;i++)
		printf("%4d",a[i]);
	for(i=0;i<5/2;i++)
	{
		j=a[i];
		a[i]=a[5-i-1];
		a[5-i-1]=j;
	}
	printf("现在数组a:\n");
	for(i=0;i<5;i++)
		printf("%4d",a[i]);
	printf("\n");
	return 0;
}



