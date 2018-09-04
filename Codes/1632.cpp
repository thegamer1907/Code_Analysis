#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define P pair<ll,ll>
#define pb push_back
#define ll long long
#define db double

const int maxn=1e6;

ll n,s;
vector<P>v(maxn);
ll a[maxn];

ll check(ll x)
{
    ll ans=0;
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++)
    {
        a[i]=v[i].f+v[i].s*x;
    }
    sort(a,a+n);
    for(int i=0;i<x;i++)ans+=a[i];
    return ans;
}

int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        cin>>v[i].f;
        v[i].s=i+1;
    }
    ll l=0,r=n;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(check(mid)<=s)l=mid+1;
        else r=mid-1;
    }
    cout<<r<<" "<<check(r)<<endl;
    return 0;
}