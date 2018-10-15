#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define X first
#define Z second
#define ll long long
#define foru(i, a, b) for (ll i = a; i < b; ++i)
#define ford(i, a, b) for (ll i = a; i >= b; --i)

using namespace std;

bool check(ll n, vector<ll> &v) {
    foru(i, 0, n) {
        if (v[i] * 2 > v[v.size() - n + i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // freopen("mindist.in", "r", stdin); //
    // freopen("mindist.out", "w", stdout); //
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin  >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    /*foru(i, 0, n) {
        cout << v[i] << " ";
    }*/
    ll l = 0, r = n / 2 + 1;
    while (r - l > 1) {
        ll m = (r + l) / 2;
        if (check(m, v)) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << n - l;

    return 0;
}
