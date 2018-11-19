#include <bits/stdc++.h>

#define fr first
#define sc second

using namespace std;
const double PI = acos(-1);
const int NMAX = 1e7, MMAX = 1e9;
typedef unsigned long long u64;
typedef long long ll;

char anf[30];
string getString() {
    scanf(" %s ", anf);
    return string(anf);
}
int cn[16];

int main() {
    #ifdef HOME
        freopen("input.txt", "r", stdin);
    #else
//        freopen("numrecovery.in", "r", stdin);
//        freopen("numrecovery.out", "w", stdout);
    #endif
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        int num = 0;
        for (int j = 0; j < k; ++j) {
            int b;
            scanf("%d", &b);
            if (b) {
                num |= (1 << j);
            }
        }
        cn[num]++;
    }
    if (cn[0]) {
        puts("YES");
        return 0;
    }
    for (int i = 1; i < 16; ++i) {
        if (cn[i] > 0) {
            for (int mask = 0; mask < 16; ++mask) {
                if (cn[(~i) & mask] > 0) {
                    puts("YES");
                    return 0;
                }
            }
        }
    }
    puts("NO");
}
