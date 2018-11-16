/*   You have lost, my dear   */
/*   Viva forever   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define mod 1000000007
using namespace std;
long long n,k,dp[2002][2002],v[2002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    for(int i=1;i<=n;++i)
        dp[1][i]=1;
    for(int i=2;i<=k;++i)
    {
        memset(v,0,sizeof(v));
        for(int j=1;j<=n;++j)
            for(int kk=j;kk<=n;kk+=j)
                v[kk]=(v[kk]+dp[i-1][j])%mod;
        for(int j=1;j<=n;++j)
            dp[i][j]=v[j];
    }
    int sol=0;
    for(int i=1;i<=n;++i)
        sol=(sol+dp[k][i])%mod;
    cout<<sol;
    return 0;
}
