#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
bool is_prime(int n) {
	int i = 2;
	for (; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
void fun() {
	for (int i = 100; i <= 200; i++) {
		if (is_prime(i)) printf("%d\t", i);
	}
}
int main() {
	void fun();
	fun();
	return 0;
}