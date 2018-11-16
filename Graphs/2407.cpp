#include <bits/stdc++.h>
#include <stdio.h>    

using namespace std;
     
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define bpp __builtin_popcount
#define al 0x3F3F3F3F
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define in insert
#define ppf pop_front
#define endl '\n'
#define resize(v) v.resize(unique(all(v)) - v.begin());
//#define int long long

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;

const int mod = (int)1e9 + 7;                                   
const int MAX_N = (int)2e5 + 123;
const int N = 1e6 + 123;                     
const int INF = al;           
const ll INFL = 3e18 + 1;
const double pi = acos(-1.0);
const double eps = 1e-9;
const int dx[] = {0, 0, 1, 0, -1};
const int dy[] = {0, 1, 0, -1, 0};

int n, a[2001], ans;
vector <int> g[2001];

inline void dfs(int v, int pr = -1, int lvl = 1) {
	ans = max(ans, lvl);
	for (auto to : g[v])
		if (to != pr)
			dfs(to, v, lvl + 1);

}

inline void boost () {
    ios_base :: sync_with_stdio(NULL);
    cin.tie(NULL), cout.tie(NULL);
}                                                                     
                                                                    
inline void Solve () {
	boost ();
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		if (a[i] == -1) continue;
		g[a[i]].pb(i);
	}
	for (int i = 1; i <= n; i ++)
		if (a[i] == -1)
			dfs(i);
	cout << ans;
}

int main () {
//	freopen("sparse.in", "r", stdin);	
//	freopen("sparse.out", "w", stdout);
   int tt = 1;
	while (tt --) {
   	Solve();
   }
   return 0;
}                                                                                                                	