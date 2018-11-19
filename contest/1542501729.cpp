#include <iostream>
#include <cstring>
using namespace std;
typedef long long LL;
const int N = 100000 + 10;
const LL INF = 1e12;
int n,k,a[N],sum[N];
LL dp[22][N],now;
void solve(int l,int r,int L,int R,LL v){
    if(l>r) return;
    int mid=(l+r)>>1;
    int bstpos; LL mx=INF;
    // [L,l-1]
    for(int i=l;i<=mid;i++) {
        v += sum[a[i]], sum[a[i]] ++;
    }
    // [L,mid]
    for(int i=L;i<=R&&i<=mid;i++) {
        if(dp[now-1][i-1]+v<=mx) {
            mx=dp[now-1][i-1]+v; bstpos=i;
        }
        sum[a[i]] --; v -= sum[a[i]];
    }
    dp[now][mid] = mx;
    for(int i=L;i<=R&&i<=mid;i++) v += sum[a[i]]++;
    for(int i=l;i<=mid;i++) v -= -- sum[a[i]];
    // [L,l-1]
    solve(l,mid-1,L,bstpos,v);

    for(int i=l;i<=mid;i++) v += sum[a[i]]++;
    for(int i=L;i<bstpos;i++) v -= --sum[a[i]];

    // [bstpos,mid]
    solve(mid+1,r,bstpos,R,v);
    for(int i=L;i<bstpos;i++) v += sum[a[i]]++;
    for(int i=l;i<=mid;i++) v -= --sum[a[i]];
}
int main() {
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){ 
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        dp[1][i]=dp[1][i-1]+sum[a[i]];
        sum[a[i]]++;
    }
    for(int i=2;i<=k;i++){
        memset(sum,0,sizeof(sum));now=i;
        solve(i,n,i,n,0);
    }
    cout<<dp[k][n]<<endl;
}