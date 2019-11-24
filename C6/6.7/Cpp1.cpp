# include<stdio.h>
# define M 5
int main()
{
	int a[M+1][M+1]={0};
	int i=0,j=(M+1)/2,key;
	for(key=1;key<=M*M;key++)
	{
		if((key % M)==1)

			i++;

		else
		{
			i--;
			j++;
		}

		if(i==0)

			i=M;

		if(j>M)

			j=1;
			a[i][j]=key;

	}

	for(i=1;i<=M;i++)
	{
		for(j=1;j<=M;j++)
		{
			printf("%2d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}
		
