#include <bits/stdc++.h>

using namespace std;

int n, k, prob[100100][5], num[100100];
bool app[1 << 5];

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int val = 0;
        for (int j = 0; j < k; j++) {
            scanf("%d", &prob[i][j]);
            if (prob[i][j])
                val += 1 << j;
        }
        app[val] = true;
        num[i] = val;
    }

    bool valid = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1 << 4; j++) {
            if (!app[j]) continue;

            bool aux = true;
            for (int k = 0; k < 4; k++)
                if ((num[i] & (1 << k)) && (j & (1 << k)))
                    aux = false;

            if (aux) valid = true;
        }
    }

    if (valid) printf("YES\n");
    else printf("NO\n");

    return 0;
}

