#define _CRT_SECURE_NO_WARNINGS 1


//����ָ�� - ָ������ָ��
//����ָ����� - ��ź�����ַ�ı���
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//
//	int (*pf)(int, int) = Add;//pf���Ǻ���ָ�����
//	int ret = (*pf)(3, 4);
//	//int ret = pf(3, 4);
//	//int ret = *pf(3, 4);//err
//	//Add(3, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//int (*pf1)(int, int) = Add;
//	//int (*pf2)(int, int) = Sub;
//	//int (*pf3)(int, int) = Mul;
//	//int (*pf4)(int, int) = Div;
//
//	int (* pfArr[4])(int, int) = {Add, Sub, Mul, Div};//pfArr���Ǻ���ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pfArr[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}
//


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////��дһ�����������
////���2������������
////1. �ӷ�
////2. ����
////3. �˷�
////4. ����
////
//
//void menu()
//{
//	printf("*****************************************\n");
//	printf("********  1. Add     2. Sub       *******\n");
//	printf("********  3. Mul     4. Div       *******\n");
//	printf("********  0. exit                 *******\n");
//	printf("*****************************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������2��������:");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������2��������:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������2��������:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������2��������:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////��дһ�����������
////���2������������
////1. �ӷ�
////2. ����
////3. �˷�
////4. ����
////
//
//void menu()
//{
//	printf("*****************************************\n");
//	printf("********  1. Add     2. Sub       *******\n");
//	printf("********  3. Mul     4. Div       *******\n");
//	printf("********  0. exit                 *******\n");
//	printf("*****************************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	// ����һ������ָ�������
//	//ת�Ʊ�
//	int (*pfArr[5])(int, int) = {NULL,Add, Sub, Mul, Div};
//	//                           0    1    2    3    4
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);//2
//		if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ���������ѡ��\n");
//		}
//	} while (input);
//
//	return 0;
//}
//


int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

//��дһ�����������
//���2������������
//1. �ӷ�
//2. ����
//3. �˷�
//4. ����
//

void menu()
{
	printf("*****************************************\n");
	printf("********  1. Add     2. Sub       *******\n");
	printf("********  3. Mul     4. Div       *******\n");
	printf("********  0. exit                 *******\n");
	printf("*****************************************\n");
}

void Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("������2��������:");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}


