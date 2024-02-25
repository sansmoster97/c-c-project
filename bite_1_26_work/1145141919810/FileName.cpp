#define _CRT_SECURE_NO_WARNINGS 1#include <stdio.h>  
#include <stdio.h>
void init(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}
void print(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse(int* arr, int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    print(arr, 5);  // 打印数组的每个元素

    reverse(arr, 5);  // 完成数组元素的逆置 

    print(arr, 5);  // 打印数组的每个元素

    init(arr, 5);  // 初始化数组为全0  

    print(arr, 5);  // 打印逆置后的数组元素  
    return 0;
}