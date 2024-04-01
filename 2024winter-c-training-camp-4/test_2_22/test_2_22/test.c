#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//
//	//int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//
//	//printf("%d\n", c);
//
//	//if (a = b + 1, c = a / 2, d > 0)
//	//{
//	//	//...
//	//}
//	
//	//伪代码
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		//业务处理
//		//...
//
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	arr[5] = 6;//[] -  下标引用操作符
//	//[] 是操作符，它的操作数是：arr, 5
//	//3 + 5;
//	//
//
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
////函数在调用的时候，函数名后边的括号就是函数调用操作符
////() - 操作数是：函数名，参数
////函数调用操作符，最少有1个操作数 - 函数名
////
//int main()
//{
//	int c = Add(2, 3);
//	test();
//	printf("hehe");
//	printf("%d", 100);
//
//	return 0;
//}
//

//声明一个学生类型
//学生：名字，性别，年龄，学号
//     名字 - 字符串 - 字符数组中
//     性别 - 字符串 - 字符数组
//     年龄 - 整数
//     学号 - 字符串 - 字符数组

//struct Student
//{
//	//成员
//	char name[20];
//	char sex[12];
//	int age;
//	char id[16];
//} s5,s6,s7;//s5,s6,s7都是结构体变量（全局）
//
//
////全局变量
//struct Student s4;
//
//int main()
//{
//	//局部变量
//	struct Student s1;
//	struct Student s2;
//	struct Student s3;
//
//	return 0;
//}

//
//struct Point
//{
//	int x;
//	int y;
//}p3 = { 0,0 }, p4 = {4, 1};
//
//struct Point p2 = {6, 8};
//
//struct Student
//{
//	//成员
//	char name[20];
//	char sex[12];
//	int age;
//	char id[16];
//};
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//};
//
//int main()
//{
//	struct Point p1 = {4, 5};
//	struct Student s1 = { "张三", "男", 18, "2024080101" };
//	struct Student s2 = {.age=20, .id="2024090203", .name="lisi", .sex="nv"};
//
//	struct Node n1 = { 200, {20, 30} , NULL};
//
//	scanf("%d", &(s1.age));//直接访问成员 .
//	printf("%s %s %d %s\n", s1.name, s1.sex, s1.age, s1.id);
//	//结构体变量.结构体成员
//	return 0;
//}

//截断
//char倒是是signed char?还是unsiged char？标准是没有规定的，取决于你使用的编译器
//在当前使用VS上，char就是signed char
////
//int main()
//{
//	char a = 5;
//	//5
//	//00000000000000000000000000000101
//	//00000101 - a
//	//
//	char b = 125;
//	//00000000000000000000000001111101
//	//01111101 - b
//	//
//	char c = a + b;
//	//00000000000000000000000000000101 - a
//	//00000000000000000000000001111101 - b
//	//00000000000000000000000010000010
//	//10000010 - c
//	//a和b都是char类型，长度是小于int类型的长度的
//	//在计算的时候，默认就会发生整型提升
//	//
//	printf("%d\n", c);//?
//	//11111111111111111111111110000010 - 补码
//	//10000000000000000000000001111101
//	//10000000000000000000000001111110 --> -126
//	//%d - 按照有符号整数的形式打印
//	//
//	return 0;
//}


#include <stdio.h>

//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//输出多少？
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("%d\n", ret);
//    printf("%d\n", i);
//    return 0;
//}
//
//


//
//int main()
//{
//	int a = 25;//变量创建的本质是啥呢？是在内存中开辟一块空间
//	//&a;//& - 取地址操作符
//	//%p -- 是专门用来打印地址的 -- 其实是以16进制的形式进行打印的
//	//
//	printf("%p\n", &a);
//	printf("%x\n", &a);
//
//	return 0;
//}