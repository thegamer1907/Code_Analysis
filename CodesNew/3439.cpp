#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define lp for(ll i=1; i<=n; i++)
#define lp2 for(ll j=0; j<m; j++)
#define lps for(ll k=0; k<len; k++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,mx=0,ans=0;
    cin>>n>>m;
    ll a[10005];
    lp{
        cin>>a[i];
        ans+=a[i];
        mx=max(mx,a[i]);
    }
    ll k=mx;
    ans+=m;mx+=m;
    ll mod=ans%n;
    ans/=n;
    if(mod!=0)
        ans+=1;
    ans=max(ans,k);
    cout<<ans<<" "<<mx<<endl;
}
