#include <stdio.h>
#include <math.h>
#include <time.h>

int is_prime(int n);

int main()
{
	printf("              ▁ ▂ ▃ 你好，欢迎使用由彭耀辉编译的程序 ▃ ▂ ▁\n");
	printf("\n");
		printf("                      ▋▋请选择你所想要进行的操作▋▋\n");
	printf("\n");
	printf("================================================================================\n");
		printf("   1.判断平年闰年 \n");
		printf("   2.进行天数计算 \n");
		printf("   3.打印一个10x10的矩形 \n");
		printf("   4.素数个数判断 \n");
		printf("   9.鸣谢 \n");
		printf("   0.退出程序 \n");
		printf("================================================================================\n");

		 int a;
 scanf("%d",&a);
switch(a)
{
case 1:{
	printf("================================================================================\n");
printf("请输入年份\n");
printf("================================================================================\n");
printf("\n");

int year,leep;

scanf("%d",&year);

if(year%4==0&&year%100!=0)

leep=1;

else 
   if(year%400==0)
	leep=1;
else 
    leep=0;

if(leep)
  printf("这是闰年.\n");
  else
  printf("这是平年.\n");
};
	break;

case 2:
	{printf("================================================================================\n");
	printf("请输入年份\n");
printf("================================================================================\n");

int year,leep;

scanf("%d",&year);

if(year%4==0&&year%100!=0)

leep=1;

else 
   if(year%400==0)
	leep=1;
else 
    leep=0;

if(leep)
{printf("================================================================================\n");
  printf("请输入月份\n");
  printf("================================================================================\n");
  
  int m1,d1,total;
	  scanf("%d",&m1);
	  printf("================================================================================\n");
  printf("请输入日份\n");
  printf("================================================================================\n");
 
  scanf("%d",&d1);
  switch(m1)
  {
  case 1:total=d1;break;
  case 2:total=31+d1;break;
  case 3:total=60+d1;break;
  case 4:total=90+31+d1;break;
  case 5:total=90+30+31+d1;break;
  case 6:total=90+30+31+31+d1;break;
  case 7:total=90+31+30+31+30+d1;break;
  case 8:total=90+31+30+31+30+31+d1;break;
  case 9:total=90+31+30+31+30+31+31+d1;break;
  case 10:total=90+31+30+31+30+31+31+30+d1;break;
  case 11:total=90+31+30+31+30+31+31+30+31+d1;break;
  case 12:total=90+31+30+31+30+31+31+30+31+30+d1;break;
  default:printf("你输入的是个什么玩艺？？？？你家一年有%d月？\n",m1);total=0;}
  printf("这是今年的第%d天.\n",total);
}
  else
  {printf("================================================================================\n");
  printf("请输入月份\n");
  printf("================================================================================\n");
  int m2,d2,total2;
	  scanf("%d",&m2);
	  printf("================================================================================\n");
  printf("请输入日份\n");
  printf("================================================================================\n");
  scanf("%d",&d2);
  switch(m2)
  {
  case 1:total2=d2;break;
  case 2:total2=31+d2;break;
  case 3:total2=60-1+d2;break;
  case 4:total2=90-1+31+d2;break;
  case 5:total2=90-1+30+31+d2;break;
  case 6:total2=90-1+30+31+31+d2;break;
  case 7:total2=90-1+31+30+31+30+d2;break;
  case 8:total2=90-1+31+30+31+30+31+d2;break;
  case 9:total2=90-1+31+30+31+30+31+31+d2;break;
  case 10:total2=90-1+31+30+31+30+31+31+30+d2;break;
  case 11:total2=90-1+31+30+31+30+31+31+30+31+d2;break;
  case 12:total2=90-1+31+30+31+30+31+31+30+31+30+d2;break;
  default:printf("你输入的是个什么玩艺？？？？你家一年有%d月？\n",m2);total2=0;}
  printf("================================================================================\n");
  printf("这是今年的第%d天.\n",total2);
  printf("================================================================================\n");
  };
	break;
case 3:{
	printf("================================================================================\n");
  printf("**********\n");
  printf("**********\n");
  printf("**********\n");
  printf("**********\n");
  printf("**********\n");
  printf("**********\n");
  printf("**********\n");
  printf("**********\n");
  printf("**********\n");
  printf("**********\n");
  printf("================================================================================\n");
};break;

case 4:{int n,m;
	int total=1;
	long t0,t1;
	printf("================================================================================\n");
	printf("请输入你想要查找的数字.\n");
	printf("================================================================================\n");
	scanf("%d",&m);


	t0=clock();

	for (n=3;n<=m;n+=2)
	{
		if (is_prime(n))
		{
			total++;
		
		}
	}
	
	t1=clock();
	printf("================================================================================\n");

	printf("\n2到%d之间素数的个数：%d\n计算2到%d之间素数个数用的总时间：%4.2f秒\n",m,total,m,(t1-t0)/(float)CLOCKS_PER_SEC);
		printf("================================================================================\n");;};break;


case 9:printf("这都是我一个人做的，我谢谁阿！！！\n");
		   printf("================================================================================\n");;break;

case 0:printf("	█再见█\n");break;

	}
	return 0;
}
}


int is_prime(int n)
{
	int i;
	int flag=1;

	if(n%2)
	{
		flag=1;
		for(i=3;i<=sqrt(n);i+=2)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
	}else
	 flag=0;

	return flag;
}


