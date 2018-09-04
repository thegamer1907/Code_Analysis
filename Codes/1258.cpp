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
#define ull unsigned long long
#define PI pair < int, int > 
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define in(a) insert(a)
#define ppf pop_front

const int mod = (int)1e9 + 7;
const int MAX_N = (int)1e5 + 123;
const int N = 1e6 + 123;
const int INF = 1e9 + 1;
const ll INFL = 3e18 + 1;
const double pi = acos(-1.0);
const double eps = 1e-9;

int n, m, cnt;
string s;
set <string> ans, res;

inline void boost() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
}

inline void solve() {	
    boost();
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
    	cin >> s;
        ans.in(s);
    }
    for (int i = 1; i <= m; i++) {
    	cin >> s;
    	if (ans.find(s) != ans.end()) cnt++;
    	res.in(s);
	
	}
	if (cnt % 2 == 0) 
		cout << (n - cnt > m - cnt ? "YES" : "NO");
	else
		cout << (n - cnt >= m - cnt ? "YES" : "NO");	
}

int main () {
//	freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);
	
	solve();
}
               