#include <stdio.h>
#include <time.h>
#include <math.h>

int is_prime(int n);


int main(int argc, char* argv[])
{
	int n,m=1000000;
	int total=1;
	long t0,t1;

	t0=clock();

	for (n=3;n<=m;n+=2)
	{
		if (is_prime(n))
		{
			total++;
		
		}
	}
	
	t1=clock();

	printf("\n2��%d֮�������ĸ�����%d\n����2��%d֮�����������õ���ʱ�䣺%4.2f��\n",m,total,m,(t1-t0)/(float)CLOCKS_PER_SEC);

	getchar();
	return 0;
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
