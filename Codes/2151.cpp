#include <bits/stdc++.h>
using namespace std;

int n, k;
long long ans, a[200200];

int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		scanf("%d", a + i);
		a[i] += a[i - 1];
	}
	for (int i = 0; i < n; ++i) {
		k = lower_bound(a + i, a + n + 1, a[n] - a[i]) - a;

		if (k > n || a[i] != a[n] - a[k]) {
			continue;
		}

		ans = max(ans, a[i]);
	}
	cout << ans << endl;
	return 0;
}