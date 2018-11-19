#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for (int i = (a); i < (b); i++)

#define N 123456
int n, k, a[N];
long long dp[21][N], cnt[N], cur;
void add(int v) {
    cur += cnt[v]; cnt[v]++;
}
void rem(int v) {
    cnt[v]--; cur -= cnt[v];
}
void slv(int lay, int l, int r, int ll, int rr) {
    if (l > r) return;
//    printf("slv (%d %d) srch (%d %d) init %lld\n", l, r, ll, rr, cur);
    int m = (l+r)/2;
    for (int j = r; j >= m; j--) if (j < n && j >= rr) rem(a[j]); 
    int optp;
    long long opt = 1ll<<62;
    for (int j = rr; j >= ll; j--) {
        if (j < m) {
            long long adv = dp[lay][j] + cur;
            if (adv < opt) {
                dp[lay+1][m] = adv;
                opt = adv;
                optp = j;
            }
        }
        if (j > ll && j-1 <= m-1) add(a[j-1]);
    }
    fo(j,ll,optp) if (j <= m-1) rem(a[j]);
    slv(lay, l, m-1, ll, optp);
    fo(j,optp,rr) if (j <= m-1) rem(a[j]);
    fo(j,m,r+1) if (j >= rr && j < n) add(a[j]);
    slv(lay, m+1, r, optp, rr);
}
int main() {
    scanf("%d %d", &n, &k);
    fo(i,0,n) scanf("%d", a+i);
    fo(i,1,n) dp[0][i] = (1ll << 62);
    fo(i,1,k+1) dp[i][0] = (1ll << 62);

    fo(i,0,k) {
        cnt[a[n-1]] = 1;
        slv(i,1,n,0,n-1);
        fo(j,0,n+1) cnt[j] = 0;
        cur = 0;
    }
 //   fo(i,0,k+1) fo(j,0,n+1) printf("%d %d %lld\n", i, j, dp[i][j]);
    printf("%lld\n", dp[k][n]);

    return 0;
}
