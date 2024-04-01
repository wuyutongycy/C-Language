#define _CRT_SECURE_NO_WARNINGS 1

//int a = 200;
//
//int print()
//{
//	printf("4:    %d\n", a);
//}


//static int g_val = 2024;

//
//全局变量是具有外部链接属性的
//但是被static 修饰后，外部链接属性就变成
// 了内部链接属性，只能在自己所在的.c文件中
//使用，其他.c文件无法使用
//


static int Add(int x, int y)
{
	return x + y;
}

//
//函数默认也是具有外部链接属性的
//但是函数被static 修饰后，外部链接属性就变成
// 了内部链接属性，只能在自己所在的.c文件中
//使用，其他.c文件无法使用
//
