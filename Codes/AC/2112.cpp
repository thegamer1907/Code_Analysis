#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 200010;

ll a[N];

int main() {
	ios::sync_with_stdio(false);

	ll ans = 0;

	ll n, k; cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	map<ll, ll> qt[2];
	for (int i = n - 1; i >= 0; i--) {
		ll x = a[i];
		ans += qt[1][x * k];
		qt[1][x] += qt[0][x * k];
		qt[0][x]++;
	}

	cout << ans << endl;

	return 0;
}
