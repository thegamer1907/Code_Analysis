#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	ll n, k;
	cin >> n >> k;
	if (k % 2) cout << 1;
	else {
		unordered_map<ll, int> t;
		for (ll i = 2, p = 2; p <= k; ++i, p *= 2ll) t[p] = i;
		ll p = 1ll;
		for (int i = 1; p < k; ++i, p *= 2ll);
		while (t[k] == 0) {
		    //cout << " " << k << " " << p << endl;
			while (k <= p) p >>= 1;
			k -= p;
			//cout << k << " " << p << endl;
		} 
		cout << t[k];
	}
}