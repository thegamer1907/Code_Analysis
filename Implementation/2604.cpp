#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll res = 0;
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        if (b - a >= 2) {
            res++;
        }
    }
    cout << res << endl;
}
