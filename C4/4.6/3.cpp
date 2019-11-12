#include<stdio.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	{
		if(x>=10)
			y=3*x-11;
		else 
			if(x>=1 && x<10) 
			y=2*x-1;
		else 
			y=x;
	}
	printf("x=%lf,y=%lf\n",x,y);
	return 0;
}