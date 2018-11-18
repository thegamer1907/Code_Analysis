#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 1e5 + 10;

int n, k, l, r;
ll p;
int a[maxn], cnt[maxn];
ll f[maxn][22];

void load() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) scanf("%d", a + i);
}

void add(int i) { p += cnt[a[i]]; cnt[a[i]]++; }
void del(int i) { cnt[a[i]]--; p -= cnt[a[i]]; }

void setup(int lo, int hi) {
    while (r < hi) add(++r);
    while (r > hi) del(r--);
    while (l < lo) del(l++);
    while (l > lo) add(--l);
}

void solve(int k, int i, int j, int lo, int hi) {
    if (j < i) return;
    int m = (i + j) >> 1, u, v;
    setup(lo, m);
    f[m][k] = p + f[lo - 1][k - 1];
    v = lo;
    for (u = lo + 1; u <= hi && u <= m; ++u) {
        del(l++);
        if (p + f[u - 1][k - 1] < f[m][k]) {
            f[m][k] = p + f[u - 1][k - 1];
            v = u;
        }
    }
    solve(k, i, m - 1, lo, v);
    solve(k, m + 1, j, v, hi);
}

void process() {
    l = 1; r = 0;
    for (int i = 1; i <= n; ++i) f[i][0] = 1e18;
    for (int i = 1; i <= k; ++i) {
        setup(1, 0);
        solve(i, 1, n, 1, n);
    }
    printf("%lld\n", f[n][k]);
}

int main() {
  //  freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);

    load();
    process();

    return 0;
}
