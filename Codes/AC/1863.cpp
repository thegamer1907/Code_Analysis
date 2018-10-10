#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
const int N = 1e6+6;

ll lol(ll x,ll n,ll m)
{
    ll res=0;
    for(int i=1;i<=n;i++)res+=min(m,x/i);
    return res;
}

int main()
{
    long long int n,m,k;
    cin>>n>>m>>k;
    ll l=1,r=n*m+1,mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(lol(mid,n,m)<k)l=mid+1;
        else r=mid;
    }
    cout<<l<< "\n";


    return 0;
}
