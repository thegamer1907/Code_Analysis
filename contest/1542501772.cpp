/*
chirag11032000
Chirag Thakur
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef double db;
typedef pair < ll, ll > pll;
typedef tree < pll, null_type, less < pll >, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const db PI = acos(-1);
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ll N = 1e5 + 10;

int main() {
    fast_io();
    db h, m, s;
    ll t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) {
        h = 0;
    }
    t1 %= 12;
    t2 %= 12;
    db ang_s = s * 6;
    db ang_m = m * 6 + s / 60;
    db ang_h = h * 30 + m / 60 + s / 3600;
    t1 *= 30;
    t2 *= 30;
    ll temp1 = t1, temp2 = t2;
    t1 = min(temp1, temp2);
    t2 = max(temp1, temp2);
    bool ok[3] = {};
    if (ang_s > t1 && ang_s < t2) {
        ok[0] = true;
    } else {
        ok[0] = false;
    }
    if (ang_m > t1 && ang_m < t2) {
        ok[1] = true;
    } else {
        ok[1] = false;
    }
    if (ang_h > t1 && ang_h < t2) {
        ok[2] = true;
    } else {
        ok[2] = false;
    }
    if (ok[0] && ok[1] && ok[2]) {
        cout << "YES\n";
    } else if (!ok[0] && !ok[1] && !ok[2]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}