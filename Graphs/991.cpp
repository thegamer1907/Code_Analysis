#include<bits/stdc++.h>
using namespace std;

vector<int> g[30005];
bool vis[300005];

void dfs(int node)
{
    vis[node] = true;

    for(int i = 0; i < g[node].size(); i++) {
        if(!vis[g[node][i]]) dfs(g[node][i]);
    }
}

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 1; i <= n-1; i++) cin >> a[i];
    for(int i = 1; i <= n-1; i++) {
        g[i].push_back(i+a[i]);
    }

    dfs(1);

    vis[t] ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}