#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn = 1e5+5;
ll n,m,k;
ll a[maxn];
int main()
{
    cin>>n>>m>>k;
    for (ll i=1; i<=m; i++ )
    {
        scanf("%lld",&a[i]);
    }
    ll ans = 0;
    ll mx = min(n,(ll)ceil(a[1]/(double)k)*k);
    ll cnt = 0;
    for (ll i=1; i<=m; i++ )
    {
        if(a[i]<=mx)
        {
            cnt++;
        }
        else
        {
            mx+=cnt;
            ans++;
            cnt=0;
            if(a[i]>mx)
            {
                mx=min(mx + (ll)ceil((a[i]-mx)/(double)k)*k,n);
            }
            if(a[i]<=mx)
            {
                cnt++;
            }
        }
    }
    if(cnt)
        ans++;
    cout<<ans;
    return 0;
}