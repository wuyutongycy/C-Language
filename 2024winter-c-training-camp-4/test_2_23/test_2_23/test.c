#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 20;
//	//printf("%p\n", &a);
//	int* p = &a;//��ַ -- ָ��
//	//p��ָ����� - ���ָ�루��ַ���ı���
//	//ָ�������������ŵ�ַ��
//	//
//	return 0;
//}
//


//int main()
//{
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	int* p = &a;
//
//	//*p = 100;//�����ò�������ӷ��ʲ�����*p�ȼ���a
//	//* -- �����ò�����
//
//	a = 100;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	printf("%zd\n", sizeof(pa));//4
//	printf("%zd\n", sizeof(int*));//4
//	printf("%p\n", pa);
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	printf("%zd\n", sizeof(pc));//4
//	printf("%zd\n", sizeof(char*));//4
//	printf("%p\n", pc);
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int * pa = &a;
//	char* pc = (char*) &a;//int*
//
//	printf("pa   = %p\n", pa);
//	printf("pa+1 = %p\n", pa + 1);
//
//	printf("pc   = %p\n", pc);
//	printf("pc+1 = %p\n", pc + 1);
//
//	return 0;
//}

//int main()
//{
//	int* pi;
//	char* pc;
//	double* pd;
//
//	void* pv;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//int*
//	//char* pc = &a;//int*
//	//void* pv = &a;
//	double d = 3.14;
//	void* pv = &d;//double*
//	*pv;//err
//	pv + 1;//err
//
//	return 0;
//}


//int main()
//{
//	int n = 10;//n�Ǳ���
//	n = 0;
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//	const int n = 10;//n�Ǳ���
//	//const������n֮��n���ܱ��޸��ˣ�����n���Ǳ���
//	//n�ǳ�����
//
//	n = 0;
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//	//int arr[10] = {0};
//	const int n = 10;
//	int arr[n] = {0};
//
//	return 0;
//}

//int main()
//{
//	//int arr[10] = {0};
//	const int n = 10;//c++ ��const���ε�n���ǳ���
//	int arr[n] = {0};
//
//	return 0;
//}



//int main()
//{
//	const int n = 10;
//	//n = 0;//err
//
//	int* p = &n;
//	*p = 20;
//
//	printf("%d\n", n);
//
//	return 0;
//}





//const ����ָ�������2�����
//1. const ����*�����:���Ƶ���*p,��˼�ǲ���ͨ��p���ı�pָ��Ķ�������ݣ�����p�����ǿ��Ըı�ģ�p����ָ����������
//const int* p = &n;
// 
//2. const ����*���ұ�:���Ƶ���p����˼�ǲ����޸�p�����ֵ������pָ��������ǿ���ͨ��p���ı��
//int * const p = &n;

//int main()
//{
//	const int n = 10;
//	int m = 100;
//	const int * p = &n;
//	//*p = 20;//err
//	p = &m;//ok
//
//	return 0;
//}
// 
//int main()
//{
//	const int n = 10;
//	int m = 100;
//	const int * const p = &n;
//	//*p = 20;//ok
//	p = &m;//err
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	const int n = 10;
//	int m = 100;
//	const int* const p = &n;
//	*p = 20;//err
//	p = &m;//err
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��ӡ���������
//	//�±꣺0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��ӡ���������
//	//�±꣺0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;//p=p+1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��ӡ���������
//	//�±꣺0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//ָ��-ָ��,�����ǰ��������ָ��ָ����ͬһ��ռ�

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//ָ��-ָ��
//	printf("%d\n", &arr[0] - &arr[9]);//ָ��-ָ��
//	//ָ��-ָ��ľ���ֵ��ָ���ָ��֮���Ԫ�ظ���
//	char ch[6] = {0};
//	printf("%d\n", &arr[9] - &ch[4]);//err
//	return 0;
//}
//

//strlen �ǿ⺯������ר���������ַ������ȵ�

#include <string.h>

//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;//p+����
//	}
//	return count;
//}


//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;//p+����
//	}
//	return count;
//}

//int my_strlen(char* p)
//{
//	char* p1 = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - p1;//ָ��-ָ��
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//��������ʵ��������Ԫ�صĵ�ַ
//	//arr == &arr[0]
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	while (p < arr + sz)//ָ��Ĺ�ϵԪ��
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	int* p;//
//	*p = 20;
//	printf("%d\n", *p);
//
//	return 0;
//}
//
//
//int main()
//{
//	int a;
//	printf("%d\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = &arr[0];
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//        *(p++) = i;
//    }
//    return 0;
//}


#include <stdio.h>

int* test()
{
    int n = 100;
    return &n;
}

int main()
{
    int* p = test();
    printf("%d\n", *p);
    return 0;
}

