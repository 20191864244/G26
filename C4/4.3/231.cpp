#include<stdio.h>
int main()
{
	int a=3, b=4, c=5,d,e,f,g,h,x,y;
		d=a+b>c && b==c;
		e=a ||b+c && b-c;
		f=!(a>b)&&!c || 1;
		g=!(x=a) && (y=b) && 0;
		h=!(a+b)+c-1 && b+c/2;
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	printf("%d\n",g);
	printf("%d\n",h);
	return 0;

}