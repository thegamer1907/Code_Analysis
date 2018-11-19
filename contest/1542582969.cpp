#include <bits/stdc++.h>

using namespace std;

int dp[20];
int aa[20];

int main(int argc, char const *argv[]) {

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i ++) {
        int mask = 0;
        for (int j = 0; j < k; j ++) {
            int x; scanf("%d", &x);
            if (x) mask |= (1 << j);
        }
        dp[mask] ++;
        aa[mask] ++;
    }

    for (int j = 0; j < k; j ++)
        for (int i = 0; i < (1 << k); i ++)
            if (i & (1 << j))
                dp[i] += dp[i ^ (1 << j)];

    if (dp[0]) puts("YES");
    else {
        bool flag = false;
        for (int i = 1; i < (1 << k); i ++) {
            if (!aa[i]) continue;
            int mask = (1 << k) - 1;
            for (int j = 0; j < k; j ++) if ((i >> j) & 1) mask ^= (1 << j);
            // cout << i << " " << mask << endl;
            if (dp[mask]) flag = true;
        }
        puts(flag ? "YES" : "NO");
    }
    
    return 0;
}