#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
//int my_strcmp(char* s1,char* s2) {
//    while (*s1 && (*s1 == *s2)) {
//        s1++;
//        s2++;
//    }
//    return *(char*)s1 - *(char*)s2;
//}
char* my_strstr( char* str1,  char* str2) {
     char* s1 = str1;
     char* s2 = str2;
     char* s = str1;
    do {
        s1 = s;
        s2 = str2;
        while (*s1 && (*s1 == *s2)) {
            s1++;
            s2++;
        }
        if (!*s2)
            return (char*)s;
    } while (*s++);
    return NULL; 
}

int main() {
	char a[] = { "hello " };
	char b[] = { "hello world" };
    printf("str a = \" %s \"\nstr b = \" %s \"\n", a, b);
   /* if (my_strcmp(a, b) < 0)  printf("strcmp = str a < str b\n");*/
    char* p = NULL;
    p = my_strstr(b, a);
    if (p == NULL) printf("no world\n");
    else printf("world is == %s", p);
	return 0;
}