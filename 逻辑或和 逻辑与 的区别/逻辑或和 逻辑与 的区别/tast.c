#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int  i=0,a=0,b=2,c=3,d=4;
	i=a++ && ++b && ++d;//&&(�߼���)ֻҪ���Ϊ�٣�����Ͳ����ж�
	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
	i=a++ || ++b || ++d;//  ||(�߼���)ֻҪ���Ϊ�棬����Ͳ����ж�
	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
return 0;
}