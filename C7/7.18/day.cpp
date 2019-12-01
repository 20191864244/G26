// day.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,y,d,s,m;
	    m1=31,m2=30,m3=31,m4=30,m5=31,m6=30,m7=31,m8=31,m9=30,m10=31,m11=30;
		scanf("%d %d %d",&y,&m,&d);
	if (  (y%4==0&&y%100!=0)  ||y%400==0)
		m2=29;
	else
		m2=28;
	switch (m)
	{
	case 1:s=d;break;
	case 2:s=m1+d;break;
	case 3:s=m1+m2+d;break;
	case 4:s=m1+m2+m3+d;break;
	case 5:s=m1+m2+m3+m4+d;break;
	case 6:s=m1+m2+m3+m4+m5+d;break;
	case 7:s=m1+m2+m3+m4+m5+m6+d;break;
	case 8:s=m1+m2+m3+m4+m5+m6+m7+d;break;
	case 9:s=m1+m2+m3+m4+m5+m6+m7+m8+d;break;
	case 10:s=m1+m2+m3+m4+m5+m6+m7+m8+m9+d;break;
	case 11:s=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+d;break;
	case 12:s=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+m11+d;break;
	}
		printf("这是今年的第%d天\n",s);
		return 0;
}

