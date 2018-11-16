#include <cstdio>
#include <algorithm>

bool check(int a, int b) {
    return ((a - b >= -1) && (a - b <= 1));
}

int main() {
    int n, m;
    scanf("%d", &n);
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int *b = new int[m];
    for (int i = 0; i < m; ++i) {
        scanf("%d", &b[i]);
    }
    std::sort(a, a + n);
    std::sort(b, b + m);
    int x = 0, y = 0, ans = 0;
    while (x < n && y < m) {
        if (check(a[x], b[y])) {
            ++ans;
            ++x;
            ++y;
        }
        else if (a[x] <= b[y]) {
            ++x;
        }
        else {
            ++y;
        }
    }
    printf("%d\n", ans);
    return 0;
}
