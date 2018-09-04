#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int> > table, up;
vector<int> best;

int main(void) {
    cin >> n >> m;
    table = vector<vector<int> >(n);
    up = vector<vector<int> >(n);
    best = vector<int>(n, 0);
    for (int i = 0; i < n; i++) {
        table[i] = vector<int>(m);
        for (int j = 0; j < m; j++) {
            cin >> table[i][j];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        up[i] = vector<int>(m);
        for (int j = 0; j < m; j++) {
            if (i == n - 1) up[i][j] = n - 1;
            else {
                if (table[i][j] <= table[i + 1][j]) up[i][j] = up[i + 1][j];
                else up[i][j] = i;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            best[i] = max(best[i], up[i][j]);
        }
    }
    int k, l, r;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> l >> r;
        l--; r--;
        if (best[l] >= r) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
