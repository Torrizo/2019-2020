#pragma once
#define NAME_MAX 100
#define GENDER_MAX 10
#define TELE_MAX 12
#define ADDR_MAX 100
#define MAX 200
typedef struct info
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;  
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}info;

typedef struct contact
{
	info data[MAX];
	int size;
}Contact, *pContact;

void InitContact(pContact pc);
void AddContact(pContact pc);
void DelContact(pContact pc);
void SeaarchContact(pContact pc);
int FindContact(pContact ,char* name);
void ModifvContact(pContact pc);
void SortContact(pContact pc);
void ShowContact(pContact pc);
