#include <bits/stdc++.h>
using namespace std;
int num[20];
int main() {
    int n, k, x, tmp;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        tmp = 0;
        for (int j = 0; j < k; j++) {
            scanf("%d", &x);
            tmp = tmp * 2 + x;
        }
        num[tmp]++;
        //printf("tmp = %d\n", tmp);
    }
    if (num[0] > 0) {
        printf("YES\n");
        return 0;
    }
    for (int i = 0; i < (1 << k); i++) {
        for (int j = 0; j < (1 << k); j++) {
            if ((i & j) != 0) continue;
            if (i == j) continue;
            if (num[i] > 0 && num[j] > 0) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
