#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse2")
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define boost() ios_base :: sync_with_stdio(0); cin.tie(); cout.tie(); cout << fixed; cout << setprecision(15); srand(time(NULL))
using namespace std;

int n;

signed main () {
	#ifndef ONLINE_JUDGE
		freopen("in", "r", stdin);
	#endif
	cin >> n;
	int lo = 0, hi = n + 1;
	while (lo + 1 < hi) {
		int md = (lo + hi) / 2LL;
		int cur = n;
		int vas = 0, pet = 0;
		while (cur > 0) {
			vas += min (md, cur);
			cur -= min (md, cur);
			pet += (cur / 10);
			cur -= (cur / 10);
		}
		if (vas >= pet) hi = md;
		else lo = md;
	}
	cout << hi << endl;
	return 0;
}
