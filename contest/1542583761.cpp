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

const int N = 1e5 + 5;
const int Inf = 1e9 + 1;
const int Mod = 1e9 + 7;       		
const double eps = 1e-15;

main() {
	#ifdef Madi
	freopen(".in", "r", stdin);
	freopen(".out", "w", stdout);
	#endif
	IOS
	
	string a;
	cin >> a;

	int n;
	cin >> n;

	bool ok1 = 0, ok2 = 0;
	for (int i = 1; i <= n; ++i) {
		string s;
		cin >> s;

		if (s == a)
			return cout << "YES", 0;
		if (a[0] == s[1])
			ok1 = 1;
		if (a[1] == s[0])
			ok2 = 1;
	}

	if (ok1 + ok2 == 2)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
