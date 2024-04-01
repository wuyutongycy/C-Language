#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 20;
//	//printf("%p\n", &a);
//	int* p = &a;//地址 -- 指针
//	//p是指针变量 - 存放指针（地址）的变量
//	//指针变量是用来存放地址的
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
//	//*p = 100;//解引用操作（间接访问操作）*p等价于a
//	//* -- 解引用操作符
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
//	int n = 10;//n是变量
//	n = 0;
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//	const int n = 10;//n是变量
//	//const修饰了n之后，n不能被修改了，但是n还是变量
//	//n是常变量
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
//	const int n = 10;//c++ 中const修饰的n就是常量
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





//const 修饰指针变量有2种情况
//1. const 放在*的左边:限制的是*p,意思是不能通过p来改变p指向的对象的内容，但是p本身是可以改变的，p可以指向其他对象
//const int* p = &n;
// 
//2. const 放在*的右边:限制的是p，意思是不能修改p本身的值，但是p指向的内容是可以通过p来改变的
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
//	//打印数组的内容
//	//下标：0 1 2 3 4 5 6 7 8 9
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
//	//打印数组的内容
//	//下标：0 1 2 3 4 5 6 7 8 9
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
//	//打印数组的内容
//	//下标：0 1 2 3 4 5 6 7 8 9
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

//指针-指针,运算的前提是两个指针指向了同一块空间

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针-指针
//	printf("%d\n", &arr[0] - &arr[9]);//指针-指针
//	//指针-指针的绝对值是指针和指针之间的元素个数
//	char ch[6] = {0};
//	printf("%d\n", &arr[9] - &ch[4]);//err
//	return 0;
//}
//

//strlen 是库函数，是专门用来求字符串长度的

#include <string.h>

//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;//p+整数
//	}
//	return count;
//}


//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;//p+整数
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
//	return p - p1;//指针-指针
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//数组名其实是数组首元素的地址
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
//	while (p < arr + sz)//指针的关系元素
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
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
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

