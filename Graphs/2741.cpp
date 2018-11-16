#include <bits/stdc++.h>
using namespace std;

const long long LINF = 0x3F3F3F3F3F3F3F3FLL;
const int MAXN = 112345;

vector <int> g[MAXN];
int v[MAXN];
bool vis[MAXN];

long long dfs (int x) {
    vis[x] = true;
    
    long long ans = v[x];
    for (int i = 0; i < g[x].size(); ++i) {
        int y = g[x][i];
        if (!vis[y]) ans = min (ans, dfs (y));
    }
    
    return ans;
}

int main () {
    
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; ++i) scanf ("%d", v + i);
    while (m--) {
        int a, b;
        scanf ("%d %d", &a, &b);
        g[--a].push_back (--b);
        g[b].push_back (a);
    }
    
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        if (!vis[i]) ans += dfs (i);
    }
    
    cout << ans << endl;
    
    return 0;
}