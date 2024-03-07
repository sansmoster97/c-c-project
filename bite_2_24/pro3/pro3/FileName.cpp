#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <string.h>  

bool isRotation(char* s1, char* s2) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) {
        return false;
    }
    char s1_double[100];
    char s2_double[110];
    strcpy(s1_double, s1);
    strcpy(s1_double + len1, s1);
    strcpy(s2_double, s2);
    strcpy(s2_double + len2, s2);
    if (strstr(s1_double, s2) != NULL || strstr(s2_double, s1) != NULL) {
        return true;

    return false;
}
    }

int main() {
    char s1[] = "AABCD";
    char s2[] = "BCDAA";
    printf("%s'与  '%s'是翻转数吗： %s\n", s1, s2, isRotation(s1, s2) ? "Yes" : "No");

    char s3[] = "abcd";
    char s4[] = "ACBD";
    printf("‘  % s'与  ' % s'是翻转数吗： %s\n", s3, s4, isRotation(s3, s4) ? "Yes" : "No");

    return 0;
}