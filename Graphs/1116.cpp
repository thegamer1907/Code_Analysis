#include <bits/stdc++.h>


using namespace std;

vector <vector <int> > g;

int dfs (int v, int k, int p = -1) {
    int ans = 0;
    for (int i = 0; i < g[v].size(); i++) {
        int x = g[v][i];
        if (x == k) {
            ans = 1;
            break;
        }
        if (x == p) continue;
        ans = dfs(x, k, v);
    }
    return ans;
}


int main () {
    int n, t;
    cin >> n >> t;
    t--;
    g = vector <vector < int> > (n);
    int a[n-1];
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        g[i].push_back(a[i] + i);
    }
    /*for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < g[i].size(); j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }*/
    if (dfs(0, t) == 1) cout << "YES";
    else cout << "NO";
}
