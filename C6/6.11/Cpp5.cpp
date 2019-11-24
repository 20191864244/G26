# include<stdio.h>
int main()
{
	char space=' ';
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("%c",space);
		}
		for(k=1;k<=5;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
