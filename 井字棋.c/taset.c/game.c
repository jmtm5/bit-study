#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL],int row,int clo)

{
	int i=0;
     for(i=0;i<row;i++)
	 {
		 int v=0;
		 for(v=0;v<clo;v++)
		 {
		board[i][v]=' ';//中括号里必须是i/v,数组的下标是从0开始的
		 }
	 }
}//初始化数组

void DisplaryBoard(char board[ROW][COL],int row,int clo)
{
int a=0;
int b=0;
for(a=0;a<row;a++)
{
	for(b=0;b<clo;b++)
	{
       printf(" %c ",board [a][b]);
       if(b<clo-1)
         printf("|");
	}
 printf("\n");


  if (a<row-1)
{
for(b=0;b<clo;b++)
{
printf("---");//划列
if(b<clo-1)
printf("|");
}
printf("\n");
}
}
}//打印棋盘



//玩家下棋
void PLyerMove(char board[ROW][COL],int row,int clo)
{
int x=0;
int y=0;
while(1)
{
	printf("请输入坐标\n");
	scanf("%d%d",&x,&y);
	if(x>=1 && x<=row && y>=1 && y<=clo)
	{
	if(board[x-1][y-1]==' ')
	{
	board[x-1][y-1]='*';
	break;
	}
	else
		printf("坐标重复，请重新输入\n");//继续循环，直到进入If里，才能遇到break跳出
	}
	else
		printf("坐标输入错误，请重新输入\n");//返回1，继续循环，直到进入If里，才能遇到break跳出
}
}


//电脑走
void ComputerMove(char board[ROW][COL],int row,int clo)
{
int x=0;
int y=0;
printf("电脑走\n");
while(1)
{
x=rand()%ROW;
y=rand()%COL;
if(board[x][y]==' ')
{
	board[x][y]='#';
break;
}
}
}

//平局函数
//满了回复1
//没满回复0
int arr(char board[ROW][COL],int row,int clo)
{
int i=0;
int j=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(board[i][j]==' ')
{
	return 0;//没满
}
}
}
return 1;//满了
}


//判断输赢
char Iswin(char board[ROW][COL],int row,int clo)
{
	int i=0;
for(i=0;i<row;i++)
{
	if( board[i][0]==board[i][1] && board[i][0]== board[i][2] && board[i][0]!=' ')
	{
	return  board[i][0]; //判断行
	}
}
for(i=0;i<clo;i++)
{
	if( board[0][i]==board[1][i] && board[1][i]== board[2][i] && board[1][i]!=' ')
	{
	return  board[0][i]; //判断行
	}
}

//两条斜线
if(board[1][1]==board[0][0]&& board[1][1]==board[2][2]&& board[1][1]!=' ')
{
return board[1][1];
}


if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
{
return board[1][1];
}

if(arr(board,ROW,COL)==1)
{
return 'Q';
}
return 'c';

}