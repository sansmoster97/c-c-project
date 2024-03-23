#include "my_string.h"

int main() {
	char str[N] = {'\0'};
	char first[N] = {"Hello World!  "};
	char second[N] = { "Windows is work!  " };
	//初始化
	replay(first, second, str);

	printf("第一个字符串：");
	puts(first);
	printf("第二个字符串：");
	puts(second);
	printf("初始化str字符串：");
	puts(str);
	//模拟实现strncpy
	replay(first, second, str);

	my_strncpy(str, first, 50);
	printf("str字符串对first进行strncpy操作：");
	puts(str);
	my_strncpy(str, second, 50);
	printf("str字符串对second进行strncpy操作：");
	puts(str);
	//模拟实现strncat
	replay(first, second, str);

	printf("对first与second进行strncat操作：");
	puts(my_strncat(first, second, 50));
	//模拟实现memcpy
	replay(first,second,str);

	printf("str字符串对first进行memcpy操作：");
	puts(my_memcpy(str, first, 50));
	printf("对first与second进行memcpy操作：");
	puts(my_memcpy(first, second, 50));

	//
	return 0;
}