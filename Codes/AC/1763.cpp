#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll count_less_than_or_equal(ll n, ll m, ll val) {
	ll ret = 0;
	for (ll i = 1; i <= n; ++i) {
		ret += min(val/i, m);
	}
	return ret;
}

int main() {
	ll n,m,k;

	cin >> n >> m >> k;
	// k = (n*m)-k+1; // terbesar ke-k = terkecil ke-((n*m)-k+1)

	long long l = 1, r = n*m, mid;
	long long ans;
	while (l<=r) {
		mid = (l+r)/2;
		if (count_less_than_or_equal(n,m,mid) >= k) { // terkecil ke-(>=k) = ada >=k bilangan yang lebih kecil atau sama dengan  
			ans = mid;
			r = mid-1;
		} else {
			l = mid+1;
		}
	}

	cout << ans << '\n';
	return 0;
}