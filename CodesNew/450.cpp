#include <bits/stdc++.h>
using namespace std;

int a[100007];

int main()
{
    ios_base::sync_with_stdio(false);
    int n, t;
    cin >> n >> t;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = 0;
    for (int l = 0, r = 0, sum = a[l]; r < n && l < n; ) {
        while (sum <= t && r < n) {
            sum += a[++r];
        }
        ans = max(ans, r - l);
        sum -= a[l++];
    }
    cout << ans;

    return 0;
}
