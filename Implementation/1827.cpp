#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    vector<ll> sum(3);
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < 3; j++) {
            ll x;
            cin >> x;
            sum[j] += x;
        }
    }
    if (sum[0] == 0 && sum[1] == 0 && sum[2] == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
