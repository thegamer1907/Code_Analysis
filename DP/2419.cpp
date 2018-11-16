#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int mn = 1e9;
    int ans = 1;

    vector<int> sum(1 + n);
    for (int i = 1; i <= n; ++i) {
        int h;
        cin >> h;
        sum[i] = sum[i - 1] + h;
        if (i >= k && sum[i] - sum[i - k] <= mn) {
            mn = sum[i] - sum[i - k];
            ans = i - k + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
