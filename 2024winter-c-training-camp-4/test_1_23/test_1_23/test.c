#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//ʹ��whileѭ������Ļ�ϴ�ӡ1~10

//int main()
//{
//	//1~10
//	int i = 1;//��ʼ������
//
//
//	while (i<=10) //�жϲ���
//	{
//		printf("%d ", i);
//
//		i++;//��������
//	}
//
//	return 0;
//}

//ʹ��forѭ��������Ļ�ϴ�ӡ1~10��ֵ

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{	
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�ж�i�Ƿ���3�ı���
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	//+ +=
//	for (i = 3; i <= 100; i+=3)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//ʹ��do while����Ļ�ϴ�ӡ1~10��ֵ


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}


//����һ����������������������Ǽ�λ����
//���磺
//���룺1234   �����4
//���룺12      �����2

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = 0;
//
//	do
//	{
//		cnt++;
//		n = n / 10;
//	} while (n);
//
//	printf("%d\n", cnt);
//
//	return 0;
//}
//





//int main()
//{
//	//1~10
//	int i = 1;//��ʼ������
//	while (i<=10) //�жϲ���
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//
//		i++;//��������
//	}
//	
//	//....
//	return 0;
//}

//int main()
//{
//	//1~10
//	int i = 1;//��ʼ������
//	while (i <= 10) //�жϲ���
//	{
//		i++;//��������
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);	
//	}
//
//	//....
//	return 0;
//}


//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{	
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}


#include <stdio.h>

//
//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//        i = i + 1;
//    } while (i <= 10);
//
//    return 0;
//}
//



//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", i);
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�������
//		//����2~i-1֮�������
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//#include <math.h>
////sqrt �����ǿ�ƽ����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�������
//		//����2~i-1֮�������
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


#include <math.h>
//sqrt �����ǿ�ƽ����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�������
//		//����2~i-1֮�������
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()
//{
//zhangsan:
//	printf("hehe\n");
//	goto zhangsan;
//
//	printf("����\n");
//
//	printf("�ٺ�\n");
//
//	return 0;
//}

//system ��һ���⺯��������ִ��ϵͳ����

#include <stdlib.h>
#include <string.h>

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n");
//	scanf("%s", input);
//	//�ж�input�зŵ��ǲ���������
//	// �����ַ����ıȽϲ���ʹ��==����Ӧ��ʹ��strcmp����
//	//strcmp ����ж������ַ�����������ͬ���򷵻�0
//	if (strcmp(input, "������") == 0) 
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//�ж�input�зŵ��ǲ���������
//		// �����ַ����ıȽϲ���ʹ��==����Ӧ��ʹ��strcmp����
//		//strcmp ����ж������ַ�����������ͬ���򷵻�0
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}
//


//RAND_MAX;

//#include <stdlib.h>

//int main()
//{
//	srand(2);
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//	return 0;
//}
//

//
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//
//	return 0;
//}
//
//#include <time.h>
//#include <stdlib.h>
//
//void game()
//{
//	//1. �������ֵ
//	int r = rand()%100+1;
//	//2. ������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > r)
//			printf("�´���\n");
//		else if (guess < r)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		printf("*****************\n");
//		printf("**** 1. play ****\n");
//		printf("**** 0. exit ****\n");
//		printf("*****************\n");
//		printf("��ѡ��:>");
//		scanf("%d", &input);//1 0
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}



#include <time.h>
#include <stdlib.h>

void game()
{
	//1. �������ֵ
	int r = rand() % 100 + 1;
	//2. ������
	int guess = 0;
	int count = 5;
	
	//system("cls");

	while (count)
	{
		printf("��ʣ��%d�λ���", count);
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > r)
			printf("�´���\n");
		else if (guess < r)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		count--;
	}
	if (count == 0)
		printf("���ź����ڹ涨�Ĵ�����û�ܲ³����\n");

}

void menu()
{
	printf("*****************\n");
	printf("**** 1. play ****\n");
	printf("**** 0. exit ****\n");
	printf("*****************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);//1 0
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}

