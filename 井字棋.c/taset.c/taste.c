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
	//数据  存放棋盘信息
	char board[ROW][COL]={0};
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplaryBoard(board,ROW,COL);
	
	while(1)
	{
		//玩家下棋
	PLyerMove(board,ROW,COL);
	DisplaryBoard(board,ROW,COL);
	//判断输赢
	ret=Iswin(board,ROW,COL);
	if(ret != 'c')
	{
	break;
	}
	//电脑下棋
	ComputerMove(board,ROW,COL);
	DisplaryBoard(board,ROW,COL);
	//判断输赢
	ret=Iswin(board,ROW,COL);//这里曾经少了ret来接受函数返回值
	if(ret!='c')
	{
	break;
	}
	}


	if(ret =='*')
	{
	printf("玩家赢\n");
	}
	else if(ret =='#')
	{
	printf("电脑赢\n");
	}
	else
	{
	printf("平局\n");//应为上面只有不是c才会跳出来，排除C
	}
}

void tast()
{
	int a=0;
	srand((unsigned int)time(NULL));
	do
	{
	menu();
    printf("请选择>|\n");
	scanf("%d",&a);
	switch(a)
	{
	 case 1:
        game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
    default:
		printf("选择错误\n");
		break;
	}
	}while(a);

}

int main()
{
	tast();
return 0;
}