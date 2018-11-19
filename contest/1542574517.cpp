#include <bits/stdc++.h>
#define N 100006
#define mod 1000000007
#define MX (60 * 60 * 12)
#define oo 2000000000
#define noo -2000000000
using namespace std;
int h, s, t1, t2, a[N][5], n, k;
bool m[100005][4][4][4][4][4];
bool d[100005][4][4][4][4][4];

bool possible(int i, int x1, int x2, int x3, int x4, int s) {

    if (s >= 5) {
        return 0;
    }
    if (s > 0) {
        int mx = max(x1, x2);
        mx = max(mx, x3);
        mx = max(mx, x4);
        if (mx <= s / 2)
            return 1;
    }
    if (i >= n)
        return 0;
    bool &ret = m[i][x1][x2][x3][x4][s];
    if (d[i][x1][x2][x3][x4][s])
        return ret;
    d[i][x1][x2][x3][x4][s] = 1;
    bool res = possible(i + 1, x1, x2, x3, x4, s);
    res = possible(i + 1, x1 + a[i][0], x2 + a[i][1], x3 + a[i][2], x4 + a[i][3], s + 1) || res;
    return ret = res;
}

int main() {
    memset(m, -1, sizeof (m));
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++)
            scanf("%d", &a[i][j]);
    }
    printf(possible(0, 0, 0, 0, 0, 0) ? "YES\n" : "NO\n");
    return 0;
}
