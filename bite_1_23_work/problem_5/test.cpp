#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int n = 20;//零钱数
	int bottle = 0;//空瓶数
	int full_bottle = 0;//满瓶数
	while (n--) {
 		full_bottle++;//零钱买汽水
 	}
	int sum = full_bottle ;
	//计算空瓶子换取部分
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