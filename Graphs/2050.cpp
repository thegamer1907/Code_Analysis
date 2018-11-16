#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> cats(n);
    for(int i = 0; i < n; ++i) {
        cin >> cats[i];
    }
    vector<vector<int>> g(n);
    for(int i = 0; i < n - 1; ++i) {
        int a, b; cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }

    function<map<int, int>(int, int)> solve = [&] (int v, int par) {
        map<int, int> res;
        for(auto to : g[v]) {
            if(to == par) continue;
            auto mp = solve(to, v);
            for(auto& p : mp) {
                if(cats[v] == 0) {
                    res[0] += p.second;
                } else if(p.first + 1 <= m) {
                    res[p.first + 1] += p.second;
                }
            }
        }
        if(g[v].size() == 1u && v != 0) {
            res[cats[v]] = 1;
        }
        return res;
    };

    int ans = 0;
    for(auto&& p : solve(0, -1)) {
        ans += p.second;
    }
    cout << ans << endl;
}
