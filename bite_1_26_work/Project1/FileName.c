#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int bin_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", bin_search(arr,0,9,5));
	return 0;
}