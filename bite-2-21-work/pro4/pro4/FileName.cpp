#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
实现一个函数，可以左旋字符串中的k个字符。
例如：
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
*/
char arr[10] = { 'A','B','C','D','\0'};
static char* fun(char* arr, int k) {
	if (k == 0) 
	{
		return arr;
	}
	else {
		arr[4] = arr[0];
		for (int i = 1; i <= 4; i++) {
			arr[i - 1] = arr[i];
		}
		arr[4] = '\0';
		return fun(arr, k - 1);
	}
}
int main() {
	int k = 0;
	scanf("%d",&k);
	printf("%s",fun(arr,k));
	return 0;
}
