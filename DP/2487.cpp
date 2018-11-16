#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;
const long long mod = 1e9+7;
const int manx= 1e5+5;
int n,k;
long long dp[manx],sum[manx];
int main()
{
    scanf("%d%d",&n,&k);

        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=0;i<=100000;i++)
        {
            dp[i+1]=(dp[i]+dp[i+1])%mod;
            if(i+k<=100000)
            dp[i+k]=(dp[i]+dp[i+k])%mod;
        }
        sum[0]=0;
        for(int i=1;i<=100000;i++)
            sum[i]=(dp[i]+sum[i-1])%mod;
        for(int i=1;i<=n;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            printf("%lld\n",(sum[b]-sum[a-1]+mod) %mod);
        }

    return 0;
}
