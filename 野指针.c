#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	//p=NULL;
	
	if(*p==10)//指针指向的位置是10,则进入
	{
	printf("你好\n");
	}

	else if(p==NULL)//指针是个空指针则进入
	{
	printf("哈哈\n");
	}
	else
		printf("哈喽\n");
	//*p=20;
	//printf("%d\n",*p);
return 0;
}
