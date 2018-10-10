#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define ll long long
#define ld long double
#define al 0x3F3F3F3F
#define ull unsigned long long
#define PI pair < int, int > 
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define in insert
#define ppf pop_front
#define endl '\n'
#define resize(v) v.resize(unique(all(v)) - v.begin());
#define int ll

const int mod = (int)1e9 + 7;
const int MAX_N = (int)1e5 + 123;
const int N = 1e6 + 123;
const int INF = al;
const ll INFL = 3e18 + 1;
const double pi = acos(-1.0);
const double eps = 1e-9;

int n, k, a[MAX_N + MAX_N], ans;
map <int, int> b, c;

inline int gcd(int a, int b) {
	if (!b) return a;
	gcd(b, a % b);
}                                                 

inline void boost() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
}
 
inline void Solve() {	
	boost();
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		if (a[i] % k == 0) {
			int cur = b[a[i] / k];
			ans += cur;
			int cur2 = c[a[i] / k];	
			b[a[i]] += cur2;
		}
		c[a[i]]++;
	}
	cout << ans;
	
}            
        
main () {             //
//	freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);
	int tt = 1;
	while (tt--) {
		Solve();            
	}
}                           
 