#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll n;

bool judge(ll k) {
	ll m = n, cnt = 0;
	while (m) {
		ll eat = min(m, k);
		cnt += eat;
		m -= eat;
		m -= m / 10;
	}
	return cnt >= (n + 1) / 2;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	ll lp = 0, rp = n;
	while (rp - lp > 1) {
		ll mid = (lp + rp) / 2;
		if (judge(mid)) {
			rp = mid;
		} else {
			lp = mid;
		}
	}
	for (int ct = 1000; ct; ct--) {
		if (rp - 1 > 0 && judge(rp-1)) {
			rp--;
		}
	}
	cout << rp << endl;
	return 0;
}