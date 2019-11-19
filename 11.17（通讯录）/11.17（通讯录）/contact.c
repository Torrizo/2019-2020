#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"contact.h" 

void InitContact(pContact pc)//初始化通讯录
{
	pc->size = 0;
}
void AddContact(pContact pc)//添加联系人信息
{
	info curInfo;
	if (pc->size == MAX)
	{
		printf("通讯录已满！，添加失败\n");
		return;
	}
	printf("请输入姓名：\n");
	scanf("%s",curInfo.name);
	printf("请输入性别：\n");
	scanf("%s",curInfo.gender);
	printf("请输入年龄：\n");
	scanf("%d",&curInfo.age);
	printf("请输入电话号码：\n");
	scanf("%s",curInfo.tele);
	printf("请输入地址：\n");
	scanf("%s",curInfo.addr);
	pc->data[pc->size] = curInfo;
	pc->size++;
}
void DelContact(pContact pc)//删除联系人
{
	char name[NAME_MAX];
	printf("请输入被删除人的姓名：\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("此人不存在，删除失败！\n");
		return;
	}
	for (int i = pos; i < pc->size - 1; ++i)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->size--;
	printf("删除成功\n");
}
void SearchCountact(pContact pc)//查找联系人
{
	char name[NAME_MAX];
	printf("请输入查找人的姓名：\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("此人不存在，查找失败！\n");
		return;
	}
	printf("=================================\n");
	printf("姓名：%s\n", pc->data[pos].name);
	printf("性别：%s\n", pc->data[pos].gender);
	printf("年龄：%d\n", pc->data[pos].age);
	printf("电话：%s\n", pc->data[pos].tele);
	printf("地址：%s\n", pc->data[pos].addr);
	printf("=================================\n");
}
void SortContact(pContact pc)//修改内容
{
	char name[NAME_MAX];
	printf("请输入被修改信息人的姓名：\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("此人不存在，无法修改！\n");
		return;
	}
	printf("请输入姓名：\n");
	scanf("%s", pc->data[pos].name);
	printf("请输入性别：\n");
	scanf("%s", pc->data[pos].gender);
	printf("请输入年龄：\n");
	scanf("%d", pc->data[pos].age);
	printf("请输入电话号码：\n");
	scanf("%d", pc->data[pos].tele);
	printf("请输入地址：\n");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功！\n");
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
		printf("=====================第%d个人===================\n",i+1);
		printf("姓名：%s\n", pc->data[i].name);
		printf("性别：%s\n", pc->data[i].gender);
		printf("年龄：%d\n", pc->data[i].age);
		printf("电话：%s\n", pc->data[i].tele);
		printf("地址：%s\n", pc->data[i].addr);
		printf("================================================\n");
	}
}