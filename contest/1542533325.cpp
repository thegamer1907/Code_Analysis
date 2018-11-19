#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef double db;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(l);i<(r);++i)
#define per(i,l,r) for(int i=(r)-1;i>=(l);--i)
#define dd(x) cout << #x << " = " << x << ", "
#define de(x) cout << #x << " = " << x << endl
//-------
const int N = 1e5 + 7;
const ll INF = 1e15 + 7;
int n, K, a[N], c[N];
int L, R;
ll cost, dp[N], pd[N];
void go(int l, int r) {
        while (l < L) cost += c[a[--L]]++;
        while (R < r) cost += c[a[++R]]++;
        while (L < l) cost -= --c[a[L++]];
        while (r < R) cost -= --c[a[R--]];
}
void solve(int l, int r, int opl, int opr) {
        int m = (l + r) / 2, op = m;
        per(i, opl, min(m, opr) + 1) {
                go(i, m);
                if (dp[m] > pd[i - 1] + cost) {
                        op = i, dp[m] = pd[i - 1] + cost;
                }
        }
        if (l < m) solve(l, m - 1, opl, op);
        if (m < r) solve(m + 1, r, op, opr);
}
int main() {
        scanf("%d%d", &n, &K);
        rep(i, 1, n + 1) scanf("%d", a + i);
        rep(i, 1, n + 1) dp[i] = INF;
        rep(j, 1, K + 1) {
                rep(i, 0, n + 1) pd[i] = dp[i], dp[i] = INF, c[a[i]] = 0;
                L = 1, R = 0, cost = 0;
                solve(j, n, 1, n);
//              rep(i, 1, n + 1)
//                      printf("dp[%d][%d] = %lld\n", j, i, dp[i]);
        }
        printf("%lld\n", dp[n]);
        return 0;
}