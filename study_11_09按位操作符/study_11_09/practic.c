#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//实现求一个数的二进制有几个1;
// 
// 
// 存在问题
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

// 位移操作符法
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
    //优化
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
   //巧妙方法n&n-1实现
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

//360 笔试题
int main()
{
	int a = 0; int b = 2; int c = 3; int d = 4;
	//短路与 &&左边有0就全为假，后面的就操作就忽略了
	//同理，短路或 ||左边有1就为真，后面的不算了
	int i = a++ && ++b && d++; 
	//并且 a || b || c 当a||b 已经判定为真,后面的||c也会被忽略
	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
	return 0;
}
