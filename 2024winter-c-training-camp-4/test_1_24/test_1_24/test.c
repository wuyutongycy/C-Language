#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int arr[5] = {1,2,3,4,5};//��ȫ��ʼ��
//	int arr2[100] = { 1,2,3,4,5 };//����ȫ��ʼ�� - ʣ��û�г�ʼ����Ĭ�ϸ�����0
//	int arr3[4] = { 1,2,3,4};
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int arr[10];//int ������Ԫ�ص�����
//	//����arr ��������int [10]
//	//
//	return 0;
//}

//
//int main()
//{
//	int arr1[5];//int [5]
//	int arr2[6];//int [6]
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", arr[5]);//[] -- �±����ò�����
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//printf("%d\n", arr[10]);//err
//
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = { 0 };//
//	int i = 0;
//	//����
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//������������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//
//	int i = 0;
//	//����
//	scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], 
//		&arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
//
//	//������������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}
//


//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 1,2,3,4,5 };
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr4[] = { 0 };//������鼸��Ԫ�أ�
//
//	return 0;
//}

//
//%p ��ר��������ӡ��ַ��
//�ص㣺16���Ƶ���ʽ��ӡ��ͬʱ��ǰ���0����ʡ��
//%x ��16���Ƶ���ʽ��ӡ
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %#X\n", i,  &arr[i]);
//	}
//	return 0;
//}
//strlen - ���ַ������ȵģ�ֻ������ַ���
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%zd\n", sizeof(arr));//sizeof(������) - ���������������ĵ�λ���ֽ�
//	printf("%zd\n", sizeof(int [10]));
//
//	//printf("%zd\n", sizeof(arr[0]));//�������һ��Ԫ��ռ�ݿռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 ,9,8,7,6,5,4,3,2,1};
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//


//int main()
//{
//	//int arr1[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};//��ȫ��ʼ��
//	//int arr2[3][5] = { 1,2 };//��ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//int arr3[3][5] = { 1,2,3,4,5,6,7 };
//	//int arr4[3][5] = { {1,2},{3,4,5 }, { 6,7 }};
//
//	//int arr[3][5] = { (1,2),(3,4)};//err
//
//	return 0;
//}
//

//int main()
//{
//	//int arr[][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17 };
//
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	printf("%d\n", arr[1][2]);
//	printf("%d\n", arr[0][0]);
//	//printf("%d\n", arr[3][5]);//err
//
//	return 0;
//}

//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//����
//	int i = 0;
//	for (i = 2; i >=0; i--)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//���
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	//int arr1[10];
//	//int arr2[3+5];
//	//int arr3[] = {1,2,3,4};
//
//	//int score[40];
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//30
//	int arr[n];//
//
//	return 0;
//}

#include <windows.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//��Ŀ��
//��һ������������в���ָ���������Ƿ���ڣ��������ӡ�±꣬��������˵�������ڣ�
//

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);//7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ�����\n");
//
//	return 0;
//}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);

	//��arr��������k
	int sz = sizeof(arr) / sizeof(arr[0]);//10

	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
		{
			printf("�ҵ���,�±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ�����\n");
	return 0;
}









