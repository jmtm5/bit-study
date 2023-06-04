#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


void InitContact(struct Contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
    ps->size=0;
}



//查找功能
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


//增加人员
void AddContact(struct Contact* ps)
{
if(ps->size==Max)
{
printf("人数已满，不能再添加\n");
}

else
{
printf("请输入名字:>");
scanf("%s",ps->data[ps->size].name);
printf("请输入年龄:>");
scanf("%d",&(ps->data[ps->size].age));
printf("请输入性别:>");
scanf("%s",ps->data[ps->size].sex);
printf("请输入电话:>");
scanf("%s",ps->data[ps->size].tele);
printf("请输入地址:>");
scanf("%s",ps->data[ps->size].addr);

ps->size++;
printf("数据添加成功\n");
}
}

//显示通讯录名单
void ShowContact(struct Contact* ps)
{
if(ps->size==0)
{
printf("通讯录里没有信息\n");
}
else
{
int i=0;
printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址");
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

//删除个人信息
void DelContact(struct Contact* ps)
{
char name[Max_name];
int i=0;
//int pos=FindByName (ps,name);
printf("请输入要删除人的姓名:>");
scanf("%s",name);
//1.查找
//首先要知道要查找人在什么位置
//找到了，返回其下标,并返回-1


for(i=0;i<ps->size;i++)
{
	if(strcmp(ps->data[i].name,name)==0)
	{
		break;
	}
}

//2.删除
//思路：把要删除的信息，从面覆盖前面的数据
if(i==ps->size)
{
	printf("查不到此人，请重新输入\n");
}
else
{
int j=0;//删除数据
for(j=i;j<ps->size-1;j++)
{
ps->data[j]=ps->data[j+1];
}
ps->size--;
printf("数据删除成功\n");
}
}

//查找人员
void SearchContact(struct Contact* ps)
{
char name[Max_name];
int i=0;
printf("请输入要查找的姓名：>");
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
printf("查无此人\n");
}
}

//修改信息
void ModifyContact(struct Contact* ps)
{
char name[Max_name];
int i=0;
printf("请输入要修改的姓名：>");
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
	printf("错误\n");	
}
else
{
	printf("请输入名字:>");
    scanf("%s",ps->data[i].name);
printf("请输入年龄:>");
scanf("%d",&(ps->data[i].age));
printf("请输入性别:>");
scanf("%s",ps->data[i].sex);
printf("请输入电话:>");
scanf("%s",ps->data[i].tele);
printf("请输入地址:>");
scanf("%s",ps->data[i].addr);
}

}