#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=sqrt(a);
	{
	if(a>0 && a<1000)
		printf("%5.0d",b);
	else
		printf("������������,����������(enter data error,please enter data again)\n");
	}
	return 0;
}
