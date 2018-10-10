#include "bits/stdc++.h"
using namespace std;

const int N = 2e5 + 5;
int a[N], b[N], c[N], d[N];

int main() {
    int n, m, k, x, s;
    scanf("%d %d %d", &n, &m, &k);
    scanf("%d %d", &x, &s);
    for (int i = 0; i < m; ++i) scanf("%d", a + i);
    for (int i = 0; i < m; ++i) scanf("%d", b + i);
    for (int i = 0; i < k; ++i) scanf("%d", c + i);
    for (int i = 0; i < k; ++i) scanf("%d", d + i);
    a[m] = x; b[m] = 0;
    long long res = n * 1LL * x;
    for(int i = 0; i <= m; ++i) if(b[i] <= s) {
        int pos = upper_bound(d, d + k, s - b[i]) - d - 1;
        if(pos >= 0) {
            long long ans = max(0, (n - c[pos]))* 1LL * a[i];
            res = min(res, ans);
        }
        else res = min(res, n * 1LL * a[i]);
    }
    printf("%lld\n", res);
}