#include <stdio.h>
#include <stdbool.h>
#define MAX_N 100000
#define MAX_K 4

bool f[1 << MAX_K];

int main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        int bit = 0;
        for (int j = 0; j < k; j++) {
            int t;
            scanf("%d", &t);
            bit |= t << j;
        }
        f[bit] = true;
    }
    if (f[0]) {
        printf("YES\n");
        return 0;
    }
    for (int i = 0; i < 1 << k; i++) {
        if (f[i]) {
            for (int j = 0; j < i; j++) {
                if (f[j]) {
                    if (!(i & j)) {
                        printf("YES\n");
                        return 0;
                    }
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}
