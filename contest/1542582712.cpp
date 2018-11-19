#include <bits/stdc++.h>

using namespace std;

int res [16];

int main(void) {

    int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 0; i < n; i++) {
        int val = 0;
        for (int j = 0; j < k; j++) {
            int bit = 0;
            scanf("%d", &bit);
            val |= bit << j;
        }
        res[val]++;
    }

    for (int i = 0; i < (1 << k); i++) {
        if (!res[i]) continue;
        for (int j = 0; j < (1 << k); j++) {
            if ((i & j) == 0) {
                if (res[j]) {
                    puts("YES");
                    return 0;
                }
            }
        }
    }

    puts("NO");

    return 0;
}