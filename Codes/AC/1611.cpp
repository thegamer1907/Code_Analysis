#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<r;i++)
#define put(x) cout<<#x<<" = "<<x<<endl;
typedef long long num;
typedef long double lod;
const int maxn=1e5+10;
using namespace std;

num n,S,k,cost[maxn],a[maxn];

num check(num ans)
{
    rep(i,0,n)
    {
        cost[i]=a[i]+(i+1)*ans;
    }
    sort(cost,cost+n);
    num mn=0;
    rep(i,0,ans)
    {
        mn+=cost[i];
    }
    return mn;
}

int BS(int l,int r)
{
    if(r-l==1) return l;
    int mid=(l+r)/2;
    if(check(mid)>S)
    {
        return BS(l,mid);
    }else
    {
        return BS(mid,r);
    }
}



int main()
{
    cin>>n>>S;
    rep(i,0,n) cin>>a[i];
    int ans=BS(0,n+1);
    cout<<ans<<" "<<check(ans);
}

