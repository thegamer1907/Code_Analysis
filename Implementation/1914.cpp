#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> ans(n,0);
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < 3; i++) {
			int t; cin >> t;
			ans[i] += t;
		}
	}
	for (int i = 0; i < n; i++) {
		if (ans[i] != 0) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}