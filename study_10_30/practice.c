#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>





//�� 4��(�����)
//��Ŀ����:
//�������
//��Ŀ���� :
//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5. + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
  //1.������ĸ
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
   //��ӡ9*9�˷���



//int main()
//{
//
//	int i = 0;
//	int n = 1;
//	for (n = 1; n <= 9;n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			printf("%d * %d = %d ", n, i, n*i); //%2d�Ҷ��롣%-2d�����
//		}
//		printf("\n");
//	}
//	return 0;
//}









//��5 ��(�����)
//��Ŀ���� :
//	�����ֵ
//	��Ŀ���� :
//��10 �����������ֵ
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
//	//����0~100�����
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("��²�����");
//	
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//	//������������
//	 srand((unsigned int) time(NULL));
//	int input = 1;
//	do
//	{
//		meun();
//		printf("������\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("δָ֪�����������\n");
//			break;
//		}
//	} while (input);
//
//		return 0;
//}
     //���ֲ���
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
            printf("�ҵ����±�Ϊ%d ", mid);
            break;
        }
    }
        if (left > right)
        {
            printf("�Ҳ���");
        }
    
    return 0;

}