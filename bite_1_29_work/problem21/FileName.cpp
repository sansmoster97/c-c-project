#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fun(int* arr) {
	int l = 8;
	for (int i = 0; i <= l; i++) {
		for (int j = i+1; j <= l; j++) {
			if (arr[i] == arr[j]) 
			{
				arr[i] = 0; 
				arr[j] = 0;
			}
		}
	}
	while (--l) {
		if (arr[l] != 0) return arr[l];
	}
	if (l == 0) return 0;
}


int main() {
	int arr[9] = { 1,2,3,4,5,4,3,2,1 };
	printf("%d", fun(arr));
	return 0;
}