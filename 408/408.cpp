# include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>=90)
		printf("A\n");
	if(x>=80 && x<90)
		printf("B\n");
	if(x>=70 && x<80)
		printf("C\n");
	if(x>=60 && x<70)
		printf("D\n");
	if(x<60)
		printf("E\n");
	return 0;
}


