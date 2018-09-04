#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAXN = 2e5;

int solve(int l, int r, int f, int cur) {
	int m = (l + r) / 2;

	if (m > f) {
		return solve(l, m - 1, f, cur - 1);
	} else {
		if (m < f)
			return solve(m + 1, r, f, cur - 1);
		else {
			return cur;
		}
	} 

}

signed main() {
	int n, k;

	cin >> n >> k;
	
	int sz = 1;
		
	for (int i = 1; i < n; ++i) {
		sz = sz * 2 + 1ll;
	}

	cout << solve(1, sz, k,  n);

	return 0;
}