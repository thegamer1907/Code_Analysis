#define _CRT_SECURE_NO_WARNINGS
#include<utility>
#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<cmath>
#include<ctime>
#include<functional>
#include<random>
#define mp make_pair
#define pb push_back
#define X first
#define Y second

//da pochemy ?? ?? ? ?? ?? ? ??

using namespace std;

typedef long long ll;

mt19937 gen(time(NULL));

bool is_prime(long long p) {
	for (int i = 2; i*i <= p; i++) {
		if (p % i == 0)
			return false;
	}
	return true;
}

ll maxn = 1e18;

set<string>lol;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, q; cin >> n >> q;
	vector<ll>a(n);
	vector<ll>b(q);

	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<ll>prefs(n);
	prefs[0] = a[0];
	for (ll i = 1; i < n; i++) {
		prefs[i] = prefs[i - 1] + a[i];
	}
	prefs.push_back(0);
	sort(prefs.begin(), prefs.end());
	for (ll i = 0; i < q; i++) {
		cin >> b[i];
	}
	ll sm = 0;
	for (ll i = 0; i < q; i++) {
		sm += b[i];
		auto it = upper_bound(prefs.begin(), prefs.end(), sm);
		if (it == prefs.end()) {
			cout << n << '\n';
			sm = 0;
			continue;
		}
		ll t = it - prefs.begin();
		cout << n - (t-1) << '\n';

	}
	return 0;
}