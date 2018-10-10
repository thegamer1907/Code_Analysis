#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define MOD 1000000007
#define AAA ios::sync_with_stdio(false);cin.tie(NULL);
ll n,m,k,x,s,ans;
ll a[200005],b[200005],c[200005],d[200005];
bool check(ll mid,int i)
{
    if(b[i]+d[mid]>s) return 0;
    return 1;
}
int main()
{
    scanf("%I64d%I64d%I64d%I64d%I64d",&n,&m,&k,&x,&s);
    ans=n*x;
    for(int i=0;i<m;i++) scanf("%I64d",&a[i]);
    for(int i=0;i<m;i++) scanf("%I64d",&b[i]);
    for(int i=0;i<k;i++) scanf("%I64d",&c[i]);
    for(int i=0;i<k;i++)
    {
        scanf("%I64d",&d[i]);
        if(d[i]<=s) ans=min(ans,(n-c[i])*x);
    }
    a[m]=x;
    b[m]=0;
    for(int i=0;i<=m;i++)
    {
        if(b[i]>s) continue;
        ans=min(ans,n*a[i]);
        ll l=0,r=k-1,res=-1;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(check(mid,i))
            {
                l=mid+1;
                res=mid;
            }else r=mid-1;
        }
        if(res==-1) res=k+3;
        ans=min(ans,(n-c[res])*a[i]);
    }
    if(ans<0) ans=0;
    printf("%I64d",ans);
    return 0;
}
