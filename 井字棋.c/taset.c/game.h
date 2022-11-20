#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3



void InitBoard(char board[ROW][COL],int row,int clo);
void DisplaryBoard(char board[ROW][COL],int row,int clo);
void PLyerMove(char board[ROW][COL],int row,int clo);
void ComputerMove(char board[ROW][COL],int row,int clo);

//玩家赢--*
//电脑赢--#
//平局--Q
//继续--c
char Iswin(char board[ROW][COL],int row,int clo);