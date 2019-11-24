# include<stdio.h>
# include<string.h>
int main()
{
	char s1[80],s2[80];
	int i,j;

	printf("ÇëÊäÈë×Ö·ûÊı×és2:\n");
	for(i=0;i<80;i++)
	{
        scanf("%s",&s2[i]);
		printf("%s",s2[i]);
	}
	j=strlen(s2);

	for(i=0;i<=j;i++)
	{
		s1[i]=s2[i];
		printf("s1:%s\n",s1[i]);
	}

	return 0;
}