#include<stdio.h>#include<stdio.h>

int main()
{
	int profit,bonus,m;
	printf("请输入利润:");
	scanf("%d",&profit);
	m=profit/100000;
	if (profit=100000) bonus=profit*0.01;
	else	m=profit/100000;
		switch(m)
		{
			case 1:bonus=10000+(profit-100000)*0.075;break;
			case 2:
			case 3:bonus=17500+(profit-200000)*0.050;break;
			case 4:
			case 5:bonus=27500+(profit-400000)*0.030;break;
			case 6:
			case 7:
			case 8:
			case 9:bonus=33500+(profit-600000)*0.015;break;
			case 10:bonus=37500+(profit-1000000)*0.01;break;
		}
		printf("应发奖金为%d\n",bonus);
	return 0;
}