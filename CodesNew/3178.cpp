#include <bits/stdc++.h>
using namespace std;

#define N 300005

int n, k, pi, pj;
bool a[N];

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i ++) scanf("%d", &a[i]);
    for (int i = 1, j = 0, cnt = 0; i <= n; cnt -= !a[i++]) {
        while (j <= n && cnt <= k) cnt += !a[++j];
        if (pj - pi < j - i) pj = j, pi = i;
    }
    printf("%d\n", pj - pi);
    for (int i = 1; i <= n; i ++) printf("%d ", a[i] | (pi <= i && i < pj));
    return 0;
}
