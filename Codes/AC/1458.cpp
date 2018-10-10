#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    long long n, s; cin >> n >> s;
    long long a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    long long l = 0, r = n, prev = 0;
    while (l < r) {
        long long mid = (l + r + 1) / 2;
        long long b[n]; for (int i = 0; i < n; i++) b[i] = a[i] + (i + 1) * mid;
        sort(b, b + n);
        long long ans = 0;
        for (int i = 0; i < mid; i++) ans += b[i];
        prev = ans;
        if (ans <= s) l = mid;
        else r = mid - 1;
    }
    long long b[n]; for (int i = 0; i < n; i++) b[i] = a[i] + (i + 1) * l;
    sort(b, b + n);
    long long ans = 0;
    for (int i = 0; i < l; i++) ans += b[i];
    cout << l << " " << ans << endl;
    return 0;
}
