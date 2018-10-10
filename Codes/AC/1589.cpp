#include <iostream>
#include <cstring>
#include <algorithm>
#define INF 0x7f7f7f7f
#define ll long long
using namespace std;
ll n,m;
const int maxn = 1000005;
ll a[maxn],b[maxn];
ll check(ll k)
{
    for(ll i=1;i<=n;i++)
    {
        b[i] = a[i]+i*k;
    }
    sort(b+1,b+n+1);
    ll sum = 0;
    for(ll i=1;i<=k;i++)
    {
        sum+=b[i];
    }
    return sum;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll l = 0,r = n;
    while(l<r)
    {
        //cout<<1<<endl;
        ll mid = (l+r+1)/2;
        if(check(mid) <= m) l = mid;
        else r = mid-1;
    }
    cout<<l<<" "<<check(l)<<endl;
    return 0;
}
