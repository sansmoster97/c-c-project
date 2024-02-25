#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Sum(int n) {
	if (n < 10) {
		printf("%d  ", n);
	}
	else {
		Sum(n / 10);
		printf("%d  ", n % 10);
	}
}
int main() {
	int n = 0;
	scanf("%d", &n);
	Sum(n);
	return 0;
}