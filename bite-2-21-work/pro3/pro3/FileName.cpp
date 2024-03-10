#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
int main() {
    char in[10050];
    gets(in);
    for (int i = strlen(in) - 1; i >= 0; i--) {
        printf("%c", in[i]);
    }
}