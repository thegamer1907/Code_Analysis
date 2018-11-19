#include <bits/stdc++.h>
using namespace std;
using LL = int64_t;
const LL INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int m = (1 << k);
    vector<int> a(m);
    for (int i = 0; i < n; i++) {
        int u = 0;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            u = (u << 1) | v;
        }
        if (!u) {
            cout << "YES\n";
            return 0;
        }
        a[u] = 1;
    }
    for (int i = 0; i < m; i++) {
        if (a[i] == 0) continue;
        for (int j = 0; j < m; j++) {
            if (a[j] && !(i & j)) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}
