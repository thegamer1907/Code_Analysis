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

set<string> S;
bool a[N][6];

main() {
	#ifdef Madi
	freopen(".in", "r", stdin);
	freopen(".out", "w", stdout);
	#endif
	IOS
	
	int n, k;
	cin >> n >> k;
	
	for (int i = 1; i <= n; ++i) {
		string s = "";

		for (int j = 1; j <= k; ++j) {
			bool a;
			cin >> a;
			
			if (a)
				s += '1';
			else
				s += '0';
		}
		S.insert(s);
	}

	for (auto it : S) {
		for (auto It : S) {
			bool ok = 1;

			for (int i = 0; i < k; ++i)
				if (it[i] == '1' && It[i] == '1')
					ok = 0;

			if (ok)
				return cout << "YES", 0;
		}
	}

	cout << "NO";
	return 0;
}
