#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
编写一个函数找出这两个只出现一次的数字。

例如:
有数组的元素是：1，2，3，4，5，1，2，3，4，6
只有5和6只出现1次，要找出5和6.
*/

void fun(int* arr, int k) {
	int* l, *r;
	l = arr;
	r = arr + k - 1;
	for (int i = 0; i < k; i++,l++) {
		l = arr + i;
		r = arr + k - 1;
		int f = 0;
		if (!(*l)) continue;
		while (l != r) {
			if (*l == *r) {
				f = 1;
				*l = *r = 0;
				break;
			}
			else  r--;
		}
		if (f) {
			continue;
		}
		else {
			printf("%d ", *l);
		}
	}
}

int main() {
	int arr[100] = { 1,3,3,4,9,1,3,3,4,21,22,12,31,12,3,2123,12312,3123,55,33,565,22,55,232,66 };
	fun(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}