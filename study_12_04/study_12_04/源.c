#include<stdio.h>
int mian()
{
	//指针数组
	//存放指针的数组类型为char* int*之内
	int arr1[2] = {1,2};
	int arr2[2] = { 3,4 };
	int arr3[2] = { 5.6 };
	int* p1[3] = {arr1,arr2,arr3};
	//数组指针
	//重点先理解数组名
	 //1数组名是首元素地址
	 //两个例外 代表整个数组
	sizeof(arr1);
	int(*p2)[2] = &arr1;


	return 0;
}