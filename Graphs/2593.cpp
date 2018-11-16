#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ii pair <int, int>
#define st first
#define nd second
#define vi vector <int>
#define vii vector <ii>
#define vvi vector <vi>
#define vvii vector <vii>
#define pb push_back
#define eb emplace_back
#define INF (1000000000)
#define MOD (1000000007)
#define sz(x) ((int)((x).size()))
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), end(x)
#ifndef ONLINE_JUDGE
  #define db(x) cerr << #x << " == " << x << endl
  #define dbs(x) cerr << x << endl
  #define _ << ", " <<
#else
  #define db(x)
  #define dbs(x)
#endif
inline int fexp(int b, int e) { int x = 1; for (; e; e >>= 1, b = (b*b)%MOD) if (e&1) x = (x*b)%MOD; return x; }

int n, c[10004];
vi adj[10004];

int dfs(int u, int p) {
    int ans = c[u] != c[p];
    for (int v : adj[u]) {
        if (v != p) {
            ans += dfs(v, u);
        }
    }
    return ans;
}

signed main() {
    while (cin >> n) {
        for (int i = 0; i <= n; i++) adj[i].clear();
        for (int v, u = 2; u <= n; u++) {
            cin >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        for (int i = 1; i <= n; i++) cin >> c[i];
        cout << dfs(1, 0) << endl;
    }

    return 0;
}
