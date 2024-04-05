#include"Contact.h"
#include"SeqList.h"

//ͨѶ¼�ĳ�ʼ��
void ContactInit(Contact* con)//sl
{
	//ʵ����Ҫ���е���˳���ĳ�ʼ��
	//˳���ĳ�ʼ���Ѿ�ʵ�ֺ���
	SLInit(con);
}
//ͨѶ¼������
void ContactDesTroy(Contact* con)
{
	SLDestroy(con);
}
//ͨѶ¼�������
void ContactAdd(Contact* con)
{
	//��ȡ�û���������ݣ�����+�Ա�+����+�绰+��ַ
	peoInfo info;
	printf("������Ҫ��ӵ���ϵ������:\n");
	scanf("%s", info.name);

	printf("������Ҫ��ӵ���ϵ���Ա�:\n");
	scanf("%s", info.gender);

	printf("������Ҫ��ӵ���ϵ������:\n");
	scanf("%d", &info.age);

	printf("������Ҫ��ӵ���ϵ�˵绰:\n");
	scanf("%s", info.tel);

	printf("������Ҫ��ӵ���ϵ��סַ:\n");
	scanf("%s", info.addr);

	//��ͨѶ¼�������ϵ������
	SLPushBack(con, info);
}

int FindByName(Contact* con, char name[])
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
		{
			//�ҵ���
			return i;
		}
	}
	//û���ҵ�
	return -1;
}

//ͨѶ¼ɾ������
void ContactDel(Contact* con)
{
	//Ҫɾ�������ݱ���Ҫ���ڣ�����ִ��ɾ������
	//����
	char name[NAME_MAX];
	printf("������Ҫɾ������ϵ������:\n");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("Ҫɾ������ϵ�����ݲ����ڣ�\n");
		return;
	}
	//Ҫɾ������ϵ�����ݴ���--->֪����Ҫɾ������ϵ�����ݶ�Ӧ���±�
	SLErase(con, find);
	printf("ɾ���ɹ���\n");
}
//չʾͨѶ¼����
void ContactShow(Contact* con)
{
	//��ͷ������  �Ա� ���� �绰  ��ַ
	printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	//����ͨѶ¼�����ո�ʽ��ӡÿ����ϵ������
	for (int i = 0; i < con->size; i++)
	{
		printf("%3s %3s %3d %3s %3s\n", //�ֶ�����һ�¸�ʽ
			con->arr[i].name,
			con->arr[i].gender,
			con->arr[i].age,
			con->arr[i].tel,
			con->arr[i].addr
		);
	}
}
//ͨѶ¼���޸�
void ContactModify(Contact* con)
{
	//Ҫ�޸ĵ���ϵ�����ݴ���
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ��û�������\n");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("Ҫ�޸ĵ���ϵ�����ݲ����ڣ�\n");
		return;
	}
	//ֱ���޸�
	printf("�������µ�������\n");
	scanf("%s", con->arr[find].name);

	printf("�������µ��Ա�\n");
	scanf("%s", con->arr[find].gender);

	printf("�������µ����䣺\n");
	scanf("%d", &con->arr[find].age);

	printf("�������µĵ绰��\n");
	scanf("%s", con->arr[find].tel);

	printf("�������µ�סַ��\n");
	scanf("%s", con->arr[find].addr);

	printf("�޸ĳɹ���\n");
}
//ͨѶ¼����
void ContactFind(Contact* con)
{
	//11
	
	char name[NAME_MAX];
	printf("������Ҫ���ҵ���ϵ������\n");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("Ҫ���ҵ���ϵ�����ݲ����ڣ�\n");
		return;
	}
	// ���� �Ա� ���� �绰  ��ַ
	// 11   11   11   11   11
	printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	printf("%3s %3s %3d %3s %3s\n", //�ֶ�����һ�¸�ʽ
		con->arr[find].name,
		con->arr[find].gender,
		con->arr[find].age,
		con->arr[find].tel,
		con->arr[find].addr
	);
}