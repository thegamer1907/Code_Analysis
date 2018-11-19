#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1ll << 62;
#define N 101010

int cnt[N], L, R, a[N], n, k;
ll cost, f[N], g[N];

ll func(int x) {
	return 1ll * x * (x - 1) / 2;
}

void add(int val, int d) {
	cost -= func(cnt[val]);
	cnt[val] += d;
	cost += func(cnt[val]);
}

void go(int le, int ri) {
	while (R < ri) R ++, add(a[R], 1);
	while (L > le) L --, add(a[L], 1);
	while (R > ri) add(a[R], -1), R --;
	while (L < le) add(a[L], -1), L ++;
}

void update(int st, int en, int le, int ri) {
	if (en < st) return;
	int mid = (st + en) >> 1;
	int p;
	ll mn = INF;
	for (int i = min(ri, mid - 1); i >= le; i --) {
		go(i + 1, mid);
		if (mn > g[i] + cost) mn = g[i] + cost, p = i;
	}
	f[mid] = mn;
	update(st, mid - 1, le, p);
	update(mid + 1, en, p, ri);
}

int main() {
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i ++) scanf("%d", a + i);
	L = 1, R = 0;
	fill(g + 1, g + n + 1, INF);
	for (int i = 1; i <= k; i ++) {
		update(i, n, i - 1, n - 1);
		swap(f, g);
	}
	printf("%I64d\n", g[n]);
}
