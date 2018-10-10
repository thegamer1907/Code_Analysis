#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define ll __int64
struct node
{
    ll val,pos,b;
}a[1500000];
ll n,s,sum;
ll cmp(node a,node b)
{
    return (a.val+a.pos*a.b)<(b.val+b.pos*b.b);
}
ll Slove(ll mid)
{
    for(ll i=1;i<=n;i++)a[i].b=mid;
    sort(a+1,a+1+n,cmp);
    sum=0;
    for(ll i=1;i<=mid;i++)
    {
        sum+=a[i].val+a[i].pos*a[i].b;
        if(sum>s)return 0;
    }
    if(sum<=s)return 1;
    else return 0;
}
int main()
{
    while(~scanf("%I64d%I64d",&n,&s))
    {
        for(ll i=1;i<=n;i++)scanf("%I64d",&a[i].val),a[i].pos=i;
        ll l=0;
        ll r=n;
        ll ans=-1;
        ll ans2=-1;
        while(r-l>=0)
        {
            ll mid=(l+r)/2;
            if(Slove(mid)==1)
            {
                ans=mid;
                ans2=sum;
                l=mid+1;
            }
            else r=mid-1;
        }
        printf("%I64d %I64d\n",ans,ans2);
    }
}
