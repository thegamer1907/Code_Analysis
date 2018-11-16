#include <bits/stdc++.h>
using namespace std;
#define int long long
int dp[100005][2];
int M = 1e9 + 7;
signed main()
{
    int t, k;
    scanf("%I64d %I64d", &t, &k);
    dp[0][0] = 1;
    dp[0][1] = 0;
    for(int i = 1;i <= 100000;i++)
    {
        dp[i][0] = dp[i][1] = (-1);
        if(i-k > 0)
        {
            if(dp[i-k][0] != (-1))
                dp[i][0] = (dp[i-k][1] + dp[i-k][0])%M;
            else
                dp[i][0] = dp[i-k][1];
        }
        else if(i == k)
            dp[i][0] = 1;
        dp[i][1] = dp[i-1][1];
        if(dp[i-1][0] != (-1))
            dp[i][1] = (dp[i][1] + dp[i-1][0])%M;
        // cout << dp[i][0] << " " << dp[i][1] << "\n";
    }
    dp[0][0] = 0;
    for(int i = 1;i <= 100000;i++)
    {
        int val = dp[i][0];
        dp[i][0] = (dp[i-1][0] + dp[i][1])%M;
        if(val != (-1))
            dp[i][0] = (dp[i][0] + val)%M;
    }
    while(t--)
    {
        int a, b;
        scanf("%I64d %I64d", &a, &b);
        printf("%I64d\n", (dp[b][0] - dp[a-1][0] + M)%M);
    }
    return 0;
}