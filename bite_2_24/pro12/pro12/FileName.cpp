#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
int main() {
    int n, i, j;
    n = 15;
    int arr[15][15];
    for (i = 0; i < n; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    for (i = 2; i < n; i++) {
        for (j = 1; j < i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}