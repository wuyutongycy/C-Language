#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "����", 20, 65.5f };
//	//���s�е����ݴ�����ļ���
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� - �����ı�����ʽд��ȥ��
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//
//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	//����ļ�test.txt�ж�ȡ���ݷ���s��
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ� 
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	//��ӡ����Ļ�Ͽ���
//	//printf("%s %d %f\n", s.name, s.age, s.score);//
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	fputc('a', stdout);
//	return 0;
//}

//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//
//int main()
//{
//	char buf[200] = { 0 };
//	struct S s = { "����", 20, 65.5f };
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("1���ַ�������ʽ: %s\n", buf);//1
//
//	struct S t = {0};
//	sscanf(buf, "%s %d %f", t.name, &(t.age), &(t.score));
//	printf("2���ո�ʽ��ӡ  : %s %d %f\n", t.name, t.age, t.score);//2
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	FILE*pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fwrite(arr, sizeof(arr[0]), sz, pf);//�Զ����Ƶ���ʽд��ȥ��
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//�Զ����Ƶ���ʽ��ȡ
//
//int main()
//{
//	int arr[5] = {0};
//
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//������
//	fread(arr, sizeof(arr[0]), 5, pf);//�Զ����Ƶ���ʽд��ȥ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//1 2 3 4 5
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//int main()
//{
//	int arr[5] = { 0 };
//
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//������-�Զ����Ƶ���ʽд��ȥ��
//	int i = 0;
//	while (fread(&arr[i], sizeof(int), 1, pf))
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//fseek(pf, 4, SEEK_CUR);
//	//fseek(pf, 5, SEEK_SET);
//	fseek(pf, -4, SEEK_END);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	//fseek(pf, -4, SEEK_END);
//	fseek(pf, 0, SEEK_END);
//	printf("%d\n", ftell(pf));
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	fseek(pf, -4, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//	//�ж���ʲôԭ���¶�ȡ������
//	if (feof(pf))
//	{
//		printf("�����ļ�ĩβ����ȡ��������\n");
//	}
//	else if (ferror(pf))
//	{
//		perror("fgetc");
//	}
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//�ж���ʲôԭ���¶�ȡ������
//	if (feof(pf))
//	{
//		printf("�����ļ�ĩβ����ȡ��������\n");
//	}
//	else if (ferror(pf))
//	{
//		perror("fputc");
//	}
//
//	return 0;
//}


//�����ļ�:test1.txt  ---> test2.txt
//int main()
//{
//	FILE* pfin = fopen("test1.txt", "r");
//	if (pfin == NULL)
//	{
//		perror("fopen:test1.txt");
//		return 1;
//	}
//	FILE* pfout = fopen("test2.txt", "w");
//	if (pfout == NULL)
//	{
//		fclose(pfin);
//		perror("fopen:test2.txt");
//		return  1;
//	}
//	//���ļ���д�ļ�
//	int ch = 0;
//	while ((ch=fgetc(pfin)) != EOF)
//	{
//		fputc(ch, pfout);
//	}
//	//
//	fclose(pfin);
//	pfin = NULL;
//	fclose(pfout);
//	pfout = NULL;
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
//	//д
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//�ж���ʲôԭ���¶�ȡ������
//	if (feof(pf))
//	{
//		printf("�����ļ�ĩβ����ȡ��������\n");
//	}
//	else if (ferror(pf))
//	{
//		perror("fputc");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <windows.h>
//
////VS2022 WIN11��������
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//    fputs("abcdef", pf);//�Ƚ�����������������
//
//    printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//    Sleep(10000);
//    printf("ˢ�»�����\n");
//    fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//
//    //ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//    printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//    Sleep(10000);
//
//
//    fclose(pf);
//    //ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//    pf = NULL;
//
//    return 0;
//}
//

extern int Add(int, int);

int main()
{
	//printf("hehe\n");
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}
