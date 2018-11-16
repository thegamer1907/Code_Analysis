#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int ans = 0;
vector<vector<int> > g;


void dfs(int v, int deep) {
    ans = max(ans , deep);
    for (auto to: g[v]) {
        dfs(to, deep+1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
  //  freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    g.resize(n);
    vector<bool> b(n);
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p != -1) {
            p--;
            g[p].push_back(i);
        }
        else {
            b[i] = true;
        }
    }
    for (int i = 0; i < n; i++) {
        if (b[i]) {
            dfs(i, 1);
        }
    }
    cout << ans;
    return 0;
}
