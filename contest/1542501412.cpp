#include <bits/stdc++.h>
#define mk make_pair
#define ll long long
using namespace std;
const int N = 1e5 + 5;
ll dp[21][N], cost;
int n, m, a[N], s[N], L, R;
void solve(int k, int l, int r, int p, int q) {
	if (l > r) return;
	int mid = l + r >> 1;
	ll mn = 1e18;
	while (R < mid) ++R, cost += s[a[R]], s[a[R]]++;
	while (L > min(mid, q) + 1) --L, cost += s[a[L]], s[a[L]]++;
	while (R > mid) s[a[R]]--, cost -= s[a[R]], --R;
	while (L <= min(mid, q)) s[a[L]]--, cost -= s[a[L]], ++L;
	int pos = min(mid, q);
	while (L > p) {
		L--;
		cost += s[a[L]];
		s[a[L]]++;
		if (dp[k - 1][L - 1] + cost <= mn) {
			mn = dp[k - 1][L - 1] + cost;
			pos = L;
		} 
	}
	//cout << L << "," << R << "," << cost << endl;
	dp[k][mid] = mn;
	solve(k, l, mid - 1, p, pos);
	solve(k, mid + 1, r, pos, q);
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", a + i);
	}
	for (int i = 0; i <= n; ++i) 
		for (int j = 0; j <= m; ++j)
			dp[j][i] = 1e18;
	dp[0][0] = 0;
	for (int i = 1; i <= m; ++i) {
		L = n + 1;
		R = n;
		cost = 0;
		for (int j = 1; j <= n; ++j) s[a[j]] = 0;
		solve(i, 1, n, 1, n);
	}
	printf("%I64d\n", dp[m][n]);
}
 