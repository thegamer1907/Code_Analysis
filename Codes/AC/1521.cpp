/*   In The Name Of God   */
/*
ID: alimora2
LANG: C++11
TASK: PROB
*/
#include <bits/stdc++.h>

#define sqr(A) (A) * (A)
using namespace std;
typedef long long ll;

const int maxn = 1e5;
pair<ll, ll> a[maxn];
ll s, n, p, f;

bool cmp(pair<ll, ll> x, pair<ll, ll> y) {
	return (x.second + x.first * f) < (y.second + y.first * f);
}

bool check(ll k) {
	ll c = 0;
	f = k;
	sort(a, a + n, cmp);
	for (ll i = 0; i < k; i++)
		c += a[i].second + a[i].first * k;
	p = c;
	return c <= s;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> n >> s;
	for (ll i = 0; i < n; i++)
		cin >> a[i].second, a[i].first = i + 1;
	ll l = 0, r = n;
	while (r - l > 1) {
		ll mid = (l + r) / 2;
		(check(mid) ? l : r) = mid;
	}
	if (check(r))
		cout << r << ' ' << p << endl;
	else if (check(l))
		cout << l << ' ' << p << endl;
}
