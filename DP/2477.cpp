#include <bits/stdc++.h>

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << '\n'

const int INF = 0x3f3f3f3f, MOD = 1e9+7;

using namespace std;

int main() {
    int t, k;
    cin >> t >> k;
    vector<long long> dp(100004, 0); dp[0] = 1;
    for (int length = 0; length <= 100000; length++) {
        if (length+k <= 100000) {
            dp[length+k] += dp[length];
            dp[length+k] %= MOD;
        }
        dp[length+1] += dp[length]; dp[length+1] %= MOD;
    }
    vector<long long> sum(100001); sum[0] = 0;
    for (int i = 1; i <= 100000; i++) {
        sum[i] = (sum[i-1] + dp[i]) %MOD;
    }
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << (sum[b]-sum[a-1]+MOD) %MOD << '\n';
    }
}
