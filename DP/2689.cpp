#include<bits/stdc++.h>
using namespace std;
int i,i0,m,n,T,a[100005],b[100005],pre,dp[100005][3];
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        for(i=1;i<=n;i++)scanf("%d %d",&a[i],&b[i]);
        a[0]=-999999999,b[0]=0,a[n+1]=1999999999+2;
        dp[1][2]=1;
        for(i=1;i<=n;i++)
        {
            if(a[i]-b[i]>a[i-1]+b[i-1])dp[i][1]=max(dp[i][1],dp[i-1][2]+1);
            if(a[i]-b[i]>a[i-1])dp[i][1]=max(dp[i][1],dp[i-1][0]+1),dp[i][1]=max(dp[i][1],dp[i-1][1]+1);
            dp[i][0]=max(dp[i][0],dp[i-1][2]),dp[i][0]=max(dp[i][0],dp[i-1][0]),dp[i][0]=max(dp[i][0],dp[i-1][1]);
            if(a[i]+b[i]<a[i+1])dp[i][2]=dp[i][0]+1;
        }
        printf("%d\n",dp[n][2]);
    }
    return 0;
}
