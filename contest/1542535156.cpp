#include<bits/stdc++.h>
using namespace std;
#define maxn 100010
#define ll long long
const ll INF=(1ll<<60);
ll dp[maxn],pre[maxn],sum;
int n,k;
int st=1,ed=1;
int a[maxn],cnt[maxn];
void sol(int tl,int tr,int l,int r)
{
    if(l>r)return ;
    int m=(l+r)>>1;
    int tm=tl;
    ll tmp=INF;
    for(int i=tl;i<=min(m-1,tr);i++)
    {
        while(st<i+1)cnt[a[st]]--,sum-=cnt[a[st]],st++;
        while(ed>m)cnt[a[ed]]--,sum-=cnt[a[ed]],ed--;
        while(st>i+1)st--,sum+=cnt[a[st]],cnt[a[st]]++;
        while(ed<m)ed++,sum+=cnt[a[ed]],cnt[a[ed]]++;
        if(pre[i]+sum<pre[tm]+tmp)tm=i,tmp=sum;
        //printf("%lld %lld\n",sum,tmp);
    }
    dp[m]=pre[tm]+tmp;
    //printf("%d: %d\n",m,tm);
    sol(tl,tm,l,m-1),sol(tm,tr,m+1,r);
}
main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)pre[i]=INF;
    cnt[a[1]]++;
    while(k--)
    {
        sol(0,n-1,1,n);
        for(int i=1;i<=n;i++)pre[i]=dp[i];
    }
    printf("%I64d\n",pre[n]);
    return 0;
}
