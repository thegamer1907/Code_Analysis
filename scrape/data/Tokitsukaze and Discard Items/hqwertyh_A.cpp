#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

long long a[N];
long long ans;

int main (void) {
	long long n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}
	a[m + 1] = 2e18;
	long long cur = 0, cnt = 0;
	while (cnt != m) {
		cur = (a[cnt + 1] - cnt + k - 1) / k * k;
		cnt = upper_bound(a + 1, a + m + 2, cur + cnt) - (a + 1);
		ans ++;
	}
	printf("%lld\n", ans);
}