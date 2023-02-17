#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int check_system()
{
int a=1;
char *p=(char*) &a;//因为a是int型，而char*每次只能返回一位,把a的地址强制转换成char*
return *p;

//return *(char*) &a;//简写
}

int main()
{
	int ret=check_system();
	if(1==ret)
	{
	printf("小端\n");
	}
	else
	{
	printf("大端\n");
	}
return 0;
}