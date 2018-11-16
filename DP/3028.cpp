#include <iostream>

using namespace std;

const int mod = 1e9 + 7;
const int max_n = 1e7 + 50;

int main()
{
    int n;
    cin >> n;

    int dp[max_n][4];

    for (int i = 0; i < max_n; i++)
        for (int j = 0; j < 4; j++)
            dp[i][j] = 0;

    dp[0][0] = 1;
    dp[0][1] = dp[0][2] = dp[0][3] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                if (k == j) continue;
                dp[i + 1][k] += dp[i][j];
                dp[i + 1][k] %= mod;
            }
        }
    }

    cout << dp[n][0];

    return 0;
}
