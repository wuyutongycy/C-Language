#include"SeqList.h"
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
//˳��������
void SLDestroy(SL* ps)
{
	if (ps->arr) //�ȼ���  if(ps->arr != NULL)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
void SLCheckCapacity(SL* ps)
{
	//��������֮ǰ�ȿ��ռ乻����
	if (ps->capacity == ps->size)
	{
		//����ռ�
		//malloc calloc realloc  int arr[100] --->����realloc
		//��Ŀ���ʽ
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));//Ҫ������Ŀռ�
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);//ֱ���˳����򣬲��ټ���ִ��
		}
		//�ռ�����ɹ�
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}
//β��
void SLPushBack(SL* ps, SLDataType x)
{
	////����Ľ����ʽ
	//if (ps == NULL)
	//{
	//	return;
	//}
	assert(ps); //�ȼ���assert(ps != NULL)

	//ps->arr[ps->size] = x;
	//++ps->size;
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;
}
//ͷ��
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	//����˳��������е�������������Ų��һλ
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];//arr[1] = arr[0]
	}
	ps->arr[0] = x;
	ps->size++;
}

void SLPrint(SL s)
{
	for (int i = 0; i < s.size; i++)
	{
		printf("%d ", s.arr[i]);
	}
	printf("\n");
}
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	//˳���Ϊ��
	//ps->arr[ps->size - 1] = -1;
	--ps->size;
}
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);

	//����������ǰŲ��һλ
	for (int i = 0; i < ps->size-1 ; i++)
	{
		ps->arr[i] = ps->arr[i + 1]; //arr[size-2] = arr[size-1]
	}
	ps->size--;
}