# include<stdio.h>
int main()
{
	int a[10]={0,1,3,2,5,4,7,6,9,8};
	int i,min,mid,j;
	for(i=0;i<9;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
				mid=a[i];
				a[i]=a[min];
				a[min]=mid;
			}
		}
	}
	for(i=0;i<=9;i++)
		printf(" %d",a[i]);
	return 0;
}



