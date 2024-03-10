#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
模拟实现库函数strlen
*/

int fun(char* str) {
	int cout = 0;
	while ( *str != '\0')
	{
		cout++;
		str++;
	}
	return cout;
}


int main() {
	char arr[10];
	gets_s(arr);
	printf("%d", fun(arr));
	return 0;
}