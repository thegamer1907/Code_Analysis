#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#define int long long
using namespace std;
const int inf = 1000000000000000000LL;
int n,k,i,a[200000],sum,dp[21][200000],d[200005],l,r;
void upd(int x, int delta){
    if(delta == 1)
        sum += d[x];
    else
        sum -= d[x] - 1;
    d[x] += delta;
}
int get(int L, int R){
    while(l < L)
        upd(a[l++], -1);
    while(l > L)
        upd(a[--l], 1);
    while(r < R)
        upd(a[++r], 1);
    while(r > R)
        upd(a[r--], -1);
    return sum;
}
void solve(int k, int l, int r, int bestL, int bestR){
    int m = (l + r) / 2, p = m, i;
    if(l > r) return;
    dp[k][m] = inf;
    for(i = bestL; i <= min(m - 1, bestR); i++){
        int res = dp[k - 1][i] + get(i + 1, m);
        if(dp[k][m] > res){
            dp[k][m] = res;
            p = i;
        }
    }
    if(l != r){
        solve(k, l, m - 1, bestL, min(p, m - 1));
        solve(k, m + 1, r, p, bestR);
    }
}
main(){
    //freopen("input.txt","r",stdin);
    ios_base :: sync_with_stdio(0);
    cin.tie();
    cin >> n >> k;
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    fill(dp[0], dp[0] + n, inf);
    l = 0; r = -1;
    for(i = 0; i < n; i++)
        dp[1][i] = get(0, i);
    for(i = 2; i <= k; i++){
        sum = 0; l = 0; r = -1;
        fill(d, d + n + 1, 0);
        solve(i, 0, n - 1, 0, n - 1);
    }
    cout << dp[k][n - 1];
    return 0;
}








