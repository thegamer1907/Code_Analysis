#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    long long a[n], sum = 0, mx = 0;
    for (int i = 0; i < n; ++i) scanf("%lld", &a[i]), sum += a[i], mx = max(mx, a[i]);
    long long ans = (long long) ceil(sum * 1.0 / (n - 1));
    if (ans < mx) ans = mx;
    printf("%lld\n", ans);
    return 0;
}
