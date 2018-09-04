#include <iostream>
#include <cstdio>
using namespace std;
typedef int mt;

#define rep(a, b, i) for(mt i = a; i < b; ++i)
#define repe(a, b, i) for(mt i = a; i <= b; ++i)
#define repd(a, b, i) for(mt i = a; i > b; --i)
#define repde(a, b, i) for(mt i = a; i >= b; --i)

#define N 100010
#define K 5

mt n, a[N], m = 2e9;

int main() {
    scanf("%d", &n);
    rep(0, n, i)
        scanf("%d", a + i), m = min(a[i], m);
    mt c = m / n;
    rep(0, n, i) a[i] -= c * n;
    for(mt i = 0, d = 0; ; i = (i + 1) % n, ++d) {
        if(a[i] - d <= 0) {
            printf("%d\n", i + 1);
            break;
        }
    }
    
    return 0;
}

