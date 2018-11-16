#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	vector<int> trans(n + 1);
	for(int i = 0; i < n - 1; ++i) cin >> trans[i + 1];
	trans[n] = 10;
	for(int i = 1; i <= n; i += trans[i] ) {
		if(i == t) {
			cout << "YES" << endl;
			return 0;
		}
		if(i == n && t != n) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}