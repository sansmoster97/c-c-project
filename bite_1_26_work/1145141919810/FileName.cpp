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
    print(arr, 5);  // ��ӡ�����ÿ��Ԫ��

    reverse(arr, 5);  // �������Ԫ�ص����� 

    print(arr, 5);  // ��ӡ�����ÿ��Ԫ��

    init(arr, 5);  // ��ʼ������Ϊȫ0  

    print(arr, 5);  // ��ӡ���ú������Ԫ��  
    return 0;
}