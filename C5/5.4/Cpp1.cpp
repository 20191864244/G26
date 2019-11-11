# include<stdio.h>
int main()
{
	char c;
	int zimu=0,kongge=0,shuzi=0,fuhao=0;
	printf("请输入一行字符\n");
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		zimu ++;
		else if(c==' ')
		kongge ++;
		else if(c>='0'&&c<='9')
		shuzi ++;
		else 
		fuhao ++;
	}
	printf("字母数为%d\n空格数为%d\n数字数为%d\n其它字符数为%d\n",zimu,kongge,shuzi,fuhao);
	return 0;
}


