#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
//雷数量设置
#define Easycount 10
//数组初始化
void Intiboard(char board[ROWS][COLS], int rows, int cols ,char set);
//显示雷盘
void Display(char board[ROWS][COLS], int row, int col);
//排雷
void Mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
//布置雷
void Set_mine(char board[ROWS][COLS], int row, int col);

