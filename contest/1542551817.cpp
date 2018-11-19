#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#define rep(i, a, b) for (int i = (a), _ = (b); i <= _; ++ i)
#define per(i, a, b) for (int i = (a), _ = (b); i >= _; -- i)
#define For(i, a, b) for (int i = (a), _ = (b); i < _; ++ i)
#define ri rd<int>
using namespace std;
typedef long long LL;
const int maxN = 1e5 + 7;
const int maxK = 23;
const int maxV = 1e5 + 7;

template<class T> inline T rd() {
	bool f = 1; char c = getchar(); for (; !isdigit(c); c = getchar()) if (c == '-') f = 0;
	T x = 0; for (; isdigit(c); c = getchar()) x = x * 10 + c - 48; return f ? x : -x;
}

int n, m;
int val[maxN];
LL f[maxK][maxN];

int state[maxV], cnt[maxV]; LL sum;
int cl, cr;

inline void rev(int x) {
	if (state[x] == 1) sum -= --cnt[val[x]];
	else sum += cnt[val[x]]++;
	state[x] ^= 1;
}

inline LL cost(int l, int r) {
	while (l < cl) rev(-- cl);
	while (cr < r) rev(++ cr);
	while (cl < l) rev(cl ++);
	while (r < cr) rev(cr --);
	return sum;
}

void solve(int k, int l, int r, int L, int R) {
	if (l > r) return;
	int m = (l + r) >> 1, M;
	per (i, min(m, R), L) {
		if (cost(i, m) + f[k-1][i-1] <= f[k][m]) {
			f[k][m] = cost(i, m) + f[k-1][i-1];
			M = i;
		}
	}
	solve(k, l, m-1, L, M);
	solve(k, m+1, r, M, R);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("f.in", "r", stdin);
	freopen("f.out", "w", stdout);
#endif

	n = ri(), m = ri();
	rep (i, 1, n) val[i] = ri();

	memset(f, 0x3f, sizeof f); f[0][0] = 0;

	rep (i, 1, m) solve(i, 1, n, 1, n);

	printf("%I64d\n", f[m][n]);

	return 0;
}
