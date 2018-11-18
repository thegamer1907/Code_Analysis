#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i<= b; ++i)
#define FORD(i, a, b) for (int i = a; i>=b; --i)
#define REP(i, a) for (int i = 0; i<a; ++i)
#define DEBUG(x) { cout << #x << " = " << x << endl; }
#define Arr(A, l, r) { cerr << #A  << " = "; FOR(_, l, r) cerr << A[_] << ' '; cerr << endl; }
#define N 100100
#define pp pair<int, int>
#define next __next
#define prev __prev
#define __builtin_popcount __builtin_popcountll
#define bit(S, i) (((S) >> i) & 1)
#define IO ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define taskname
using namespace std;

int n, k, a[N], cnt[N];
long long dp[22][N], cost;
int ll, rr;
void Modify(int l, int r) {
    while (rr < r) cost += 2 * (cnt[a[++rr]]++);
    while (ll > l) cost += 2 * (cnt[a[--ll]]++);
    while (rr > r) cost -= 2 * (--cnt[a[rr--]]);
    while (ll < l) cost -= 2 * (--cnt[a[ll++]]);
}

void Compute(int i, int l, int r, int bestL, int bestR) {
    if (l > r) return;
    int m = (l + r) >> 1;
    dp[i][m] = 1e18;
    int x = bestL, y = min(m - 1, bestR), best = bestL;
    FOR(j, x, y) {
        Modify(j + 1, m);
        long long val = dp[i - 1][j] + cost / 2;
        if (val < dp[i][m]) {
            dp[i][m] = val;
            best = j;
        }
    }
    Compute(i, l, m - 1, bestL, best);
    Compute(i, m + 1, r, best, bestR);
}

int main() {
    #ifdef NERO
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    #endif //NERO
    IO;
    cin >> n >> k;
    FOR(i, 1, n) cin >> a[i];
    dp[0][0] = 0;
    FOR(i, 1, n) dp[0][i] = 1e18;
    ll = 1, rr = 0;
    FOR(i, 1, k) Compute(i, 1, n, 0, n);
    cout << dp[k][n];
}
