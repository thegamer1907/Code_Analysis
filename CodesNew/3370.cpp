#include <cstdio>

int main() {
    int summax = 0, max = 0;
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
        int v;
        scanf("%d", &v);
        if (v > max) {
            summax += (v - max) * i;
            max = v;
        }
        else {
            summax += (max - v);
        }
    }
    printf("%d %d\n", (m <= summax) ? max : ((m-summax-1)/n + 1) + max, max + m);
    return 0;
}
