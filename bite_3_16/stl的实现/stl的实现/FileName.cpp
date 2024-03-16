#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//strlen 实现
int my_strlen(char* a) {
	char* p = a;
	int k = 0;
	while (*p++) {
		k++;
	}
	return k;
}
//strcpy 实现
char* my_strcat(char* a, char* b) {
	char* p1 = a + my_strlen(a) ;
	char* p2 = b;
	while (*p2) {
		*p1++ = *p2++;
	}
	return a;
}
//strcat 实现
char* my_strcpy(char* a,  char* b)
{
	char* r = a;
	while ((*r++ = *b++) != '\0');
	return a;
}
int main() {
	char str1[40] = { "hello bite." };
	char str2[40] = { "hello world!" };
	printf("strlen= %d\n", my_strlen(str1));
	printf("strcat= %s \n", my_strcat(str2,str1));
	printf("strcpy= %s \n", my_strcpy(str2, str1));
	return 0;
}