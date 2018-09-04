#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	ll a[n];
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		scanf("%lld", a + i);
		a[i] += a[i - 1];
	}
	ll ans = 0;
	int l = 0, r = n - 1;
	while (l <= r) {
		if (a[l] + a[r] == a[n - 1]) {
			ans = a[l];
			r--;
			l++;
		} else if (a[l] + a[r] > a[n - 1]) {
			r--;
		} else {
			l++;
		}
	}
	cout << ans << endl;
}