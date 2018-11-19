#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define mk make_pair
#define pb push_back
#define sz(a) (int)(a).size()
#define rep(i, a, b) for (int i = (a), _b = (b); i < _b; ++i)
#define frep(i, a, b) for (int i = (a), _b = (b); i <= _b; ++i)

typedef complex<ld> cplex;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;

const int inf = 1000000007;
const ll linf  = 1ll * inf * inf;
const int N = 1000000 + 7;
const int multipleTest = 0;

int n, k;
int a[N];
ll dp[2][N];

int cnt[N];
int curL, curR;
ll cost = 0;

void move(int u, int v) {
    while (curL < u) {
        cost -= --cnt[a[curL++]];
    }
    while (curL > u) {
        cost += cnt[a[--curL]]++;
    }
    while (curR > v) {
        cost -= --cnt[a[curR--]];
    }
    while (curR < v) {
        cost += cnt[a[++curR]]++;
    }
}

int cur = 0, pre;



void calc(int l, int r, int otpL, int otpR) {
    if (l > r) return;
    int g = (l + r) >> 1;
    int optMid = -1;
    for (int i = otpL; i <= otpR; ++i) {
        if (i < g) {
            ::move(i + 1, g);
            if (dp[pre][i] + cost < dp[cur][g]) {
                dp[cur][g] = cost + dp[pre][i];
                optMid = i;
            }
        } else break;
    }
    if (l == r) return;
    calc(l, g - 1, otpL, optMid);
    calc(g + 1, r, optMid, otpR);
}

void solve() {
    cin >> n >> k;
    rep(i, 1, n + 1) scanf("%d", a + i);
    
    curL = 1; curR = 1; cnt[a[1]] = 1;
    
    rep(i, 1, n + 1) dp[cur][i] = linf;
    rep(j, 0, k) {
        pre = cur;
        cur ^= 1;
        frep(i, 0, n + 1) dp[cur][i] = linf;
        calc(1, n + 1, 0, n);
    }
    cout << dp[cur][n + 1];
}

int main() {
#ifdef _LOCAL_
    freopen("in.txt", "r", stdin);
    //    freopen("out.txt", "w", stdout);
#endif
    int Test = 1;
    if (multipleTest) {
        cin >> Test;
    }
    for(int i = 0; i < Test; ++i) {
        solve();
    }
#ifdef _LOCAL_
    cout<<"\n" << 1.0 * clock() / CLOCKS_PER_SEC <<endl;
#endif
}
