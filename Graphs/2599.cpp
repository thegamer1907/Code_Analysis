#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef pair<ii, ii> iii;
typedef vector<iii> viii;
typedef vector<viii> vviii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<vvi> vvvi;
typedef vector<string> vs;

int ans = 0;
vi color, vis;
vvi adj;

void solve(int v, int cur) {
    if (cur != color[v]) {
        ans++;
    }
    vis[v] = 1;
    for (int i = 0; i < adj[v].size(); ++i) {
        if (!vis[adj[v][i]]) {
            solve(adj[v][i], color[v]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    adj = vvi(n);
    color = vis = vi(n);
    for (int i = 2; i <= n; ++i) {
        int k;
        cin >> k;
        adj[k-1].push_back(i-1);
        adj[i-1].push_back(k-1);
    }
    for (int i = 0; i < n; ++i) cin >> color[i];
    vi aux(n+1);
    solve(0, -1);
    cout << ans << "\n";
    return 0;
}