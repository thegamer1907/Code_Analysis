#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    int a[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        a[i] += a[i-1];
    }

    int res = 0;
    for (int i = 1, j = 1; i <= n && j <= n && i <= j;) {
        if (a[j] - a[i-1] <= t) {
            res = max(res, j - i + 1);
            j++;
        } else {
            if (i == j) j++;
            i++;
        }
    }
    printf("%d", res);
}