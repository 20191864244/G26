

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
	printf("������ѧ��ѧ��:\n");
	scanf("%d",&stu.stuid);
		if(stu.stuid==-1)
			return stu;
	printf("������ѧ������:\n");
	scanf("%9s",&stu.stuname);
	printf("������ѧ������ѧ�ɼ�:\n");
	scanf("%d",&stu.shuxue);
	printf("������ѧ����Ӣ��ɼ�:\n");
	scanf("%d",&stu.yingyu);
	printf("������ѧ���ĳ�����Ƴɼ�:\n");
	scanf("%d",&stu.cxsj);
	printf("������ѧ���ļ���������ɼ�:\n");
	scanf("%d",&stu.jsjjc);
	printf("������ѧ���������ɼ�:\n");
	scanf("%d",&stu.tiyu);
	printf("������ѧ����ë�ųɼ�:\n");
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
	printf("ѧ��:%d\n����:%s\n��ѧ:%d\nӢ��:%d\n�������:%d\n���������:%d\n����:%d\në��:%d\n",ss.stuid,ss.stuname,ss.shuxue,ss.yingyu,ss.cxsj,ss.jsjjc,ss.tiyu,ss.maogai);
}

void showoneinfo2(STUSCORE ss)
{
	printf("%8d%8s%8d%8d%8d%8d%8d%8d\n",ss.stuid,ss.stuname,ss.shuxue,ss.yingyu,ss.cxsj,ss.jsjjc,ss.tiyu,ss.maogai);
}

void showallinfo(SSNLINK list)
{
	SSNLINK p;
	p=list;
	printf("%8s%8s%8s%8s%8s%8s%8s%8s\n","ѧ��","����","��ѧ","Ӣ��","�������","���������","����","ë��");
	while(p!=NULL)
	{
		showoneinfo2((*p).stu);
		p=p->NEXT;
	}
	getchar();getchar();
}

/* ��ѯ */
SSNLINK searchinfo(SSNLINK head)
{
	int sno;
	SSNLINK p;
	printf("������Ҫ��ѯ��ѧ��:\n");
	scanf("%d",&sno);
	p=head;
	while(p!=NULL)
	{
		if(p->stu.stuid==sno)
			break;
		p=p->NEXT;
	}
	if(p==NULL)
		printf("���޴���!");
	else
		showoneinfo1(p->stu);
	getchar();getchar();
	return p;
}

/* �޸� */
void modifyinfo(SSNLINK head)
{
	SSNLINK p;
	p=searchinfo(head);
	if(p==NULL)
	{
		getchar();getchar();
		return ;
	}
	printf("�������µ�ѧ���ɼ���Ϣ:\n");
	p->stu=createstuscore();
	printf("�޸���Ϣ�ɹ���");
	getchar();getchar();
}

/* ɾ�� */
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
	printf("��ȷ��Ҫɾ������Ϣ��(1ɾ��/0ȡ��)\n");
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

/* ���� */
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
	printf("�������\n");
	getchar();getchar();
}
	

int main()
{
	SSNLINK list=NULL,node;
	int choice;
	while(1)
	{
		system("cls");
	printf("*********ѧ���ɼ�����ϵͳ*********\n");
	printf("1.����ѧ���ɼ���Ϣ\n");
	printf("2.��ʾ����ѧ���ĳɼ���Ϣ\n");
	printf("3.��ѧ�Ų�ѯѧ���ɼ���Ϣ\n");
	printf("4.��ѧ���޸�ѧ���ɼ���Ϣ\n");
	printf("5.��ѧ��ɾ��ѧ���ɼ���Ϣ\n");
	printf("6.��ѧ������ѧ���ɼ���Ϣ\n");
	printf("***************************************\n");
	printf("����������ѡ��:\n");
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

	