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
		board[i][v]=' ';//�������������i/v,������±��Ǵ�0��ʼ��
		 }
	 }
}//��ʼ������

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
printf("---");//����
if(b<clo-1)
printf("|");
}
printf("\n");
}
}
}//��ӡ����



//�������
void PLyerMove(char board[ROW][COL],int row,int clo)
{
int x=0;
int y=0;
while(1)
{
	printf("����������\n");
	scanf("%d%d",&x,&y);
	if(x>=1 && x<=row && y>=1 && y<=clo)
	{
	if(board[x-1][y-1]==' ')
	{
	board[x-1][y-1]='*';
	break;
	}
	else
		printf("�����ظ�������������\n");//����ѭ����ֱ������If���������break����
	}
	else
		printf("���������������������\n");//����1������ѭ����ֱ������If���������break����
}
}


//������
void ComputerMove(char board[ROW][COL],int row,int clo)
{
int x=0;
int y=0;
printf("������\n");
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

//ƽ�ֺ���
//���˻ظ�1
//û���ظ�0
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
	return 0;//û��
}
}
}
return 1;//����
}


//�ж���Ӯ
char Iswin(char board[ROW][COL],int row,int clo)
{
	int i=0;
for(i=0;i<row;i++)
{
	if( board[i][0]==board[i][1] && board[i][0]== board[i][2] && board[i][0]!=' ')
	{
	return  board[i][0]; //�ж���
	}
}
for(i=0;i<clo;i++)
{
	if( board[0][i]==board[1][i] && board[1][i]== board[2][i] && board[1][i]!=' ')
	{
	return  board[0][i]; //�ж���
	}
}

//����б��
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