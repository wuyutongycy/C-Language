#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//ʹ�ûص���������ǰ
//#include <stdio.h>
//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//
//
//void calc(int(*pf)(int, int))
//{
//    int x, y;
//    int ret = 0;
//    printf("�����������");
//    scanf("%d %d", &x, &y);
//    ret = pf(x, y);
//    printf("ret = %d\n", ret);
//}
//
//int main()
//{
//    int input = 1;
//    do
//    {
//        printf("*************************\n");
//        printf("  1:add           2:sub  \n");
//        printf("  3:mul           4:div  \n");
//        printf("********0. exit *********\n");
//        printf("��ѡ��");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            calc(add);
//            break;
//        case 2:
//            calc(sub);
//            break;
//        case 3:
//            calc(mul);
//            break;
//        case 4:
//            calc(div);
//            break;
//        case 0:
//            printf("�˳�����\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}

//дһ��ð������ĺ�������һ���������ݽ�����������Ϊ����
//void bubble_sort(int arr[], int sz)
//{
//	//����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ���ڲ��������Ƚ�
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//��Ϊ����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}



//void qsort(void* base, //ָ�룬ָ����Ǵ����������ĵ�һ��Ԫ��
//          size_t num,  //��baseָ��Ĵ����������Ԫ�ظ���
//          size_t size, //baseָ��Ĵ����������Ԫ�صĴ�С
//           int (*compar)(const void*, const void*)//����ָ�� -  ָ��ľ�������Ԫ�صıȽϺ���
//          );


//void* ���͵�ָ�����޾������͵�ָ�룬�������͵�ָ�벻��ֱ�ӽ����ã�Ҳ���ܽ���+-����������

//qsort ������ʵ���� - 
//qsort ������ʹ���� - ��ȷ��֪��Ҫ�������ʲô���ݣ���Щ����Ӧ����αȽϣ������ṩ����Ԫ�صıȽϺ���

void print_arr(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 == *(int*)p2)
//		return 0;
//	else
//		return -1;
//}

//> --->  >0
//< --->  <0
//== ---> ==0
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//
//void test1()
//{
//	int arr[] = { 3,1,7,8,5,2,4,9,0,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
////дһ�δ���ʹ��qsort����ṹ�������
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////
////����������ṹ��Ԫ����ô�Ƚϴ�С��
////1. �������ֱȽ� - �ַ����Ƚ� -- strcmp
////2. ��������Ƚ� - ���ͱȽ�
////
//
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age-((struct Stu*)p2)->age;
//}
//
//
//void test2()
//{
//	struct Stu arr[3] = { {"zhangsan", 20},{"lisi", 35},{"wangwu", 18}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age); 
//}
//
//void Swap(char* buf1,char* buf2, size_t width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void*p1, const void*p2))
//{
//	//����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ���ڲ��������Ƚ�
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			//�Ƚ�arr[j] �� arr[j + 1]
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)//�ı�
//			{
//				//��������Ԫ��
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
////���Ե���bubble_sort������������
//void test3()
//{
//	int arr[] = { 3,1,7,8,5,2,4,9,0,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	struct Stu arr[3] = { {"zhangsan", 20},{"lisi", 35},{"wangwu", 18} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	//дһ�δ���ʹ��qsort������������
//	//test1();
//
//	//дһ�δ���ʹ��qsort����ṹ�������
//	//test2();
//
//	//test3();
//
//	test4();
//	return 0;
//}
//



//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void print(struct Stu* ps)
//{
//	//printf("%s %d\n", (*ps).name, (*ps).age);
//	printf("%s %d\n", ps->name, ps->age);
//}
////
////-> �ṹ���Ա�ļ�ӷ��ʲ���
////�ṹ��ָ��->��Ա��
////
//int main()
//{
//	struct Stu s = {"zhangsan", 18};
//	//printf("%s %d\n", s.name, s.age);
//	print(&s);
//	return 0;
//}
//



//
//void test(int n)
//{
//	printf("test\n");
//}
//
//int main()
//{
//	int a = 0;
//	test(a);
//
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);//֤����sizeof���Ǻ���
//
//
//	printf("%zd\n", sizeof(int));
//
//	return 0;
//}
//



#include <string.h>

//int main()
//{
//	size_t len = strlen("abc\0def");
//	printf("%zd\n", len);
//
//	return 0;
//}


//int main()
//{
//	const char* str = "abcdef";
//	printf("%zd\n", strlen(str));
//	return 0;
//}

//
//int main()
//{
//	//const char* str = "abcdef";
//	char str[] = "abcdef";//a b c d e f \0
//	printf("%zd\n", strlen(str));
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a', 'b', 'c' };
//	printf("%zd\n", strlen(arr));//���ֵ
//	return 0;
//}





//
//int main()
//{
//	int a = 8;
//	short s = 4;
//	//s = a + 2;//
//	printf("%d\n", sizeof(s = a + 2));//2
//	printf("%d\n", s);//4
//
//	return 0;
//}
//






