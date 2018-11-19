# include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int Input() {
	char c = getchar(); int x = 0, z = 1;
	for(; c < '0' || c > '9'; c = getchar()) z = c == '-' ? -1 : 1;
	for(; c >= '0' && c <= '9'; c = getchar()) x = (x << 1) + (x << 3) + (c ^ 48);
	return x * z;
}

const int maxn(1e5 + 5);

int n, a[maxn], k, tot[maxn], nl = 1, nr = 0;
ll f[21][maxn], ret;

void Upd(int l, int r) {
	while (nl < l) ret -= --tot[a[nl]], ++nl;
	while (nl > l) --nl, ret += tot[a[nl]]++;
	while (nr < r) ++nr, ret += tot[a[nr]]++;
	while (nr > r) ret -= --tot[a[nr]], --nr;
}

void Solve(int l, int r, int cl, int cr, int nk) {
	if (cl > cr) return;
	if (l == r) {
		for (int i = min(l - 1, cr); i >= cl; --i)
			Upd(i + 1, l), f[nk][l] = min(f[nk][l], f[nk - 1][i] + ret);
		return;
	}
	int mid = (l + r) >> 1, cmid = cl - 1;
	for(int i = min(cr, mid - 1); i >= cl; --i) {
		Upd(i + 1, mid);
		if(f[nk - 1][i] + ret < f[nk][mid]) f[nk][mid] = f[nk - 1][i] + ret, cmid = i;
	}
	Solve(l, mid, cl, cmid, nk), Solve(mid + 1, r, cmid, cr, nk);
}

int main() {
# ifndef ONLINE_JUDGE
	freopen("a.in", "r", stdin);
# endif
	n = Input(), k = Input();
	for (int i = 1; i <= n; ++i) a[i] = Input();
	memset(f, 63, sizeof(f));
	for (int i = 1; i <= n; ++i) ret += tot[a[i]]++, f[1][i] = ret;
	memset(tot, 0, sizeof(tot)), ret = 0;
	for (int i = 2; i <= k; ++i) Solve(1, n, 1, n, i);
	printf("%I64d\n", f[k][n]);
	return 0;
}