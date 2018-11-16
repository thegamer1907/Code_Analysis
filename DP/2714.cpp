#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5, inf = 2e9+5;
int X[N], H[N], dp[N][3], n;
int main(){
    memset(dp, -63, sizeof(dp));
    for(int i=0;i<3;i++) dp[0][i] = 0;
    scanf("%d", &n);
    X[0] = -inf; X[n+1] = inf; for(int i=1;i<=n;i++) scanf("%d %d", &X[i], &H[i]);
    for(int i=1;i<=n;i++){
        if(X[i-1]<X[i]-H[i]){
            dp[i][0] = max(dp[i][0], max(dp[i-1][0], dp[i-1][1])+1);
        }
        if(X[i-1]+H[i-1]<X[i]-H[i]){
            dp[i][0] = max(dp[i][0], max(dp[i-1][0], dp[i-1][1])+1);
            dp[i][0] = max(dp[i][0], dp[i-1][2]+1);
        }
        dp[i][1] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));
        if(X[i]+H[i]<X[i+1]){
            dp[i][2] = max(dp[i][2], max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]))+1);
        }
    }
    printf("%d", max(dp[n][0], max(dp[n][1], dp[n][2])));
}
