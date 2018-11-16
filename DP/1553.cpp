#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;

int n;
int a[N], x[N];

void flp(int i, int j) {
    for (int k = i; k <= j; k++)
        a[k] = !a[k];
}

int main() {
    int ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            flp(i, j);
            ans = max(ans, accumulate(a, a + n, 0));
            flp(i, j);
        }
    }
    printf("%d\n", ans);
    return 0;
}