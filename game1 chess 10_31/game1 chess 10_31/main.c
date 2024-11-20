#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("############################\n");
	printf("### 1.paly    0.exit   #####\n");
	printf("############################\n");

}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘函数
	Intiboard(board,ROW,COL);
	//打印函数
	Printboard(board, ROW, COL);
	//下棋
	while (1)
	{
		{
			Playermove(board, ROW, COL);
			ret = iswin(board, ROW, COL);
			if (ret != 'C')
			{
				break;
			}
			Printboard(board, ROW, COL);

			//电脑下棋
			Computermove(board, ROW, COL);
			ret = iswin(board, ROW, COL);
			if (ret != 'C')
			{
				break;
			}
			Printboard(board, ROW, COL);

		}
	}
	if (ret == 'Q')
		printf("平局\n");
	else if (ret == '*')
		printf("玩家获胜\n");
	else
		printf("电脑获胜\n");
	Printboard(board, ROW, COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
			printf("请输入:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("无效指令，请重新输入\n");
		   break;
		}
	} while (input);




	return 0;
}