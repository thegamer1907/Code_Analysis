/**
    freopen("in.in", "r", stdin);
    freopen("my.out", "w", stdout);
*/

#include <cstdio>
#include <algorithm>

typedef long long LL;

inline bool check(LL k, LL n) {
    LL a = 0, b = 0;
    while(n) {
        a += std::min(k, n);
        n -= std::min(k, n);
        b += n / 10;
        n -= n / 10;
    }
    return a >= b;
}

int main() {
    LL n;
    scanf("%I64d", &n);

    LL l = 1, r = n / 2 + 1, mid;
    while(l < r) {
      
        mid = (l + r) >> 1;
        if(check(mid, n)) {
            r = mid;
        }
        else {
            l = mid + 1;
        }
    }
    printf("%I64d", r);
    return 0;
}
