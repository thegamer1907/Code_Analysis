#pragma comment(linker, "/stack:336777216")
#pragma GCC optimize("O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#define endl '\n'
#define OUT
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using ui = unsigned int;

ll const mod = 1e9 + 7;
auto mt = mt19937(chrono::steady_clock::now().time_since_epoch().count());

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	// choose any one problem, then choose another bitmask such that it's AND is equal to 0 with current mask
	// if there's a 0->(0,1), 1->(0) , try all these masks
	int n, k; cin >> n >> k;
	set<int> masks;
	for (int i = 0; i < n; i++) {
		int mask = 0;
		for (int j = 0; j < k; j++) {
			int x; cin >> x;
			if (x) mask += 1 << j;
		}
		masks.insert(mask);
	}
	if (masks.count(0)) return cout << "yes" << endl, 0;
	for (auto&mask : masks) {
		for (int s = 0; s < (1 << k); s++) {
			if ((mask & s) == 0 && masks.count(s)) return cout << "yes" << endl, 0;
		}
	}
	cout << "no" << endl;
	return 0;
}