#include"SList.h"

void SListTest01()
{
	//��������һ��һ���Ľڵ����
	//���������ڵ�
	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->data = 1;

	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	node2->data = 2;

	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	node3->data = 3;

	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
	node4->data = 4;

	//���ĸ��ڵ���������
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	//��������Ĵ�ӡ
	SLTNode* plist = node1;
	SLTPrint(plist);
}

void SListTest02()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPrint(plist); // 1->2->3->4->NULL

	SListDesTroy(&plist);
	SLTPrint(plist);

	//���Բ���
	//SLTNode* find = SLTFind(plist, 1);
	//SLTInsert(&plist, find, 11);
	//SLTInsertAfter(find, 11);
	//ɾ��pos�ڵ�
	//SLTErase(&plist, find);
	//SLTEraseAfter(find);
	//SLTPrint(plist);
	//if (find == NULL)
	//{
	//	printf("û���ҵ���\n");
	//}
	//else {
	//	printf("�ҵ��ˣ�\n");
	//}


	//SLTPushBack(NULL, 5);
	//
	//����ͷ��
	//SLTPushFront(&plist, 6);
	//SLTPrint(plist);
	//SLTPushFront(&plist, 7);
	//SLTPrint(plist);
	//SLTPushFront(&plist, 8);
	//SLTPrint(plist);

	//����ͷɾ
	//SLTPopFront(&plist);
	//SLTPrint(plist);// 2->3->4->NULL
	//SLTPopFront(&plist);
	//SLTPrint(plist);
	//SLTPopFront(&plist);
	//SLTPrint(plist);
	//SLTPopFront(&plist);
	//SLTPrint(plist);
	//SLTPopFront(&plist);
	//SLTPrint(plist);

}

int main()
{
	//SListTest01();
	SListTest02();
	return 0;
}