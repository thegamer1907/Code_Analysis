#include <cstdio>

long long n, p[100005], k;
int m;

int main() {
    scanf("%I64d%d%I64d", &n, &m, &k);
    int ans = 0;
    for (int i = 0; i < m; ++i) scanf("%I64d", p + i);
    long long tmp = 0, ti = 0;
    int pos = 0;
    while (pos < m) {
        int i;
        for (i = 0; i < k && pos + i < m && p[pos + i] <= tmp + k + ti; ++i);
        // printf("%I64d %d\n", tmp, i);
        pos += i;
        if (i) {
            ++ans;
            ti += i;
        } else {
            tmp += k + ti;
            ti = 0;
            // printf("%d %I64d %I64d\n", pos, p[pos], tmp);
            tmp += (p[pos] - tmp - 1) / k * k;
        }
    }
    printf("%d\n", ans);
    return 0;
}