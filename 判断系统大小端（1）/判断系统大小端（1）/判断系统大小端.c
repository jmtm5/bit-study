#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int check_system()
{
int a=1;
char *p=(char*) &a;//��Ϊa��int�ͣ���char*ÿ��ֻ�ܷ���һλ,��a�ĵ�ַǿ��ת����char*
return *p;

//return *(char*) &a;//��д
}

int main()
{
	int ret=check_system();
	if(1==ret)
	{
	printf("С��\n");
	}
	else
	{
	printf("���\n");
	}
return 0;
}