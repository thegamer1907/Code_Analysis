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
//#define int ll

const int mod = (int)1e9 + 7;
const int MAX_N = (int)1e5 + 123;
const int N = 1e6 + 123;
const int INF = al;
const ll INFL = 3e18 + 1;
const double pi = acos(-1.0);
const double eps = 1e-9;

int h, m, ss, t1, t2, x;
bool ch1 = 1, ch2 = 1;

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
    cin >> h >> m >> ss >> t1 >> t2;
	int x = max(t1, t2), y = min(t1, t2);
	t1 = y, t2 = x;
	int tt1 = t1 * 5, tt2 = t2 * 5;
	if (ss > tt1 && ss < tt2) ch1 = 0;
	else ch2 = 0;
	if (m == tt1) ch1 = 0;
	else if (m == tt2) ch2 = 0;
	else if (m > tt1 && m < tt2) ch1 = 0;
	else ch2 = 0;
	if (h == t1) ch1 = 0;
	else if (h == t2) ch2 = 0;
	else if (h > t1 && h < t2) ch1 = 0;
	else ch2 = 0;
	cout << (ch2 + ch1 ? "YES" : "NO");
}            

main () {
//	freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);
	int tt = 1;
	while (tt--) {
		Solve();
	}
}                           
 