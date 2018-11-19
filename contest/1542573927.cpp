#include <bits/stdc++.h>
using namespace std;

const int d[5] = {0, 1, 3, 7, 15};
const int MAXN = 1e5 + 5;

int n, k, c[MAXN] = {0};
bool a[MAXN][5];

int main() {
    //freopen("in.txt", "r", stdin);

    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
            c[i] = (c[i] << 1) + a[i][j];
        }
    }
    sort(c, c + n);
    //for (int i = 0; i < n; i++) printf("%d%c", c[i], " \n"[i == n - 1]);
    bool flag = 0;
    for (int i = 0; i < n; i++)
        if (d[k] > c[i]) {
            for (int j = d[k] - c[i]; j >= 0; j--) if ((c[i] & j) == 0) {
                int low = lower_bound(c, c + n, j) - c;
                int cnt = low - (upper_bound(c, c + n, j) - c);
                if (cnt) {
                    flag = 1;
                    break;
                }
            }
        }
    printf("%s", flag ? "YES" : "NO");
    return 0;
}
