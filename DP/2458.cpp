#include <iostream>

using namespace std;

const int mod = 1e9 + 7;

int main()
{
    int t, k;
    cin >> t >> k;

    int dp[100500];

    dp[0] = 1;
    for (int i = 1; i < 100500; i++) {
        dp[i] = dp[i - 1];
        if (i - k >= 0)
            dp[i] += dp[i - k];
        dp[i] %= mod;
    }
    for (int i = 1; i < 100500; i++) {
        dp[i] += dp[i - 1];
        dp[i] %= mod;
    }

    int a, b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << ((dp[b] - dp[a - 1]) % mod + mod) % mod << endl;
    }

    return 0;
}
