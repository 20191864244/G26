#include <stdio.h>
int main()
{
 int a,b,c,d;
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
	 d=a;
 } else
 {
		 d=b;
 }
		 if(d>c)
		 {
			 printf("Max=%lf\n",d);
		 }
		 else
		 {
			 printf("Max=%lf\n",c);
		 }
	 return 0;
}
