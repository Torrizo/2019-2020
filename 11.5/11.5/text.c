#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d",&a,&b);
	c = (a&b) + (a^b) / 2;
	printf("ƽ����Ϊc=%d\n",c);
	system("pause");
	return 0;
}