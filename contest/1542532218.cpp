#include <bits/stdc++.h>
using namespace std;

const long long INF = 1ll << 62;

#define N 101010

int cnt[N], L, R;
long long now;

int a[N], n, k;

long long func(int x) {
	return 1ll * x * (x - 1) / 2;
}

void add(int val, int d) {
	now -= func(cnt[val]);
	cnt[val] += d;
	now += func(cnt[val]);
}

void go(int le, int ri) {
	while (R < ri) R ++, add(a[R], 1);
	while (L > le) L --, add(a[L], 1);
	while (R > ri) add(a[R], -1), R --;
	while (L < le) add(a[L], -1), L ++;
}

long long *F, *G;

void calc(int st, int en, int le, int ri) {
	if (en < st) return;
	int mid = (st + en) >> 1;
	int p;
	long long mn = INF;

	for (int i = min(ri, mid - 1); i >= le; i --) {
		go(i + 1, mid);
		if (mn > G[i] + now) mn = G[i] + now, p = i;
	}
	F[mid] = mn;

	calc(st, mid - 1, le, p);
	calc(mid + 1, en, p, ri);
}

long long f[2][N];

int main() {
	//freopen("r.in", "r", stdin);
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i ++) scanf("%d", &a[i]);
	L = 1, R = 0;
	F = f[0], G = f[1];
	for (int i = 1; i <= n; i ++) G[i] = INF;
	G[0] = 0;

	for (int h = 1; h <= k; h ++) {
		calc(h, n, h - 1, n - 1);
		swap(F, G);
	}
	printf("%I64d\n", G[n]);


	return 0;
}
