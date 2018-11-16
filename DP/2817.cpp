#include <bits/stdc++.h>
using namespace std;
const int limN = 2005;
const int mod = 1e9 + 7;

int dp[limN][limN];

int main() {
    int N, K;
    int ans = 0;

    scanf("%d%d", &N, &K);
    for(int i=1; i<=N; i++)
        dp[1][i] = 1;
    for(int k=2; k<=K; k++) {
        for(int n=1; n<=N; n++) {
            for(int j=n; j<=N; j+=n)
                dp[k][n] = (dp[k][n] + dp[k-1][j]) % mod;            
        }
    }

    for(int i=1; i<=N; i++)
        ans = (ans + dp[K][i]) % mod;

    printf("%d\n", ans);
}
