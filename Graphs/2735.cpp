#include <bits/stdc++.h>

using namespace std;

const long long INF = 1'000'000'007;

vector <long long> v;
vector <vector <int>> g;
bitset <100'050> used;

long long dfs(int u) {
    used[u] = true;
    long long mn = v[u];
    for (int i : g[u])
        if (!used[i])
            mn = min(mn, dfs(i));
    return mn;
}

int main() {
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    v.resize(static_cast<unsigned int>(n)); g.resize(static_cast<unsigned int>(n));
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
        if (!used[i])
            ans += dfs(i);
    cout << ans;
}