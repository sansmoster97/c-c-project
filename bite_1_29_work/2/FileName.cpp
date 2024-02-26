#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
void fun(int num) {
    int arr[32];   
    int i;
    for (i = 0; i < 32; i++) {
        arr[i] = (num >> i) & 1;
    }
    printf("偶数位: ");
    for (i = 0; i < 32; i++) {
        if (arr[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("奇数位: ");
    for (i = 0; i < 32; i++) {
        if (arr[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int num;
    scanf("%d", &num);
    fun(num);
    return 0;
}