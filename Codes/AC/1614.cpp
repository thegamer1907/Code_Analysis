#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll l = 0, r = n, ans = 0;
    while (l < r) {
        ll m = (l + r + 1) / 2;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = a[i] + m * (i + 1);
        }
        sort(v.begin(), v.end());
        ll sum = 0;
        for (int i = 0; i < m; i++) {
            sum += v[i];
        }
        if (sum <= s) {
            l = m;
            ans = sum;
        } else {
            r = m - 1;
        }
    }
    cout << l << ' ' << ans << endl;
}
