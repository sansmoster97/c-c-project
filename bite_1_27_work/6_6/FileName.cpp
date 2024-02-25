#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fun1(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * fun1(n - 1);
	}
}
int fun2(int n) {
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum = sum * i;
	}
	return sum;
}
int main() {
	int n = 0;
	scanf("%d", &n);
	printf("º¯ÊýµÝ¹é£º%d\n º¯Êýµü´ú£º %d", fun1(n), fun2(n));
	return 0;
}