#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, k;
bool check(ll x)
{
    ll ans=0;
    for (int i=1;i<=n;i++)
    {
        ll res=min(i*m,x);
        ans+=res/i;
    }
    return ans<k;
}
int main()
{
    scanf("%lld%lld%lld",&n,&m,&k);
    ll r=n*m, l=1;
    while(l<r)
    {
        ll mid =(l+r)>>1;
        if (check(mid)) l=mid+1;
        else r=mid;
    }
    ll ans=r;
    printf("%lld\n",ans);
    return 0;
}
