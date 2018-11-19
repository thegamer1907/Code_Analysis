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
    vector<int> a(1 << k);
    for (int i = 0; i < n; i++) {
        int u = 0;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            u = u * 2 + v;
        }
        a[u] = 1;
    }
    for (int i = 0; i < (1 << k); i++) {
        if (a[i] == 0) continue;
        for (int j = 0; j < (1 << k); j++) {
            if (a[j] && !(i & j)) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}
