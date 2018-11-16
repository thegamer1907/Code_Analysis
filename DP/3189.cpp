#include<bits/stdc++.h>
using namespace std;
int i,i0,n,m,a[200005],dp[200005],ans;
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)scanf("%d",&a[i]);
        sort(a+1,a+1+n);
        ans=dp[0]=0;
        for(i=1;i<=n;i++)
        {
            if(i==1||a[i]<=a[i-1]*2)dp[i]=dp[i-1]+1;
            else dp[i]=1;
            ans=max(ans,dp[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}