#include <bits/stdc++.h>
#define SZ(x) ((int)(x).size())
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, m, k; cin >> n >> m >> k;
    ll ans = 0;
    set<ll> X, Y;
    for (int i = 0; i < m; i++) {
        ll x; cin >> x;
        if (x <= k) {
            X.insert(x);
        } else {
            Y.insert(x);
        }
    }
    int tot = 0;
    ll shift = 0;
    ll add = k;
    while (1) {
        if (!X.empty()) {
            shift += (ll) SZ(X);
            X.clear();
            tot++;
        }
        if (Y.empty()) {
            cout << tot << "\n";
            return 0;
        }
//        while (*Y.begin() - shift > k) {
//            k += add;
//        }
        if (*Y.begin() - shift > k) {
            ll nice = *Y.begin() - shift;
            ll gap = nice - k;
            ll times = gap / add + (gap % add != 0);
            k += times * add;
        }
        while (*Y.begin() - shift <= k) {
            ll x = *Y.begin();
            Y.erase(x);
            X.insert(x);
            if (Y.empty()) {
                cout << tot + 1 << "\n";
                return 0;
            }
        }
    }
}