#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
题目：

输入一个整数数组，实现一个函数，

来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，

所有偶数位于数组的后半部分。
*/
void fun(int* arr, int n) {
    int l = 0;
    int r = n - 1;
    while (l < r) {
        while (l < r && arr[l] % 2 != 0) {
            l++;
        }
        while (l < r && arr[r] % 2 == 0) {
            r--;
        }
        if (l < r) {
            int t = arr[l];
            arr[l] = arr[r];
            arr[r] = t;
        }
    }
}
int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    fun(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}