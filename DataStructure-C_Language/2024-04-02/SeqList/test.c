#include"SeqList.h"

//void SLTest01()
//{
//	SL sl;
//	SLInit(&sl);
//	//��ɾ��Ĳ���
//	//����β��
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(sl);//1 2 3 4
//
//	//SLPushFront(&sl, 5);
//	//SLPushFront(&sl, 6);
//
//	//����βɾ
//	SLPopBack(&sl);
//	SLPrint(sl);//1 2 3 
//	SLPopBack(&sl);
//	SLPrint(sl);
//	SLPopBack(&sl);
//	SLPrint(sl);
//	SLPopBack(&sl);
//	SLPrint(sl);
//	SLPopFront(&sl);
//	SLPrint(sl);
//	//...........
//	SLDestroy(&sl);
//}

//void SLTest02()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(sl);//1 2 3 4
//	//����ָ��λ��֮ǰ��������
//	//SLInsert(&sl, 1, 99);
//	//SLInsert(&sl, sl.size, 88);
//
//	//����ɾ��ָ��λ�õ�����
//	//SLErase(&sl, 1);
//	//SLPrint(sl);//1 3  4
//
//	//����˳���Ĳ���
//	int find = SLFind(&sl, 40);
//	if (find < 0)
//	{
//		printf("û���ҵ���\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±�Ϊ%d\n",find);
//	}
//	SLDestroy(&sl);
//}

////ͨѶ¼�Ĳ��Է���
//void ContactTest01()
//{
//	Contact con;//������ͨѶ¼����  ʵ���Ͼ��� ˳�����󣬵ȼ���SL sl
//	ContactInit(&con);
//	ContactAdd(&con);
//	ContactAdd(&con);
//	ContactShow(&con);
//
//	//ContactDel(&con);
//	ContactModify(&con);
//	ContactShow(&con);
//	ContactFind(&con);
//
//	ContactDesTroy(&con);
//}
//int main()
//{
//	//SLTest01();
//	//SLTest02();
//	ContactTest01();
//	return 0;
//}


void menu()
{
	printf("******************ͨѶ¼******************\n");
	printf("*******1.������ϵ��   2.ɾ����ϵ��********\n");
	printf("*******3.�޸���ϵ��   4.������ϵ��********\n");
	printf("*******5.չʾ��ϵ��   0.   �˳�  *********\n");
	printf("******************************************\n");
}

int main()
{
	int op = -1;
	Contact con;
	ContactInit(&con);

	do {
		menu();
		printf("��ѡ�����Ĳ�����\n");
		scanf("%d", &op);

		//Ҫ���ݶ�Ӧ��opִ�в�ͬ�Ĳ���
		switch (op)
		{
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactModify(&con);
			break;
		case 4:
			ContactFind(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 0:
			printf("�˳�ͨѶ¼....\n");
			break;
		default:
			printf("�������������ѡ�����Ĳ�����\n");
			break;
		}
	} while (op != 0);

	ContactDesTroy(&con);
	return 0;
}