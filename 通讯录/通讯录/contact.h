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
struct PeoTnfo data[Max];//���ͨѶ¼��Ϣ
int size;//��ǰλ��
};


//��ʼ��ͨѶ¼����
void InitContact(struct Contact* ps);

//ͨѶ¼������Ա
void AddContact(struct Contact* ps);
//��ʾͨѶ¼
void ShowContact(struct Contact* ps);
//ɾ����Ϣ
void DelContact(struct Contact* ps);
//������Ա
void SearchContact(struct Contact* ps);
//�޸���Ϣ
void ModifyContact(struct Contact* ps);