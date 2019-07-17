#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(0);
    multiset<ll> ms;
	ll n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) {
		ll x; cin >> x;
		ms.insert(x);
	}
	ll l = 1;
	ll r = k;
 
	int rounds = 0;
 
	while (true) {
		if (ms.empty()) break;
 
		int removed = 0;
		while (!ms.empty() && *ms.begin() <= r) {
			ms.erase(ms.begin());
			++removed;
		}
 
		if (removed > 0) {
			++rounds;
			r += removed;
		}
		else {
			l = r + 1;
			r = r + k;
		}
	}
 
	cout << rounds << endl;
    return 0;
}