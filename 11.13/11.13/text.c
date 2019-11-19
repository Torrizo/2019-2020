#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void my_memcpy(void * dst, const void * src, size_t count)
//{
//	void * ret = dst;
//	assert(dst);
//	assert(src);
//	while (count--)
//	{
//		*(char *)dst = *(char *)src;
//		dst = (char *)dst + 1;
//		src = (char *)src + 1;
//	}
//	return ret;
//}

//int main()
//{
//	char str1 = "asdasd";
//	char str2 = "fsdfasd";
//	my_memcpy(&str1, &str2,strlen(str2));
//	printf("%s",&str2);
//	return 0;
//}

int main()
{
	int day = 0;
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	}
	system("pause");
	return 0;
}