#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//����һ���������ж��Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)//==  ���ж����    = �Ǹ�ֵ
//		printf("%d ������\n", num);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2)//==  ���ж����    = �Ǹ�ֵ
//		printf("%d ������\n", num);
//
//	return 0;
//}

//����һ���������ж��Ƿ�Ϊ�����������������ӡ�������������ӡż����

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("%d ������\n", num);
//	else
//		printf("%d ��ż��\n", num);
//
//	return 0;
//}

//����һ�����䣬>= 18�����������꣬����������δ����

//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//	//�ж�
//	if (age >= 18)
//	{//�����
//		printf("����\n");
//		printf("����̸����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("�ú�ѧϰ\n");
//	}
//
//	return 0;
//}


//Ҫ������һ���������ж������������0�������������߸�����

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//�ж�
//	if (n == 0)
//		printf("�����ֵ��0\n");
//	else
//	{
//		if (n > 0)
//			printf("�����ֵ������\n");
//		else  //<0
//			printf("�����ֵ�Ǹ���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//�ж�
//	if (n == 0)
//		printf("�����ֵ��0\n");
//	else if (n > 0)
//		printf("�����ֵ������\n");
//	else  //<0
//		printf("�����ֵ�Ǹ���\n");
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 0) //> ==0
//	{
//		if (n == 0)
//			printf("�����ֵ��0\n");
//		else
//			printf("�����ֵ������\n");
//	}
//	else
//	{
//		printf("�����ֵ�Ǹ���\n");
//	}
//
//	return 0;
//}


//����һ���˵�����
//�������<18�꣬��ӡ"����"
//���������18����44���ӡ"����"
//���������45����59���ӡ"������"
//���������60����89���ӡ"����"
//���90�꼰���ϴ�ӡ"������"


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	//�ж�
//	if (age < 18)
//		printf("����\n");
//	else //>=18
//	{
//		if (age <= 44)
//			printf("����\n");
//		else //>44
//		{
//			if (age <= 59)
//				printf("������\n");
//			else //>=60
//			{
//				if (age <= 89)
//					printf("����\n");
//				else
//					printf("������\n");
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	//�ж�
//	if (age < 18)
//		printf("����\n");
//	else if (age <= 44) //18~44
//		printf("����\n");
//	else if (age <= 59)//45~59
//		printf("������\n");
//	else if (age <= 89)//60~89
//		printf("����\n");
//	else  //>=90
//		printf("������\n");
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//
//	return 0;
//}


//��������C/C++��̡�


//int main()
//{
//	int a = 10;
//	return 0;
//}
//


//Tab   / shift+Tab
//Ctrl+K+C
//Ctrl+K+U
//Ctrl+C
//Ctrl+V
//Ctrl+D
//

//int main()
//{
//	int a = 5;
//	printf("%d\n", a == 6);//0
//	printf("%d\n", a == 5);//1
//
//	return 0;
//}
//
//


//
//int main()
//{
//	int x = 0;
//	if (x = 3)//��ֵ
//		printf("hehe\n");
//
//	return 0;
//}


//��������һ��������һ�������Ƚ��Ƿ���ȵ�ʱ��

//int main()
//{
//	int x = 0;
//	//if (x == 3)
//	//	printf("hehe\n");
//
//	if (3 == x)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 20;
//	int c = 5;
//
//	if (a < b < c)//err
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 20;
//	int c = 5;
//
//	if (a < b && b < c)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}

//��������һ�����䣬���������18��~36��֮�䣬�����������

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	//if (18 <= age <= 36)//err
//	//	printf("����\n");
//
//	if(age>=18 && age<=36)//&& ����
//		printf("����\n");
//	return 0;
//}



//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    if (a > 5)
//        b = 3;
//    else
//        b = -3;
//
//    b = (a > 5 ? 3 : -3);
//
//    printf("%d\n", b);
//
//	return 0;
//}

//��ϰ2��ʹ���������ʽʵ�����������нϴ�ֵ��
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d%d", &a, &b);
//	int m = 0;
//	//if (a > b)
//	//	m = a;
//	//else
//	//	m = b;
//
//	m = (a > b ? a : b);
//	printf("%d\n", m);
//
//	return 0;
//}
//


//int main()
//{
//	int flag = 5;
//	
//	if (!flag)
//		printf("do some thing\n");
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)//6 1 4
//		printf("����\n");
//
//	return 0;
//}


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("����\n");
//
//	return 0;
//}

//����һ�����year���ж�year�Ƿ�������
//�����жϵĹ���
//1. �ܱ�4���������Ҳ��ܱ�100����������
//2. �ܱ�400����������
//
//int main()
//{
//	int year = 0;
//	//����
//	scanf("%d", &year);
//	//�ж�
//	if (year % 4 == 0)
//	{
//		if (year % 100 != 0)
//			printf("����\n");
//	}
//
//	if (year % 400 == 0)
//		printf("����\n");
//
//
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		printf("����\n");
//
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	//����
//	scanf("%d", &year);
//	//�ж�
//	if ((year % 4 == 0) && (year % 100 != 0))
//	{
//			printf("����\n");
//	}
//	else if (year % 400 == 0)
//		printf("����\n");
//
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//
//    i = a++||++b||d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//    printf("i = %d\n", i);
//
//
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//n%3 ---> 0 1 2
//	if (n % 3 == 0)
//		printf("�����ˣ�������0\n");
//	else if (n % 3 == 1)
//		printf("������1\n");
//	else
//		printf("������2\n");
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("�����ˣ�������0\n");
//		break;
//	case 1:
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
//		break;
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	//float f = 5.0f;
//	int f = 5;
//	int n = 1;
//	switch (f)
//	{
//	case n://err��case ��߱��������ͳ������ʽ
//		break;
//	}
//	return 0;
//}
//

//��ϰ��
//����һ��1~7�����֣���ӡ��Ӧ�����ڼ�
//���磺
//���룺1   ���������һ
//���룺2   ��������ڶ�
//���룺3   �����������
//���룺4   �����������
//���룺5   �����������
//���룺6   �����������
//���룺7   �����������
//
//int main()
//{
//	int day = 0;
//	//����
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}


//
//int main()
//{
//	int day = 0;
//	//����
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}
//
//����Ļ�ϴ�ӡ 1~10 ��ֵ

//1 2 3 4 5 6 7 8 9 10

//i=1
//
// prinf()
// i++
//
//
//int main()
//{
//	int i = 1;//ѭ������
//
//	while (i<=10)
//	{
//		printf("%d ", i);//1 2 3 4 ...
//		i++;
//	}
//
//	return 0;
//}


int main()
{
	int n = 0;
	scanf("%d", &n);//123

	while (n)
	{
		printf("%d ", n % 10);//��ȡһ���������λ
		n = n / 10;//ȥ��һ���������λ
	}

	return 0;
}

