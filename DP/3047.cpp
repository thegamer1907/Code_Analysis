#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

typedef long long ll;

ll dp[2][4];

int main() {
    ll n;
    cin >> n;
    dp[0][0] = 1;
    ll d = 0;
    for (ll i = 1; i <= n; i++) {
        dp[!d][0] = (dp[d][1] + dp[d][2] + dp[d][3]) % MOD;
        dp[!d][1] = (dp[d][0] + dp[d][2] + dp[d][3]) % MOD;
        dp[!d][2] = (dp[d][1] + dp[d][0] + dp[d][3]) % MOD;
        dp[!d][3] = (dp[d][1] + dp[d][2] + dp[d][0]) % MOD;
        d = !d;
    }
    cout << dp[d][0];
}
