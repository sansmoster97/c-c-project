#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int main() {
	int arr[10] = { 1,7,2,3,6,5,4,0,9,8 };
	int k = 0;
	k = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, k, sizeof(int), cmp);
	for (int i = 0; i < k; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}