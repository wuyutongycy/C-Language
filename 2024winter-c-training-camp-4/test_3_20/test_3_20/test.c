#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//enum Color
//{
//	//��ԭɫ�Ŀ���ȡֵ - ö�ٳ���
//	RED,
//	GREEN=5,//
//	BLUE//
//};
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	//enum Color color = RED;
//	//RED = 5;//err
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	enum Sex s = SECRET;
//
//	return 0;
//}


//enum Sex
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//
//int main()
//{
//	enum Sex s = MALE;
//
//	return 0;
//}

//
//#define MALE 0
//#define FEMALE 1
//#define SECRET 2


//int main()
//{
//	int sex = MALE;
//
//	return 0;
//}
//
//
//void menu()
//{
//	printf("**************************\n");
//	printf("****  1. add    2.sub ****\n");
//	printf("****  3. mul    4.div ****\n");
//	printf("****  0. exit         ****\n");
//	printf("**************************\n");
//}
//
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};
//
//
//int main()
//{
//	int input = 0;
//	printf("��ѡ��:>");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case ADD:
//		break;
//	case DIV:
//		break;
//	case MUL :
//		break;
//	case SUB:
//		break;
//	case EXIT:
//		break;
//	default:
//		break;
//	}
//	return 0;
//}


//#include <stdlib.h>
//
//int main()
//{
//	//20 ���ֽ� - ���5������
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//ʹ�ÿռ�
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	//�ͷ��ڴ�
//	free(p);//���ݸ�free��������Ҫ�ͷŵ��ڴ�ռ����ʼ��ַ
//	p = NULL;
//
//	return 0;
//}


//#include <stdlib.h>
//
//int main()
//{
//	//20 ���ֽ� - ���5������
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//ʹ�ÿռ�
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//
//	//�ͷ��ڴ�
//	free(p);//err - p�Ѿ�������ʼ��ַ��
//	p = NULL;
//
//	return 0;
//}

//���ڴ�����5�����͵Ŀռ�
#include <stdlib.h>
//
//int main()
//{
//	//int*p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	perror("malloc");
//	//	return 1;
//	//}
//
//
//	int* p = (int*)calloc(5, sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));//20
//	//1 2 3 4 5
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i+1;
//	}
//	//ϣ�����ռ����Ϊ40���ֽ�
//	int*ptr = (int*)realloc(p, 4000);
//	if (ptr != NULL) //�����ɹ�
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i + 1;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		free(p);
//		p = NULL;
//	}
//	else //����ʧ��
//	{
//		perror("realloc");
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}

//realloc����������ɺ�mallocһ���Ĺ���
//
//
//int main()
//{
//	realloc(NULL, 20);//=== malloc(20);
//	return 0;
//}


//int main()
//{
//	int*p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//		perror("malloc()");
//	//..
//	return 0;
//}


//4.1 ��NULLָ��Ľ����ò���
#include <assert.h>

//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	/*if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}*/
//
//	assert(p);
//	//
//	*p = 20;
//
//	return 0;
//}

//
//void test()
//{
//    int i = 0;
//    int* p = (int*)malloc(10 * sizeof(int));
//    if (NULL == p)
//    {
//        exit(EXIT_FAILURE);
//    }
//    for (i = 0; i <= 10; i++)
//    {
//        *(p + i) = i;//��i��10��ʱ��Խ�����
//    }
//    free(p);
//}
//
//
//int main()
//{
//    test();
//    return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//....
//
//	free(p);//4.3 �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	p = NULL;
//
//	return 0;
//}

//4.4 ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����

//int main()
//{
//    int* p = (int*)malloc(100);
//    if (p == NULL)
//    {
//        return 1;
//    }
//    //
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        *p = i+1;
//        p++;
//    }
//    free(p);//�����p�����Ƕ�̬������ڴ����ʼλ��
//    p = NULL;
//
//	return 0;
//}

//4.5 ��ͬһ�鶯̬�ڴ����ͷ�

//void test()
//{
//    int* p = (int*)malloc(100);
//    //....
//    free(p);
//    free(p);//�ظ��ͷ�
//}
//
//
//int main()
//{
//    test();
//    return 0;
//}

//
//��̬�����ڴ������ͷ�
//�ڴ�й¶
//
//
//void test()
//{
//    int* p = (int*)malloc(100);
//    if (NULL != p)
//    {
//        *p = 20;
//    }
//}
//
//int main()
//{
//    test();
//    //
//    while (1);
//}
//


//void test()
//{
//    int* p = (int*)malloc(100);
//    //ʹ��
//    int n = 3;
//    if (n > 0)
//        return;
//
//    free(p);
//    p = NULL;
//}
//
//int main()
//{
//    test();
//    //
//    while (1);
//}
#include <string.h>

//void GetMemory(char** p)
//{
//    *p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str);
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}

//
//1. �ڴ�й¶
//2. �������
//  


//char* GetMemory()
//{
//    char* p = (char*)malloc(100);
//    return p;
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}


//char* GetMemory(void)
//{
//    char p[] = "hello world";
//    return p;
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//    printf(str);
//}
//
//int main()
//{
//    Test();
//    return 0;
//}

//
//int* test()
//{
//	int n = 10;
//	return &n;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//
//	printf("%d\n", *p);
//
//	return 0;
//}
//

//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//
//    strcpy(str, "hello");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    //....
//    return 0;
//}


//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    str = NULL;
//
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//
//int main()
//{
//    Test();
//    return 0;
//}




//struct S
//{
//	char c;
//	int n;
//	int arr[];//��������
//};


//struct S
//{
//	char c;
//	int n;
//	int arr[0];//��������
//};

//
//struct S
//{
//	int n;//4
//	int arr[];//
//};
//
//int main()
//{
//	//printf("%zd\n", sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//�����ռ�
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+10*sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//....
//
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
		return 1;
	
	ps->arr = (int*)malloc(5*sizeof(int));
	if (ps->arr == NULL)
		return 1;
	//ʹ��
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}

	//���������С
	int*ptr = (int*)realloc(ps->arr, 10*sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	//ʹ��
	//...

	//�ͷ�
	free(ps->arr);
	free(ps);

	return 0;
}