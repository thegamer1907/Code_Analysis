#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int n;
vector <int> a[N];
int c[N] = {0};
int col[N];

int dfs(int u, int color) {
    c[u] = color;
    for (int i = 0; i < a[u].size(); i++) {
        int v = a[u][i];
        dfs(v, color);
    }
}

int main() {
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int x; cin >> x;
        a[x].push_back(i);
    }
    for (int i = 1; i <= n; i++) cin >> col[i];
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (col[i] != c[i]) {
            res++;
            dfs(i, col[i]);
        }
    }
    cout << res << endl;
}
