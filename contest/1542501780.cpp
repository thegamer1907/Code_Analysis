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
    ll h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    ll hhc, mhc, shc, hhf, mhf, shf, t1c, t2c;
    hhc = ll(((h * 3600 + m * 60 + s) / 3600.0) * 30000);
    hhc = hhc % 360000;
    // hhf = floor((h * 3600 + m * 60 + s) / 3600.0);
    mhc = ll(((m * 60 + s) / 60.0) * 6000);
    // mhf = floor((m * 60 + s) / 300.0);
    shc = ll(s * 6000) % 360000;
    // shf = floor(s/5.0);
    t1c = ll(t1 * 30000) % 360000;
    t2c = ll(t2 * 30000) % 360000;
    // debug (hhc), debug(mhc), debug(shc), debug(t1c), debug(t2c);
    for (ll i = t1c ,j = 0; j < 360000; i = (i + 1) % 360000, j++) {
        if (i == hhc) {
            break;
        } if (i == mhc) {
            break;
        } if (i == shc) {
            break;
        } if (i == t2c) {
            //debug(i);
            cout << "YES\n";
            return 0;
        }
    }
    for (ll i = t2c ,j = 0; j < 360000; i = (i + 1) % 360000, j++) {
        if (i == hhc) {
            // debug(1);
            break;
        } if (i == mhc) {
            // debug(2);
            break;
        } if (i == shc) {
            // debug(3);
            break;
        } if (i == t1c) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
