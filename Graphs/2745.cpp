
#include <bits/stdc++.h>

using LL = long long;

using namespace std;

const int N = (int) 1e5 + 10, INF = (int) 2e9;

vector<int> ed[N];
int n, m, c[N], minv[N];
bool vis[N];

void dfs(int u, int s) {
    minv[s] = min(minv[s], c[u]);
    vis[u] = true;
    for (int v : ed[u]) {
        if (!vis[v])
            dfs(v, s);
    }
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", c + i);
    int u, v;
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &u, &v);
        ed[u].push_back(v);
        ed[v].push_back(u);
    }
    fill(minv + 1, minv + n + 1, INF);
    LL ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i, i);
            ans += minv[i];
        }
    }
    printf("%lld\n", ans);
}