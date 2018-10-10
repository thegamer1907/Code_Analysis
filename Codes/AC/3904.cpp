#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	string s;
	cin >> s;
	ll nb, ns, nc, pb, ps, pc;
	cin >> nb >> ns >> nc >> pb >> ps >> pc;
	ll ib = 0, is = 0, ic = 0;
	for (char c: s) {
		if (c == 'B') ib++;
		else if (c == 'S') is++;
		else if (c == 'C') ic++;
	}

	ll r; cin >> r;

	ll lo = 0;
	ll hi = 1e15;
	while (lo < hi) {
		ll md = lo + (hi - lo + 1) / 2;

		ll rb = max(0ll, ib * md - nb);
		ll rs = max(0ll, is * md - ns);
		ll rc = max(0ll, ic * md - nc);

		ll rmoney = rb * pb + rs * ps + rc * pc;
		if (rmoney <= r) {
			lo = md;
		} else {
			hi = md-1;
		}
	}

	cout << lo << '\n';
}