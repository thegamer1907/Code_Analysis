#include <bits/stdc++.h>
using namespace std;
const int MX = 5e5 + 100;
int v[MX], n;
inline bool check(int m) {
	int p = n - m + 1;
	for(int i = 0; i < m; i ++) {
		if(v[i + 1] * 2 > v[p + i]) {
			return false;
		}
	}
	return true;
}
main () {
	cin >> n;
	for(int i = 1; i <= n; i ++) cin >> v[i];
	sort(v + 1, v + n + 1);
	int l = 0, r = n / 2 + 1;
	while(l != r) {
		int m = l + r >> 1;
		if(check(m)) l = m + 1;
		else r = m;
	}
	cout << n - l + 1;
}