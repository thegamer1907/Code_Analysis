#include<bits/stdc++.h>
#define LL long long
#define mk make_pair
using namespace std;

const int N = 2e5 + 7;
const int inf = 0x3f3f3f3f;

LL n, m, k, x, s;
LL a[N], b[N], c[N], d[N];
int main() {
    scanf("%lld%lld%lld%lld%lld", &n, &m, &k, &x, &s);
    LL ans = n * x;

    for(int i = 1; i <= m; i++)
        scanf("%lld", &a[i]);
    for(int i = 1; i <= m; i++)
        scanf("%lld", &b[i]);
    for(int i = 1; i <= k; i++)
        scanf("%lld", &c[i]);
    for(int i = 1; i <= k; i++)
        scanf("%lld", &d[i]);

    for(int i = 1; i <= m; i++) {
        if(b[i] > s) continue;
        int pos = upper_bound(d + 1, d + 1 + k, s - b[i]) - d - 1;
        ans = min(ans, a[i] * (n - c[pos]));
    }

    for(int i = 1; i <= k; i++) {
        if(d[i] > s) continue;
        ans = min(ans, (n - c[i]) * x);
    }
    printf("%lld\n", ans);
    return 0;
}
/*
*/