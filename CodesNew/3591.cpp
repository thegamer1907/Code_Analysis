#include<bits/stdc++.h>
using namespace std;
#define ll int

int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll ma=0;
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        ma=max(a[i],ma);
        c+=a[i];
    }
    ll ans2=ma+m;
    c=n*ma-c;
    m=m-c;
    ll ans=ma;
    if(m>0)
    {
        ans+=m/n;
        if(m%n!=0)
            ans++;
    }
    cout<<ans<<" "<<ans2;
    return 0;
}
