#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<ll>b(n),a(n);
    if(s[0]=='b')
        b[0]=1;
    else
        b[0]=0;
    for(ll i=1;i<s.length();i++)
        b[i]=b[i-1]+(s[i]=='b');
    ll dp1[n];
    for(ll i=0;i<s.length();i++)
    {
        if(b[i]<=k)
            dp1[i]=i+1;
        else
            dp1[i]=i-(ll)(lower_bound(b.begin(),b.end(),b[i]-k)-b.begin());
    }
    if(s[0]=='a')
        a[0]=1;
    else
        a[0]=0;
    for(ll i=1;i<s.length();i++)
        a[i]=a[i-1]+(s[i]=='a');
    ll dp2[n];
    for(ll i=0;i<s.length();i++)
    {
        if(a[i]<=k)
            dp2[i]=i+1;
        else
            dp2[i]=i-(ll)(lower_bound(a.begin(),a.end(),a[i]-k)-a.begin());
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
        {ans=max(ans,dp1[i]);}
    for(ll i=0;i<n;i++)
        {ans=max(ans,dp2[i]);}
    cout<<ans;
    return 0;
}
