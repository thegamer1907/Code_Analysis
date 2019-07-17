#include <bits/stdc++.h>
#define ll long long
using namespace std;
int m,t,res;
long long n,K,a[100001];
map <long long,int> s;
void up(long long k)
{
    while(k<=n)
    {
        s[k]++;
        k+=k&-k;
    }
}
int get(long long k)
{
    int ans=0;
    while(k>=1)
    {
        ans+=s[k];
        k-=k&-k;
    }
    return ans;
}
int tim(int l,int r)
{
    int mid,ans;
    long long x,tt;
    tt=0;
    ans=l;
    x=1ll*(a[l]-get(a[l]));
    if(x%K==0) x--;
    while(l<=r)
    {
        mid=(l+r)/2;
        tt=1ll*(a[mid]-get(a[mid]));
        if(tt%K==0) tt--;
        if(tt/K > x/K) r=mid-1;
        else if(tt/K < x/K) l=mid+1;
        else
        {
            ans=mid;
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
#endif // LOCAL
    cin>>n>>m>>K;
    for(int i=1; i<=m; i++) cin>>a[i];
    int i;
    i=1;
    while(i<=m)
    {
        res++;
        t=tim(i,m);
        while(i<=t)
        {
            up(a[i]);
            i++;
        }
    }
    cout<<res;
}