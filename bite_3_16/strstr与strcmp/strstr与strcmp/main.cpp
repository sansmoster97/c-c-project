#include "my_string.h"

int main() {
	char str[N] = {'\0'};
	char first[N] = {"Hello World!  "};
	char second[N] = { "Windows is work!  " };
	//��ʼ��
	replay(first, second, str);

	printf("��һ���ַ�����");
	puts(first);
	printf("�ڶ����ַ�����");
	puts(second);
	printf("��ʼ��str�ַ�����");
	puts(str);
	//ģ��ʵ��strncpy
	replay(first, second, str);

	my_strncpy(str, first, 50);
	printf("str�ַ�����first����strncpy������");
	puts(str);
	my_strncpy(str, second, 50);
	printf("str�ַ�����second����strncpy������");
	puts(str);
	//ģ��ʵ��strncat
	replay(first, second, str);

	printf("��first��second����strncat������");
	puts(my_strncat(first, second, 50));
	//ģ��ʵ��memcpy
	replay(first,second,str);

	printf("str�ַ�����first����memcpy������");
	puts(my_memcpy(str, first, 50));
	printf("��first��second����memcpy������");
	puts(my_memcpy(first, second, 50));

	//
	return 0;
}