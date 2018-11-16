#include<bits/stdc++.h>
typedef long long int ll;
#define c 1000000007
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll dp[n+1][k+1]={0};

    for(ll i=1;i<=k;i++)
      dp[n][i]  = 1;
    for(ll i=n-1;i>=1;i--)
    {

      /*for(ll j=i;j<=n;j+=i)
      {
        for(ll p=1;p<=k;p++)
        {
          if(p==1)
            dp[i][p] = 1;
          else
          dp[i][p] = (dp[i][p] + dp[j][p-1])%c ;
        }
      }*/

      for(ll p=1;p<=k;p++)
      {
        for(ll j=i;j<=n;j+=i)
        {
          if(p==1)
            dp[i][p]=1;
          else
          dp[i][p] = (dp[i][p] + dp[j][p-1])%c;
        }
      }
    }

    ll ans = 0;
    for(ll i=1;i<=n;i++)
    {
      ans = (ans + dp[i][k])%c;
    }
    cout<<ans;
  return 0;
}