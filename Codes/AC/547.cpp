#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long dp[20][12];
int main() {
    int n;
    scanf("%d", &n);
    dp[0][0] = 1;
    for(int i = 0; i <= 9; ++i) dp[1][i] = 1;

    for(int i = 2; i <= 10; ++i) {
        for(int j = 1; j <= 10; ++j)
            dp[i - 1][j] += dp[i - 1][j - 1];
        for(int j = 0; j <= 10; ++j)
            dp[i][j] = dp[i - 1][j];
        dp[i][10]--;
        for(int j = 10; j >= 1; --j)
            dp[i - 1][j] -= dp[i - 1][j - 1];
    }

    long long  ans = 0, s = 10, j;
    for(int i = 10; i > 0; --i) {
        j = 0;
        while(dp[i - 1][s - j] < n) {
            n -= dp[i - 1][s - j++];
        }
        s -= j;
        ans = ans * 10 + j;
    }
    printf("%lld\n", ans);
    return 0;
}
