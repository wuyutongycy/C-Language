#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//
//	//int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ
//
//	//printf("%d\n", c);
//
//	//if (a = b + 1, c = a / 2, d > 0)
//	//{
//	//	//...
//	//}
//	
//	//α����
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		//ҵ����
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
//	arr[5] = 6;//[] -  �±����ò�����
//	//[] �ǲ����������Ĳ������ǣ�arr, 5
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
////�����ڵ��õ�ʱ�򣬺�������ߵ����ž��Ǻ������ò�����
////() - �������ǣ�������������
////�������ò�������������1�������� - ������
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

//����һ��ѧ������
//ѧ�������֣��Ա����䣬ѧ��
//     ���� - �ַ��� - �ַ�������
//     �Ա� - �ַ��� - �ַ�����
//     ���� - ����
//     ѧ�� - �ַ��� - �ַ�����

//struct Student
//{
//	//��Ա
//	char name[20];
//	char sex[12];
//	int age;
//	char id[16];
//} s5,s6,s7;//s5,s6,s7���ǽṹ�������ȫ�֣�
//
//
////ȫ�ֱ���
//struct Student s4;
//
//int main()
//{
//	//�ֲ�����
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
//	//��Ա
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
//	struct Student s1 = { "����", "��", 18, "2024080101" };
//	struct Student s2 = {.age=20, .id="2024090203", .name="lisi", .sex="nv"};
//
//	struct Node n1 = { 200, {20, 30} , NULL};
//
//	scanf("%d", &(s1.age));//ֱ�ӷ��ʳ�Ա .
//	printf("%s %s %d %s\n", s1.name, s1.sex, s1.age, s1.id);
//	//�ṹ�����.�ṹ���Ա
//	return 0;
//}

//�ض�
//char������signed char?����unsiged char����׼��û�й涨�ģ�ȡ������ʹ�õı�����
//�ڵ�ǰʹ��VS�ϣ�char����signed char
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
//	//a��b����char���ͣ�������С��int���͵ĳ��ȵ�
//	//�ڼ����ʱ��Ĭ�Ͼͻᷢ����������
//	//
//	printf("%d\n", c);//?
//	//11111111111111111111111110000010 - ����
//	//10000000000000000000000001111101
//	//10000000000000000000000001111110 --> -126
//	//%d - �����з�����������ʽ��ӡ
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
//    printf("%d\n", answer);//������٣�
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
//	int a = 25;//���������ı�����ɶ�أ������ڴ��п���һ��ռ�
//	//&a;//& - ȡ��ַ������
//	//%p -- ��ר��������ӡ��ַ�� -- ��ʵ����16���Ƶ���ʽ���д�ӡ��
//	//
//	printf("%p\n", &a);
//	printf("%x\n", &a);
//
//	return 0;
//}