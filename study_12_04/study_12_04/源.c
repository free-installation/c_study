#include<stdio.h>
int mian()
{
	//ָ������
	//���ָ�����������Ϊchar* int*֮��
	int arr1[2] = {1,2};
	int arr2[2] = { 3,4 };
	int arr3[2] = { 5.6 };
	int* p1[3] = {arr1,arr2,arr3};
	//����ָ��
	//�ص������������
	 //1����������Ԫ�ص�ַ
	 //�������� ������������
	sizeof(arr1);
	int(*p2)[2] = &arr1;


	return 0;
}