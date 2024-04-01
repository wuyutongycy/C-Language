#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	{
//		int a = 10;
//		printf("1:   %d\n", a);
//	}
//	printf("2:   %d\n", a);
//
//	return 0;
//}

//声明外部符号
//extern int a;
//
//void test()
//{
//	printf("2:    %d\n", a);
//}
//
//int main()
//{
//	printf("1:    %d\n", a);
//	test();
//	printf("3:    %d\n", a);
//
//	return 0;
//}


//void test()
//{
//	int b = 0;
//	//....
//}
//
//int main()
//{
//	{
//		int a = 100;
//		//...
//	}
//	//
//	return 0;
//}



//void test()
//{
//	static int a = 2;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//
//	return 0;
//}
//

//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	g_val = 200;
//	printf("%d\n", g_val);
//
//	return 0;
//}
//

//声明外部符号
extern int Add(int x, int y);

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}