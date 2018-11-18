#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 9;
int n, k, v[N], K;
ll dp[N][21];
ll ans;
int f[N], L = 1, R = 0;
void fix(int l, int r) {
	while (R < r) {
		R++;
		ans += f[v[R]];
		f[v[R]]++;
	}
	while (R > r) {
		f[v[R]]--;
		ans -= f[v[R]];
		R--;
	}
	while (l > L) {
		f[v[L]]--;

		ans -= f[v[L]];
		L++;
	}
	while (L > l) {
		L--;
		ans += f[v[L]];
		f[v[L]]++;
	}
}
void calc(int l, int r, int bl, int br) {
	if (l > r)return;
	int m = (l + r) / 2;
	ll &ret = dp[m][K];
	ret = 1e12;
	int best = -1;
	for (int i = bl; i <= min(m,br); i++) {
		fix(i, m);
		if (dp[i - 1][K - 1] + ans < ret) {
			ret = dp[i - 1][K - 1] + ans;
			best = i;
		}
	}
	//cout << bl << " " << br << " " << m << " " << best << endl;
	calc(l, m - 1, bl, best);
	calc(m + 1, r, best, br);
}
int main() {
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++)scanf("%d", &v[i]);
	for (int i = 1; i <= n; i++) {
		fix(1, i);
		dp[i][1] = ans;
	}

	for (K = 2; K <= k; K++) {
		calc(1, n, 1, n);
	}
	cout << dp[n][k] << endl;
	return 0;
}