#include <cstdio>
#define MOD 1000000007

int dp[2001][2001] = {};

int goodSeq(const int &n, const int &k){
    if (dp[n][k] == -1){
        int sum = 0;
        for (int i = 1; i <= n; i++){
            sum += goodSeq(n / i, k - 1);
            sum %= MOD;
        }
        dp[n][k] = sum;
    }
    return dp[n][k];
}

int main (){
    int n, k, ans = 0;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++){
        dp[i][1] = 1;
        for (int j = 2; j <= k; j++)
            dp[i][j] = -1;
    }
    for (int i = 1; i <= n; i++){
        ans += goodSeq(n / i, k);
        ans %= MOD;
    }
    printf("%d\n", ans);
    return 0;
}