#include <iostream>
using namespace std;
const int N = 2e5;
int main(){
	long long a[N+10]={0};
	long long  prefix[N+10]={0};
	int n = 0;
	cin >> n ;
	for(int i = 1;i <=n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <=n;i++)
	{
		prefix[i]=prefix[i-1]+a[i];
	}
	long long sum = 0;
	for(int i = 1;i<=n;i++)
	{
		sum+= a[i]*(prefix[n]-prefix[i]);
	}
	cout << sum ;
	return 0;
}
