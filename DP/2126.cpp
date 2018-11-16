#include <bits/stdc++.h>

using namespace std;

const int maxn=1e5+10;
int n,m;
int a[maxn],flag[maxn],dp[maxn];

int main()
{
    memset(dp,0,sizeof(dp));
    memset(flag,0,sizeof(flag));
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++) scanf("%d",&a[i]);
    for (int i=n;i>=1;i--)
    {
        if (flag[a[i]]==0)
        {
            dp[i]=dp[i+1]+1;
            flag[a[i]]=1;
        }
        else dp[i]=dp[i+1];
    }
    while (m--)
    {
        int x;
        scanf("%d",&x);
        printf("%d\n",dp[x]);
    }
    return 0;
}
