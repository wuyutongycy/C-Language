#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Contact.h"
//����˳���Ľṹ

//#define N 100
//
////��̬˳���
//struct SeqList
//{
//	int arr[N];
//	int size;//��Ч���ݸ���
//};

//typedef int SLDataType;//����������͵��滻
typedef peoInfo SLDataType;
//��̬˳���
typedef struct SeqList 
{
	SLDataType* arr;
	int size; //��Ч���ݸ���
	int capacity; //�ռ��С
}SL;

//typedef struct SeqList SL;

//˳����ʼ��
void SLInit(SL* ps);
//˳��������
void SLDestroy(SL* ps);
void SLPrint(SL s);

//ͷ������ɾ�� / β������ɾ��
void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

//ָ��λ��֮ǰ����/ɾ������
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);
int SLFind(SL* ps, SLDataType x);