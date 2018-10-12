#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t, ans = 0;
	cin >> n >> t;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	long long curSum = 0;
	for (int l = 0, r = 0; r < n; ++r) {
		curSum += a[r];
		while (curSum > t) {
			curSum -= a[l];
			++l;
		}
		ans = max(ans, r - l + 1);
	}
	cout << ans;
}