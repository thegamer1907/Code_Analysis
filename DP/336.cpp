#include <bits/stdc++.h>
#define MAXN 110
using namespace std;
 
int a[MAXN], b[MAXN];
int dp[MAXN][MAXN];
 
int main(void) {
    int m, n;
    scanf("%d", &n);
    for(int i=1; i<=n; ++i)
        scanf("%d", &a[i]);
    sort(a+1, a+n+1);
    scanf("%d", &m);
    for(int i=1; i<=m; ++i)
        scanf("%d", &b[i]);
    sort(b+1, b+m+1);
 
    memset(dp, 0, sizeof(dp));
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=m; ++j) {
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
            dp[i][j] = max(dp[i][j], dp[i][j-1]);
            if(abs(a[i]-b[j]) <= 1)
                dp[i][j] = max(dp[i-1][j-1]+1, dp[i][j]);
            //printf("dp[%d][%d] = %d\n", i, j, dp[i][j]);
        }
    }
    printf("%d\n", dp[n][m]);
    return 0;
}

