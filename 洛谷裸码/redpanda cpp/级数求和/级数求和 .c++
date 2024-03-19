#include <iostream>
/*
已知：Sn=1+1/2+1/3+…+1/ 显然对于任意一个整数 k，当 n 足够大的时候，Sn>k 。
现给出一个整数 kk，要求计算出一个最小的 n，使得 Sn>k.
输入格式
一个正整数 k。
输出格式
一个正整数 nn。
*/
using namespace std;
int main(){
	long long int n = 1;
	double Sn = 0;
	int k = 0;
	cin >> k;
	while(Sn<=k){
		Sn = Sn + (double)(1.0/n);
		n++;
	}
	cout << n-1;
	
	return 0;
}
