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
	InitContact(&Con);//��ʼ��ͨѶ¼
	do{
		mume();
		printf("��ѡ��:>");
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
			printf("���˳�ͨѶ¼\n");
			break;
			default:
			printf("�����������������\n");
			break;
		}
	
}while(input);
return 0;
}