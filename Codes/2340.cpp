#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAXN 10000001
#define MOD 761238923
#define INF 10000000

int N;
int M[MAXN];
//unordered_map<int, int> M;
LL F[MAXN];
int B[MAXN];

int main() {
#ifdef OJ
    freopen("input.txt", "rt", stdin);
    //    freopen("output.txt", "wt", stdout);
#endif
    std::ios_base::sync_with_stdio(false);

    int mx = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        M[x]++;

        mx = max(mx, x);
    }

    for (int i = 0; i < MAXN; i++)
        B[i] = 1;

    for (int p = 2; p < MAXN; p++) {
        if (B[p]) {
            F[p] = M[p];
            for (int i = 2 * p; i < MAXN; i += p) {
                B[i] = 0;
                F[p] += M[i];
            }
        }
    }

    int Q;
    scanf("%d", &Q);
    //    printf("adsfadsf\n");

    for (int i = 1; i < MAXN; i++)
        F[i] += F[i - 1];

    while (Q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        if (l > mx) {
            printf("0\n");
            continue;
        }

        r = min(mx, r);
        printf("%lld\n", F[r] - F[l - 1]);
    }

    return 0;
}