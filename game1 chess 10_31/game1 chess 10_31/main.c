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
	//��ʼ�����̺���
	Intiboard(board,ROW,COL);
	//��ӡ����
	Printboard(board, ROW, COL);
	//����
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

			//��������
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
		printf("ƽ��\n");
	else if (ret == '*')
		printf("��һ�ʤ\n");
	else
		printf("���Ի�ʤ\n");
	Printboard(board, ROW, COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
			printf("������:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��Чָ�����������\n");
		   break;
		}
	} while (input);




	return 0;
}