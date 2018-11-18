#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;
int a[MAX_N];
int acc[MAX_N];
int _l, _r;
long long ans;
long long dp[25][MAX_N];
int n, k;

long long query(int l, int r) {
	while (_r < r+1) ans += acc[a[_r++]]++;
	while (_l < l) ans -= --acc[a[_l++]];
	while (_l > l) ans += acc[a[--_l]]++;
	while (_r > r+1) ans -= --acc[a[--_r]];	
	return ans;
}

void solve(int k, int l, int r, int opl, int opr) {
	if (r < l) return;
	int mid = (l+r)/2;
	long long& ans = dp[k][mid] = (1ll<<60);
	int piv;
	for (int i = min(opr, mid); i >= opl; --i) {
		long long lans = query(i, mid) + dp[k-1][i-1];
		if (ans > lans) {
			ans = lans;
			piv = i;
		}
	}
	solve(k, l, mid-1, opl, piv);
	solve(k, mid+1, r, piv, opr);
}

int main() {

	scanf ("%d %d", &n, &k);
	for (int i = 1; i <= n; ++i) {
		scanf ("%d", a+i);
	}
	for (int i = 1; i <= n; ++i)
		dp[0][i] = (1ll<<60);
	dp[0][0] = 0;
	for (int i = 1; i <= k; ++i)
		solve(i, 1, n, 1, n);
	
	printf("%lld\n", dp[k][n]);
	return 0;
}
