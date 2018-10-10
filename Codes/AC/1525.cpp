#include <iostream>
#include <algorithm>
using namespace std;

int n, lo, hi, mi, k, best;
long long sol;
int a[101000];
long long b[101000];

long long check(long long m) {
	for(long long i = 0; i < n; ++i) b[i] = ((long long) a[i]) + (i + 1) * m;
	sort(b, b + n);
	long long sol = 0;
	for(int i = 0; i < m; ++i) sol += b[i];
	if (sol > k) return -1;
	return sol;
}

int main(void) {
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	int lo = 0, hi = n + 1;
	while (lo < hi) {
		mi = (lo + hi) / 2;
		sol = check(mi);
		if (sol != -1) {
			lo = mi + 1;
			best = sol;
		} else {
			hi = mi;
		}
	}
	printf("%d %d\n", lo - 1, best);
	return 0;
}