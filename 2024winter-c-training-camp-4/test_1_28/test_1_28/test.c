#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <math.h>

//int main()
//{
//	double r = sqrt(16);
//	printf("%lf\n", r);
//
//	return 0;
//}
//

//�����Ķ��� - ʵ��
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;//return ����
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	//дһ���ӷ����������2�����ͱ����ļӷ�������
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//ʹ��Add�����������
//	int c = Add(a, b);//�����ĵ���
//	//���
//	printf("c = %d\n", c);
//
//	return 0;
//}

//дһ���������������ֻ��Ҫ��ӡ���Ǻǡ�����

//void Print(void)
//{
//	printf("�Ǻ�\n");
//}
//
//int main()
//{
//	Print();
//	return 0;
//}


//ʵ��һ����������2�������Ľϴ�ֵ

//int get_max(int x, int y)  //���������У�����������������еĲ���������ʽ����������β�
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int m = get_max(a, b);//���ú���ʱ�����ݸ������Ĳ�������ʵ�Σ�ʵ�ʲ���
//
//	printf("%d\n", m);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	//дһ���ӷ����������2�����ͱ����ļӷ�������
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//ʹ��Add�����������
//	int c = Add(a, b);//�����ĵ���
//	//���
//	printf("c = %d\n", c);
//
//	return 0;
//}

//int is_odd(int m)
//{
//	if (m % 2 == 1)
//		return 1;
//	else
//		return 0;
//}

//int is_odd(int m)
//{
//	return  m % 2;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//������������ͷ���1�������ż���ͷ���0
//	int r = is_odd(n);
//	if (r == 1)
//		printf("������\n");
//	else
//		printf("��ż��\n");
//
//	return 0;
//}

//void test(int m)
//{
//	if (m <= 0)
//		return;
//
//	//��ӡ
//	int i = 0;
//	for (i = 1; i <= m; i++)
//	{
//		printf("%d ", i);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//���n���������ʹ�ӡ1~n������
//	test(n);
//
//	return 0;
//}

//
//int test()
//{
//	int n = 0;
//	scanf("%d", &n);//8
//	if (n<4)
//		return 3.5;
//}
//int main()
//{
//	int r = test();//3
//	printf("%d\n", r);
//	return 0;
//}
//
//
//void set_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//дһ��������arr���������ȫ���ĳ�-1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	set_arr(arr, sz);
//	//дһ��������arr���������ȫ����ӡ����
//	print_arr(arr, sz);
//
//	return 0;
//}
//
//void Print(int brr[][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", brr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print(arr, 3, 5);
//	return 0;
//}
//

//���Ǽ���ĳ��ĳ���ж����죿
//��ƺ���get_days_of_month�������
//1  2  3  4  5  6  7  8  9  10 11 12
//31 28 31 30 31 30 31 31 30 31 30 31 
//   29

//������ж�
//1. �ܱ�4���������Ҳ��ܱ�100������������
//2. �ܱ�400����������
//�����귵��1���������귵��0
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int get_days_of_month(int y, int m)
//{
//	int days[] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//	             //0  1  2  3  4 ...
//	int day = days[m];
//
//	if (is_leap_year(y) && m == 2)
//		day += 1;
//
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);//2024 1
//	
//	int day = get_days_of_month(year, month);
//	
//	printf("%d\n", day);
//
//	return 0;
//}

//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int get_days_of_month(int y, int m)
//{
//	//int days[] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//	//0  1  2  3  4 ...
//	int day = 0;
//	switch (m)
//	{
//	case 2:
//		day = 28;
//		break;
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		day = 31;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		day = 30;
//	}
//
//	if (is_leap_year(y) && m == 2)
//		day += 1;
//
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);//2024 1
//
//	int day = get_days_of_month(year, month);
//
//	printf("%d\n", day);
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	size_t len = strlen("abcdef");
//	printf("%zd\n", len);
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	printf("%zd\n", strlen("abcdef"));//��ʽ����
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    //43 2 1
//
//    return 0;
//}

//���������� - ���ڸ��߱���������һ��������ʲô��������ʲô������������ʲô
//int is_leap_year(int y);
//
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	int r = is_leap_year(y);//�����ĵ���
//	if (r == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}
//
////�����Ķ���
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}


//�ֶ���ļ�ȥʵ�ִ���


//ʵ��һ���ӷ��Ĺ���

//��ɼӷ��ĵ���


#include "add.h"

#pragma comment(lib, "add.lib")

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}

