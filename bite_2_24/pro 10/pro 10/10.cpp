#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
要求：时间复杂度小于O(N);
*/

bool fun(int arr[][5], int k) {
    int row = 0;
    int col = 4;
    while (row < 5 && col >= 0) {
        if (arr[row][col] == k) {
            return true;
        }
        else if (arr[row][col] < k) {
            row++; // 向下移动一行  
        }
        else {
            col--; // 向左移动一列  
        }
    }

    return false;
}
int main() {
	int k = 0;
	scanf("%d", &k);
    int arr[5][5]{
    {1,6,11,16,21},
    {2,7,12,17,22},
    {3,8,13,18,23},
    {4,9,14,19,24},
    {5,10,15,20,25}
    };
	printf("%s", fun(arr, k) ? "yes" : "no");
	return 0;
}