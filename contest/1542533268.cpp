#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAXN = 100005;
const int MAXK = 25;

int n, k;
int a[MAXN];
int cnt[MAXN];
int first, last;
long long total;
long long f[MAXK][MAXN];


long long cost(int l, int r) {
    while (l < first) {
        total += cnt[a[--first]]++;
    }
    while (last < r) {
        total += cnt[a[++last]]++;
    }
    while (first < l) {
        total -= --cnt[a[first++]];
    }
    while (r < last) {
        total -= --cnt[a[last--]];
    }
    return total;
}

void divide(int i, int l, int r, int lower, int upper) {
    if (l > r) {
        return;
    }
    int m = (l + r) / 2;
    int opt = m;
    for (int pos = max(lower, i); pos <= min(m, upper); ++pos) {
        long long tmp = f[i - 1][pos - 1] + cost(pos, m);
        if (f[i][m] > tmp) {
            f[i][m] = tmp;
            opt = pos;
        }
    }
    divide(i, l, m - 1, lower, opt);
    divide(i, m + 1, r, opt, upper);
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", a + i);
    }
    memset(f, INF, sizeof(f));
    f[0][0] = 0;
    for (int i = 1; i <= k; ++i) {
        memset(cnt, 0, sizeof(cnt));
        first = 1, last = total = 0;
        divide(i, 1, n, 1, n);
    }
    printf("%I64d", f[k][n]);
    return 0;
}