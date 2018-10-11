#include "cstdio"
#include "cstring"
#include "algorithm"
#include "cmath"
#include "vector"
#include "queue"
#include "map"

using namespace std;
typedef long long LL;
const int maxn = 1e5 + 10;

int main() {
    int n;
    scanf("%d", &n);
    LL minn = 2000000000;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        LL x;
        scanf("%lld", &x);
        LL x1 = max(0ll, x - i + 1);
        LL k = i;
        if (x1 % n == 0)k += x1;
        else k += (x1 / n + 1) * n;
        if (minn > k) {
            minn = k;
            ans = i;
        }

    }
    printf("%d\n", ans);
    return 0;
}
