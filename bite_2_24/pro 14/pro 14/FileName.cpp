#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[20];
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		arr[i] = i;
	}
	int* p = arr;

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", *p++);
	}
	return 0;
}