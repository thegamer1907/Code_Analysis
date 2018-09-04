#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,k,l,r,mid;
    cin>>n>>m>>k;
    l=1,r=n*m;
    while(l<r)
    {
        mid=l+(r-l)/2;
        ll sum=0;
        for(int i=1;i<=n;i++)sum+=min(m,mid/i);
        if(sum<k)l=mid+1;
        else r=mid;
    }
    cout<<l;
}
