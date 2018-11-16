#include <bits/stdc++.h>

using namespace std;

const int N = 105;

int dp[N][2], n, a[N], f[N];

struct seg {
    int node[4 * N];
    void init (int i, int l, int r) {
        if (l == r) {
            node[i] = -1e9 - 2277;
            return;
        }

        int m = (l + r) >> 1;
        init(i << 1, l, m);
        init(i << 1 | 1, m + 1, r);
        node[i] = max(node[i << 1], node[i << 1 | 1]);
    }

    void update (int i, int l, int r, int pos, int val) {
        if (l == r) {
            node[i] = val;
            return;
        }

        int m = (l + r) >> 1;
        if (pos <= m) update(i << 1, l, m, pos, val);
        else update(i << 1 | 1, m + 1, r, pos, val);
        node[i] = max(node[i << 1], node[i << 1 | 1]);
    }

    int get (int i, int l, int r, int a, int b) {
        if (l > r || a > r || b < l) return -1e9 - 2277;
        if (a <= l && r <= b) return node[i];

        int m = (l + r) >> 1;
        return max(get(i << 1, l, m, a, b), get(i << 1 | 1, m + 1, r, a, b));
    }
} it;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) f[i] = f[i - 1] + (a[i] == 0);
    memset(dp, -0x3f, sizeof(dp)); dp[0][0] = 0; it.init(1, 0, n); it.update(1, 0, n, 0, dp[0][0] - f[0]);
    for (int i = 1; i <= n; i++) {
        dp[i][0] = dp[i - 1][0] + (a[i] == 1);
        dp[i][1] = dp[i - 1][1] + (a[i] == 1);
        dp[i][1] = max(dp[i][1], f[i] + it.get(1, 0, n, 0, i - 1));
        it.update(1, 0, n, i, dp[i][0] - f[i]);
    }

    printf("%d", dp[n][1]);
    return 0;
}
