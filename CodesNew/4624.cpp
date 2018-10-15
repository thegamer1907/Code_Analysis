#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    sort(a, a + n);
    int j = n - 1, ans = n;
    for (int i = n / 2 - 1; i >= 0; --i) {
        if (a[i] * 2 <= a[j]) ans--, j--;
    }
    printf("%d\n", ans);
    return 0;
}
