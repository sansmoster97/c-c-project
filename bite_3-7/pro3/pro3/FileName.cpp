#define  _CRT_SECURE_NO_WARNINGS
/*
ת�Ʊ��ʵ��
*/
#include <stdio.h>
int add(int x, int y) {
	int z;
	z = x + y;
	return z;
}
int del(int x, int y) {
	int z;
	z = x - y;
	return z;
}
int mul(int x, int y) {
	int z;
	z = x * y;
	return z;
}
int div(int x, int y) {
	int z;
	z = x / y;
	return z;
}
void menu()
{
	printf("**************************\n");
	printf("*****  1.Add  2.Del  *****\n");
	printf("*****  3.Mul  4.Div  *****\n");
	printf("*****  0.exit        *****\n");
	printf("**************************\n");
	printf("\n �����룺\n");

}
int main() {
	int x, y, ret;
	x = y = 0;
	ret = 1;
	int (*p[5])(int, int) = {0,add,del,mul,div};
	while (ret) {
		int sum = 0;
		menu();
		scanf("%d", &ret);
		if (ret <= 4 && ret >= 1)
		{
			printf("��������������:  \n");
			scanf("%d%d", &x, &y);
			sum = (*p[ret])(x, y);
			printf("���Ϊ��%d\n\n", sum);
		}
		else
			if (ret == 0)
			{
				printf("�˳�����\n");
				return 0;
			}
			else
			{
				printf("ѡ�����������ѡ��\n");
			}
	}
	return 0;
}