#include<bits/stdc++.h>

#define ll long long
#define sz(x) (ll)(x.size())
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    bool a[n];
    ll ones = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i]) {
            ones++;
        }
    }
    ll ans = 0, cnt = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i]) { cnt--; }
        else { cnt++; }
        if (cnt < 0) { cnt = 0; }
        ans = max(ans, cnt);
    }
    if (ones == n) {
        cout<<n-1;
    } else
        cout << ans + ones;
}