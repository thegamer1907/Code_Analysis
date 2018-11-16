#include <bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int ans = 1;
    for (int i = 1, now = 1; i < n; ++i) {
        if (a[i] > a[i - 1])
            ++now;
        else
            now = 1;
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}
