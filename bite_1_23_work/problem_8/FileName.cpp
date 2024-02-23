#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	int j = n;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += n;
		n = n * 10 + j;
	}
	printf("%d", sum);
	return 0;
}