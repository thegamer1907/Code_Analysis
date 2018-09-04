#include <bits/stdc++.h>

using namespace std;

const int N = 1000;

unordered_map <string, int> mp;

int main() {
	ios_base::sync_with_stdio(0);

	int n,m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		string x;
		cin >> x;
		++mp[x];
	}
	int common = 0;
	for (int i = 0; i < m; ++i) {
		string x;
		cin >> x;
		if (mp.count(x) > 0) {
			--mp[x];
			++common;
		}
	}

	if (n > m) {
		cout << "YES\n";
		return 0;
	} else if (n < m) {
		cout << "NO\n";
		return 0;
	} 

	if (common&1) {
		cout << "YES\n";
	} else 
	cout << "NO\n";

	return 0;
}