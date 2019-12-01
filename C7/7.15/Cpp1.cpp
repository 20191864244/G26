#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct zg
{
char num[6];
char name[10];
}
main()
{
struct zg zgxx[3];
int i,k;
char ch,t[10];
int cz(struct zg zgxx2[],char str[]);
void px(struct zg zgxx1[]);
printf("\n请依次输入职工信息：");
for(i=0;i<3;i++)
{
printf("\n请输入第个人的信息：",i+1);
gets(zgxx[i].num);
gets(zgxx[i].name);
}
px(zgxx);
printf("\n输入的职工信息依次为：");
for(i=0;i<3;i++)
printf("\n%s\t%s",zgxx[i].num,zgxx[i].name);
printf("\n请输入查找的职工号：");
gets(t);
k=cz(zgxx,t);
if(k==-1)
printf("\n没有该职工信息！");
else
{
printf("\n职工号\t姓名");
printf("\n%s\t%s",zgxx[k].num,zgxx[k].name);
}
}
void px(struct zg zgxx1[3])
{
int i,j;
struct zg t;
for(i=0;i<2;i++)
for(j=i+1;j<3;j++)
if(strcmp(zgxx1[i].num,zgxx1[j].num)>0)
t=zgxx1[i],zgxx1[i]=zgxx1[j],zgxx1[j]=t;
}
int cz(struct zg zgxx2[3],char str[])
{ int i;
int l=0,p=2,m;
while(l<=p)
{
m=(l+p)/2;
if(strcmp(zgxx2[m].num,str)==0) return m;
else if(strcmp(zgxx2[m].num,str)<0) l=m+1;
else
p=m-1;
}
if(l>p) return -1;
}