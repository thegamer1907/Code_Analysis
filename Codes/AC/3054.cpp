#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define fi first
#define se second

#define pb push_back
#define mp make_pair

#define sz(a) int(a.size())
#define all(v) v.begin(), v.end()
#define bpc(v) __builtin_popcountll(v)

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);

#define sc scanf
#define pr printf

#define itr iterator

const int N = 1e6 + 5;
const int Inf = 1e9 + 1;
const int Mod = 1e9 + 7;       		
const double eps = 1e-15;
const int pw = 257;

string s;
ll h[N], p[N];

int get(int l, int r) {
	if (!l)
		return h[r];
	return (h[r] - (h[l - 1] * p[r - l + 1] % Mod) + Mod) % Mod;
}

bool check(int n) {
	for (int i = 1; i < sz(s) - n - 1; ++i)
		if (get(i, i + n) == h[n])
			return 1;

	return 0;
}

main() {
	#ifdef Madi
	freopen(".in", "r", stdin);
	freopen(".out", "w", stdout);
	#endif
	IOS
	
	cin >> s;

	h[0] = s[0];
	p[0] = 1;
	for (int i = 1; i < sz(s); ++i) {
		h[i] = ((h[i - 1] * pw) % Mod + s[i]) % Mod;
		p[i] = (p[i - 1] * pw) % Mod;
	}

	for (int i = sz(s) - 1; i >= 0; --i)
		if (h[i] == get(sz(s) - i - 1, sz(s) - 1))
			if (check(i))
				return cout << s.substr(0, i + 1), 0;

	cout << "Just a legend";
	return 0;
}
