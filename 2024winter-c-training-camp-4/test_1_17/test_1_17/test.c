#include <stdio.h>
#include <string.h>
//string �ַ���

//int main()
//{
//	char arr[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr);//a b c 
//	printf("%zd\n", strlen(arr));
//	printf("%zd\n", strlen(arr2));
//
//
//	return 0;
//}
//


//int main()
//{
//	printf("%zd", strlen("c:\test\114\bbc"));
//	//15
//	//
//	return 0;
//}


//int main()
//{
//	int a = 10;//����һ�����ͱ���a,����ֵΪ10
//	int b = 10;
//	b = a + 1;
//	/* 
//	��a+1��ֵ��ֵ��b 
//	*/
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	return 0;
//}

//#include <stdbool.h>
//
//int main()
//{
//	bool flag = true;//false
//	if (flag)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}


//int main()
//{
//	//printf("%zd\n", sizeof(char));
//	//printf("%zd\n", sizeof(short));
//	//printf("%zd\n", sizeof(int));
//	//printf("%zd\n", sizeof(long));
//	//printf("%zd\n", sizeof(long long));
//	//printf("%zd\n", sizeof(float));
//	//printf("%zd\n", sizeof(double));
//	//printf("%zd\n", sizeof(long double));
//	//printf("%zd\n", sizeof(_Bool));
//
//	int a = 10;
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    short s = 2;
//    int b = 10;
//
//    printf("%zd\n", sizeof(s = b + 1));//?
//    printf("s = %d\n", s);//?
//    return 0;
//}


//int main()
//{
//	/*signed int a = 50000;*/
//	//%d - ��ӡ�з��ŵ�����
//	//
//	int a = -10;//�з��ŵ�����
//	unsigned int b = 10;
//	unsigned long int c = 100;
//	unsigned long long int d = 1000;
//
//	printf("%u\n", a);
//	printf("%u\n", b);
//	printf("%lu\n", c);
//	printf("%llu\n", d);
//
//	return 0;
//}

//#include <limits.h>
//
//int main()
//{
//	/*size_t n = sizeof(int);
//	printf("%zd\n", n);*/
//	printf("%d\n", SHRT_MAX);
//	return 0;
//}
//


//int main()
//{
//	//int age = 10;//��ʼ��
//	//char ch = 'a';
//	//double score = 95.5;
//
//	//int 2b;//err
//	//int _2b;//ok
//	//int math_score;//ok
//
//	//int char;//err
//	return 0;
//}
//
//

//int b = 200;//ȫ�ֱ��� - ������
//
//int main()
//{
//	int a = 100;//�ֲ�����
//	{
//		int c = 20;//�ֲ����� - ��������г�
//		printf("%d\n", c);
//	}
//	printf("%d\n", c);
//
//	return 0;
//}


//int b = 200;//ȫ�ֱ��� - ������
//
//int main()
//{
//	int a = 100;//�ֲ�����
//	{
//		printf("%d\n", a);
//		int c = 20;//�ֲ����� - ��������г�
//	}
//	printf("%d\n", a);
//
//	return 0;
//}


//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	//�ֲ�������ȫ�ֱ������ֳ�ͻ��ʱ�򣬾ֲ���������
//
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", 34 + 55);
//	int a = 20;
//	int b = 20;
//	//printf("%d\n", a + b);
//	//printf("%d\n", a + 33);
//
//	printf("%d\n", a - b);//0
//	printf("%d\n", a - 33);//-13
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 3 * 5);
//
//	return 0;
//}

//float - %f
//double - %lf
//
//int main()
//{
//	//  / -- ����������
//	//  ���ŵ������������������ִ�е�����������
//	//  ���Ҫ�����С����Ч������ô���ŵ�����������һ�������Ǹ�����
//	// 
//	//printf("%d\n", 15/3);
//	printf("%d\n", 5 / 2);//2.5
//	printf("%lf\n", 5.0 / 2.0);//2.5
//	printf("%lf\n", 3.0 / 2.0);//
//
//	printf("%.1lf\n", 5.0 / 2.0);//2.5
//	printf("%.2lf\n", 3.0 / 2.0);//
//	//%f �� %lf ��ӡ��ʱ��С�����Ĭ�ϴ�ӡ6λС��
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//    int score = 5;
//    score = (score / 20.0) * 100;//0.25*100 == 25
//    printf("%d\n", score);
//
//    return 0;
//}
//


//int main()
//{
//	int a = 7 / 2;//3...1
//	int b = 7 % 2;//1
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("%d\n", 11 % -5); // 1
//    printf("%d\n", -11 % -5); // -1
//    printf("%d\n", -11 % 5); // -1
//    return 0;
//}
//


//int main()
//{
//	int a = 10;//��ʼ��
//	a = 20;//��ֵ
//
//	return 0;
//}
//


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//
//	c = b = a + 3;
//
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}
//


int main()
{
	int a = 10;
	//a = a + 4;
	//a += 4;

	//a = a - 5;
	a -= 5;

	printf("%d\n", a);
	return 0;
}

