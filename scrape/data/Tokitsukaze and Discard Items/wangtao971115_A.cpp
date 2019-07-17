#include<bits/stdc++.h>
#define ll long long
#define MAXN 100005
using namespace std;
ll a[MAXN];

int main()
{
    ll n,m,k;
    scanf("%lld%lld%lld",&n,&m,&k);
    for(ll i=1;i<=m;i++)
        scanf("%lld",&a[i]);
    sort(a+1,a+m+1);
    ll ans=1,q=0,z=0;
    for(ll i=2;i<=m;)
    {
        ll flag=0;
        z=1;
        while((a[i]-q)/k+((a[i]-q)%k>0)-((a[i-1]-q)/k+((a[i-1]-q)%k>0))==0&&i<=m)
        {
            flag=1;
            z++;
            i++;
        }
        if(i<=m)
        {
            q=q+z;
            ans++;
            i++;
        }
    }
    printf("%lld\n",ans);
    return 0;
}