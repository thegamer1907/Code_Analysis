#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int INF = 1234567899;
const double EPS = 1e-6;

const int MAXN = 1e5 + 5;

ll n, s;
ll c[MAXN];

bool can(ll mid) {
	vector<ll> a;

	for (int i = 0; i < n; ++i) {
		a.push_back(c[i] + (i + 1) * mid);
	}

	sort(a.begin(), a.end());

	ll bd = s;
	int ret = 0;

	for (int i = 0; i < min(mid, n); ++i) {
		if (a[i] > bd) break;
		++ret;
		bd -= a[i];	
	}
	
	return ret >= mid;
}

ll get(ll k) {
	vector<ll> a;

	for (int i = 0; i < n; ++i) {
		a.push_back(c[i] + (i + 1) * k);
	}

	sort(a.begin(), a.end());

	ll bd = s;

	for (int i = 0; i < min(k, n); ++i) {
		if (a[i] > bd) break;
		bd -= a[i];
	}
	
	return s - bd;
}

int main() {
	ios::sync_with_stdio(0); cout << fixed << setprecision(6);

	cin >> n >> s;

	for (int i = 0; i < n; ++i) {
		cin >> c[i];
	}
	
	int lo = 0, hi = n + 1;

	while (lo + 1 < hi) {
		int mid = (lo + hi) >> 1;

		if (can(mid)) {
			lo = mid;
		} else {
			hi = mid;
		}
	}

	int ans;

	if (can(hi)) {
		ans = hi;
	} else {
		ans = lo;
	}

	cout << ans << ' ' << get(ans) << endl;

	return 0;
}