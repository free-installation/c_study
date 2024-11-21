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
	//定义用于存放雷和显示雷的数组
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//数组初始化
	Intiboard(mine, ROWS, COLS, '0');
	Intiboard(show, ROWS, COLS, '*');
	//埋雷
	Set_mine(mine, ROW, COL);
	system("cls");   //清除菜单，美观整洁
	//打印雷盘
	Display(mine, ROW, COL);   //用于自己调试观察，在发布时注释掉
	Display(show, ROW, COL);
	//排雷
	Mine(mine, show, ROW, COL);
	



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