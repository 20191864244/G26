# include<stdio.h>
# define N 30
int main()
{
	char a[N];
	int i;

	for(i=0;i<N;i++)
	{
		scanf("%c",&a[i]);
		printf("%c\n",a[i]);
	}

	for(i=0;i<N;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]='A'+'Z'-a[i];
			printf("%c",a[i]);
		}
	}

	for(i=0;i<N;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]='a'+'z'-a[i];
			printf("%c",a[i]);
		}
	}
	
	return 0;
}
