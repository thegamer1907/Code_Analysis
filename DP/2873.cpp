#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i<= b; ++i)
#define FORD(i, a, b) for (int i = a; i>=b; --i)
#define REP(i, a) for (int i = 0; i<a; ++i)
#define N 2222
#define pp pair<int, int>
#define bit(S, i) (((S) >> i) & 1)
#define IO cin.tie(NULL);cout.tie(NULL);
#define taskname "414B"
using namespace std;

int n, k;
vector<int> e[N];
long long dp[N][N];
const long long MOD = 1e9 + 7;

int main() {
    //freopen(taskname".inp","r",stdin);
    //freopen(taskname".out","w",stdout);
    IO;
    scanf("%d %d", &n, &k);
    FOR(i, 1, n) {
        FOR(j, 1, sqrt(i)) if (i % j == 0) {
            e[i].push_back(j);
            if (j * j != i) e[i].push_back(i / j);
        }
    }
    FOR(i, 1, n) dp[1][i] = 1;
    FOR(kk, 2, k) {
        FOR(i, 1, n) {
            dp[kk][i] = 0;
            for (int j : e[i]) {
                dp[kk][i] += dp[kk - 1][j];
                if (dp[kk][i] >= MOD) dp[kk][i] -= MOD;
            }
        }
    }
    long long ans = 0;
    FOR(i, 1, n) {
        ans += dp[k][i];
        if (ans >= MOD) ans -= MOD;
    }
    printf("%lld", ans);
}
