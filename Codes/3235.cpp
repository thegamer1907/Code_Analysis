#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll dp[100005];
    ll m=0x3f3f3f3f3f3f;
    for(ll i=1;i<=n;i++)
    {
        cin>>dp[i];
        dp[i]+=(n-i);
        m=min(m,dp[i]);
    }
    ll flag=m/n;

    for(ll i=1;i<=n;i++)
    {
        dp[i]=dp[i]-(flag+1)*n;
        if(dp[i]<0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
