#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//����ʾ����ӡ����
////	   *
////    ***
////     *
//	//��ӡͼ����Ŀ����˼�룬ȥѰ�ҹ���,�𲽲��
//	//��ͼ�β��Ϊ�������벿�֣�ͼ����" "��"*"��ɣ���������������
//	//�ϰ벿��Ϊline���°벿��line-1����ӡһ������line������
//	int line = 0;
//	//����
//	scanf("%d", &line);
//	int i = 0;
//	//��ӡ�ϰ벿��
//	//ѭ������ÿһ��
//	for (i = 0;i<line; i++)
//	{
//		//��ӡ" "
//		int j = 0;
//		for (j = 0;j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ"*"
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿����line��
//	for (i= 0; i<line-1; i++)
//	{
//		//��ӡ" "
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ"*"
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����ˮ����
//��20Ԫ,1ƿ��ˮһ��Ǯ,������ƿ��һƿ��ˮ
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