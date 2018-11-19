#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long LL;
const int maxn=1e5+10;
const long long INF=1e18+10;
int n,k;
LL ans;
int a[maxn];
LL cnt[maxn];
LL dp[21][maxn];
int l,r;
LL query(int l1,int r1)
{
    while(l>l1) ans+=cnt[a[--l]]++;
    while(l<l1) ans-=--cnt[a[l++]];
    while(r>r1) ans-=--cnt[a[r--]];
    while(r<r1) ans+=cnt[a[++r]]++;
    return ans;
}
void solve(int kk,int l,int r,int st,int ed)
{
    if(l>r) return;
    int mid=(l+r)>>1;
    int x;
    for(int i=st;i<=min(mid,ed);i++)
    {
        LL now=query(i,mid);
        if(dp[kk-1][i-1]+now<=dp[kk][mid])
        {
            dp[kk][mid]=dp[kk-1][i-1]+now;
            x=i;
        }
    }
    solve(kk,l,mid-1,st,x);
    solve(kk,mid+1,r,x,ed);
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    memset(cnt,0,sizeof(cnt));
    l=1,r=0;
    for(int i=0;i<=k;i++)
        for(int j=1;j<=n;j++)
            dp[i][j]=INF;
    ans=0;
    dp[1][0]=0;
    for(int i=1;i<=n;i++) dp[1][i]=query(1,i);
    //for(int i=1;i<=n;i++) {cnt[a[i]]++;dp[1][i]=dp[1][i-1]+cnt[a[i]];}
    for(int i=2;i<=k;i++)
        solve(i,1,n,1,n);
    printf("%lld\n",dp[k][n]);
}
