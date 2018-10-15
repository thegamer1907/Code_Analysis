#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll n, m, k = 0, d = 0;
    cin >> n >> m;
    vector <ll> warr(n), arr(m);
    cin >> warr[0]; k += warr[0];
    for (ll i = 1; i < n; i++) {
        cin >> warr[i];
        k+=warr[i];
    }
    reverse(warr.begin(), warr.end());
    for (ll i = 1; i < n; i++) {
        warr[i] += warr[i-1];
    }
    d = k;
    for (ll i = 0; i < m; i++) {
        cin >> arr[i];
        if (arr[i] >= d) {
            cout << n << endl;
            d = k;
        }
        else {
            d -= arr[i];
            ll l = 0, r = n;
            while (r - l > 1) {
                ll mid = (l + r) / 2;
                if (d >= warr[mid]) l = mid;
                else r = mid;
            }
            if (warr[l] >= d) cout << l + 1 << endl;
            else cout << r + 1 << endl;
        }

    }
}