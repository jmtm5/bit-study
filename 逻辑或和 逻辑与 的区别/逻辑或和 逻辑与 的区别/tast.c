#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int  i=0,a=0,b=2,c=3,d=4;
	i=a++ && ++b && ++d;//&&(逻辑与)只要左边为假，右面就不再判断
	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
	i=a++ || ++b || ++d;//  ||(逻辑或)只要左边为真，右面就不再判断
	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
return 0;
}