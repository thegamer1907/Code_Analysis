#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m,n;
ll chck (ll op)
{
    ll i,ans=0;
    for (i=1;i<=m;i++)
    {
        ll op2 = op/i;
        ans+=min(op2,n);
    }
    return ans;
}
ll bsrch (ll strt,ll ed,ll k)
{
    ll ans;
    while (strt<=ed){
        ll mid=(strt+ed)/2;
        ll op = chck (mid);
        if (op>=k)
            ans=mid,ed=mid-1;
        else
            strt=mid+1;
    }
    return ans;
}
int main()
{
    ll i,j,k,l;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    cout<<bsrch (1,1e12,k)<<'\n';

    return 0;
}
