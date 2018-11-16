#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    vector<int> *mas = new vector<int>[n];
    vector<int> *inv = new vector<int>[n];
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &a, &b);
        --a; --b;
        mas[a].push_back(b);
        inv[b].push_back(a);
    }
    long long **dp = new long long*[n], ans = 0LL;
    for (int i = 0; i < n; ++i) {
        dp[i] = new long long[n];
        for (int j = 0; j < n; ++j) {
            dp[i][j] = 0LL;
        }
    }
    for (int p = 0; p < n; ++p) {
        for (int i = 0; i < inv[p].size(); ++i) {
            for (int j = 0; j < mas[p].size(); ++j) {
                if (inv[p][i] != mas[p][j]) {
                    ++dp[inv[p][i]][mas[p][j]];
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            ans += dp[i][j] * (dp[i][j] - 1LL);
        }
    }
    printf("%I64d\n", ans / 2LL);
    return 0;
}
