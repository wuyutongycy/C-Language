#define _CRT_SECURE_NO_WARNINGS 1


//���軷����x86��������������Ľ����ɶ��
#include <stdio.h>

//int main()
//{
//    int a[5][5];
//
//    int (*p)[4];//p��һ������ָ�룬pָ���������4������Ԫ�ص�
//
//    p = a;
//
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    
//    return 0;
//}


//
//ָ��-ָ�� ����ֵ �õ�����ָ���ָ��֮���Ԫ�ظ���
//
//
//#include <stdio.h>
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//    int* ptr1 = (int*)(&aa + 1);
//
//    int* ptr2 = (int*)(*(aa + 1));
//
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//
//    return 0;
//}
//



//#include <stdio.h>
//
//int main()
//{
//    char* a[] = { "work","at","alibaba" };
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    char* c[] = { "ENTER","NEW","POINT","FIRST" };
//    char** cp[] = { c + 3,c + 2,c + 1,c };
//    char*** cpp = cp;
//
//    printf("%s\n", **++cpp);
//    printf("%s\n", *-- * ++cpp + 3);
//    printf("%s\n", *cpp[-2] + 3);
//    printf("%s\n", cpp[-1][-1] + 1);
//    return 0;
//}

#include <ctype.h>

//int main()
//{
//	//int ret = islower('A');
//	int ret = isspace('	');
//	printf("%d\n", ret);
//
//	return 0;
//}


//дһ�����룬���ַ����е�Сд��ĸת��д�������ַ����䡣

//a - 97 A -65 =32
//b - 98 B -66 =32
//int main()
//{
//	char arr[] = "I Am a Student";
//	//            I Am a Student\0
//	//            0123 
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		//if (arr[i] >= 'a' && arr[i] <= 'z')
//		if(islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}



//int main()
//{
//	printf("%c\n", toupper('a'));
//	printf("%c\n", toupper('B'));
//	printf("%c\n", tolower('B'));
//	return 0;
//}
//

#include <string.h>

//int main()
//{
//	//    size_t        size_t
//	//       3        -         6
//	if ((int)strlen("abc") - (int)strlen("abcdef")>0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}


#include <assert.h>

//�������İ汾
//size_t my_strlen(const char* s)
//{
//	assert(s);
//	int count = 0;//������
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}

//��������ʱ���������ַ����ĳ��� -- �ݹ�
//size_t my_strlen(const char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s+1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}
//
#include <string.h>

//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	//����\0ǰ�������
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//����\0
//}

//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	//����\0ǰ�������
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	//����\0ǰ�������
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxxxx";
//	
//	char* ret = my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//	printf("%s\n", ret);
//
//	return 0;
//}

#include <string.h>

//strcat �������������ַ���
//�������ص���Ŀ��ռ����ʼ��ַ

char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//1. �Ҵ�Ŀ��ռ��\0
	while (*dest != '\0')
		dest++;
	//2. ����
	while (*dest++ = *src++)
		;//�����
	return ret;
}

int main()
{
	char arr1[20] = "hello ";//hello world
	char arr2[] = "world";

	char*s = my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", s);
	//printf("%s\n", my_strcat(arr1, arr2));

	return 0;
}







