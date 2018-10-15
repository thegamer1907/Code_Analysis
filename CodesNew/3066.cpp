#pragma comment(linker, "/stack:336777216")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#define endl "\n"
#define bl 0
#define wh 1
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;



int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k;
	string s;
	cin >> k >> s;
	vector<ll> segs;
	segs.reserve(s.size());
	if (s[0] == '0') segs.emplace_back(1);
	else {
		segs.emplace_back(0);
		segs.emplace_back(-1);
	}
	vector<int> ones;
	if (segs.back() == -1) ones.emplace_back(1);
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == '1') {
			segs.emplace_back(-1);
			ones.emplace_back(segs.size() - 1);
		}
		else {
			if (segs.back() == -1)
				segs.emplace_back(1);
			else
				segs.back()++;
		}
	}
	if (segs.back() == -1) segs.emplace_back(0);
	if (k == 0) {
		ll ans = 0;
		for (int i = 0; i < segs.size(); i++) {
			if (segs[i] != -1) {
				ans += (segs[i] * (segs[i] + 1)) / 2;
			}
		}
		cout << ans << endl;
		return 0;
	}
	if (ones.size() < k) {
		cout << 0 << endl;
		return 0;
	}
	ll ans = 0;
	int start = ones[0], end = ones[k - 1];
	int l = 0, r = k - 1;
	while(1) {
		ll a = 0, b = 0;
		if (segs[end + 1] != -1) b = segs[end + 1];
		if (segs[start - 1] != -1) a = segs[start - 1];
		ans += (a + 1) * (b + 1);
		if (r + 1 >= ones.size()) {
			break;
		}
		l++; r++;
		start = ones[l];
		end = ones[r];
	}
	cout << ans << endl;
	return 0;
}