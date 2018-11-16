#include <bits/stdc++.h>

using namespace std;

int n, ans;
int col[10001];
vector < pair < vector < int > , int > > g;
vector < bool > used;

void dfs(int v, int cl) {
    used[v] = 1;
    if (cl != col[v]) {
        cl = col[v];
        g[v].second = cl;
        ans++;
    }
    for (int i = 0; i < g[v].first.size(); ++i) {
        int to = g[v].first[i];
        if (!used[to]) {
            dfs(to, cl);
        }
    }
}

int main()
{
    cin >> n;
    used.resize(n + 1);
    g.resize(n + 1);
    for (int i = 1; i < n; ++i) {
        int a;
        cin >> a;
        g[a].first.push_back(i + 1);
        g[i + 1].first.push_back(a);
    }
    for (int i = 1; i <= n; ++i) {
        cin >> col[i];
    }
    dfs(1, 0);
    cout << ans;
    return 0;
}
