#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n, k;
int ack[1 << 4];

void yes() {
    puts("YES");
    exit(0);
}

void no() {
    puts("NO");
    exit(0);
}
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int mask = 0;
        for (int j = 0; j < k; j++) {
            int x;
            scanf("%d", &x);
            mask |= (x << j);
        }
        ack[mask]++;
    }
    if (ack[0]) yes();
    for (int mask_1 = 0; mask_1 < (1 << k); mask_1 ++) {
        for (int mask_2 = 0; mask_2 < (1 << k); mask_2 ++) {
            if (mask_1 & mask_2) continue;
            if (ack[mask_1] && ack[mask_2]) yes();
        }   
    }
    no();
    return 0;
}
