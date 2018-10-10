#include<bits/stdc++.h>
#define read(x) scanf("%d",&x)
#define lread(x) scanf("%lld",&x)
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define mk make_pair
using namespace std;

typedef long long ll;
const int N=2e5+7;
const int inf=0x3f3f3f3f;
const ll INF=0x3f3f3f3f3f3f3f3f;

ll n,d;
ll sum[N];
struct node
{
    ll m,f;
    bool operator <(const node &rhs)const
    {
        return m<rhs.m;
    }
}w[N];
ll x[N];
int main()
{
    lread(n);  lread(d);
    for(ll i=1;i<=n;i++)
    {
        ll m,f;
        lread(m); lread(f);
        w[i].m=m;
        w[i].f=f;
    }
    sort(w+1,w+n+1);
    for(ll i=1;i<=n;i++)
        sum[i]=sum[i-1]+w[i].f;
    for(ll i=1;i<=n;i++)
        x[i]=w[i].m;
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        ll num2=w[i].m+d;
        ll pos2=lower_bound(x+1,x+n+1,num2)-x;
        pos2--;
        ans=max(ans,sum[pos2]-sum[i-1]);
    }
    printf("%lld\n",ans);
    return 0;
}
