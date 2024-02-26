#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (; n; i++, n = n & (n - 1)) {
    }
    printf("%d", i);
    return 0;
}