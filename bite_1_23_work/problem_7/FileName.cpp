#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
typedef long long int LL;
bool fun(LL n) {
	LL sum = 0;
	LL N = n;
	int m = 0;
	while (n) {
		m++;
		n /= 10;
	}
	n = N;
	while (n) {
		LL j = n % 10;
		sum += pow(j, m);
		n /= 10;
	}
	if (N == sum) return true;
	else return false;
}
int main() {
	LL n = 100000;
	for (int i = 0; i <= n; i++) {
		if (fun(i)) {
			printf("%d\t", i);
		}
	}
	return 0;
}