#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int n = 20;//��Ǯ��
	int bottle = 0;//��ƿ��
	int full_bottle = 0;//��ƿ��
	while (n--) {
 		full_bottle++;//��Ǯ����ˮ
 	}
	int sum = full_bottle ;
	//�����ƿ�ӻ�ȡ����
	while (full_bottle / 2 != 0) {
		if (full_bottle % 2 == 0) {
			bottle = full_bottle / 2;
		}
		else {
			bottle = (full_bottle +1) / 2;
		}
		sum += bottle;//shui yi sixa 
		full_bottle /= 2;//siwxiwjs

	}
	printf("%d",sum+bottle);
	return 0;
}