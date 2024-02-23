#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int n = 7;//菱形辰上7下6的规格
	char c;
	scanf("%c", &c);
	int i = 0, j = 0;
	//上层区域
	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("%c",c);
		}
		printf("\n");
	}
	//下半部分打印
	n -= 1;
	for ( i = n; i >= 1; i--)
	{
		for (j = i; j <= n; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}