#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
bool f(ll k)
{
    ll sum=0;
    ll x=n;
    while(x)
    {
        sum+=min(x,k);
        x-=min(x,k);
        x-=x/10;
    }
    return sum>=(n+1)/2;
}

ll solve(ll l,ll r)
{
    if(l==r) return l;
    if(l==r-1)
    {
        if(f(l)) return l;
        return r;
    }
    ll mid=(l+r)/2;
    if(f(mid)) return solve(l,mid);
    return solve(mid,r);
}

int main()
{
    while(cin>>n) printf("%lld\n",solve(1,n));
}
