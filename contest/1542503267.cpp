#include <bits/stdc++.h>

using namespace std;

int const N = 1e5 + 4;
int const NN = 5;

int a[N][NN], ok[NN];
int mask[N], n, m;

int main()
{
   // freopen("inp.txt", "r", stdin);
    cin >> n >> m;
    for (int j = 1; j <= m; j++)
        ok[j] = 1;

    int maxzero = 0;
    for (int i = 1; i <= n; i++) {
        int val = 0, cnt = 0;
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            ok[j] &= a[i][j];
            cnt += a[i][j] == 0;
            val |= (a[i][j] << (j - 1));
        }
        if (cnt == 2)
            mask[val] = 1;
        maxzero = max(maxzero, cnt);
    }

    int sum = 0;
    for (int j = 1; j <= m; j++) {
        sum += ok[j];
    }
    if (sum) {
        puts("NO");
        return 0;
    }


    if (maxzero >= m - 1) {
        puts("YES");
        return 0;
    }

    for (int i = 0; i < 16; i++)
        if (mask[i] && mask[15-i]) {
            puts("YES");
            return 0;
        }
    puts("NO");



}
