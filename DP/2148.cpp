#pragma comment (linker, "/stack:20000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define sz(s) (int)(s.size ())
#define all(s) s.begin (), s.end ()
#define Unique(s) s.resize (unique (all (s)) - s.begin ())

#define fi first
#define se second

#define Time clock () * 1.0 / CLOCKS_PER_SEC

#define foreach(it, s) for (__typeof (s.begin ()) it = s.begin (); it != s.end (); ++it)
#define rep(a, b, c) for (int a = b; a <= c; ++a)
#define per(a, b, c) for (int a = b; a >= c; --a)

using namespace std;
using namespace __gnu_pbds;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

template<typename T>using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T1, typename T2>using ordered_map = tree<T1, T2, less<T1>, rb_tree_tag, tree_order_statistics_node_update>;

const double PI = (double)(acos (-1.0)), EPS = (double)(1e-7);
const int MOD = 1e9 + 7, PR = 15937, INF = 1 << 30, MXN = 3e5 + 17;
const int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};

int32_t main () {
	ios_base::sync_with_stdio (0); cin.tie (0); cout.tie (0);
	unsigned int FOR; asm ("rdtsc" : "=A" (FOR)); srand (FOR);

#ifdef _DeSeiSH_
	assert (freopen ("Input.txt", "r", stdin));
	assert (freopen ("OutputMain.txt", "w", stdout));
#endif

	int n, m;

	cin >> n >> m;

	int a[n + 5];

	rep (i, 1, n)
		cin >> a[i];

	int cnt[n + 5];

	memset (cnt, 0, sizeof cnt);

	bool used[100005];

	memset (used, 0, sizeof used);
	
	per (i, n, 1) {
		cnt[i] += cnt[i + 1];
		if (!used[a[i]])
			++cnt[i], used[a[i]] = 1;
	}

	rep (i, 1, m) {
		int l;

		cin >> l;

		cout << cnt[l] << endl;
	}

#ifdef _DeSeiSH_
	cerr << "MainCode Time: " << Time << " s" << endl;
#endif

	return 0;
}