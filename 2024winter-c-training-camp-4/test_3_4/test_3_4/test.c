#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//������������
//��������������Ԫ��(��һ��Ԫ��)�ĵ�ַ
//������2�����⣺
//1. sizeof(������) - ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2. &������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���Ե���������������Ԫ��(��һ��Ԫ��)�ĵ�ַ��
//
//
//int main()
//{
//	int a[] = { 1,2,3,4 };//�����м���Ԫ�أ�
//
//	printf("%zd\n", sizeof(a));//16 -- sizeof(������)�ĳ���
//	printf("%zd\n", sizeof(a + 0));//a����Ԫ�صĵ�ַ-������int*, a+0 ������Ԫ�صĵ�ַ,�ǵ�ַ��С����4/8
//	printf("%zd\n", sizeof(*a));//a����Ԫ�صĵ�ַ,*a������Ԫ�أ���С����4���ֽ�
//	//*a == a[0] == *(a+0)
//	printf("%zd\n", sizeof(a + 1));//a����Ԫ�صĵ�ַ,������int*,a+1����1�����ͣ�a+1���ǵڶ���Ԫ�صĵ�ַ��4/8
//	printf("%zd\n", sizeof(a[1]));//a[1]���ǵڶ���Ԫ�أ���С4���ֽ�
//	printf("%zd\n", sizeof(&a));//&a������ĵ�ַ������ĵ�ַҲ�ǵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	printf("%zd\n", sizeof(*&a));//1. *& ��������ˣ�sizeof(*&a) = sizeof(a) -16
//	//2. &a ������ĵ�ַ��������int(*)[4],������ָ������÷��ʵ������飬 �����������Ĵ�С -16
//	//
//	printf("%zd\n", sizeof(&a + 1));//&a+1�����������������Ǹ�λ�õĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%zd\n", sizeof(&a[0])); //��Ԫ�صĵ�ַ����С4/8���ֽ�
//	printf("%zd\n", sizeof(&a[0] + 1));//&a[0] + 1 -- ����ڶ���Ԫ�صĵ�ַ����С��4/8���ֽ�
//
//	return 0;
//}
//


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//��������������sizeof�ڲ��ˣ������������Ĵ�С����λ���ֽ�-6
//	printf("%d\n", sizeof(arr + 0));//arr����������ʾ��Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(*arr));//arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���С����1���ֽ�
//	//*arr -- arr[0] - *(arr+0)
//	printf("%d\n", sizeof(arr[1]));//arr[1] �ǵڶ���Ԫ�أ���СҲ��1���ֽ�
//	printf("%d\n", sizeof(&arr));//&arr �������ַ������ĵ�ַҲ�ǵ�ַ����С��4/8���ֽ�
//	//&arr -- char (*)[6]
//	printf("%d\n", sizeof(&arr + 1));//&arr+1, �����������飬ָ���������ߵĿռ䣬4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ���ǵ�ַ����4/8�ֽ�
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//arr����Ԫ�صĵ�ַ��������û��\0,�ͻᵼ��Խ����ʣ�������������
//	printf("%d\n", strlen(arr + 0));//arr+0��������Ԫ�صĵ�ַ��������û��\0,�ͻᵼ��Խ����ʣ�������������
//	//printf("%d\n", strlen(*arr));//arr����Ԫ�صĵ�ַ,*arr����Ԫ�أ�����'a','a'��ascii��ֵ��97
//	//���൱�ڰ�97��Ϊ��ַ���ݸ���strlen��strlen�õ��ľ���Ұָ��, �������������
//	//printf("%d\n", strlen(arr[1]));//arr[1]--'b'--98,����strlen����Ҳ�Ǵ����
//	printf("%d\n", strlen(&arr));//&arr������ĵ�ַ����ʼλ��������ĵ�һ��Ԫ�ص�λ�ã����ֵ x
//	printf("%d\n", strlen(&arr + 1));//���ֵ x-6
//	printf("%d\n", strlen(&arr[0] + 1));//�ӵ�2��Ԫ�ؿ�ʼ���ͳ�Ƶģ��õ���Ҳ�����ֵ x-1
//
//	return 0;
//}




//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//arr������������������sizeof�ڲ���������������ܴ�С����7���ֽ�
//	printf("%d\n", sizeof(arr + 0));//arr��ʾ������Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ���ǵ�ַ����4/8
//	printf("%d\n", sizeof(*arr));//arr��ʾ������Ԫ�صĵ�ַ,*arr������Ԫ�أ���С��1�ֽ�
//	printf("%d\n", sizeof(arr[1]));//arr[1]�ǵڶ���Ԫ�أ���С1���ֽ�
//	printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ���ǵ�ַ����4/8
//	printf("%d\n", sizeof(&arr + 1));//&arr������ĵ�ַ,+1�����������飬���ǵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ����С��4/8���ֽ�
//
//	return 0;
//}
//

#include <string.h>

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//arr��Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ�������\0֮ǰ��6���ַ�
//	//printf("%d\n", strlen(*arr));//'a'-97, ����
//	//printf("%d\n", strlen(arr[1]));//'b'-98, ����
//	printf("%d\n", strlen(&arr));//&arr������ĵ�ַ��Ҳ�Ǵ������һ��Ԫ�ؿ�ʼ����ң�6
//	//&arr -- char (*)[7]
//	//size_t strlen(const char* s);
//
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}
//
//

