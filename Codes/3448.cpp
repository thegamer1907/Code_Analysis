#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll INF = 1e18;
const double EPS = 1e-6;
const double PI = acos(-1.0);
const int MAXN = 2e5 + 5;

ll n;
ll h;

bool can(ll k) {
	ll t = n;

	ll v = 0, p = 0;

	while (t) {
		v += min(t, k);
		t -= min(t, k);
		p += t / 10LL;
		t -= t / 10LL;
	}

	return v >= h;
}

int main() {
	ios::sync_with_stdio(0); cout << fixed << setprecision(6);

	cin >> n; h = (n >> 1) + (n % 2);

	ll lo = 1, hi = n + 5;

	while (lo + 1 < hi) {
		ll mid = (lo + hi) >> 1;

		if (can(mid)) {
			hi = mid;
		} else {
			lo = mid;
		}
	}

	if (can(lo)) cout << lo;
	else cout << hi;

	return 0;
}