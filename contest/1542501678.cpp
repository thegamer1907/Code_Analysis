#include <bits/stdc++.h>
#define LL long long
using namespace std;

const int N = 1e5 + 123;
LL dp[22][N];
int rr,ll,cnt[N],a[N];
LL res;
void load() {
    #ifndef ONLINE_JUDGE
    freopen(".inp","r",stdin);
    freopen(".out","w",stdout);
    #endif // ONLINE_JUDGE
}

void calc(int l, int r) {
    if (l > r) return ;
    while (rr < r) res += cnt[a[++rr]]++;
    while (rr > r) res -= (--cnt[a[rr--]]);
    while (ll > l) res += cnt[a[--ll]]++;
    while (ll < l) res -= (--cnt[a[ll++]]);
}

void solve(int k, int l, int r, int bestL, int bestR) {
    if (l > r) return ;
    int mid = (l + r) >> 1;
    dp[k][mid] = 1e18;
    int x = bestL, y = min(bestR,mid-1), best = bestL;
    for (int i = x ; i <= y ; ++ i) {
        calc(i+1,mid);
        LL val = dp[k-1][i] + res;
        if (val < dp[k][mid])
            dp[k][mid] = val,
            best = i;
    }
    solve(k,l,mid-1,bestL,best);
    solve(k,mid+1,r,best,bestR);
}
void trungtt() {
    int n,k;
    scanf("%d%d",&n,&k);
    for (int i = 1 ; i <= n ; ++ i)
        scanf("%d",&a[i]);
    for (int i = 1 ; i <= n ; ++ i)
        dp[0][i] = 1e18;
    cnt[0] = 1;
    for (int i = 1 ; i <= k ; ++ i)
        solve(i,1,n,0,n);
    printf("%lld",dp[k][n]);
}


int main() {
    load();
    trungtt();
    return 0;
}
