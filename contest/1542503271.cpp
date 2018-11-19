#include<bits/stdc++.h>
using namespace std;

template <class T> inline void read(T &x) {
	x = 0; static char ch = getchar(); for (; ch < '0' || ch > '9'; ch = getchar());
	for (; ch >= '0' && ch <= '9'; ch = getchar()) (x *= 10) += ch - '0';
}

#define N 100001
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define ll long long

const ll INF = 0x3f3f3f3f3f3f3f3f, P = 1e9 + 7;
int n, K, a[N], now, nxt = 1, lf = 1, ri, cnt[N];
ll dp[2][N], sum;

inline void calc(int l, int r) {
	while (ri < r) sum += cnt[a[++ri]], cnt[a[ri]]++;
	while (ri > r) cnt[a[ri]]--, sum -= cnt[a[ri--]];
	while (lf > l) sum += cnt[a[--lf]], cnt[a[lf]]++;
	while (lf < l) cnt[a[lf]]--, sum -= cnt[a[lf++]];
}

#define mid (l + r >> 1)
void solve(int l, int r, int L, int R) {
	if (l > r) return;
	dp[nxt][mid] = INF;
	int t;
	rep(i, L, min(mid, R)) {
		calc(i, mid);
		if (dp[nxt][mid] > dp[now][i - 1] + sum) dp[nxt][mid] = dp[now][i - 1] + sum, t = i;
	}
	solve(l, mid - 1, L, t), solve(mid + 1, r, t, R);
}

int main() {
	read(n), read(K);
	rep(i, 1, n) read(a[i]);
	memset(dp, INF, sizeof dp); dp[now][0] = 0;
	while (K--) solve(1, n, 1, n), swap(now, nxt);
	printf("%lld", dp[now][n]);
	return 0;
}