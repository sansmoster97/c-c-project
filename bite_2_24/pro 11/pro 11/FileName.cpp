#define  _CRT_SECURE_NO_WARNINGS
/*
�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
����Ϊ4�����ɷ��Ĺ���:
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
*/
#include <stdio.h>
bool fun(char man, char spack) {
		//A˵�������ҡ�
		if (man == 'A' && spack != 'A') return true;
		//B˵����C��
		if (man == 'B' && spack == 'C') return true;
		//C˵����D��
		if (man == 'C' && spack == 'D') return true;
		//D˵��C�ں�˵
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
            printf("������: %c\n", spack);
            break;
        }
    }
    
	return 0;
}