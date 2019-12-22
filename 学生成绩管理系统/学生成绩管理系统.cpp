

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct	stuscore
 {
	int		stuid;
	char	stuname[50];
	int shuxue;
	int yingyu;
	int cxsj;
	int jsjjc;
	int tiyu;
	int maogai;
} STUSCORE;

typedef struct	stuscorenode
{
	STUSCORE stu;
	struct stuscorenode *NEXT;
} SSN,*SSNLINK;

STUSCORE createstuscore()
{
	STUSCORE stu;
	printf("请输入学生学号:\n");
	scanf("%d",&stu.stuid);
		if(stu.stuid==-1)
			return stu;
	printf("请输入学生姓名:\n");
	scanf("%9s",&stu.stuname);
	printf("请输入学生的数学成绩:\n");
	scanf("%d",&stu.shuxue);
	printf("请输入学生的英语成绩:\n");
	scanf("%d",&stu.yingyu);
	printf("请输入学生的程序设计成绩:\n");
	scanf("%d",&stu.cxsj);
	printf("请输入学生的计算机基础成绩:\n");
	scanf("%d",&stu.jsjjc);
	printf("请输入学生的体育成绩:\n");
	scanf("%d",&stu.tiyu);
	printf("请输入学生的毛概成绩:\n");
	scanf("%d",&stu.maogai);
	return stu;
}

SSNLINK addstuscorenode()
{
	SSNLINK assn; 	
	assn=(SSNLINK)malloc(sizeof(SSN)); 
	assn->stu=createstuscore(); 	
	assn->NEXT=NULL; 
	return assn;
}

SSNLINK addtolist(SSNLINK *list,SSNLINK stunode)
{
	stunode->NEXT=*list;
	*list=stunode;
	return *list;
}

void showoneinfo1(STUSCORE ss)
{
	printf("学号:%d\n姓名:%s\n数学:%d\n英语:%d\n程序设计:%d\n计算机基础:%d\n体育:%d\n毛概:%d\n",ss.stuid,ss.stuname,ss.shuxue,ss.yingyu,ss.cxsj,ss.jsjjc,ss.tiyu,ss.maogai);
}

void showoneinfo2(STUSCORE ss)
{
	printf("%8d%8s%8d%8d%8d%8d%8d%8d\n",ss.stuid,ss.stuname,ss.shuxue,ss.yingyu,ss.cxsj,ss.jsjjc,ss.tiyu,ss.maogai);
}

void showallinfo(SSNLINK list)
{
	SSNLINK p;
	p=list;
	printf("%8s%8s%8s%8s%8s%8s%8s%8s\n","学号","姓名","数学","英语","程序设计","计算机基础","体育","毛概");
	while(p!=NULL)
	{
		showoneinfo2((*p).stu);
		p=p->NEXT;
	}
	getchar();getchar();
}

/* 查询 */
SSNLINK searchinfo(SSNLINK head)
{
	int sno;
	SSNLINK p;
	printf("请输入要查询的学号:\n");
	scanf("%d",&sno);
	p=head;
	while(p!=NULL)
	{
		if(p->stu.stuid==sno)
			break;
		p=p->NEXT;
	}
	if(p==NULL)
		printf("查无此人!");
	else
		showoneinfo1(p->stu);
	getchar();getchar();
	return p;
}

/* 修改 */
void modifyinfo(SSNLINK head)
{
	SSNLINK p;
	p=searchinfo(head);
	if(p==NULL)
	{
		getchar();getchar();
		return ;
	}
	printf("请输入新的学生成绩信息:\n");
	p->stu=createstuscore();
	printf("修改信息成功！");
	getchar();getchar();
}

/* 删除 */
void deleteinfo(SSNLINK *head)
{
	SSNLINK p,q;
	int choice;
	p=searchinfo(*head);
	if(p==NULL)
	{
		getchar();getchar();
		return ;
	}
	printf("您确定要删除该信息吗？(1删除/0取消)\n");
	scanf("%d",&choice);
	if(choice==0)
		return ;
	if(p==*head)
	{
		*head=(*head)->NEXT;
		free(p);
	}
	else
	{
		q=*head;
		while(q->NEXT!=p)
			q=q->NEXT;
		q->NEXT=p->NEXT;
		free(p);
	}
	getchar();getchar();
}

/* 排序 */
void sortinfo(SSNLINK head)
{
	SSNLINK tail=head,p;
	STUSCORE t;
	while(tail->NEXT!=NULL)
		tail=tail->NEXT;
	while(p->NEXT!=tail)
	{
		p=head;
		while(p->NEXT!=tail)
		{
			if(p->stu.stuid>p->NEXT->stu.stuid)
			{
				t=p->stu;
				p->stu=p->NEXT->stu;
				p->NEXT->stu=t;
			}
			p=p->NEXT;
		}
		if(p->stu.stuid>p->NEXT->stu.stuid)
		{
			t=p->stu;
			p->stu=p->NEXT->stu;
			p->NEXT->stu=t;
		}
		tail=p;
	}
	printf("排序完成\n");
	getchar();getchar();
}
	

int main()
{
	SSNLINK list=NULL,node;
	int choice;
	while(1)
	{
		system("cls");
	printf("*********学生成绩管理系统*********\n");
	printf("1.输入学生成绩信息\n");
	printf("2.显示所有学生的成绩信息\n");
	printf("3.按学号查询学生成绩信息\n");
	printf("4.按学号修改学生成绩信息\n");
	printf("5.按学号删除学生成绩信息\n");
	printf("6.按学号排序学生成绩信息\n");
	printf("***************************************\n");
	printf("请输入您的选择:\n");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:
			while(1)
			{
				node=addstuscorenode();
				if(node->stu.stuid==-1)
					break;
				list=addtolist(&list,node);
			}
				break;
			case 2:showallinfo(list);
				break;
			case 3:searchinfo(list);
				break;
			case 4:modifyinfo(list);
				break;
			case 5:deleteinfo(&list);
				break;
			case 6:sortinfo(list);
				break;
			case -1:exit(0);
		}
	}
}

	