#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//b = a;
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	//arr2 = arr1;//���еģ�Ϊʲô�أ���Ϊ�������ǵ�ַ������һ��������ֵ
//	strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}
//

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.�ҵ�Ŀ��ռ��е�\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.���ݵĿ���
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	//char arr2[20] = "ghi";
//
//	my_strcat(arr1, arr1);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "abcdef";
//	//char arr2[20] = "ghi";
//
//	strcat(arr1, arr1);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//


//
//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "abcdef";
//	//if (arr1 == arr2)//�Ƚϵ��ǵ�ַ
//	//{
//	//}
//	//char* p = "abcdef";
//
//	//if ("abcdef" == "abc")//Ҳ���ڱȽϵ�ַ
//	//{
//	//}
//
//	//���Ҫ�Ƚ������ַ��������ݣ���Ҫʹ��strcmp
//
//	char arr1[] = "abq";
//	char arr2[] = "abcdef";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return - 1;
//	}
//}
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//
//int main()
//{
//	char arr1[] = "abq";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "xxxxxxxxxx";
//	strncpy(arr2, arr1, 3);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "xx\0xxxxxxxxxx";
//	int len = strlen(arr1);
//	strncat(arr2, arr1, len);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abqdefghi";
//	int ret = strncmp(arr1, arr2, 2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "abqdefghiqqq";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//
//int main()
//{
//	char arr1[] = "this is an apple\n";
//	//const char* p = "Appl";
//	char arr2[] = "is";
//	char* ret = strstr(arr1, arr2);
//
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}
//


//
//�򵥵�д�� - ��������
//KMP�㷨 - ���ַ��������ַ���- ���Ӹ�Ч��ʵ�ֺ����Ҳ������
//�������Ȥ����ȥ�����о���
//
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cur = str1;
//
//	if (*str2 == '\0')
//		return (char*)str1;
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 !='\0' && *s2!='\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbq";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("�Ҳ���\n");
//	else
//		printf("%s\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "zpengwei@yeah.net@hehe";
//	char arr2[30] = { 0 };//"zpengwei\0yeah\0net"
//	strcpy(arr2, arr);
//	const char* sep = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr2, sep); ret != NULL; ret=strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	
//	//ret = strtok(arr2, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d:    %s\n", i, strerror(i));
//	}
//
//	return 0;
//}

#include <errno.h>

//perror
//int main()
//{
//	//fopen�Զ�����ʽ���ļ���ʱ������ļ������ڣ��ʹ�ʧ��
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//
//	return 0;
//}

//int main()
//{
//	//fopen�Զ�����ʽ���ļ���ʱ������ļ������ڣ��ʹ�ʧ��
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("zhangsan");
//		return 1;
//	}
//	//���ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//
//	return 0;
//}