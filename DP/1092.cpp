#include <bits/stdc++.h>

using namespace std;

const int N = 105;

int dp[N][2], n, a[N], f[N];

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) f[i] = f[i - 1] + (a[i] == 0);
    memset(dp, -0x3f, sizeof(dp)); dp[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i][0] = dp[i - 1][0] + (a[i] == 1);
        dp[i][1] = dp[i - 1][1] + (a[i] == 1);
        for (int j = 0; j < i; j++) dp[i][1] = max(dp[i][1], dp[j][0] + f[i] - f[j]);
    }

    printf("%d", dp[n][1]);
    return 0;
}
