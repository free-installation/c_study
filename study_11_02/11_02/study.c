#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//���õݹ��ӡ����ÿһλ 
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}
//���õݹ���׳�
int make(n)
{
	if (n > 0 )
		return  n * make(n - 1);
}
int main()
{
	int ret = 0;
	int num = 0;
	scanf("%d", &num);
		ret = make(num);
	printf("%d", ret);

	return 0;
}