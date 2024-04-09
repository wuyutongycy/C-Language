#include"SList.h"
void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur)//pcur != NULL
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail!");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//β��
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	//*pphead ����ָ���һ���ڵ��ָ��
	//������ͷǿ�����
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else 
	{
		//��β
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		//ptailָ��ľ���β���
		ptail->next = newnode;
	}
}
//ͷ��
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	//newnode *pphead
	newnode->next = *pphead;
	*pphead = newnode;
}
//βɾ
void SLTPopBack(SLTNode** pphead)
{
	//������Ϊ��
	assert(pphead && *pphead);
	//����ֻ��һ���ڵ�
	if ((*pphead)->next == NULL) //-> ���ȼ�����*
	{
		free(*pphead);
		*pphead = NULL;
	}
	else {
		//�����ж���ڵ�

		SLTNode* prev = *pphead;
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		//prev ptail
		free(ptail);
		ptail = NULL;
		prev->next = NULL;
	}
}
//ͷɾ
void SLTPopFront(SLTNode** pphead);