#include <cstdio>

int main() {
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    bool *good = new bool[n];
    for (int i = 0; i < n; ++i) {
        good[i] = true;
    }
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &a, &b);
        good[a - 1] = good[b - 1] = false;
    }
    for (int i = 0; i < n; ++i) {
        if (good[i]) {
            printf("%d\n", n - 1);
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    printf("%d %d\n", i + 1, j + 1);
                }
            }
            break;
        }
    }
    return 0;
}
