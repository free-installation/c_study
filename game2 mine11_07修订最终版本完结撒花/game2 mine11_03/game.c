#include"game.h"
void Intiboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i <= rows; i++)
	{
		int j = 0;
		for (j = 0; j <= cols; j++)
			board[i][j] = set;
	}
}
void Display(char board[ROWS][COLS], int row, int col)
{
	int j = 0;
	int i = 0;
	printf("-------扫雷-------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);

	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);

		}
		printf("\n");


	}
	printf("-------扫雷-------\n");
}
void Set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = Easycount;
	//设置10个雷
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int count_mine(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = x - 1; i <=x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				sum++;
			}
		}

	}

	
	return sum;
}
void MarkMine(char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你想要标记位置的坐标->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)    //判断该坐标是否合法
		{
			if (show[x][y] == '*')        //判断该坐标是否被排查
			{
				show[x][y] = '!';
				break;
			}
			else
			{
				printf("该位置不能被标记，请重新输入!\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入!\n");
		}
	}
}
//递归展开
void ExplosionSpread(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col,int x, int y,int*pw)
{
	//判断是否还在范围
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		int num = count_mine(mine, x, y);
		//设置坐标空字符并向周围扩展
			if (num == 0)
			{
				(*pw)++;
				show[x][y] = ' ';
				int i = 0;
				int j = 0;
				for (i = x -1; i <= x + 1; i++)
				{
					for (j = y - 1; j <= y + 1; j++)
					{
						//判断合法性,防止死递归
						if (show[i][j] == '*')
						{
							ExplosionSpread (mine,show,row,col, i,j ,pw);
						}
						

					}
				}
			}
			else
			{
				(*pw)++;
				show[x][y] = num + '0';
			}
	}
}


void Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int ch = 0;
	int* pw = &win;//用来标记是否取得胜利
	while (win < ROW * COL - Easycount)
	{
		printf("请输入排雷坐标\n");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x <= row && x >= 1 && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				//踩雷死
				system("cls");
				printf("你死了\n");
				Display(mine, row, col);
				break;
			}
			else
			{
				//判断坐标是否重复
				if (show[x][y] !='*')
				{
					printf("重复坐标,请重新输入\n");
					continue;
				}
				else
				{
					ExplosionSpread(mine, show, row, col, x, y, pw);
					system("cls");
					Display(show, row, col);
					printf("需要标记雷的位置请输入y/Y,否则请按任意键->");
					while ((ch = getchar()) != '\n');  //清理缓冲区
					scanf("%c", &ch);
					if (ch == 'Y' || ch == 'y')
					{
						MarkMine(show, row, col);   //标记雷
						system("cls");
						Display(show, row, col);
					}
					else
					{
						continue;
					}
				}
			}

		}
		else
		{
			printf("无效坐标，请重新输入\n");
			continue;
		}

	}
		if (win == row * col - Easycount)
		{
			printf("你赢了\n");
			system("cls");
			Display(show, row, col);
			return;
		}
}
//经验积累 岁月史书
// 排查出绝对正确就不要去一直看了
//函数传参要对应 为了这个错误花费了我大量时间去寻找
//低级错误,循环里面零食变量ij的增加加成了xy



