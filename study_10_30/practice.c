#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>





//第 4题(编程题)
//题目名称:
//分数求和
//题目内容 :
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5. + 1 / 99 - 1 / 100 的值，打印出结果
  //1.产生分母
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i)*flag;
//		flag = -flag;
//	}	
//	printf("%lf ",sum);
//	return 0;
//}
   //打印9*9乘法表



//int main()
//{
//
//	int i = 0;
//	int n = 1;
//	for (n = 1; n <= 9;n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			printf("%d * %d = %d ", n, i, n*i); //%2d右对齐。%-2d左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}









//第5 题(编程题)
//题目名称 :
//	求最大值
//	题目内容 :
//求10 个整数中最大值
//int main()
//{
//	int i = 0;
//
//	int arr[5] = { 0 };
//    for (i= 0; i<5; i++)
//		{
//		scanf("%d",&arr[i]);
//		}
//	int max = arr[0];
//	for (i = 1; i < 5; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d",max);
//	return 0;
//}
//void meun()
//{
//	printf("#############################\n");
//	printf("######  1 play         ######\n");
//	printf("######  0 exit         ######\n");
//	printf("#############################\n");
//
//
//}
//void game()
//{
//	//生成0~100随机数
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("请猜测数字");
//	
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//
//
//
//
//
//int main()
//{
//	//创造随机数起点
//	 srand((unsigned int) time(NULL));
//	int input = 1;
//	do
//	{
//		meun();
//		printf("请输入\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("未知指令，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//		return 0;
//}
     //二分查找
int main()
{
    int k = 7;
    int arr[10] = { 1,2,4,5,5,6,7,8,9,10 };
    int sz = (sizeof arr) / (sizeof arr[0]);
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (k > arr[mid])
        {
            left = mid + 1;
        }
        else if (k < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了下标为%d ", mid);
            break;
        }
    }
        if (left > right)
        {
            printf("找不到");
        }
    
    return 0;

}