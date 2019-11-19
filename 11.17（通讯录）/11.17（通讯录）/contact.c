#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"contact.h" 

void InitContact(pContact pc)//��ʼ��ͨѶ¼
{
	pc->size = 0;
}
void AddContact(pContact pc)//�����ϵ����Ϣ
{
	info curInfo;
	if (pc->size == MAX)
	{
		printf("ͨѶ¼�����������ʧ��\n");
		return;
	}
	printf("������������\n");
	scanf("%s",curInfo.name);
	printf("�������Ա�\n");
	scanf("%s",curInfo.gender);
	printf("���������䣺\n");
	scanf("%d",&curInfo.age);
	printf("������绰���룺\n");
	scanf("%s",curInfo.tele);
	printf("�������ַ��\n");
	scanf("%s",curInfo.addr);
	pc->data[pc->size] = curInfo;
	pc->size++;
}
void DelContact(pContact pc)//ɾ����ϵ��
{
	char name[NAME_MAX];
	printf("�����뱻ɾ���˵�������\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("���˲����ڣ�ɾ��ʧ�ܣ�\n");
		return;
	}
	for (int i = pos; i < pc->size - 1; ++i)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->size--;
	printf("ɾ���ɹ�\n");
}
void SearchCountact(pContact pc)//������ϵ��
{
	char name[NAME_MAX];
	printf("����������˵�������\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("���˲����ڣ�����ʧ�ܣ�\n");
		return;
	}
	printf("=================================\n");
	printf("������%s\n", pc->data[pos].name);
	printf("�Ա�%s\n", pc->data[pos].gender);
	printf("���䣺%d\n", pc->data[pos].age);
	printf("�绰��%s\n", pc->data[pos].tele);
	printf("��ַ��%s\n", pc->data[pos].addr);
	printf("=================================\n");
}
void SortContact(pContact pc)//�޸�����
{
	char name[NAME_MAX];
	printf("�����뱻�޸���Ϣ�˵�������\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("���˲����ڣ��޷��޸ģ�\n");
		return;
	}
	printf("������������\n");
	scanf("%s", pc->data[pos].name);
	printf("�������Ա�\n");
	scanf("%s", pc->data[pos].gender);
	printf("���������䣺\n");
	scanf("%d", pc->data[pos].age);
	printf("������绰���룺\n");
	scanf("%d", pc->data[pos].tele);
	printf("�������ַ��\n");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ���\n");
}
int FindContact(pContact pc, char* name)
{
	for (int i = 0; i < pc->size; ++i)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;
}
void ShowContact(pContact pc)
{
	for (int i = 0; i < pc->size; ++i)
	{
		printf("=====================��%d����===================\n",i+1);
		printf("������%s\n", pc->data[i].name);
		printf("�Ա�%s\n", pc->data[i].gender);
		printf("���䣺%d\n", pc->data[i].age);
		printf("�绰��%s\n", pc->data[i].tele);
		printf("��ַ��%s\n", pc->data[i].addr);
		printf("================================================\n");
	}
}