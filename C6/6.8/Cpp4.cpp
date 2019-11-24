# include<stdio.h>
# include<stdlib.h>

int main()

{
	int a[5][5],i,j;
	int max,min,count,flag=0;


	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
			a[i][j]=rand();
	}


	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
			printf("%8d",a[i][j]);
			printf("\n");
	}



	for(i=0;i<5;i++)
	{	
		max=a[i][0];
		count=0;
		for(j=1;j<5;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				count=j;
			}
		}
		for(j=0;j<5;j++)
		{
			if(a[j][count]<max)
			{
				flag++;
			}
		if(flag==0)
		{
			printf("%d %d\n",i,count);
			break;
		}
		if(flag==5)
		{
			printf("no");
		}
		}
	}

	return 0;
}



		



