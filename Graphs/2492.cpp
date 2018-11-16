#include <bits/stdc++.h>
using namespace std;
const int maxn = int(1e4) + 5;
vector<int> G[maxn], color;

int ans;
void dfs(int u) {
    for (auto v : G[u]) {
        if (color[v] != color[u]) {
            ans++;
        }
        dfs(v);
    }
}


int main() {
    color.resize(maxn);
    int n, p;
    cin >> n;
    for (int i = 1; i < n; i++) {
        cin >> p;
        G[p-1].push_back(i);
    }
    for (int i = 0; i < n; i++) {
        cin >> color[i];
    }
    dfs(0);
    cout << ans + 1 << endl;
}

