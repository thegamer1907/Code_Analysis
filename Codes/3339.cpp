#include <bits/stdc++.h>
using namespace std;

int n, a, i, ans, mn = 2e9;

int main() {
	cin >> n;
	for (i = 1; i <= n; ++i) {
		scanf("%d", &a);

		a = (a - i + n) / n;

		if (mn > a) {
			mn = a, ans = i;
		}
	}
	cout << ans;
	return 0;
}