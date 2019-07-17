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
	long long cur = k, cnt = 0;
	while (cnt != m) {
		if (cur + cnt < a[cnt + 1]) {
			cur = (a[cnt + 1] + k - 1) / k * k - cnt;
		}
		int p = lower_bound(a + 1, a + m + 1, cur + cnt) - a;
		cnt = p;
		ans ++;
	}
	printf("%lld\n", ans);
}