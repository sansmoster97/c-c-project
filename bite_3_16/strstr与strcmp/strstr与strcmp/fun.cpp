#define  _CRT_SECURE_NO_WARNINGS
#include "my_string.h"
//��ʼ��
void replay(char* base,char* copy,char* str)
{
	char a[20] = {'\0'};
	char c[] = {" Hello World!  "};
	char d[] = { " Windows is work!  " };
	my_memcpy(base, c, N);
	my_memcpy(copy, d, N);
	my_memcpy(str, a, N);

}

//ģ��ʵ��strncpy
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
//ģ��ʵ��strncat
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

//ģ��ʵ��memcpy
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
