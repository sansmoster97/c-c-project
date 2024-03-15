#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
constexpr auto endl = '\n';;

using namespace std;
int main() {
	vector<int> a = { 5,3,1,4,5,3,6,8,8,2,3,3 };
	int i = 0;
	for (auto& i : a) cout << i << ' ';
	sort(a.begin(), a.end());
	cout << '\n';
	for (auto& i : a) cout << i << ' ';
	reverse(a.begin(), a.end());
	cout << '\n';
	for (auto& i : a) cout << i << ' ';
	auto it = unique(a.begin(), a.end());
	a.erase(it, a.end());

	cout << '\n';
	for (auto& i : a) cout << i << ' ';
	return 0;
}