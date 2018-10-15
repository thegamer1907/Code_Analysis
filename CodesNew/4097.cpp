#include <stdio.h>
long long a[200010];
int main() {
    int n, m, i, l, r, z;
    long long s = 0, x;
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++) {
        scanf("%I64d", &a[i]);
        a[i] += a[i - 1];
    }
    while (m--) {
        scanf("%I64d", &x);
        s += x;
        if (s >= a[n]) {
            printf("%d\n", n);
            s = 0;
            continue;
        }
        l = 0, r = n + 1;
        while (l + 1 < r) {
            z = (l + r) / 2;
            if (s >= a[z]) l = z;
            else r = z;
        }
        printf("%d\n", n - l);
    }
    return 0;
}
