#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned ret = 0;
	for (i = 0; i < 32; i++)
	{
		ret += ((value >> i) & 1) << (31 - i);
	}
	return ret;
}
int main()
{

	unsigned int value = 0;
	printf("请输入一个数");
	scanf("%d", &value);
	reverse_bit(value);
	printf("反转后值为%u\n",reverse_bit(value));
	system("pause");
}