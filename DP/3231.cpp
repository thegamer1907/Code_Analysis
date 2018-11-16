#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[110][110];
int a[110];

int n;

int go(int i, int j) {
	if (i == n) return 0;
	if (i + 1 == n) return -100000;
	int& r = dp[i][j];
	if (r != -1) return r;
	r = 0;
	int o = 0;
	for (int k = i; k + 1 < n; k++) {
		o += a[k] & 1;
		if (2 * o == (k - i + 1)) {
			int cost = abs(a[k] - a[k + 1]);
			if (cost <= j) {
				r = max(r, 1 + go(k + 1, j - cost));
			}
		}
	}
	return r;
}

int main() {
	ios::sync_with_stdio(false);
	
	int b; cin >> n >> b;
	memset(dp, -1, sizeof dp);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	cout << go(0, b) << endl;
	
	return 0;
}
