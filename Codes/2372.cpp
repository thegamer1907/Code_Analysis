#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 5;
const int maxm = 1e7 + 5;
int vis[maxm], x[maxn], y[maxm], sum[maxm];
int main() {
    int n, q, up = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x[i]);
        vis[x[i]]++;
        up = max(up, x[i]);
    }
    for (int i = 2; i <= maxm - 5; i++) {
        if (y[i]) continue;
        for (int j = i; j <= maxm - 5; j += i) {
            if (vis[j]) sum[i] += vis[j];
            y[j] = 1;
        }
    }
    for (int i = 2; i <= maxm - 5; i++) sum[i] += sum[i - 1];
    scanf("%d", &q);
    while (q--) {
        int l, r;
        scanf("%d%d", &l, &r);
        if (r > maxm - 5) r = maxm - 5;
        if (l > maxm - 5) l = maxm - 5;
        printf("%d\n", sum[r] - sum[l - 1]);
    }
    return 0;
}
