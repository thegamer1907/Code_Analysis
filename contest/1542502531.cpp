#include <bits/stdc++.h>

using namespace std;

const int maxk = 25;
const int maxn = (int)1e5 + 5;
const int inf = 0x3f3f3f3f;

int n, k;
int a[maxn];
long long f[maxk][maxn];

int cnt[maxn], L, R;
long long current_cost;

inline void add(int x) {
    current_cost += cnt[a[x]]++;
}

inline void rem(int x) {
    current_cost -= --cnt[a[x]];
}

inline long long cost(int l, int r) {
    while (L > l) {
        add(--L);
    }
    while (R < r) {
        add(++R);
    }
    while (L < l) {
        rem(L++);
    }
    while (R > r) {
        rem(R--);
    }
    return current_cost;
}

void compute(int k, int l, int r, int pl, int pr) {
    if (l > r) {
        return;
    }
    int m = (l + r) / 2;
    int ptr = pl;
    for (int i = pl; i <= min(pr, m - 1); ++i) {
        if (f[k][m] > f[k - 1][i] + cost(i + 1, m)) {
            f[k][m] = f[k - 1][i] + cost(i + 1, m);
            ptr = i;
        }
    }
    compute(k, l, m - 1, pl, ptr);
    compute(k, m + 1, r, ptr, pr);
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", a + i);
    }
    L = 1, R = 0;
    memset(f, inf, sizeof(f));
    f[0][0] = 0;
    for (int i = 1; i <= k; ++i) {
        compute(i, 1, n, 0, n - 1);
    }
    printf("%I64d\n", f[k][n]);
    return 0;
}
