#define _CRT_SECURE_NO_WARNINGS 1


//函数指针 - 指向函数的指针
//函数指针变量 - 存放函数地址的变量
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//
//	int (*pf)(int, int) = Add;//pf就是函数指针变量
//	int ret = (*pf)(3, 4);
//	//int ret = pf(3, 4);
//	//int ret = *pf(3, 4);//err
//	//Add(3, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//int (*pf1)(int, int) = Add;
//	//int (*pf2)(int, int) = Sub;
//	//int (*pf3)(int, int) = Mul;
//	//int (*pf4)(int, int) = Div;
//
//	int (* pfArr[4])(int, int) = {Add, Sub, Mul, Div};//pfArr就是函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pfArr[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}
//


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////想写一个计算机器：
////完成2个整数的运行
////1. 加法
////2. 减法
////3. 乘法
////4. 除法
////
//
//void menu()
//{
//	printf("*****************************************\n");
//	printf("********  1. Add     2. Sub       *******\n");
//	printf("********  3. Mul     4. Div       *******\n");
//	printf("********  0. exit                 *******\n");
//	printf("*****************************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////想写一个计算机器：
////完成2个整数的运行
////1. 加法
////2. 减法
////3. 乘法
////4. 除法
////
//
//void menu()
//{
//	printf("*****************************************\n");
//	printf("********  1. Add     2. Sub       *******\n");
//	printf("********  3. Mul     4. Div       *******\n");
//	printf("********  0. exit                 *******\n");
//	printf("*****************************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	// 创建一个函数指针的数组
//	//转移表
//	int (*pfArr[5])(int, int) = {NULL,Add, Sub, Mul, Div};
//	//                           0    1    2    3    4
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);//2
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，重新选择\n");
//		}
//	} while (input);
//
//	return 0;
//}
//


int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

//想写一个计算机器：
//完成2个整数的运行
//1. 加法
//2. 减法
//3. 乘法
//4. 除法
//

void menu()
{
	printf("*****************************************\n");
	printf("********  1. Add     2. Sub       *******\n");
	printf("********  3. Mul     4. Div       *******\n");
	printf("********  0. exit                 *******\n");
	printf("*****************************************\n");
}

void Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入2个操作数:");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}


