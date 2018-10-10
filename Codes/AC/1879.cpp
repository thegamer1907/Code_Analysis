#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, m, k;
	cin >> n >> m >> k;

	ll lo = 1, hi = n * m, mid;
	while (true) {
		mid = lo + (hi - lo) / 2;
		ll cl = 0, ce = 0, temp = min(n, mid);
		for (ll i = 1; i <= temp; i++) {
			if (mid % i == 0 && mid / i <= m) {
				++ce;
				cl += mid / i - 1;
			} else {
				cl += min(mid / i, m); 
			}
		}
		if (ce == 0) {
			if (cl < k) {
				lo = mid + 1;
			} else {
				hi = mid - 1;
			}
		} else {
			if (cl < k) {
				if (cl + ce >= k) {
					cout << mid;
					break;
				} else {
					lo = mid + 1;
				}
			} else {
				hi = mid - 1;
			}
		}
	}
	return 0;
}