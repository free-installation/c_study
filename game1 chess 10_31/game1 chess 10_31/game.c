#include"game.h"
//初始化棋盘函数
void Intiboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
			for (j = 0; j < COL; j++)
			{
				board[i][j] = ' ';
			}
	}
}
//显示棋盘函数
void Printboard(char board[ROW][COL], int row, int col)
{

	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		//打印数据
	//printf(" %c | %c | %c "，board[i][0],board[i][1],board[i][2]);

		int j = 0;
		for (j = 0; j < COL; j++)
		{
			if (j != COL - 1)
				printf(" %c |", board[i][j]);
			else
				printf(" %c ", board[i][j]);

		}
		printf("\n");
		//打印分界线
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				if (j != COL - 1)
					printf("---|");
				else
					printf("---");


			}
		}


		printf("\n");
	}
}
	void Playermove(char board[ROW][COL], int row, int col)
	{
		printf("请输入坐标\n");
		while(1)
		{
			int x = 0;
			int y = 0;
			scanf("%d %d", &x, &y);
			//坐标合法性判断
			if (x >= 1 && x  <= row && y>=1 &&  y <= col)
			{
				if (board[x - 1][y - 1] == ' ')
				{
					board[x - 1][y - 1] = '*';
					break;
				}
				else
				{
					printf("重复坐标，请重新输入\n");
				}
			}
			else
			{
				printf("未知坐标，请重新输入\n");
			}
		}
	}

	void Computermove(char board[ROW][COL], int row, int col)
	{
		printf("电脑下棋\n");
		//产生0~2随机数
		
		while (1)
		{
			int x = rand() % row;
			int y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
	}
	int is_full(char board[ROW][COL], int row, int col)
	{
		int i = 0;
		int j = 0;

		for (i = 0; i < row; i++)
		{
		
			for (j = 0; j < col; j++)
			{
				//判断是否存在' '
				if (board[i][j] == ' ')
				{
					return 0;
				}
			}
		}
		return 1;
	}





	char iswin(char board[ROW][COL], int row, int col)
	{
		int i = 0;
		int j = 0;
		//判断是否获胜
			//判断行 
		for (i = 0; i < row; i++)
		{
			/*int j = 0;
			for (j = 0; j < col; j++)
			{

			}*/
			if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
			{
				return board[i][0];
			}
		}
		//判断列
		for (j = 0; j < row; j++)
		{

			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			{
				return board[i][0];
			}
		}
		//判断对角线
		if (board[0][0] == board[1][1] && board[2][2] == board[0][0] && board[0][0] != ' ')
		{
			return board[1][1];
		}
		if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		//判断平局 0 未满 1满
		if (is_full(board, ROW, COL))
		{
			return 'Q';
		}
		
		//游戏继续
	     return 'C';
		
	}