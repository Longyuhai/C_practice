#define _CRT_SECURE_NO_WARNINGS 1



//����:�ҳ����������е����ֵ
#include <stdio.h>
//
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max=%d\n", max);
//}



//�鿴�����Ƕ���λ��
//int main(void)
//{
//	void* number = 0;
//	printf("%d \n", sizeof(&number));
//}




//дһ�������������������α���������
//void swap1(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//	//����ʵ��Ŀ�ģ�x,y��a,bû�н�����ϵ
//	//�ڴ��е�������һ��ռ�洢x,y
//}
//void swap2(int* px, int* py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap1(a, b);
//	printf("swap1::a=%d b=%d\n", a, b);
//	swap2(&a, &b);
//	printf("swap2::a=%d b=%d\n", a, b);
//}



//3.дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨ʵ��
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;//���ö��ַ�����ָ������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ�����֣�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


#include <string.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	printf("%d\n", ret);
//	return 0;
//}



//�����ݹ�
//��������ֵ������˳���ӡ����ÿһλ��
//���磺���1234�����1  2  3  4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d  ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}



//��n�Ľ׳�
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//int main()
//{
//	int n = 10;
//	int num = factorial(n);
//	printf("%d�Ľ׳�Ϊ��%d", n, num);
//}



//ð������
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[] = { 3,9,4,6,5,7,8,1,0,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}