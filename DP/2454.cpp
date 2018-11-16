#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int k,n=100005;
    int t;
    cin>>t>>k;
    ll dp[n+1];
    ll mod=1000000007;
    dp[0]=1;
    for(int i=1 ; i<=n ; i++)
    {
        dp[i]=dp[i-1]+(i>=k?dp[i-k]:0);
        dp[i]%=mod;
    }
    for(int i=1 ; i<=n ; i++)
    {
        dp[i]+=dp[i-1];
        dp[i]%=mod;
    }
    while(t--)
    {
        int a,b;
        ll ans;
        cin>>a>>b;
        ans = dp[b]-dp[a-1];
        ans%=mod;
        if(ans<0)
            ans+=mod;
        cout<<ans<<endl;
    }
   return 0;
}