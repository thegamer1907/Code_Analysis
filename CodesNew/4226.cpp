#include <iostream>
#include <set>

#define pb push_back
#define ll long long
#define mp make_pair

using namespace std;


ll check(ll x) {
    ll ans = 0;
    for (ll i = 2; i < 1000000000; i++) {
        ll x2 = i*i*i;
        if (x2 > x) break;
        ans += x/x2;
    }
    return ans;
}

int main() {

    cin.tie(0);
    ios::sync_with_stdio(NULL);

    ll n;
    cin >> n;


//    cout << check(1000000000000000000);

    ll l = -1;
    ll r = 1000000000000000000;

    while (r-l > 1) {
        ll m = (r+l)/2;
        if (check(m) >= n) r = m; else l = m;
    }

    if (check(r) == n)
    cout << r; else cout << -1;

    return 0;
}