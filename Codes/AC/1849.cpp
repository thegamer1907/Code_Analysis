#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<queue>
#include<limits.h>
#include<string.h>
using namespace std;
typedef long long ll;

#define inf int(0x3f3f3f3f)
#define mod int(1e9+7)
#define pi acos(-1.0)
#define lson  root << 1
#define rson  root << 1 | 1

ll n,m,k;

ll num=LONG_MAX;

bool check(ll shu)
{
    ll ans=0;
    for(ll i=1;i<=n;i++)
        ans+=min(shu/i,m);
    //cout<<ans<<endl;
    if(ans>=k)
        return false;
    else
    {
        //if(ans==k)
            //num=min(num,shu);
        //cout<<num<<endl;
        return true;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m>>k;
    ll l=1;
    ll r=n*m;
    while(l<=r)
    {
        ll mid=(l+r)>>1;
        if(check(mid))
            l=mid+1;
        else
            r=mid-1;
        //cout<<num<<endl;
    }
    //cout<<num<<endl;
    cout<<l<<endl;
}
