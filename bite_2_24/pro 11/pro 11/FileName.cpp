#define  _CRT_SECURE_NO_WARNINGS
/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
以下为4个嫌疑犯的供词:
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/
#include <stdio.h>
bool fun(char man, char spack) {
		//A说：不是我。
		if (man == 'A' && spack != 'A') return true;
		//B说：是C。
		if (man == 'B' && spack == 'C') return true;
		//C说：是D。
		if (man == 'C' && spack == 'D') return true;
		//D说：C在胡说
		if (man == 'D' && spack != (spack != 'D' || spack == 'C')) return true;
		return false;
}
int main() {
    char man[] = { 'A', 'B', 'C', 'D' };
    char spack;
    for (spack = 'A'; spack <= 'D'; spack++) {
        int cont = 0;
        for (int i = 0; i < 4; i++) {
            if (fun(man[i], spack)) {
                cont++;
            }
        }
        if (cont == 3) {
            printf("凶手是: %c\n", spack);
            break;
        }
    }
    
	return 0;
}