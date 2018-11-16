#include "bits/stdc++.h"
#define int long long
#define double long double
#pragma GCC optimize("O3")

using namespace std;

signed main() {
    int n, a, b;
    cin >> n >> a >> b;
    --a, --b;

    int t = (n & (n - 1))? log2(n) : log2(n) - 1;
    if ((a & (1 << t)) != (b & (1 << t))) {
        cout << "Final!";
        return 0;
    }

    for (int i = t; i >= 0; --i) {
        if ((a & (1 << i)) != (b & (1 << i))) {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}
