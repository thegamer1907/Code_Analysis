#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    multiset<ll> ms;
	ll n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) {
		ll x; cin >> x;
		ms.insert(x);
	}
	ll l, r;

	ll removed = 0;
	int rounds = 0;
	while (true) {
		if (ms.empty()) break;

		ll x = *ms.begin();

		ll rem = x - removed - 1;

		rem %= k;

		l = x - rem;
		r = l + k - 1;

		while (!ms.empty() && *ms.begin() <= r) {
			ms.erase(ms.begin());
			++removed;
		}
		++rounds;
	}

	cout << rounds << endl;

    return 0;
}