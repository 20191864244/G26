# include<stdio.h>
# include<string.h>
int main()
{
	char s1[50],s2[50];
	int l1,l2,i,sum1=0,sum2=0;

	printf("ÇëÊäÈë×Ö·û´®s1:\n");
	gets(s1);

	printf("ÇëÊäÈë×Ö·û´®s2:\n");
	gets(s2);

	l1=strlen(s1);
	l2=strlen(s2);

	if(l1==l2)
	{
		printf("0\n");
	}

	else if(l1<l2)
	{
		printf("%d\n",l1-l2);
	}

	else if(l1>l2)
	{
		printf("%d\n",l1-l2);
	}

	return 0;
}



