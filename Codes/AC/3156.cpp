#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 1e5+5;
int a[N];
int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i]++;
	}
	int ans = 2e9+5;
	for (int i = 1; i <= n; i++) {
		int r = a[i] / n * n + (i % n);
		if (r < a[i]) {
			r += n;
		}
		ans = min(ans, r);
	}
	cout << (ans - 1) % n + 1 << endl;
	return 0;
}