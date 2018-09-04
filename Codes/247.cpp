#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int inp[n + 1];
    inp[0] = 0;
    for (int i = 1; i <= n; i++)
        scanf("%d", &inp[i]);
    for (int i = 2; i <= n; i++)
        inp[i] += inp[i - 1];

    int q, k = 0;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        scanf("%d", &k);
        printf("%d\n", (int)(lower_bound(inp, inp + n + 1, k) - inp));
    }

    return 0;
}
