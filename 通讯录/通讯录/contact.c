#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


void InitContact(struct Contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
    ps->size=0;
}



//���ҹ���
//int FindByName(struct Contact* ps,char name[Max_name])
//{
//int i=0;
//for(i=0;i<ps->size;i++)
//{
//	if(strcmp(ps->data[i].name,name)==0)
//	{
//		return i;
//	}
//}
//return -1;
//}


//������Ա
void AddContact(struct Contact* ps)
{
if(ps->size==Max)
{
printf("�������������������\n");
}

else
{
printf("����������:>");
scanf("%s",ps->data[ps->size].name);
printf("����������:>");
scanf("%d",&(ps->data[ps->size].age));
printf("�������Ա�:>");
scanf("%s",ps->data[ps->size].sex);
printf("������绰:>");
scanf("%s",ps->data[ps->size].tele);
printf("�������ַ:>");
scanf("%s",ps->data[ps->size].addr);

ps->size++;
printf("������ӳɹ�\n");
}
}

//��ʾͨѶ¼����
void ShowContact(struct Contact* ps)
{
if(ps->size==0)
{
printf("ͨѶ¼��û����Ϣ\n");
}
else
{
int i=0;
printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
for(i=0;i<ps->size;i++)
{
printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
	ps->data[i].name,
	ps->data[i].age,
	ps->data[i].sex,
	ps->data[i].tele,
	ps->data[i].addr);
}
}
}

//ɾ��������Ϣ
void DelContact(struct Contact* ps)
{
char name[Max_name];
int i=0;
//int pos=FindByName (ps,name);
printf("������Ҫɾ���˵�����:>");
scanf("%s",name);
//1.����
//����Ҫ֪��Ҫ��������ʲôλ��
//�ҵ��ˣ��������±�,������-1


for(i=0;i<ps->size;i++)
{
	if(strcmp(ps->data[i].name,name)==0)
	{
		break;
	}
}

//2.ɾ��
//˼·����Ҫɾ������Ϣ�����渲��ǰ�������
if(i==ps->size)
{
	printf("�鲻�����ˣ�����������\n");
}
else
{
int j=0;//ɾ������
for(j=i;j<ps->size-1;j++)
{
ps->data[j]=ps->data[j+1];
}
ps->size--;
printf("����ɾ���ɹ�\n");
}
}

//������Ա
void SearchContact(struct Contact* ps)
{
char name[Max_name];
int i=0;
printf("������Ҫ���ҵ�������>");
scanf("%s",name);
for(i=0;i<ps->size;i++)
{
	if(strcmp(ps->data[i].name,name)==0)
	{
	printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
	ps->data[i].name,
	ps->data[i].age,
	ps->data[i].sex,
	ps->data[i].tele,
	ps->data[i].addr);
	}
}
if(i!=ps->size)
{
printf("���޴���\n");
}
}

//�޸���Ϣ
void ModifyContact(struct Contact* ps)
{
char name[Max_name];
int i=0;
printf("������Ҫ�޸ĵ�������>");
scanf("%s",name);
for(i=0;i<ps->size;i++)
{
	if(strcmp(ps->data[i].name,name)==0)
	{
		break;
	}
}
if(i==ps->size)
{
	printf("����\n");	
}
else
{
	printf("����������:>");
    scanf("%s",ps->data[i].name);
printf("����������:>");
scanf("%d",&(ps->data[i].age));
printf("�������Ա�:>");
scanf("%s",ps->data[i].sex);
printf("������绰:>");
scanf("%s",ps->data[i].tele);
printf("�������ַ:>");
scanf("%s",ps->data[i].addr);
}

}