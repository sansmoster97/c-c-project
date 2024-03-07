	#define  _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>

	void fun(int* arr, int k) {
		int i = 0,j = 0;
		for (i = 0; i < k-1; i++) {
			for (j = 0; j < k-1-i; j++) {
				if (arr[j] > arr[j + 1]) {
					int t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
				}
			}
		}


	}

	int main() {
		int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
		fun(arr, sizeof(arr) / sizeof(arr[0]));
		int* p = arr;
		int i = 0;
		for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		{
			printf("%d ", *p++);
		}
		return 0;
	}