#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

vector<vector<int>> g;
vector<bool> used;
bool found = false;
int n, t;

void dfs(int v) {
    if (t == v)
        found = true;
    used[v] = true;
    for (auto i: g[v])
        if (!used[i])
            dfs(i);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> t;
    g.resize(n);
    used.resize(n);
    --t;
    for (int i = 0; i < n - 1; ++i) {
        int now;
        cin >> now;
        g[i].push_back(i + now);
    }
    dfs(0);
    found ? cout << "YES\n" : cout << "NO\n";
    return 0;
}