#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int Add(int x,int y) 
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
void mun() {
    printf("****************************\n");
    printf("**  1.add    2.sub**********\n");
    printf("****3.mul    4.div**********\n");
    printf("****    0.exit    **********\n");
    printf("****************************\n");
}
int main() {
    int input = 0;
    int x, y;
    x = y = 0;
    int z = 0;
    int (*prt[4])(int x, int y)= { Add,Sub,Div,Mul };
    do {
        mun();
        printf("\n请输入\n");
        scanf("%d", &input);
        if (input >= 0 && input <= 4) {
            printf("请输入数字：");
                scanf("%d %d", &x, &y);
            z = prt[input - 1](x,y);
            printf("结果是%d", z);
        }
        else printf("error 请重新输入。");
    } while (input);
    return 0;
}