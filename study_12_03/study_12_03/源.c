#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
void mov(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左向右找一个偶数,停下来
		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		//从右向左找一个奇数，停下来
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		//交换奇数偶数
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}
int main()
{
	//输入一个数组`
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i< sz; i++)
	{
	 scanf("%d", &arr[i]);
	}
	//将数组的奇数偶数分开函数
	
	mov(arr,sz);
	//输出
	for(i = 0; i <sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}