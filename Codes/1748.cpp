#include <cstdio>
#include <iostream>

using namespace std;

typedef long long ll;

ll check(ll t, ll n, ll m) {
	ll cnt = 0;
	for (ll i = 1; i <= n; i++) {
		// looking for x such that x * n > t
		ll x = t / i;
		// cout << t << " " << i << " " << x << endl;
		cnt += min(m, x); 
	}
	// cnt is num of elements smaller than or equal to t in the grid
	return cnt;
}

int main() {
	ll n, m, k; cin >> n >> m >> k;

	ll lo = 1, hi = n * m;
	ll res = -1;
	while (lo <= hi) {
		ll mid = (hi + lo) >> 1;
		// cout << mid << " " << check(mid, n, m) << endl;
		if (check(mid, n, m) >= k) {
			// meaning the number of elements smaller or equal to k meaning mid is answer and range goes lower
			res = mid;
			hi = mid - 1;
		} else lo = mid + 1;
	}
	cout << res << endl;
}