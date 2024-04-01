// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", __FILE__);
// 	printf("%s\n", __DATE__);
// 	printf("%s\n", __TIME__);
// 	printf("%d\n", __LINE__);
// 	printf("%d\n", __STDC__);//说明gcc是支持ANSIC

// 	return 0;
// }


// #define MAX 1000
// #define STR "hello bit"

// #define forever for(;;)


// int main()
// {
//     int m = MAX;
//     printf("%d\n", MAX);
//     printf("%s\n", STR);
//     forever;
//     return 0;
// }


// #define MAX 1000

// int main()
// {
//     //int a = MAX;
//     //printf("%d\n", MAX);
//     int m = 0;
//     if(1)
//         m = MAX;
//     else
//         m = -1;

//     return 0;
// }

//实现一个宏-计算一个数的平方

#include <stdio.h>


// #define SQUARE(x) ((x)*(x))

// int main()
// {
//     int a = 5;
//     int ret = SQUARE(a+1);
//     //int ret = a*a;
//     printf("%d\n", ret);

//     return 0;
// }


// #define MAX(X,Y) ((X)>(Y)?(X):(Y))

// int main()
// {
// 	int a = 3;
// 	int b = 5;
// 	int m = MAX(a++, b++);
// 	printf("m = %d\n", m);
// 	printf("a = %d\n", a);
// 	printf("b = %d\n", b);


// 	return 0;
// }



// #define GENERIC_MAX(type)    \
// 		type type##_max(type x, type y) \
// 		{   \
// 			return x>y?x:y;\
// 		}

// //定义函数
// GENERIC_MAX(int);//int_max
// GENERIC_MAX(float);//float_max

// int main()
// {
// 	int r1 = int_max(3, 5);
// 	printf("%d\n", r1);

// 	float r2 = float_max(3.1f, 4.5f);
// 	printf("%f\n", r2);

// 	return 0;
// }




// int main()
// {
// 	int arr[SZ];//SZ是未定义
// 	int i = 0;
// 	for(i=0; i<SZ; i++)
// 	{
// 		arr[i] = i+1;
// 	}
// 	for(i=0; i<SZ; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return 0;
// }


// #define M 10
// int main()
// {
// #if M>0
// 	printf("hehe\n");
// #endif
// 	return 0;
// }


// #define M 3

// int main()
// {
// #if M==0
// 	printf("hehe\n");
// #elif M==1
// 	printf("haha\n");
// #elif M==2
// 	printf("heihei\n");
// #else
// 	printf("ok\n");
// #endif

// 	return 0;
// }



#include "test.h"
#include "test.h"
#include "test.h"
#include "test.h"
#include "test.h"


int main()
{
	
	return 0;
}
