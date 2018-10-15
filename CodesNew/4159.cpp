#include <bits/stdc++.h>
using namespace std;
#define met(a, b) memset(a, b, sizeof(a))
const int maxn = 2e5+10;
const int inf = 0x3f3f3f3f;
typedef long long ll;
int n, q;
ll a[maxn], k[maxn];

int main() {
    while(~scanf("%d%d", &n, &q)) {
        for(int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            if(i != 0) a[i] += a[i - 1];
        }
        a[n] = inf;
        for(int i = 0; i < q; i++) scanf("%lld", &k[i]);
        ll ad = 0;
        for(int i = 0; i < q; i++) {
            ll all = k[i] + ad;
            int pos = lower_bound(a, a + n, all) - a;
            if(pos == n) {
                printf("%d\n", n);
                ad = 0;
            } else {
                if(a[pos] == all) {
                    if(pos == n - 1) {
                        printf("%d\n", n);
                        ad = 0;
                    } else {
                        ad = all;
                        printf("%d\n", n - pos - 1);
                    }
                } else {
                    if(pos == 0) {
                        ad = all;
                        printf("%d\n", n);
                    } else {
                        pos -= 1;
                        ad = all;
                        printf("%d\n", n - pos - 1);
                    }
                }
            }
        }
    }
    return 0;
}
