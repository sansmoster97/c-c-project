#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
根据输入的日期，计算是这一年的第几天。输入保证年份为4位数且日期合法。
输入描述：输入一行，每行空格分割，分别是年，月，日。
输出描述：输出是这一年的第几天
*/
int main() {
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    int months = 0;
    int i = 0;
    for (i = 1; i < month; i++) {
        switch (i) {
        case 1:months += 31; break;
        case 2: {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) months += 29;
            else months += 28;
            break;
        }
        case 3:months += 31; break;
        case 4:months += 30; break;
        case 5:months += 31; break;
        case 6:months += 30; break;
        case 7:months += 31; break;
        case 8:months += 31; break;
        case 9:months += 30; break;
        case 10:months += 31; break;
        case 11:months += 30; break;
        case 12:months += 31; break;
        }
    }
    printf("%d", day + months);
    return 0;
}