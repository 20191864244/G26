#include<stdio.h>
int main()
{
	char grade;
	scanf("%c",&grade);
	printf("你的成绩为(Your score):");
	switch(grade)
	{
	case'a':
	case'A':printf("90~100\n");break;
	case'b':
	case'B':printf("80~89\n");break;
	case'c':
	case'C':printf("70~79\n");break;
	case'd':
	case'D':printf("60~69\n");break;
	case'e':
	case'E':printf("<60\n");break;
	default:printf("输入的数据有误!\n");
	}
return 0;
}