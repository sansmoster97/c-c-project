#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fun1(int n) {
	if (n == 1||n==2){
		return 1;
	}
	else
	{return fun1(n - 1) + fun1(n - 2);
	}
}
int fun2(int n) {
	int a = 1;
	int b = 1;
	int temp = 1;
	for (int i = 2; i <= n; i++) {
		temp = a;
		a += b;1
		b = temp;
	}
	return temp;
}
int main() {
	int n = 0;
	scanf("%d", &n);
	printf("º¯ÊýµÝ¹é£º%d \nº¯Êýµü´ú£º%d", fun1(n), fun2(n));
	return 0;
}