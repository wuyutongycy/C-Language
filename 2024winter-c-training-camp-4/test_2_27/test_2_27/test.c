#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//使用指针数组来模拟实现二维数组

//int main()
//{
//	//int* arr[10];//指针数组
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[3] = {arr1, arr2, arr3};
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%c\n", *pc);
//	*pc = 'q';
//	printf("%c\n", ch);
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	a = 200;
//	//3 = 5;
//
//	const char * p = "hello world";
//	printf("%c\n", *p);
//	//*p = 'q';//err
//
//	return 0;
//}
//
//#include <string.h>
//
//int main()
//{
//	const char* p = "hello world";
//	printf("%s\n", p);
//	printf("%s\n", "hello world");
//
//	int len = strlen(p);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", *(p + i));
//	}
//	return 0;
//}
//

//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%s\n", arr);
//	printf("%s\n", p);
//
//	return 0;
//}
//


//#include <stdio.h>
//
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");//1
//    else
//        printf("str1 and str2 are not same\n");//2
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");//3
//    else
//        printf("str3 and str4 are not same\n");//4
//
//    return 0;
//}
//


//int main()
//{
//
//	//int * p;
//	//int* * pp;
//	int arr[10] = {0};
//	int (*p)[10] = &arr;//取出的是数组的地址
//
//	//p应该是数组指针,p指向的是数组，数组10个元素，每个元素的类型是int
//
//	return 0;
//}



//int main()
//{
//	//int* ptr;
//	char arr[5];
//	char (*p)[5] = &arr;//p是数组指针
//
//	//char (*)[5] 是数组指针类型
//	
//	//char* arr[5];
//	//char* (*p)[5] = &arr;
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (* p)[10] = &arr;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", (*p)[i]);
//		printf("%d ", (*p)[i]);
//		//           (*&arr)[i]
//		//              arr[i]
//	}
//	return 0;
//}
//

//数组指针，会在二维数组中使用

//void test(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void test(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i)+j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//
//	return 0;
//}
//



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int* test(char* s)
//{
//	return NULL;
//}
//
////函数指针变量的写法给数组指针变量的写法非常类似
//int main()
//{
//
//	int* (*pt)(char*) = test;
//
//	int arr[8] = {0};
//	int (*pa)[8] = &arr;//pa是数组指针变量
//
//	int (*pf)(int, int) = &Add;//pf 就是函数指针变量
//
//	//int x = 10;
//	//int y = 20;
//	//int z = Add(x, y);
//	//printf("%d\n", z);
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//&函数名和函数名都表示函数的地址
//
//	return 0;
//}



//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int (* pf1)(int, int) = &Add;
//	int (* pf2)(int, int) = Add;
//
//	int r1 = (*pf1)(3, 7);
//	int r2 = (*pf2)(3, 7);
//	int r3 = Add(3, 7);
//
//	printf("%d\n", r1);
//	printf("%d\n", r2);
//	printf("%d\n", r3);
//
//	return 0;
//}

//函数声明
//函数调用
//void (*p)();
//0x0012ff40
//
//《C陷阱和缺陷》
//int main()
//{
//	(* ( void (*)() ) 0 )();//函数调用
//	// 1. 将0强制类型转换成void (*)()类型的函数指针
//	// 2. 调用0地址处放的这个函数
//
//	return 0;
//}

//函数声明
//声明的函数的名字叫：signal
//signal函数有2个参数，第一个参数的类型是int
//第二个参数的类型是void(*)(int)的函数指针类型，该指针可以指向一个函数，指向的函数参数是int，返回类型是void
//signal函数的返回类型是void(*)(int)的函数指针，该指针可以指向一个函数，指向的函数参数是int，返回类型是void
//

//void (* signal(int, void(*)(int) ) )(int);
//void (*)(int) signal(int, void(*)(int));//err

//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int num1;
//	uint num2;
//
//	return 0;
//}

//typedef 对指针类型重命名

//typedef int* pint;
//
//int main()
//{
//	int* p1 = NULL;
//	pint p2 = NULL;
//
//	return 0;
//}
//

//typedef int(*parr_t)[5] ;
////parr_t 等价于 int(*)[5]
//
//int main()
//{
//	int arr[5] = {0};
//	int (* p)[5] = &arr;//p是数组指针变量，p是变量的名字
//	//int (*)[5] -- 数组指针类型
//	parr_t p2 = &arr;
//
//	return 0;
//}



//void test(char* s)
//{
//
//}
//
////对函数指针类型重命名产生新的类型pf_t
//typedef void (*pf_t)(char*) ;
//
//int main()
//{
//	void (*pf)(char*) = test;
//	//void (*)(char*)
//	pf_t pf2 = test;
//
//	return 0;
//}
//



//void (*signal(int, void(*)(int)))(int);
//
////简化后的代码
//typedef void(*pf_t)(int);
//pf_t signal2(int, pf_t);

//
//typedef int* ptr_t;
//
//#define PTR_T int*
//
//int main()
//{
//	//ptr_t p1;//p1是整型指针
//	//PTR_T p2;//p2是整型指针
//
//	ptr_t p1, p2;//p1, p2是整型指针
//	PTR_T p3, p4;//p3是指针，p4是整型
//
//	//int *p3, p4;
//	return 0;
//}
