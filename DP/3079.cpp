#include <stdio.h>
#include <algorithm>
using namespace std;
int s[3010], c[3010];
int l[3010], r[3010];
int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &s[i]);
    for (i = 0; i < n; i++) scanf("%d", &c[i]);
    for (i = 0; i < n; i++) l[i] = r[i] = 1<<29;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (s[j] < s[i]) l[i] = min(l[i], c[j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[j] > s[i]) r[i] = min(r[i], c[j]);
        }
    }
    int ans = 1<<30;
    for (i = 0; i < n; i++) {
        ans = min(ans, c[i] + l[i] + r[i]);
    }
    if (ans > (1<<29)) ans = -1;
    printf("%d\n", ans);
    return 0;
}
