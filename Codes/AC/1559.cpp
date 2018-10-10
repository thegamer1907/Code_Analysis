#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll s;
ll mid;
struct node
{
    ll id;
    ll cost;
}x[100010];
cmp(node &a,node &b)
{
    return a.cost+mid*a.id<b.cost+mid*b.id;
}
bool ok()
{
    sort(x+1,x+n+1,cmp);
    ll ans=0;
    for(int i=1;i<=mid;i++)
        ans+=x[i].cost+mid*x[i].id;
    if(ans<=s) return true;
    return false;

}
int main()
{
    scanf("%d%I64d",&n,&s);
    for(int i=1;i<=n;i++)
    {
            scanf("%I64d",&x[i].cost);
            x[i].id=i;
    }
    int l=1,r=n;
    int ans=0;
    while(l<=r)
    {
             mid=(l+r)>>1;
            if(ok()) l=mid+1,ans=mid;
            else r=mid-1;
    }
    sort(x+1,x+n+1,cmp);
    ll sum=0;
    mid=ans;
    for(int i=1;i<=ans;i++)
        sum+=x[i].cost+mid*x[i].id;
    cout<<mid<<" "<<sum<<endl;






   return 0;
}
