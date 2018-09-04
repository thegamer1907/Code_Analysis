#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
const int N = 200000 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
int n, m, k, x, s;
int c[N], d[N];
pii a[N];

int main() {
    scanf("%d%d%d%d%d", &n, &m, &k, &x, &s);
    for(int i = 1; i <= m; i++) {
        scanf("%d", &a[i].second);
    }
    for(int i = 1; i <= m; i++) {
        scanf("%d", &a[i].first);
    }
    sort(a+1, a+m+1);
    a[0] = {0, x};
    for(int i = 1; i <= k; i++) {
        scanf("%d", &c[i]);
    }
    for(int i = 1; i <= k; i++) {
        scanf("%d", &d[i]);
    }
    LL ans = 1LL*n*x;
    int p = k;
    for(int i = 0; i <= m && a[i].first <= s; i++) {
        while(p && 0LL + a[i].first + d[p] > s) p--;
        ans = min(ans, 1LL*(n - c[p])*a[i].second);
    }
    printf("%lld\n", ans);
    return 0;
}
