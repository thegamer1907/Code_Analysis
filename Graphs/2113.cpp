#include <cstdio>

const int INF = 1000000000;

int main() {
    int n, m, a;
    scanf("%d%d", &n, &m);
    int *dp = (new int[100000] - 1), *mas = new int[100000], k = 1, beg = 0;
    for (int i = 1; i <= 100000; ++i) {
        dp[i] = INF;
    }
    dp[n] = 0;
    mas[0] = n;
    while (beg < k) {
        a = mas[beg++];
        if (a > 1 && dp[a - 1] == INF) {
            dp[a - 1] = dp[a] + 1;
            mas[k++] = a - 1;
        }
        if ((a << 1) <= 100000 && dp[a << 1] == INF) {
            dp[a << 1] = dp[a] + 1;
            mas[k++] = (a << 1);
        }
    }
    printf("%d\n", dp[m]);
}
