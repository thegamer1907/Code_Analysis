#include <algorithm>
#include <iostream>
#include <cstdio>

#define INF 1000000005
#define DIM 500005

using namespace std;

int v[DIM], dp[DIM], ans, n;

int main() {
    #ifndef ONLINE_JUDGE
        freopen ("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        if (v[i] > v[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        }

        else
            dp[i] = 1;

        ans = max (ans, dp[i]);
    }

    cout << ans;
    return 0;
}