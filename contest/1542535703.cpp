#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef long long ll;

bool use[123123];

int main() {
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        int mask = 0;
        for (int j = 1; j <= k; ++j) {
            int val;
            cin >> val;
            mask = mask * 2 + val;
        }
        use[mask] = true;
    }
    for (int i = 0; i < (1 << k); ++i) {
        for (int j = 0; j < (1 << k); ++j) {
            int k = i & j;
            if (k != 0) continue;
            if (use[i] && use[j]) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
