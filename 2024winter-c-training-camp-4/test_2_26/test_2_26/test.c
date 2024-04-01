#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//	//printf("%d\n", a);
//
//	//int* p = NULL;
//	//*p = 20;//err
//
//	//int a = 10;
//	//int* p = &a;
//	//p = NULL;
//	//if (p != NULL)
//	//{
//	//	*p = 20;
//	//}
//
//	//int* p;
//	//if (p != NULL)
//	//{
//	//	//...
//	//}
//
//	return 0;
//}

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int* p = &arr[0];
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p++) = i;
//    }
//    //此时p已经越界了，可以把p置为NULL
//    p = NULL;
//    //下次使用的时候，判断p不为NULL的时候再使用
//    //...
//    p = &arr[0];//重新让p获得地址
//    if (p != NULL) //判断
//    {
//        //...
//    }
//    return 0;
//}

//#define NDEBUG
#include <assert.h>

//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	//assert(p != NULL);//err
//	//*p = 20;
//	//printf("%d\n", a);
//
//	int a = 0;
//	scanf("%d", &a);
//	assert(a != 0);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	assert(p != NULL);
//	//if (p == NULL)
//	//{
//	//	printf("p == NULL, 是无效的指针\n");
//	//	return 1;
//	//}
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
//#include <string.h>
//
//size_t my_strlen(const char* s)
//{
//	size_t count = 0;
//	assert(s != NULL);
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//int main()
//{
//	//strlen() - 求字符串的长度 -  统计的是字符串中\0之前的字符的个数
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}

//void Swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;  //z = a;
//	*pa = *pb;//a = b
//	*pb = z;  //b = z;
//}

//void Swap2(int* pa, int* pb)//err
//{
//	int* p = NULL;
//	p = pa;
//	pa = pb;
//	pb = p;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	a = 20;//1
//
//	int * p = &a;
//	*p = 20;//2
//
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("arr     = %p\n", arr);
//	printf("arr+1   = %p\n", arr+1);
//
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("&arr[0]+1= %p\n", &arr[0]+1);
//
//	printf("&arr    = %p\n", &arr);
//	printf("&arr  +1= %p\n", &arr+1);
//
//
//	//printf("%d\n", sizeof(arr));
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印数组的内容
//	int * p = arr;//int*p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//给数组输入10个值
//	//for (i = 0; i < sz; i++)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//	
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p+i);
//	}
//
//
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印数组的内容
//	int* p = arr;//int*p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//给数组输入10个值
//	//for (i = 0; i < sz; i++)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	scanf("%d", p + i);
//	//}
//
//
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//		//printf("%d ", p[i]);
//		//printf("%d ", i[arr]);//可以，但是不建议
//	}
//
//	return 0;
//}
//

//void test(int arr[])
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);//?
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);//10
//	printf("sz1 = %d\n", sz1);
//
//	test(arr);
//
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
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
//int count = 0;
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		
//		int flag = 1;//假设是有序的
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			count ++;
//			if (*(arr+j) > *(arr+j + 1))
//			{
//				int tmp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = tmp;
//				//flag = 0;//不是有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
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
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//降序
//	//实现排序，排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	printf("count = %d\n", count);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int a = 10;

	int *p = &a;

	int** pp = &p;

	**pp = 20;

	printf("%d\n", a);

	return 0;
}




