#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//小乐乐跳台阶，一次能跳一或者二台阶,一共有30个台阶，请问有多少种跳法
int fib(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
		return fib(n - 1) + fib(n - 2);
	
}
//其实就是个肺部拉切苏烈
int main()
{
	int m = 0;
	scanf("%d", &m);
	int i = fib(m);
	printf("%d", i);


	return 0;
}