//
//int main()
//{
//	const char * p = "abcdef";
//
//	printf("%d\n", sizeof(p));//p��ָ����������Ǽ������ָ������Ĵ�С��4/8���ֽ�
//	printf("%d\n", sizeof(p + 1));//p + 1��b�ĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	printf("%d\n", sizeof(*p));//p��������const char*, *p����char������,1���ֽ�
//	printf("%d\n", sizeof(p[0]));//1. p[0] --> *(p+0)--> *p --> 'a',��С��1�ֽ�
//	//2. �ѳ����ַ������������,p��������Ϊ������,p[0], ������Ԫ��
//
//	printf("%d\n", sizeof(&p));//ȡ������p�ĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
//	printf("%d\n", sizeof(&p + 1));//&p + 1������pָ�������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 &p[0]-ȡ���ַ������ַ��ĵ�ַ��+1�ǵڶ����ַ��ĵ�ַ����С��4/8���ֽ�
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//*p����'a'-97,err
//	//printf("%d\n", strlen(p[0]));//p[0]--> *(p+0)--> *p //err
//	printf("%d\n", strlen(&p));//&p��ָ�����p�ĵ�ַ�����ַ���"abcdef"��ϵ�Ͳ�����
//	//��p���ָ���������ʼλ�ÿ�ʼ������ģ�p������ŵĵ�ַ��ʲô����֪�������Դ������ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//
//	printf("%d\n", strlen(&p[0] + 1));//&p[0]-ȡ���ַ������ַ��ĵ�ַ��+1�ǵڶ����ַ��ĵ�ַ, 5
//
//	return 0;
//}

//
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//a������������������sizeof�ڲ��������������Ĵ�С����λ���ֽ� - 48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//a[0][0] �ǵ�һ�е�һ��Ԫ�أ���С4���ֽ� 
//	printf("%d\n", sizeof(a[0]));//a[0]��һ�е�����������������������sizeof�ڲ��ˣ��������������ܴ�С 16 ���ֽ�
//	printf("%d\n", sizeof(a[0] + 1));//a[0]��һ�е�������������a[0]��û�е�������sizeof�ڲ������������������a[0]����
//	//������Ԫ�صĵ�ַ������&a[0][0],+1����a[0][1]�ĵ�ַ����С��4/8���ֽ�
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//*(a[0] + 1)��ʾ��һ�еڶ���Ԫ�أ���С����4
//	printf("%d\n", sizeof(a + 1));//a��Ϊ��������û�е�������sizeof�ڲ���a��ʾ������Ԫ�صĵ�ַ���Ƕ�ά������Ԫ�صĵ�ַ��Ҳ����
//	//��һ�еĵ�ַ��a+1,����һ�У�ָ���˵ڶ��У�a+1�ǵڶ��еĵ�ַ��a+1������ָ�룬�ǵ�ַ��С����4/8���ֽ�
//
//	printf("%d\n", sizeof(*(a + 1)));//1.a+1�ǵڶ��еĵ�ַ,*(a+1)���ǵڶ��У�������ǵڶ��еĴ�С - 16
//	//2. *(a + 1) == a[1], a[1]�ǵڶ��е���������sizeof(*(a + 1))���൱��sizeof(a[1]),��˼�ǰѵڶ��е���������������
//	//sizeof�ڲ���������ǵڶ��еĴ�С
//	printf("%d\n", sizeof(&a[0] + 1));//a[0]�ǵ�һ�е���������&a[0]ȡ���ľ�������ĵ�ַ�����ǵ�һ�еĵ�ַ
//	//&a[0]+1 ���ǵڶ��еĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	printf("%d\n", sizeof(*(&a[0] + 1)));//*(&a[0] + 1)��˼�ǶԵڶ��еĵ�ַ�����ã����ʵľ��ǵڶ��У���С��16�ֽ�
//	printf("%d\n", sizeof(*a));//a��Ϊ��������û�е�������sizeof�ڲ���a��ʾ������Ԫ�صĵ�ַ���Ƕ�ά������Ԫ�صĵ�ַ��Ҳ����
//	//��һ�еĵ�ַ��*a���ǵ�һ�У�����ľ��ǵ�һ�еĴ�С��16�ֽ�
//	//*a == *(a+0) == a[0]
//	printf("%d\n", sizeof(a[3]));//a[3]������ʵ���ڣ�����ͨ�����͵��ƶϾ����������
//	//a[3]�ǵ����е�����������������sizeof�ڲ���������ǵ����еĴ�С��16���ֽ�
//
//	//sizeof(int);//4
//	//sizeof(3 + 5);//4
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}
//

//��X86��32λ��������
//����ṹ��Ĵ�С��20���ֽ�
//��������Ľ����ɶ��
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//} * p = (struct Test*)0x100000;
//
////ָ��+-����
////
//int main()
//{
//    printf("%p\n", p + 0x1);
//    printf("%p\n", (unsigned long)p + 0x1);
//    printf("%p\n", (unsigned int*)p + 0x1);
//
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//��ʼ��
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}










