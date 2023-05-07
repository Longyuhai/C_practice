#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//1.一维数组的创建与初始化
//int main()
//{
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a',98,'c' };
//	char arr5[5] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//	/*printf("arr1：%d\n", arr1);  //对于数组，循环输出
//	printf("arr2：%d\n", arr2);
//	printf("arr3：%d\n", arr3);
//	printf("arr4：%s\n", arr4);
//	printf("arr5：%s\n", arr5);
//	printf("arr6：%s\n", arr6);*/
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	printf("\n");
//	/*for ( char j = 0; j < 3; j++)
//	{
//		printf("%p ", arr4[j]);
//	}
//	printf("\n");*/
//	/*printf("%s ", arr4);
//	printf("arr6：%p\n", &arr6);*/
//	system("pause");
//	return 0;
//}



//2.一维数组在地址中的存储
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}



//3.二维数组的使用
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)//外层循环，逐行进行操作
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i*4+j;//由行进入到列，对数组元素进行赋值
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}



//4.二维数组在数据中的存储
//int main()
//{
//	//int arr[3][4] = { 0 };
//	int arr[3][4];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//
//}



//5.数组名是什么？
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}



void select_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
		for (int j = i + 1; j < sz; j++)
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
}
int main()
{
	int arr[10] = { 9,0,2,1,4,5,8,7,3,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	select_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}