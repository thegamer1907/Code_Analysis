#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> pt;
const int MOD = 1e9 + 7;

ll rub;
vector<int> cont(3, 0), n(3), p(3);
bool good(ll mid) {
	ll b = max(0LL, mid*cont[0]-n[0]);
	ll s = max(0LL, mid*cont[1]-n[1]);
	ll c = max(0LL, mid*cont[2]-n[2]);
	ll cost = b*p[0] + s*p[1] + c*p[2];
	return cost <= rub;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case 'B': cont[0]++; break;
		case 'S': cont[1]++; break;
		case 'C': cont[2]++; break;
		}
	}
	cin >> n[0] >> n[1] >> n[2] >> p[0] >> p[1] >> p[2];
	cin >> rub;

	ll l = 0, r = rub;
	while (r > l) {
		ll mid = (l+r)/2;
		if (!good(mid))
			r = mid-1;
		else
			l = mid+1;
	}
	ll ans = r;
	while (!good(ans)) {
		ans--;
	}
	while (good(ans)) {
		if (!good(ans+1))
			break;
		ans++;
	}
	cout << ans << endl;
	return 0;
}