#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2010, md = 1e9 + 7;
int ans;
int dp[MAXN][MAXN];
int32_t main () {
    int n, K;
    cin >> n >> K;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < MAXN; ++j) {
            dp[i][j] += (j == 1);
            for (int k = i; k <= n; k += i) {
                dp[k][j + 1] += dp[i][j];
                if (dp[k][j + 1] >= md)
                    dp[k][j + 1] %= md;
            }
        }
        ans += dp[i][K];
        if (ans >= md)
            ans %= md;
    }
    cout << ans;
    return 0;
}