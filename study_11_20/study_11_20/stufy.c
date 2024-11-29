#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//按照示例打印菱形
////	   *
////    ***
////     *
//	//打印图形题目核心思想，去寻找规律,逐步拆解
//	//将图形拆分为上下两半部分，图形由" "和"*"组成，分析上下两部分
//	//上半部分为line，下半部分line-1，打印一个任意line的菱形
//	int line = 0;
//	//输入
//	scanf("%d", &line);
//	int i = 0;
//	//打印上半部分
//	//循环历遍每一行
//	for (i = 0;i<line; i++)
//	{
//		//打印" "
//		int j = 0;
//		for (j = 0;j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印"*"
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分有line行
//	for (i= 0; i<line-1; i++)
//	{
//		//打印" "
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//打印"*"
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//喝汽水问题
//给20元,1瓶汽水一块钱,两个空瓶换一瓶汽水
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	while(empty >= 2)
	{
		total += empty / 2;
		empty = empty % 2 + empty / 2;
	}
	printf("%d",total);

	return 0;
}