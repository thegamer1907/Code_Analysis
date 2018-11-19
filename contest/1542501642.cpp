#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
const int N = 100005;
const int inf = 0x3f3f3f3f;
using std:: fill;
using std:: swap;
using std:: min;
using std:: max;

int A[N];
long long f[N];
long long g[N];
int B[N];

void solve(int l, int r, int L, int R, long long P) {
	if (l > r) return ;
	int m = l + r >> 1;
	int p = min(m, R);
	int M = 0;
	for (int i = l; i <= m; i += 1) P += B[A[i]], B[A[i]] += 1;
	for (int i = L; i <= p; i += 1) 
		P -= (B[A[i]] -= 1), g[i] + P < f[m] ? M = i, f[m] = g[i] + P : 0;
	for (int i = l; i <= m; i += 1) P -= (B[A[i]] -= 1);
	for (int i = L; i <= p; i += 1) P += B[A[i]], B[A[i]] += 1;
	solve(l, m - 1, L, M, P);
	for (int i = L; i <  M; i += 1) P -= (B[A[i]] -= 1);
	for (int i = l; i <= m; i += 1) P += B[A[i]], B[A[i]] += 1;
	solve(m + 1, r, M, R, P);
	for (int i = l; i <= m; i += 1) B[A[i]] -= 1;
	for (int i = L; i <  M; i += 1) B[A[i]] += 1;
}

int main () {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i += 1)
		scanf("%d", &A[i]);
	for (int i = 1; i <= n; i += 1)
		g[i] = g[i - 1] + B[A[i]], B[A[i]] += 1;
	memset(B, false, sizeof B);
	for (int i = 1; i <= m; i += 1) {
		memset(f, 0x3f, sizeof f);
		solve(1, n, 1, n, 0);
		swap(f, g);
	}
	printf("%lld\n", f[n]);
	return 0;
}