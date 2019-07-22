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
        for (i = 0; i < k && pos + i < m; ++i) if (p[pos + i] > tmp + k + ti) break;
        // printf("%I64d %d\n", tmp, i);
        if (i) {
            ++ans;
            ti += i;
        } else {
            tmp += k + ti;
            ti = 0;
        }
        pos += i;
    }
    printf("%d\n", ans);
    return 0;
}