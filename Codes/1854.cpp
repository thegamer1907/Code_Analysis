#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll md = 1e9+7;

ll test(ll cur, ll n, ll m) {
    ll row = 1;
    ll col = m;

    ll cnt = 0;

    while (row <= n && col >= 1) {
        if (row * col <= cur) {
            cnt += col;
            row++;
        } else {
            col--;
        }
    }

    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;

    ll lo = 1;
    ll hi = n * m;

    while (lo < hi) {
        ll md = lo + (hi - lo) / 2;
        ll cnt = test(md, n, m);

        if (cnt >= k) {
            hi = md;
        } else {
            lo = md + 1;
        }
    }

    cout << hi << "\n";
}