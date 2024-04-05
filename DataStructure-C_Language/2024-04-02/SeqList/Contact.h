#pragma once

#define NAME_MAX 20
#define GENDER_MAX 10 
#define TEL_MAX 20
#define ADDR_MAX 100
//������ϵ������ �ṹ
//���� �Ա� ���� �绰 ��ַ
typedef struct personInfo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;


//Ҫ�õ�˳�����صķ�������ͨѶ¼�Ĳ���ʵ�ʾ��Ƕ�˳�����в���
//��˳���ĸ����֣�����ͨѶ¼
typedef struct SeqList Contact; //sl
//ͨѶ¼��صķ���

//ͨѶ¼�ĳ�ʼ��
void ContactInit(Contact* con);
//ͨѶ¼������
void ContactDesTroy(Contact* con);
//ͨѶ¼�������
void ContactAdd(Contact* con);
//ͨѶ¼ɾ������
void ContactDel(Contact* con);
//ͨѶ¼���޸�
void ContactModify(Contact* con);
//ͨѶ¼����
void ContactFind(Contact* con);
//չʾͨѶ¼����
void ContactShow(Contact* con);



