#include <bits/stdc++.h>
using namespace std;

int show[100];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 1; i <= n; i++) {
        for (int j = 0, x = 0; j < k; j++) {
            int val;
            scanf("%d", &val);
            x += (val << j);
            if (j == k - 1) show[x] = 1;
        }
    }

    for (int i = 0; i < (1 << k); i++) {
        for (int j = 0; j < (1 << k); j++) {
            if ((i & j) == 0 && show[i] && show[j]) {
                puts("YES");
                return 0;
            }
        }
    }

    puts("NO");
    return 0;
}