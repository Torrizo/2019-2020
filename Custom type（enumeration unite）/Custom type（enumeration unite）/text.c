#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum Day
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
enum Sex
{
	MALE=7,
	FEMALE,
	SECRET
};
enum Color
{
	RED=2,
	GREEN=5,
	BULE,
};
//int main()
//{
//	return 0;
//}
union un
{
	int i;  //4
	char a;
};
int main()
{
	// struct A s;
	union un abc;
	printf("%p\n", &(abc.a));
	printf("%p\n", &(abc.i));

	int a = RED;
	printf("%d\n", a);
	int b = Mon;
	printf("%d\n", b);

	system("pause");
	return 0;
}