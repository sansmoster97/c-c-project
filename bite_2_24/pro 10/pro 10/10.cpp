#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
Ҫ��ʱ�临�Ӷ�С��O(N);
*/

bool fun(int arr[][5], int k) {
    int row = 0;
    int col = 4;
    while (row < 5 && col >= 0) {
        if (arr[row][col] == k) {
            return true;
        }
        else if (arr[row][col] < k) {
            row++; // �����ƶ�һ��  
        }
        else {
            col--; // �����ƶ�һ��  
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