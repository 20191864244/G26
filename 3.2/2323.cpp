#include<stdio.h>
#include<math.h>
int main()
{
	
	double a=0.03,b=0.0275,c=0.021,d=0.015,e=0.0035;
	double f,g,h,i,j,k;
	f=1000*(1+a*5);
	g=(1000*(1+c*2)*(1+b*3));
	h=(1000*(1+b*3)*(1+c*2));
	i=1000*(pow((1+d),5));
	j=pow(1+(e/4),20);
	k=(1000*j);
	printf("(1)利润为%lf\n",f-1000);
	printf("(2)利润为%lf\n",g-1000);
	printf("(3)利润为%lf\n",h-1000);
	printf("(4)利润为%lf\n",i-1000);
	printf("(5)利润为%lf\n",k-1000);
	return 0;
} 

