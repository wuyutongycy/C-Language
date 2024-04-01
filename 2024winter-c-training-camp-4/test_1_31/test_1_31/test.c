#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	test();
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//求1!+ 2!+ 3!+ 4!+ ...10!的和

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//
//	//1! = 1
//	//2! = 2
//	//3! = 6
//	//4! = 24
//	//5! = 120
//	for (n = 1; n <= 3; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//
//	//1! = 1
//	//2! = 2
//	//3! = 6
//	//4! = 24
//	//5! = 120
//	int ret = 1;
//	//1*1
//	//1*1*2
//	//1*1*2*3
//	//1*1*2*3*4
//	//...
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//

//#include <stdio.h>

//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//    //0~9
//    //越界
//
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//
//    return 0;
//}
//
//

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	return 0;
//}
//

//void test1(int arr1[10])
//{
//
//}
//
//void test2(int arr2[3][5])
//{
//
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	test1(arr1);
//	test2(arr2);
//
//	return 0;
//}


//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("hehe\n");
//	int c = add(3, 5);
//	printf("c = %d\n", c);
//
//	return 0;
//}
//



#include <stdio.h>
int main()
{
    int i = 0;
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

    printf("&i = %p\n", &i);
    printf("&arr[9] = %p\n", &arr[9]);
    printf("&arr[0] = %p\n", &arr[0]);

    return 0;
}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}

