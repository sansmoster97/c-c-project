#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int n = 7;//���γ���7��6�Ĺ��
	char c;
	scanf("%c", &c);
	int i = 0, j = 0;
	//�ϲ�����
	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("%c",c);
		}
		printf("\n");
	}
	//�°벿�ִ�ӡ
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