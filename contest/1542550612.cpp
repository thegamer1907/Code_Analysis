#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
typedef long long int ll;
ll a[N],dp[22][N],vis[N];
ll inf = 1e18;
int cur,l,r;
void move(int l1,int r1)
{
    while(l>l1) {l--;cur+=vis[a[l]]++;}
    while(r<r1) {r++;cur+=vis[a[r]]++;}
    while(l<l1) {cur-=--vis[a[l]];l++;}
    while(r>r1) {cur-=--vis[a[r]];r--;}
}
void computeDP(int i,int jl,int jr,int kl,int kr)
{
    if(jr<jl) return;
    int bestk = -1,mid = (jl+jr)/2;
    ll an;
    dp[i][mid] = inf;
    int opt = min(kr,mid-1);
    for(int j=kl;j<=opt;j++)
    {
        move(j+1,mid);
        //cout<<j+1<<" "<<mid<<" "<<cur<<endl;
        an=dp[i-1][j]+cur;
        if(an<dp[i][mid])dp[i][mid] = an, bestk = j;
    }
    computeDP(i,jl,mid-1,kl,bestk);
    computeDP(i,mid+1,jr,bestk,kr);
}
int main()
{
    //freopen("inputf.txt","r",stdin);
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        dp[1][i]=dp[1][i-1]+vis[a[i]]++;
    }
    cur = dp[1][n],l = 1,r = n;
    for(int i=2;i<=k;i++) computeDP(i,i,n,i-1,n-1);
    printf("%lld",dp[k][n]);
    return 0;
}