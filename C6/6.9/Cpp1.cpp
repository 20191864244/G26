# include<stdio.h>
int main()
{
	int a[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	int i=0,j=14,x,y;
	printf("请输入一个数:\n");
	scanf("%d",&x);

	while(i<=j)
	{
		y=(i+j)/2;
		if(x==a[y])
		{
			break;
		}
		else if(x<a[y])
		{
			i=y+1;
		}
		else if(x>a[y])
		{
			j=y-1;
		}
	}
	printf("是第%d个元素\n",j+1);
			
	return 0;
}
