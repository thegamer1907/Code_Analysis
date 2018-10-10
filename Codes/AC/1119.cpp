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
    ll l=1,r=1;
    ll ret=0,ans=0;
    while(r<n+1)
    {
        while(r<n+1 && w[r].m<w[l].m+d)
        {
            ret+=w[r].f;
            r++;
        }
        ans=max(ret,ans);
        if(r==n+1) break;
        while(l<r && w[r].m>=w[l].m+d)
        {
            ret-=w[l].f;
            l++;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
/*
5 100
0 7
11 32
99 10
46 8
87 54
*/
