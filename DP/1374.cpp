#include <bits/stdc++.h>

using namespace std;

int n, a[105], sum, mx;

int main() {

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		sum += a[i];
		a[i] += a[i - 1];
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = i; j <= n; ++j) {
			mx = max(mx, sum + (j - i + 1) - 2 * (a[j] - a[i - 1]));

		}
	}
	cout << mx << endl;
	return 0;
}