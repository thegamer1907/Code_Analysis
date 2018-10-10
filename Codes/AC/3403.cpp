#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll mid,ll sum)
{
    ll ans=0;
    ll s=(sum+1)/2;
    while(sum>0)
    {
        ans+=min(mid,sum);
        sum-=min(mid,sum);
        sum-=sum/10;
    }
    if(ans>=s) return true;
    return false;
}
int main()
{
    ll n;
    scanf("%lld",&n);
    ll l=1;
    ll r=1e18+5ll;
    while(l<r)
    {
        ll mid=(l+r)>>1ll;
        if(check(mid,n)) r=mid;
        else l=mid+1;
    }
    printf("%lld\n",l);
}
