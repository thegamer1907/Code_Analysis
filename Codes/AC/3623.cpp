#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 0x7f7f7f7f7f7f7f7fll;
const int N = 200005;
int a[N], b[N], c[N], d[N];
int main() {
    int n, m, k, x, s, i, j;
    ll ans = inf;
    scanf("%d%d%d%d%d", &n, &m, &k, &x, &s);
    for(int i = 0; i < m; i++)
        scanf("%d", a + i);
    a[m] = x;
    for(int i = 0; i < m; i++)
        scanf("%d", b + i);
    b[m++] = 0;
    ++k;
    for(int i = 1; i < k; i++)
        scanf("%d", c + i);
    c[0] = 0;
    for(int i = 1; i < k; i++)
        scanf("%d", d + i);
    d[0] = 0;
    for(int i = 0; i < m; i++) {
        int j = upper_bound(d, d + k, s - b[i]) - d;
        if (!j)
            continue;
        ans = min(ans, 1ll * a[i] * (n - c[j - 1]));
    }
    printf("%lld", ans == inf ? -1 : ans);
    return 0;
}
