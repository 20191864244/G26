#include<stdio.h>
#include<math.h>
int main()
{
	double p,r=0.07;
	int n=10;
	p=pow(1+r,n);
	printf("与现在相比增长%f\n",p-1);
	return 0;
}