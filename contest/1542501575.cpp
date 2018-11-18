#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5+5;
using ll = long long;

int num[maxn],a[maxn],n,k,lx,rx;
ll dp[21][maxn],cost;
void GoTo(int l,int r)
{
    while(rx<r) cost += num[a[++rx]],num[a[rx]]++;
    while(rx>r) cost -= --num[a[rx]],rx--;
    while(lx>l) cost += num[a[--lx]],num[a[lx]]++;
    while(lx<l) cost -= --num[a[lx]],lx++;
}
void dfs(int p,int L,int R,int l,int r)
{
    if(l>r) return;
    int mid = (l+r)>>1;
    GoTo(L,mid);
    ll v = 1e18L;
    int pos;
    for(int i=L;i<=min(mid,R);i++) {
        GoTo(i,mid);
        if(dp[p-1][i-1] + cost <= v) {
            v = dp[p-1][i-1] + cost;
            pos = i;
        }
    }
    dp[p][mid] = v;
    dfs(p,L,pos,l,mid-1);
    dfs(p,pos,R,mid+1,r);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++) {
        dp[1][i] = dp[1][i-1] + num[a[i]];
        num[a[i]]++;
    }
    lx = 1,rx = cost = 0;
    memset(num,0,sizeof num);
    for(int i=2;i<=k;i++)
    {
         dfs(i,1,n,1,n);
    }
    cout<<dp[k][n]<<endl;
    return 0;
}
