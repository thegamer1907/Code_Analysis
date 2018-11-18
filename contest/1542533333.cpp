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
int n, K, a[N], p[N], c[N];
ll dp[N], pd[N], lcost[N];
vi e[N];
void solve(int l, int r, int opl, int opr) {
//      dd(l), dd(r), dd(opl), de(opr);
        int m = (l + r) / 2, op = m;
        ll cost = lcost[m], pcost;
        rep(i, opl, min(m, opr) + 1) {
                if (dp[m] > pd[i - 1] + cost) {
                        dp[m] = pd[i - 1] + cost;
                        op = i, pcost = cost;
                }
                cost -= upper_bound(all(e[a[i]]), m) - e[a[i]].begin() - 1
                        - p[i];
        }
        if (l < m)
                solve(l, m - 1, opl, op);
        if (m < r) {
                rep(i, m + 1, r + 1) {
                        pcost += p[i] - (lower_bound(all(e[a[i]]), op) - e[a[i]].begin());
                        lcost[i] = pcost;
                }
                solve(m + 1, r, op, opr);
        }
}
int main() {
        scanf("%d%d", &n, &K);
        rep(i, 1, n + 1) {
                scanf("%d", a + i);
                p[i] = sz(e[a[i]]);
                e[a[i]].pb(i);
        }
        rep(i, 1, n + 1) dp[i] = INF;
        rep(j, 1, K + 1) {
                rep(i, 0, n + 1) pd[i] = dp[i], dp[i] = INF, c[a[i]] = 0;
                rep(i, 1, n + 1) lcost[i] = lcost[i - 1] + c[a[i]]++;
                solve(j, n, 1, n);
//              rep(i, 1, n + 1)
//                      printf("dp[%d][%d] = %lld\n", j, i, dp[i]);
        }
        printf("%lld\n", dp[n]);
        return 0;
}