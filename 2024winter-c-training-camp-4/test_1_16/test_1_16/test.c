//дһ��C���Գ�������Ļ�ϴ�ӡ: hello C

//#include <stdio.h>

//main �� ������
//C���Եĳ����Ǵ�main�����ĵ�һ�п�ʼִ�е�
//main�����ǳ�������
//main�������ҽ���һ�� 
//F10
//
//int main()
//{
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//
//	return 0;
//}
//

//int main()
//{
//	printf("hehe\n");
//	
//	return 0;
//}


//int main() - �Ƽ�
//{
//	//������ɴ���
//	//....
//	printf("hehe\n");
//	return 0;
//}

//main�����Ķ���д��
//1. ��ʽ��д�� -���Ƽ���
//void main()
//{
//
//}

//2. ��ʽ��д��-���Ƽ���
//void main(void)
//{
//
//}

//3.�����void��ʾmain�����������κβ��� - Ҳ��
//int main(void)
//{
//
//	return 0;
//}

//4. ����д��Ҳ�ǶԵģ����Ǻ���ʹ��
//ֻ������ʹ��main�����Ĳ�����ʱ�򣬲�����д
//ÿһ�������������������
//int main(int argc, char* argv[], char*envp[])
//{
//	//
//	return 0;
//}
//

//5. ���ϸ��
//main()
//{
//
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");
//	printf("�Ǻ�");//˫�����������ľ���һ���ַ���
//	return 0;
//}
//

//%d - ���͵Ĵ�ӡ
//%c - �ַ��Ĵ�ӡ
//%f = ��ӡС��
//...

#include <stdio.h>
//
//int main()
//{
//	printf("hello world\n");//\n�ǻ���
//	printf("%d\n", 100);
//	printf("%c\n", 'X');//���������������ַ�
//	printf("%f\n", 3.14);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int ret = 0;
//
//	return 0;
//}


//int main()
//{
//	//'a';//97
//	//'q';
//	//'#';
//
//	printf("%c\n", 'a');
//	printf("%d\n", 'a');
//
//	return 0;
//}
//

//
//int main()
//{
//	printf("%c\n", 'z');
//	printf("%c\n", 122);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//	}
//	return 0;
//}

//%s - ��ӡ�ַ���
//
//int main()
//{
//	//printf("abcdef\n");
//	//printf("%s", "abcdef");
//
//	return 0;
//}
//


//���� - һ������
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c','\0'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%s\n", "abc\0def");//?
//
//	return 0;
//}
//
//

//int main()
//{
//	printf("%s\n", "abc\ndef");
//
//	return 0;
//}


//    \?  ����ת���ַ������ò�����
//  ����ĸ��
// ??) -- ]
// ??( -- [
//
//
//int main()
//{
//	//printf("(are you ok\?\?)");
//	//(are you ok]
//
//	//printf("%c\n", 'a');
//	//printf("%c\n", 'x');
//	//printf("%c\n", '\'');
//
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//
//	//printf("c:\\test\\test.c");
//	//printf("\a");
//	//printf("abcdef\n");
//	//printf("abc\bdef\n");
//	//abdef
//
//	printf("a\tbc\tdef\tqwertyu");
//	return 0;
//}


int main()
{
	//10���Ƶ����֣�0~9������ɵ�
	//8���Ƶ����֣�0~7������ɵ�
	
	printf("%c\n", '\132');//'Z'
	printf("%c\n", '\x61');//'a'

	return 0;
}