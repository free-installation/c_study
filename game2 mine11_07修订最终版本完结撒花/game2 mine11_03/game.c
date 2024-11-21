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
	printf("-------ɨ��-------\n");
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
	printf("-------ɨ��-------\n");
}
void Set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = Easycount;
	//����10����
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
		printf("����������Ҫ���λ�õ�����->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)    //�жϸ������Ƿ�Ϸ�
		{
			if (show[x][y] == '*')        //�жϸ������Ƿ��Ų�
			{
				show[x][y] = '!';
				break;
			}
			else
			{
				printf("��λ�ò��ܱ���ǣ�����������!\n");
			}
		}
		else
		{
			printf("�����������������!\n");
		}
	}
}
//�ݹ�չ��
void ExplosionSpread(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col,int x, int y,int*pw)
{
	//�ж��Ƿ��ڷ�Χ
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		int num = count_mine(mine, x, y);
		//����������ַ�������Χ��չ
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
						//�жϺϷ���,��ֹ���ݹ�
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
	int* pw = &win;//��������Ƿ�ȡ��ʤ��
	while (win < ROW * COL - Easycount)
	{
		printf("��������������\n");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x <= row && x >= 1 && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				//������
				system("cls");
				printf("������\n");
				Display(mine, row, col);
				break;
			}
			else
			{
				//�ж������Ƿ��ظ�
				if (show[x][y] !='*')
				{
					printf("�ظ�����,����������\n");
					continue;
				}
				else
				{
					ExplosionSpread(mine, show, row, col, x, y, pw);
					system("cls");
					Display(show, row, col);
					printf("��Ҫ����׵�λ��������y/Y,�����밴�����->");
					while ((ch = getchar()) != '\n');  //��������
					scanf("%c", &ch);
					if (ch == 'Y' || ch == 'y')
					{
						MarkMine(show, row, col);   //�����
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
			printf("��Ч���꣬����������\n");
			continue;
		}

	}
		if (win == row * col - Easycount)
		{
			printf("��Ӯ��\n");
			system("cls");
			Display(show, row, col);
			return;
		}
}
//������� ����ʷ��
// �Ų��������ȷ�Ͳ�Ҫȥһֱ����
//��������Ҫ��Ӧ Ϊ��������󻨷����Ҵ���ʱ��ȥѰ��
//�ͼ�����,ѭ��������ʳ����ij�����Ӽӳ���xy



