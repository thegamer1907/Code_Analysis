# include <bits/stdc++.h>

using namespace std;

# define REP(i, a, b) for(int i = a; i <= b; ++ i)
# define REPD(i, a, b) for(int i = a; i >= b; -- i)
# define CLR(i, a) memset(i, a, sizeof(i))

# define gc getchar
inline int rd() {
	char ch = gc(); int ret = 0;
	while(ch < '0' || ch > '9') ch = gc();
	while(ch <= '9' && ch >= '0') ret = ret * 10 + ch - '0', ch = gc();
	return ret;
}

typedef long long LL;
const int N = 1e5 + 5, K = 20 + 5;
const LL INF = 1e18;

int a[N], lp, rp;
int cnt[N], n, k;
LL ret = 0, f[N][K];

LL qry(int l, int r) {
	while(lp < l) ret -= -- cnt[a[lp ++]];
	while(lp > l) ret += cnt[a[-- lp]] ++;
	while(rp < r) ret += cnt[a[++ rp]] ++;
	while(rp > r) ret -= -- cnt[a[rp --]];
	return ret;
}

void solve(int l, int r, int L, int R, int b) {
	if(l > r) return ;
	int mid = l + r >> 1;
	int pos = -1;
	REP(i, L, min(R, mid)) {
		LL t = qry(i, mid);
		if(t + f[i - 1][b - 1] < f[mid][b]) {
			f[mid][b] = t + f[i - 1][b - 1];
			pos = i;
		}
	}
	solve(l, mid - 1, L, pos, b);
	solve(mid + 1, r, pos, R, b); 
}

int main() {
	n = rd(), k = rd();
	REP(i, 1, n) a[i] = rd();
	REP(i, 1, n) REP(j, 0, k) f[i][j] = INF;
	lp = 1, rp = n;
	REP(i, 1, n) ret += cnt[a[i]] ++;
	f[0][0] = 0;
	REP(i, 1, k) solve(1, n, 1, n, i);
	printf("%lld\n", f[n][k]);
	return 0;
}