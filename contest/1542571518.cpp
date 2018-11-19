#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int n, k, a[100004], b[100004];
lint m[22][100004];

int x=1, y=0;
lint val = 0;
lint get(int nx, int ny) {
	while (x<nx) val -= --b[a[x++]];
	while (nx<x) val += b[a[--x]]++;
	while (y<ny) val += b[a[++y]]++;
	while (ny<y) val -= --b[a[y--]];
	return val;
}

void fill_dp(int k, int s, int e, int l, int r) {
	if (s>e) return;

	int t = (s+e)/2, pos = 0;
	lint& val = m[k][t];
	val = 1e18;
	for (int i=max(t, l); i<=r; i++) {
		if (val > get(t, i-1) + m[k-1][i]) {
			val = get(t, i-1) + m[k-1][i];
			pos = i;
		}
	}

	fill_dp(k, s, t-1, l, pos);
	fill_dp(k, t+1, e, pos, r);
}

int main()
{
	scanf("%d%d", &n, &k);
	for (int i=0; i<n; i++) scanf("%d", a+i);

	for (int i=0; i<n; i++) m[0][i] = get(i, n-1);
	for (int i=1; i<k; i++) fill_dp(i, 0, n-1, 0, n-1);

	printf("%I64d\n", m[k-1][0]);
}
