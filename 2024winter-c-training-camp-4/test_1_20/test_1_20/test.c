#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	int a = 5;
//	//a++;//����++
//	++a;
//
//	printf("%d\n", a);//
//
//	return 0;
//}

//ǰ��++
//int main()
//{
//	int a = 5;
//	int b = ++a;//��+1����ʹ��
//  //a=a+1, b=a
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//����++
//int main()
//{
//	int a = 5;
//	int b = a++;//��ʹ�ã���+1
//	//b=a, a=a+1
//	printf("a=%d b=%d\n", a, b);//a=6 b=5
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = --a;//��-1����ʹ��
//	//a=a-1, b=a
//	printf("a=%d b=%d\n", a, b);//
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a--;//��ʹ�ã���-1
//	//b=a, a=a-1
//	printf("a=%d b=%d\n", a, b);//
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	printf("%d\n", a--);//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", +a);
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", -a);
//
//	return 0;
//}

//ֱ��д�������渡�������ᱻ������ֱ��ʶ��Ϊdouble
//int main()
//{
//	3.14;//double
//	3.24f;//float
//
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//standard
//input
//output

//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//	return 0;
//}


//int main()
//{
//	printf("hello \nworld\n");
//
//	printf("hello ");
//	printf("\n");
//	printf("world");
//
//	return 0;
//}




//int main()
//{
//	printf("hehe");
//	return 0;
//}
//
#include <stdio.h>
//


//int main()
//{
//	printf("there are 5 apples\n");
//
//	int n = 0;
//	//��n����һ��ֵ
//
//	printf("there are %d apples\n", n);
//
//	return 0;
//}

//int main()
//{
//	printf("zhangsan will come tonight\n");
//
//	printf("%s will come tonight\n", "zhangsan");
//	printf("%s will come tonight\n", "lisi");
//	printf("%s will come tonight\n", "wangwu");
//	printf("%s will come tonight\n", "cuihua");
//
//
//	return 0;
//}
//
//int main()
//{
//	printf("%s says it is %d o'clock\n", "wangwu", 20);
//
//	return 0;
//}


//int main()
//{
//	int a = -10;
//	printf("%d\n", a);
//	printf("%u\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%f", &a);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%-5d\n", 123);
//	printf("%5d\n", 1234567);
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    printf("%f\n", 123.45);
//    printf("%12f\n", 123.45);
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    printf("%+d\n", 12);
//    printf("%+d\n", -12);
//
//    return 0;
//}


//int main()
//{
//	//printf("%f\n", 123.45);
//	//printf("%.2f\n", 123.45);
//	//printf("%.1f\n", 123.45);
//
//	printf("%f\n", 0.5);
//	printf("%.2f\n", 0.5);
//	printf("%6.2f\n", 123456.5);
//
//	printf("%*.*f\n", 6, 2, 0.5);
//
//	return 0;
//}


//https://legacy.cplusplus.com/reference/cstdio/printf/?kw=printf
//https://zh.cppreference.com/w/c/io/fprintf


//int main()
//{
//	printf("hello world\n");
//	printf("%s", "hello world\n");
//	printf("%.3s", "hello world\n");
//
//
//	return 0;
//}




//int main()
//{
//	int score = 0;
//	//����һ���ɼ�
//
//	printf("������ɼ�:");
//	scanf("%d", &score);//& - ȡ��ַ����
//	printf("�ɼ���: %d\n", score);
//
//	return 0;
//}
//

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	float x = 0.0f;
//	float y = 0.0f;
//
//	scanf("%d%d%f%f", &i, &j, &x, &y);
//
//	printf("i=%d\n", i);
//	printf("j=%d\n", j);
//	printf("x=%f\n", x);
//	printf("y=%f\n", y);
//
//	return 0;
//}



#include <stdio.h>
//
//int main()
//{
//    int x;
//    float y;
//
//    // �û����� "    -13.45e12# 0"
//    scanf("%d", &x);
//    printf("%d\n", x);
//    scanf("%f", &y);
//    printf("%f\n", y);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int x;
//    float y;
//
//    // �û����� "    -13.45e12# 0"
//    scanf("%d%f", &x, &y);
//    printf("x=%d\n", x);
//    printf("y=%f\n", y);
//    return 0;
//}
//
//


//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0f;
//	int ret = scanf("%d %d %f", &a, &b, &f);
//
//	printf("ret = %d\n", ret);
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("f = %f\n", f);
//
//	return 0;
//}
//



//int main()
//{
//	int a = 0;
//	float b = 0.0f;
//	scanf("%d %f", &a, &b);
//	printf("%d %f\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	char c1 = 0;
//	char c2 = 0;
//	char c3 = 0;
//	scanf(" %c%c%c", &c1, &c2, &c3);
//
//	printf("%c %c %c", c1, c2, c3);
//	
//	return 0;
//}
//



//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxxxx";
//	char arr2[20] = "xxxxxxxxxxxxxxxxx";
//
//	scanf("%s %s", arr1, arr2);//����û��д&arr,Ϊʲô�أ���Ϊ������arr���ǵ�ַ
//	printf("%s %s\n", arr1, arr2);
//
//	return 0;
//}


//int main()
//{
//	char arr[5] = { 0 };
//	scanf("%4s", arr);
//	printf("%s\n", arr);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d %d %d", &year, &month, &day);
//
//	printf("%d-%d-%d\n", year, month, day);
//	return 0;
//}

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;

	scanf("%d%*c%d%*c%d", &year, &month, &day);//2024-1-20

	printf("%d-%d-%d\n", year, month, day);
	return 0;
}