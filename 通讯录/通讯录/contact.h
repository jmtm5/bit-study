#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


#define Max 1000

#define Max_name 20
#define Max_sex 5
#define Max_tele 12
#define Max_addr 30


struct PeoTnfo
{
char name[Max_name];
int age;
char sex[Max_sex];
char tele[Max_tele];
char addr[Max_addr];
};

struct Contact
{
struct PeoTnfo data[Max];//存放通讯录信息
int size;//当前位置
};


//初始化通讯录数组
void InitContact(struct Contact* ps);

//通讯录增加人员
void AddContact(struct Contact* ps);
//显示通讯录
void ShowContact(struct Contact* ps);
//删除信息
void DelContact(struct Contact* ps);
//查找人员
void SearchContact(struct Contact* ps);
//修改信息
void ModifyContact(struct Contact* ps);