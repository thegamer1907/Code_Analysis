#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<long long, long long> pl;

const int MOD = 1e9 + 7;
const ll INF = 1e18;
const double EPS = 1e-6;
const int MAX_M = 1e5 + 5;

ll n, m, k;
ll p[MAX_M];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	cin >> n >> m >> k;
	for (ll i = 0; i < m; ++i) {
		cin >> p[i];
	}

	ll ans = 0;
	ll l = 1, r = k;
	ll p1 = 0;
	while (p1 < m) {
		ll temp = 0;
		while (p[p1] <= r) {
			++p1;
			++temp;
		}
		if (temp == 0) {
			ll jump = (ll)ceil((p[p1] - r) / (ld) k);
			r += jump * k;
			l = r - k + 1;
		}
		else {
			++ans;
			r += temp;
		}
	}

	cout << ans << '\n';

	return 0;
}