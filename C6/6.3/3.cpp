# include<stdio.h>
int main()
{
	int i,j,a[3][3],sum=0;
	printf("请输入9个数据");

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%3d",&a[i][j]);
		for(i=0;i<3;i++)
			sum=sum+a[i][j];

printf("对角线的和分别为%d\n",sum);
	return 0;
}