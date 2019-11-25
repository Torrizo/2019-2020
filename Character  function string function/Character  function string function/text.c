#include<stdio.h>
#include<assert.h>
void* my_memcpy(void * dst, const void * src, size_t count)
{
	void * ret = dst;
	assert(dst != NULL);
	assert(src != NULL);
	while (count--)
	{
		*(char *)dst = *(char *)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return(ret);
}

int my_strlen(const char * str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int My_strlen(const char * str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + My_strlen(str + 1);
}

int MY_strlen(char * s)
{
	char *p = s;
	while (*p != '0')
		p++;
	return p - s;
}

char * my_strcpy(char * des, const char * src)
{
	char *ret = des;
	assert(des != NULL);
	assert(src != NULL);
	while ((*des++ = *src++) != '\0')
    return ret;
}

int main()
{
	int a = 1;
	int b = 2;
	my_memcpy(b, a, 16);
	printf("%d\n", a);
	return 0;
}