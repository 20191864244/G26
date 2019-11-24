# include<stdio.h>
# include<string.h>
int main()
{
	char c1[30],c2[30];
	int i=0,j=0;
	printf("ÇëÊäÈë×Ö·û´®c1:");
	scanf("%s",c1);
	printf("ÇëÊäÈë×Ö·û´®c2:");
	scanf("%s",c2);

	while(c1[i]!='\0')
		i++;

	while(c2[j]!='\0')
		c1[i++]=c2[j++];
		c1[i]='\0';

	printf("%s\n",c1);

	return 0;
}





