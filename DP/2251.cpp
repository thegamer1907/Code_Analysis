#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m,x;
    cin>>n>>m;
    ll a[n+1],dp[n+1];
    for(ll i=1;i<=n;i++)
        cin>>a[i];
    set<ll>S;
    for(ll i=n;i>=1;i--)
    {
        S.insert(a[i]);
        dp[i]=S.size();
    }
    for(ll i=0;i<m;i++)
    {
        cin>>x;
        cout<<dp[x]<<endl;
    }
    return 0;
}
