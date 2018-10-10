#include <bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define sz(x) (int)x.size()

using namespace std;

typedef long long ll;

const int N = (int)1e5 + 222;
const int mod = (int)1e9 + 7;
const ll inf = 1e18 + 22;

inline void boost () {
	ios_base::sync_with_stdio (0);
	cin.tie (0), cout.tie (0);
}
ll n;

bool can (ll k) {
	ll cur = n;
	ll x = 0;
	while (cur > 0) {
		x += min (cur, k);
		cur -= k;
		if (cur < 1) break;
		ll y = cur / 10;
		cur -= y;
	}
	return (x * 2 >= n);
}

int main () {
	boost ();
	cin >> n;
	ll l = 1, r = n, ans = n;
	while (l <= r) {
		ll mid = (l + r) / 2ll;
		if (can (mid)) {
			ans = mid;
			r = mid - 1;
		} else l = mid + 1;
	}      
	cout << ans;
	
	return 0;
}