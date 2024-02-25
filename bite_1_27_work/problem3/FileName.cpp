#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DigitSum(int n,int sum) {
    if (n == 0)
    {
        return sum;
    }
    else {
       
        return DigitSum(n / 10, sum += n % 10);
    }
}
int main()
{
    printf("%d", DigitSum(1729,0));
    return 0;
}