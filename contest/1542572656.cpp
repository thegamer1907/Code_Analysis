#include <bits/stdc++.h>
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui32;
const long long INFLL = 1e18;
using namespace std;

struct vertex {
    vector<pair<int, int> > vec;
    ll ans;
};

const int MAXN = 100000;
const int MAXK = 20;
int a[MAXN + 1];
ll dp[MAXK + 1][MAXN + 1];
ll curAns = 0;
int cnt[MAXN + 1], L, R;

void upd(int x, int type) {
    if (x == 0)
        return;
    curAns -= (ll)cnt[x] * (cnt[x] - 1) / 2;
    cnt[x] += type;
    curAns += (ll)cnt[x] * (cnt[x] - 1) / 2;
}

void change(int l, int r) {
    while (R + 1 <= r) {
        R++;
        upd(a[R], 1);
    }
    while (L < l) {
        upd(a[L], -1);
        L++;
    }
    while (L - 1 >= l) {
        L--;
        upd(a[L], 1);
    }
    while (R > r) {
        upd(a[R], -1);
        R--;
    }
}

void calc(int k, int l, int r, int lans, int rans) {
    if (l > r)
        return;
    int m = (l + r) / 2;
    int pos = -1;
    for (int best = lans; best < min(rans + 1, m); best++) {
        change(best + 1, m);
        if (dp[k][m] > dp[k - 1][best] + curAns) {
            pos = best;
            dp[k][m] = dp[k - 1][best] + curAns;
        }
    }
    calc(k, l, m - 1, lans, min(pos, m - 1));
    calc(k, m + 1, r, pos, rans);
}

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= k; i++)
        for (int j = 0; j <= n; j++)
            dp[i][j] = INFLL;
    dp[0][0] = 0;
    for (int l = 1; l <= k; l++) {
        curAns = 0;
        L = R = 0;
        memset(cnt, 0, sizeof(cnt));
        calc(l, 1, n, 0, n - 1);
    }
    cout << dp[k][n] << "\n";
    return 0;
}