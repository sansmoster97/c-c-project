#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
int cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void swap(void* p1, void* p2, int size) {
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char t = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = t;
	}

}
void my_sort(void* base, size_t size, size_t writh, int(*cmp)(const void*,const void*)) {
	int i, j;
	i = j = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (cmp((char*)base + j*writh, (char*)base + j * writh + 1) > 0)
			{
				swap((char*)base + j * writh, (char*)base + j * writh + 1, size);
			}
		}
	}

}
int main() {
	int arr[10] = { 1,6,4,2,7,9,4,1,5,10 };
	int k = sizeof(arr) / sizeof(arr[0]);
	my_sort(arr, k, sizeof(int), cmp);
	for (int i = 0; i < k; i++) {
		printf("%d  ", *(arr + i));
	}
	return 0;
}
