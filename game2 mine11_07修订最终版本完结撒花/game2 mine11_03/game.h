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
//����������
#define Easycount 10
//�����ʼ��
void Intiboard(char board[ROWS][COLS], int rows, int cols ,char set);
//��ʾ����
void Display(char board[ROWS][COLS], int row, int col);
//����
void Mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
//������
void Set_mine(char board[ROWS][COLS], int row, int col);

