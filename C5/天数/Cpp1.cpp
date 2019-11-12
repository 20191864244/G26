#include<stdio.h>
int main()
{	
	int total,y,m,d,m1=31,m2,m3=31,m4=30,m5=31,m6=30,m7=31,m8=31,m9=30,m10=31,m11=30,m12=31;
	scanf("%d,%d,%d",&y,&m,&d);
	if((y%4==0 && y%100!=0)||(y%400==0))
		m2=29;
	else
		m2=28;
		switch(m)
		{
		case 1:total=d;break;
		case 2:total=m1+d;break;
		case 3:total=m1+m2+d;break;
		case 4:total=m1+m2+m3+d;break;
		case 5:total=m1+m2+m3+m4+d;break;
		case 6:total=m1+m2+m3+m4+m5+d;break;
		case 7:total=m1+m2+m3+m4+m5+m6+d;break;
		case 8:total=m1+m2+m3+m4+m5+m6+m7+d;break;
		case 9:total=m1+m2+m3+m4+m5+m6+m7+m8+d;break;
		case 10:total=m1+m2+m3+m4+m5+m6+m7+m8+m9+d;break;
		case 11:total=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+d;break;
		case 12:total=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+m11+d;break;
		}
		printf("该天为该年的第%d天\n",total);
	return 0;
}
