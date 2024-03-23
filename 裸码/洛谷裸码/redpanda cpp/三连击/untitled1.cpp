#include <iostream>
using namespace std;
/*
将 1,2,,…,9 共 9 个数分成 3 组，分别组成 3 个三位数，且使这 3 个三位数构成 1:2:3 的比例，试求出所有满足条件的 3 个三位数。
*/
int fun1(int n){
	int sum = 0;
	while(n){
		sum+= n%10;
		n/=10;
	}
	return sum;
}
int fun2(int n){
	return (n/100)*(n/10%10)*(n%10);
}
int main(){
	int sum1 = 1+2+3+4+5+6+7+8+9;
	int sum2 = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9;
	for(int i = 123;i<=333;i++)
	{
		int a = i;
		int b = i*2;
		int c = i*3;
		if((fun1(a)+fun1(b)+fun1(c)==sum1)&&(fun2(a)*fun2(b)*fun2(c)==sum2))
		{
			cout << a <<' '<< b << ' '<< c<<'\n';
		}
	}
	return 0;
}
