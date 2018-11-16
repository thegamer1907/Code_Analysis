#include <bits/stdc++.h>
using namespace std;

int m;
vector<vector<int>> g;
vector<int> a;

int dfs(int u, int from, int acc = 0)
{
    if (acc + a[u] > m)
        return 0;
    if (g[u].size() == 1 and u != 0)
        return 1;
    int ans = 0;
    for (auto v : g[u])
    {
        if (v != from)
            ans += dfs(v, u, a[u]? acc + a[u] : 0);
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n >> m;
    g.resize(n);
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout << dfs(0, -1);
    return 0;
}