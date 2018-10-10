#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define fi first
#define se second

#define pb push_back
#define mp make_pair

#define sz(a) a.size()
#define all(v) v.begin(), v.end()
#define bpc(v) __builtin_popcountll(v)

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL);

#define sc scanf
#define pr printf

#define itr iterator

#define int long long

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
	int b = 0, s = 0, c = 0;

	string q;
	cin >> q;
	for (int i = 0; i < sz(q); ++i) {
		if (q[i] == 'B')
			++b;
		if (q[i] == 'S')
			++s;
		if (q[i] == 'C')
			++c;
	}
	int nb, ns, nc, pb, ps, pc;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;

	int R;
	cin >> R;

	int l = -1, r = 1e14;
	while (r - l > 1) {
		int n = (l + r) / 2;
		if (max(0ll, b * n - nb) * pb + max(0ll, s * n - ns) * ps + max(0ll, c * n - nc) * pc <= R)
			l = n;
		else
			r = n;
	}

	cout << l;
	return 0;
}
