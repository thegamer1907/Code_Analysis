#include<stdio.h>
#include<string.h>
#define max(a,b) a>b?a:b
int main()
{
    int n,x,ans,a[120],dp[120];
    while(~scanf("%d",&n))
    {
        ans=0;
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x)
            {
                a[i]=-1;
                ans++;
            }
            else
                a[i]=1;
        }
        dp[0]=a[0];
        int ma=a[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=max(dp[i-1]+a[i],a[i]);
            ma=max(ma,dp[i]);
        }
        printf("%d\n",ma+ans);
    }
    return 0;
}
