#include <cstdio>
#include <vector>

int main() {
    int n, t, a;
    scanf("%d%d", &n, &t);
    std::vector<int> *mas = new std::vector<int>[n];
    for (int i = 0; i < n - 1; ++i) {
        scanf("%d", &a);
        mas[i + a].push_back(i);
    }
    bool *dp = new bool[t--];
    dp[0] = true;
    for (int i = 1; i <= t; ++i) {
        dp[i] = false;
        for (int j = 0; j < mas[i].size(); ++j) {
            if (dp[mas[i][j]]) {
                dp[i] = true;
                break;
            }
        }
    }
    if (dp[t]) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
