#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3



void InitBoard(char board[ROW][COL],int row,int clo);
void DisplaryBoard(char board[ROW][COL],int row,int clo);
void PLyerMove(char board[ROW][COL],int row,int clo);
void ComputerMove(char board[ROW][COL],int row,int clo);

//���Ӯ--*
//����Ӯ--#
//ƽ��--Q
//����--c
char Iswin(char board[ROW][COL],int row,int clo);