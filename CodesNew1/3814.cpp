/*
lakshaygpt28
Lakshay Gupta
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair < ll, ll > pll;
typedef vector < vector < ll > > matrix;
typedef vector < ll > vll;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

int main() {
    fast_io();
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater < ll >());
    ll diff = 0;
    for (ll i = 1; i < n; i++) {
        diff += (a[0] - a[i]);
    }
    if (diff >= a[0]) {
        cout << a[0] << "\n";
        return 0;
    }
    ll rem = a[0] - diff;
    // debug(rem);
    ll ans = (rem / (n - 1)) * n;
    if (rem % (n - 1) != 0) {
        ans += rem % (n - 1) + 1;
    }
    // debug(ans);
    cout << ans + diff << "\n";
    return 0;
}
