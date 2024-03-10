#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
��Ŀ��

����һ���������飬ʵ��һ��������

�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�

����ż��λ������ĺ�벿�֡�
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