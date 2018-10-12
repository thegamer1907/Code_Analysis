#pragma comment(linker, "/stack:336777216")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

ll recB = 0, recC = 0, recS = 0, haveB, haveC, haveS, priceB, priceC, priceS, money;

ll f(ll x) {
	return max(0ll, x*recB - haveB) * priceB + max(0ll, x*recC - haveC)*priceC + max(0ll, x*recS - haveS) * priceS;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'B') recB++;
		else if (s[i] == 'C') recC++;
		else if (s[i] == 'S') recS++;
	}
	cin >> haveB >> haveS >> haveC;
	cin >> priceB >> priceS >> priceC;
	cin >> money;
	ll ans;
	ll start = 0, end = 5000000000000;
	while (start <= end) {
		ll mid = (start + end) / 2;
		ll cost = f(mid);
		if (f(mid) <= money) {
			start = mid + 1;
			ans = mid;
		}
		else if (cost > money)
			end = mid - 1;
	}
	cout << ans << endl;
	return 0;
}