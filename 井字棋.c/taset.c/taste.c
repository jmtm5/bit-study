#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
printf("********************\n");
printf("**1.play    0.exit**\n");
printf("********************\n");
}

void game()
{
	char ret=0;
	//����  ���������Ϣ
	char board[ROW][COL]={0};
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplaryBoard(board,ROW,COL);
	
	while(1)
	{
		//�������
	PLyerMove(board,ROW,COL);
	DisplaryBoard(board,ROW,COL);
	//�ж���Ӯ
	ret=Iswin(board,ROW,COL);
	if(ret != 'c')
	{
	break;
	}
	//��������
	ComputerMove(board,ROW,COL);
	DisplaryBoard(board,ROW,COL);
	//�ж���Ӯ
	ret=Iswin(board,ROW,COL);//������������ret�����ܺ�������ֵ
	if(ret!='c')
	{
	break;
	}
	}


	if(ret =='*')
	{
	printf("���Ӯ\n");
	}
	else if(ret =='#')
	{
	printf("����Ӯ\n");
	}
	else
	{
	printf("ƽ��\n");//ӦΪ����ֻ�в���c�Ż����������ų�C
	}
}

void tast()
{
	int a=0;
	srand((unsigned int)time(NULL));
	do
	{
	menu();
    printf("��ѡ��>|\n");
	scanf("%d",&a);
	switch(a)
	{
	 case 1:
        game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
    default:
		printf("ѡ�����\n");
		break;
	}
	}while(a);

}

int main()
{
	tast();
return 0;
}