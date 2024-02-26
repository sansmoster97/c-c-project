#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int a = 3, b = 4;
	printf("交换前：%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后：%d %d", a, b);
	return 0;
}