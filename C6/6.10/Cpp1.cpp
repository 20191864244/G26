# include<stdio.h>
int main()
{
	char a[3][80];
	int i,j;
	int da=0,xiao=0,shuzi=0,kongge=0,qita=0;

	for(i=0;i<3;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("������240���ַ�\n");
			scanf("%c",&a[i][j]);
			printf("%c",a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<80;j++)
		{
			if(a[i][j]>='A' && a[i][j]<='Z')
			{
				da++;
			}

			else if(a[i][j]>='a' && a[i][j]<='z')
			{
				xiao++;
			}
			
			else if(a[i][j]>='0' && a[i][j]<='9')
			{
				shuzi++;
			}

			else if(a[i][j]=' ')
			{
				kongge++;
			}

			else
				qita++;

		}
	}

	printf("Ӣ�Ĵ�д��ĸ��%d��,Сд��ĸ��%d��,������%d��,�ո���%d��,�����ַ���%d��\n",da,xiao,shuzi,kongge,qita);
	
	return 0;
}


