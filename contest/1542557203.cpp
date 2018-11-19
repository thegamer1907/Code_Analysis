#include <bits/stdc++.h>

using namespace std;

const int N = 101 * 1000;
const int K = 21;

int64_t dp[K][N];

int a[N];

int64_t cans;

int cur[N];

void setDp(int l, int r, int xl, int xr, int k) {
    if (r < l) return;
    int m = (l + r) / 2;
    dp[k][m] = 1e+18;
    int z = max(xr + 1, l);
    for (int i = z; i <= m; ++i) {
        cans += cur[a[i]];
        ++cur[a[i]];
    }
    int xm = xr;
    dp[k][m] = dp[k - 1][xr] + cans;
    for (int i = min(xr, m); i > xl; --i) {
        cans += cur[a[i]];
        ++cur[a[i]];
        if (dp[k][m] > dp[k - 1][i - 1] + cans) {
            dp[k][m] = dp[k - 1][i - 1] + cans;
            xm = i - 1;
        }
    }
    // cerr << l << ' ' << r << ' ' << xl << ' ' << xr << ' ' << k << ' ' << m << ' ' << xm << ' ' << dp[k][m] << endl;
    for (int i = min(xr, m); i > xl; --i) {
        --cur[a[i]];
        cans -= cur[a[i]];
    }
    for (int i = z; i <= m; ++i) {
        --cur[a[i]];
        cans -= cur[a[i]];
    }

    for (int i = xm + 1; i <= min(l - 1, xr); ++i) {
        cans += cur[a[i]];
        ++cur[a[i]];       
    }
    setDp(l, m - 1, xl, xm, k);
    for (int i = xm + 1; i <= min(l - 1, xr); ++i) {
        --cur[a[i]];       
        cans -= cur[a[i]];
    }

    for (int i = max(l, xr + 1); i <= m; ++i) {
        cans += cur[a[i]];
        ++cur[a[i]];   
    }
    setDp(m + 1, r, xm, xr, k);
    for (int i = max(l, xr + 1); i <= m; ++i) {
        --cur[a[i]];   
        cans -= cur[a[i]];
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cans += cur[a[i]];
        ++cur[a[i]];
        dp[0][i] = cans;
    }
    memset(cur, 0, sizeof(cur));
    cans = 0;
    for (int i = 1; i < k; ++i) {
        setDp(0, n - 1, 0, n - 2, i);
    }
    cout << dp[k - 1][n - 1] << endl;
    return 0;
}