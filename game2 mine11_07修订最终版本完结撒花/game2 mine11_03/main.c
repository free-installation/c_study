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
	//�������ڴ���׺���ʾ�׵�����
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//�����ʼ��
	Intiboard(mine, ROWS, COLS, '0');
	Intiboard(show, ROWS, COLS, '*');
	//����
	Set_mine(mine, ROW, COL);
	system("cls");   //����˵�����������
	//��ӡ����
	Display(mine, ROW, COL);   //�����Լ����Թ۲죬�ڷ���ʱע�͵�
	Display(show, ROW, COL);
	//����
	Mine(mine, show, ROW, COL);
	



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