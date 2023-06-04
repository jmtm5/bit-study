#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void mume()
{
printf("****************************************\n");
printf("*******1.Add          2.Del  ***********\n");
printf("******3.Search        4.Modify *********\n");
printf("******5.Show          0.Exit  **********\n");
printf("****************************************\n");
printf("****************************************\n");
}

int main()
{
	int input=0;
	struct Contact Con;
	InitContact(&Con);//初始化通讯录
	do{
		mume();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			AddContact(&Con);
			break;
		case 2:
			DelContact(&Con);
			break;
		case 3:
			SearchContact(&Con);
			break;
		case 4:
			ModifyContact(&Con);
			break;
		case 5:
			ShowContact(&Con);
			break;
		case 0:
			printf("已退出通讯录\n");
			break;
			default:
			printf("输入错误，请重新输入\n");
			break;
		}
	
}while(input);
return 0;
}