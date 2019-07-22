#include <bits/stdc++.h>
#define ll long long
using namespace std;
int m,t,res;
long long n,K,a[100001];
int tim(int k,int l,int r)
{
    int mid,ans;
    long long x,tt;
    tt=0;
    ans=l;
    x=1ll*(a[l]-k);
    if(x%K==0) x--;
    while(l<=r)
    {
        mid=(l+r)/2;
        tt=1ll*(a[mid]-k);
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
        t=tim(i-1,i,m);
        i=t+1;
    }
    cout<<res;
}