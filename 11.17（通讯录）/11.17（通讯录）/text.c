#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
#include<stdio.h>
enum OPTION
{
	EXIT,
	ADD,
	DEL,
	SEA,
	MOD,
	SHOW
};
void menu()
{
	printf("=============0.EXIT============\n");
	printf("=============1.ADD=============\n");
	printf("=============2.DEL=============\n");
	printf("=============3.SEA=============\n");
	printf("=============4.MOD=============\n");
	printf("=============5.show============\n");
}
void test()
{
	Contact ct;
	InitContact(&ct);
	AddContact(&ct);
	AddContact(&ct);
	AddContact(&ct);
	DelContact(&ct);
}
void testcontact()
{
	Contact ct;
	int option;
	InitContact(&ct);
	do
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case EXIT:
			break;
		case ADD:
			AddContact(&ct);
			break;
		case DEL:
			DelContact(&ct);
			break;
		case SEA:
			SearchCountact(&ct);
			break;
		case MOD:
			SortContact(&ct);
			break;
		case SHOW:
			ShowContact(&ct);
			break;
		default:
			printf(" ‰»Î”–ŒÛ£°\n");
		}
	} while (option);
}
int main()
{

	testcontact();
	return 0;
}