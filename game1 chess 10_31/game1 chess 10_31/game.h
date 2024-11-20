#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW 3
#define COL 3
#include<time.h>
#include<stdlib.h>
void Intiboard(char board[ROW][COL], int row, int col);
void Printboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);