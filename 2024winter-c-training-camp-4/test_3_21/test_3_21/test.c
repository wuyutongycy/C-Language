#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int a = 10000;
//    FILE* pf = fopen("test.txt", "wb");
//    fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//


//int main()
//{
//	int n = 10;
//	scanf("%d", &n);
//	printf("%d\n", n);
//
//	return 0;
//}
//
//



//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//1. 打开文件
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputs("hello world\n", pf);
//	fputs("hello bit", pf);
//
//
//	//2. 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


int main()
{
	//1. 打开文件
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//读文件
	char arr[20] = {0};

	while (fgets(arr, 20, pf) != NULL)
	{
		printf("%s", arr);
	}


	//2. 关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}