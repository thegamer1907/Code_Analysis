#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int n, q, idx;
lli a[200000];
lli k, prev;

int main () {

    //freopen("0in.txt", "rt", stdin);
    //freopen("0out.txt", "wt", stdout);

    scanf("%d %d", &n, &q);
    for (int i = 0 ; i < n ; i++) {
        scanf("%I64d", &a[i]);
        if (i) a[i] += a[i-1];
    }
    prev = 0;
    for (int i = 0 ; i < q ; i++) {
        scanf("%I64d", &k);
        idx = upper_bound(a, a + n, k + prev) - a;
        if (idx == n) {
            printf("%d\n", n);
            prev = 0;
        }
        else {
            printf("%d\n", n - idx);
            prev += k;
        }
    }

    return 0;
}
