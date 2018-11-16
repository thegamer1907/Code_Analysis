#include <bits/stdc++.h>

using namespace std;

const int N = 10005;

int ans;
vector <int> g[N];
int c[N];

void dfs(int v, int p, int color) {
    if (color != c[v]) {
        color = c[v];
        ans++;
    }
    for (auto u : g[v]) {
        if (u != p) {
            dfs(u, v, color);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int p;
        cin >> p;
        g[p].push_back(i);
        g[i].push_back(p);
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    dfs(1, -1, 0);
    cout << ans << endl;
}
