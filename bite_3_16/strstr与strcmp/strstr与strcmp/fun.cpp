#define  _CRT_SECURE_NO_WARNINGS
#include "my_string.h"
//初始化
void replay(char* base,char* copy,char* str)
{
	char a[20] = {'\0'};
	char c[] = {" Hello World!  "};
	char d[] = { " Windows is work!  " };
	my_memcpy(base, c, N);
	my_memcpy(copy, d, N);
	my_memcpy(str, a, N);

}
//模拟实现strncpy
char* my_strncpy(char* base, char* copy, size_t size)
{
	char* ch = base;
	while (size-- && *copy != '\0')
	{
		*ch++ = *copy++;
	}
	while (size--)
	{
		*ch++ = '\0';
	}
	return ch;
}
//模拟实现strncat
char* my_strncat(char* base, char* copy, size_t size)
{
	char* ch = base;
	while (*ch)
	{
		ch++;
	}
	while (size-- && *copy != '\0')
	{
		*ch++ = *copy++;
	}
	*ch = '\0';
	return base;
}
//模拟实现memcpy
char* my_memcpy(char* base, char* copy, size_t size)
{
	char* ch;
	ch = base;

	while (size--)
	{
		*ch = *copy;
		ch++;
		copy++;
	}
	return base;
}
//模拟实现memmove
char* my_memmove(char* base, char* copy, size_t size)
{
	char* ch1;
	ch1 = base;
	char* ch2;
	ch2 = copy;
	if (ch1==ch2)
	{
		return base;
	}
	if (ch1 < ch2)
	{
		for (size_t i = 0; i < size; i++)
		{
			*ch1 = *ch2;
			ch1++;
			ch2++;
		}
	}
	else 
	{
		for (size_t i = size; i > 0; i--)
		{
			base[i - 1] = copy[i - 1];
		}
	}
	return base;
}