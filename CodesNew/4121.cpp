#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair <ll, ll> ii;
typedef pair <ll, ii> iii;

const ll N = 1e6 + 5;
const ll INF = 1e9 + 7;

ll n, Q, a[N];

int main() {
    //freopen("975C.INP", "r", stdin);
    //freopen("975C.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> Q;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i]; a[i] += a[i - 1];
    }
    //********************
    ll cur = a[1], pos = 1;
    while (Q--) {
        ll x; cin >> x;
        ll l = pos + 1, r = n, P = -1;
        while (l <= r) {
            ll mid = (l + r) >> 1;
            if (cur + a[mid] - a[pos] >= x)
                P = mid, r = mid - 1;
            else l = mid + 1;
        }
        if (P == -1) P = n;
        if (cur >= x) P = pos;
        cur = cur + a[P] - a[pos] - x;
        if (cur <= 0) {
            if (P < n) {
                P++; cur = a[P] - a[P - 1];
            } else {
                P = 1; cur = a[1];
            }
        }
        pos = P;
        cout << n - P + 1 << " ";
    }
    return 0;
}
