#include <bits/stdc++.h>

using namespace std;
int n, k;
int ll, rr;
const int maxN = 1e5 + 20;
long long f[maxN][22], ans;
int a[maxN], cnt[maxN];
long long pairs(long long x) {
    return x * (x - 1) / 2;
}
void solve(int l, int r, int j, int ld, int rd) {
    int mid = (r + l) / 2;
    int nm = 0;
    long long mn = 1e18;
    while (rr < mid) {
        rr++;
        ans -= pairs(cnt[a[rr]]);
        cnt[a[rr]]++;
        ans += pairs(cnt[a[rr]]);
    }
    while (rr > mid) {
        ans -= pairs(cnt[a[rr]]);
        cnt[a[rr]]--;
        ans += pairs(cnt[a[rr]]);
        rr--;
    }
    while (ll < ld + 1) {
        ans -= pairs(cnt[a[ll]]);
        cnt[a[ll]]--;
        ans += pairs(cnt[a[ll]]);
        ll++;
    }
    while (ll > ld + 1) {
        ll--;
        ans -= pairs(cnt[a[ll]]);
        cnt[a[ll]]++;
        ans += pairs(cnt[a[ll]]);
    }
    for (int i = ld; i <= min(rd, mid - 1); i++) {
        if (f[i][j - 1] + ans < mn) {
            mn = f[i][j - 1] + ans;
            nm = i;
        }
        ans -= pairs(cnt[a[ll]]);
        cnt[a[ll]]--;
        ans += pairs(cnt[a[ll]]);
        ll++;
    }
    f[mid][j] = mn;
    if (l <= mid - 1) solve(l, mid - 1, j, ld, nm);
    if (mid + 1 <= r) solve(mid + 1, r, j, nm, rd);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 0; i <= n; i++)
    for (int j = 0; j <= k; j++) f[i][j] = 1e18;
    f[0][0] = 0;
    for (int j = 1; j <= k; j++) {
        for (int i = 1; i <= n; i++) cnt[i] = 0;
        ll = 1;
        rr = 0;
        solve(1, n, j, 0, n - 1);
    }
    cout << f[n][k] << "\n";
    return 0;
}
