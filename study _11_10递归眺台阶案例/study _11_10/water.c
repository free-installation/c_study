#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//С������̨�ף�һ������һ���߶�̨��,һ����30��̨�ף������ж���������
int fib(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
		return fib(n - 1) + fib(n - 2);
	
}
//��ʵ���Ǹ��β���������
int main()
{
	int m = 0;
	scanf("%d", &m);
	int i = fib(m);
	printf("%d", i);


	return 0;
}