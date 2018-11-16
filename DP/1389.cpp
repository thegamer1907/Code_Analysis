#include <bits/stdc++.h>
using namespace std;
int a[105],n,dp[105][105],maxn = 0,cnt[105];
int main()
{
    scanf("%d",&n);
    for (int i = 1;i <= n;i++)
        scanf("%d",&a[i]),cnt[i] = cnt[i-1] + a[i];
    for (int i = 1;i <= n;i++)
        for (int j = i;j <= n;j++)
            dp[i][j] = dp[i][j-1] + (a[j] ? 0 : 1),maxn = max(maxn,dp[i][j] + cnt[i-1] + cnt[n] - cnt[j]);
    printf("%d\n",maxn);
    return 0;
}
