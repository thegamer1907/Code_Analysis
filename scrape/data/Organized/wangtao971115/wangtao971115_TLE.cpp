#include<bits/stdc++.h>
#define ll long long
#define MAXN 100005
using namespace std;
ll a[MAXN];

int main()
{
    ll n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    for(ll i=1;i<=m;i++)
        scanf("%lld",&a[i]);
    sort(a+1,a+m+1);
    ll ans=0,q=0,j;
    for(ll i=1;i<=m;)
    {
        ll kk=((a[i]-q)/k+((a[i]-q)%k>0))*k;
        ans++;
        ll tt=0;
        for(j=i;j<=m;j++)
        {
            if((a[j]-q)<=kk)
                tt++;
            else{
                break;
            }
        }
        q=q+tt;
        i=j;
    }
    printf("%d\n",ans);
    return 0;
}