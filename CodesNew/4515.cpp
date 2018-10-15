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
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	int ans = 0;
	multiset<int> small, big;
	for (int i = 0; i < n / 2; i++) small.insert(v[i]);
	for (int i = n / 2; i < n; i++)big.insert(v[i]);
	for (auto& s : small) {
		auto it = big.lower_bound(2 * s);
		ans++;
		if (it == big.end()) continue;
		big.erase(it);
	}
	cout << ans + big.size() << endl;
	return 0;
} 