#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
map<int, LL> dp[4];
int n, k, v[200000+100];
int main(void)
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    LL ans = 0;
    for (int j = 0; j < n; j++) {
        int x = v[j];
        if (x % k == 0) {
            ans += dp[2][x / k];
            dp[2][x] += dp[1][x / k];
        }
        dp[1][x] += 1;
    }
    cout << ans << endl;
    return 0;
}


