#include"game.h"
//��ʼ�����̺���
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
//��ʾ���̺���
void Printboard(char board[ROW][COL], int row, int col)
{

	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		//��ӡ����
	//printf(" %c | %c | %c "��board[i][0],board[i][1],board[i][2]);

		int j = 0;
		for (j = 0; j < COL; j++)
		{
			if (j != COL - 1)
				printf(" %c |", board[i][j]);
			else
				printf(" %c ", board[i][j]);

		}
		printf("\n");
		//��ӡ�ֽ���
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
		printf("����������\n");
		while(1)
		{
			int x = 0;
			int y = 0;
			scanf("%d %d", &x, &y);
			//����Ϸ����ж�
			if (x >= 1 && x  <= row && y>=1 &&  y <= col)
			{
				if (board[x - 1][y - 1] == ' ')
				{
					board[x - 1][y - 1] = '*';
					break;
				}
				else
				{
					printf("�ظ����꣬����������\n");
				}
			}
			else
			{
				printf("δ֪���꣬����������\n");
			}
		}
	}

	void Computermove(char board[ROW][COL], int row, int col)
	{
		printf("��������\n");
		//����0~2�����
		
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
				//�ж��Ƿ����' '
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
		//�ж��Ƿ��ʤ
			//�ж��� 
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
		//�ж���
		for (j = 0; j < row; j++)
		{

			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			{
				return board[i][0];
			}
		}
		//�ж϶Խ���
		if (board[0][0] == board[1][1] && board[2][2] == board[0][0] && board[0][0] != ' ')
		{
			return board[1][1];
		}
		if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		//�ж�ƽ�� 0 δ�� 1��
		if (is_full(board, ROW, COL))
		{
			return 'Q';
		}
		
		//��Ϸ����
	     return 'C';
		
	}