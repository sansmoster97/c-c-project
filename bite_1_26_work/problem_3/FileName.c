#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
bool year(int n) {
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)	return true;
	else	return false;
}
int main() {
	int n = 0;
	scanf("%d", &n);
	if (year(n)) {
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}