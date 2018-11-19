#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f1(i, a, b) for (int i = a; i <= b; i ++)
#define f0(i, a, b) for (int i = a; i < b; i ++)
#define N 100005
#define K 22
void chkmin(int &a, int b) { if (a > b) a = b;}
void chkmax(int &a, int b) { if (a < b) a = b;}

const ll linf = 2e18 + 10;
int a[N], p[N], n, k, now, u, v;
ll dp[2][N], g;
int nl, nr, gs[N];

ll calc(int l, int r) {
    while (nr < r) g += gs[a[++ nr]] ++;
    while (nl > l) g += gs[a[-- nl]] ++;
    while (nr > r) g -= -- gs[a[nr --]];
    while (nl < l) g -= -- gs[a[nl ++]];
    return g;
}

int gunc(int p, int l, int r) {
    int up = min(p, r), res;
    dp[v][p] = linf;
    f1(i, l, up) {
        if (dp[v][p] > dp[u][i-1] + calc(i, p)) {
            dp[v][p] = dp[u][i-1] + calc(i, p);
            res = i;
        }
    }
    return res;
}

void func(int L, int R, int l, int r) {
	if (L > R) return;
	int mid = L + R >> 1;
    int k = gunc(mid, l, r);
    func(L, mid - 1, l, k);
    func(mid + 1, R, k, r);
    return;
}

int main() {
	scanf("%d %d", &n, &k);
	f1(i, 1, n) scanf("%d", &a[i]);
    nl = 1, nr = 0;
    u = 0, v = 1;
    f1(i, 1, n) dp[u][i] = linf; dp[u][0] = 0;
    f1(i, 1, k) {
        func(1, n, 1, n);
        swap(u, v);
    }
    printf("%I64d\n", dp[u][n]);
}
