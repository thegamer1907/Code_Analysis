#include <cstdio>
#include <cstring>
#include <cassert>

const int maxn = 2e5 + 100;

const int maxk = 22;

const long long oo = 8000000000000000ll;

int n, m, a[maxn], b[maxn];
long long cur, dp[maxk][maxn];

inline bool chkmin(long long &x, const long long &y) {
    return x > y ? x = y, 1 : 0;
}

inline void solve(long long *dp1, int l1, int r1, int mid1, long long *dp2, int l2, int r2, int mid2) {
    //[mid1 + 1, mid2]
    //printf("solve(%d, %d, %d\t%d, %d, %d)\n", l1, r1, mid1, l2, r2, mid2);
    long long &x = dp2[mid2];
    int rem, nl1, nl2, nr1, nr2, nmid1, nmid2;
    x = oo;
    for (int i = mid1; i >= l1; --i) {
        //printf("\t%d %d %I64d\n", i, b[a[i]], cur);
        if(chkmin(x, dp1[i] + cur)) {
            rem = i;
        }
        cur += b[a[i]];
        ++b[a[i]];
    }
    //printf("%d -> %d\n", rem, mid2);
    //[l1, mid2]
    nl2 = l2;
    nr2 = mid2 - 1;
    if(nl2 <= nr2) {
        nmid2 = nl2 + nr2 >> 1;
        nl1 = l1;
        nr1 = rem;
        nmid1 = (nr1 < nmid2 ? nr1 : nmid2);
        assert(!(nmid1 + 1 < l1));
        for (int i = l1; i <= nmid1; ++i) {
            --b[a[i]];
            cur -= b[a[i]];
        }
        //[nmid1 + 1, mid2]
        for (int i = nmid2 + 1; i <= mid2; ++i) {
            --b[a[i]];
            cur -= b[a[i]];
        }
        //[nmid1 + 1, nmid2]
        solve(dp1, nl1, nr1, nmid1, dp2, nl2, nr2, nmid2);
        for (int i = nmid2 + 1; i <= mid2; ++i) {
            cur += b[a[i]];
            ++b[a[i]];
        }
        for (int i = l1; i <= nmid1; ++i) {
            cur += b[a[i]];
            ++b[a[i]];
        }
        //[l1, mid2]
    }
    nl2 = mid2 + 1;
    nr2 = r2;
    if(nl2 <= nr2) {
        nmid2 = nl2 + nr2 >> 1;
        nl1 = rem;
        nr1 = r1;
        nmid1 = (nr1 < nmid2 ? nr1 : nmid2);
        for (int i = mid2 + 1; i <= nmid2; ++i) {
            cur += b[a[i]];
            ++b[a[i]];
        }
        //[l1, nmid2]
        assert(!(nmid1 + 1 < l1));
        for (int i = l1; i <= nmid1; ++i) {
            --b[a[i]];
            cur -= b[a[i]];
        }
        //[nmid1 + 1, nmid2]
        solve(dp1, nl1, nr1, nmid1, dp2, nl2, nr2, nmid2);
        for (int i = l1; i <= nmid1; ++i) {
            cur += b[a[i]];
            ++b[a[i]];
        }
        for (int i = mid2 + 1; i <= nmid2; ++i) {
            --b[a[i]];
            cur -= b[a[i]];
        }
    }
    //[l1, mid2]
    for (int i = l1; i <= mid1; ++i) {
        --b[a[i]];
        cur -= b[a[i]];
    }
    //[mid1 + 1, mid2]
    return;
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", a + i);
        dp[1][i] = dp[1][i - 1] + b[a[i]];
        ++b[a[i]];
    }
    memset(b + 1, 0, n << 2);
    //for (int j = 1; j <= n; ++j) {
        //printf("%I64d ", dp[1][j]);
    //}
    //puts("");
    for (int i = 1; i < m; ++i) {
        solve(dp[i], 1, n, 1 + n >> 1, dp[i + 1], 1, n, 1 + n >> 1);
        //for (int j = 1; j <= n; ++j) {
            //printf("%I64d ", dp[i + 1][j]);
        //}
        //puts("");
    }
    printf("%I64d\n", dp[m][n]);
    return 0;
}
