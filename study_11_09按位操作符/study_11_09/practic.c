#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ʵ����һ�����Ķ������м���1;
// 
// 
// ��������
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int n = 0;
//	int m = 1;
//	int count = 0;
//    for (n = 1;n < 32;n++)
//    { 		
//		if (m&i==m)
//		{
//			count++;
//		}
//		m = m * 2;
//	}
//	printf("%d", count);
//
//	return 0;
//	
//}

// λ�Ʋ�������
//int main()
//{
//	int i = 1;
//	scanf("%d",&i);
//	int n = 32;
//	int count = 0;
//	int b = i;
//	while (n-1)
//	{
//		if (b & 1 == 1)
//		{
//			count++;
//		}
//		b = b>> 1;
//		n--;
//	}
//	printf("%d", count);
//
//	return 0;
    //�Ż�
int counr_number_1(int n)
 {
	int i = 0;
	int count = 0;
	for (i = 1; i <= 32; i++)
	{
		if (1 & (n >> i) == 1)
		{
			count++;
		}
	}
	return count;
}
   //�����n&n-1ʵ��
int counr_number_1(int n)
{
	int i = 0;
	int count;
	while(n)
	{
		n = n & (n + 1;)
		count++;
	}
	return count;
}

//360 ������
int main()
{
	int a = 0; int b = 2; int c = 3; int d = 4;
	//��·�� &&�����0��ȫΪ�٣�����ľͲ����ͺ�����
	//ͬ����·�� ||�����1��Ϊ�棬����Ĳ�����
	int i = a++ && ++b && d++; 
	//���� a || b || c ��a||b �Ѿ��ж�Ϊ��,�����||cҲ�ᱻ����
	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
	return 0;
}
