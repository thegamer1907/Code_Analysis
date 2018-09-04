#include <bits/stdc++.h>

const int N = 100100;

int a[N], sum[N];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sum[0] = a[0];
    for (int i = 1; i < n; ++i) {
        sum[i] = sum[i - 1] + a[i];
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        int q;
        scanf("%d", &q);
        printf("%d\n", std::lower_bound(sum, sum + n, q) - sum + 1);
    }
    return 0;
}