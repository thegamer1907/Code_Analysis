#include <bits/stdc++.h>
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui32;
using namespace std;

int was[(1 << 5)];

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    was[0] = 1;
    for (int i = 0; i < n; i++) {
        vector<int> a(k, 0);
        int m = 0;
        for (int j = 0; j < k; j++) {
            scanf("%d", &a[j]);
            a[j] ^= 1;
            m |= (a[j] << j);
        }
        bool ok = false;
        for(int i = 0; i < (1 << k); i++) {
            if (!was[i])
                continue;
            if ((i | m) == (1 << k) - 1)
                ok = true;
        }
        if (ok) {
            printf("YES\n");
            return 0;
        }
        was[m] = 1;
    }
    printf("NO\n");
    return 0;
}