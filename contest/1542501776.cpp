/*
digu_J
Digvijay Janartha
*/

#include <bits/stdc++.h>
using namespace std;

typedef double db;
typedef long long ll;
typedef pair < ll, ll > pll;
typedef vector < ll > vll;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll INF = LLONG_MAX;
const db PI = acos(-1);
const ll MOD = 1e9 + 7;
const ll N = 1e5 + 10;

int main() {
    fast_io();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    db h, m;
    ll s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    m *= 6;
    s *= 6;
    h *= 30;
    if (h == 360) {
        h = 0;
    }
    db mn = (db(s) / 60);
    m += mn;
    db hr = (db(m) / 12);
    h += hr;
    // debug(h);
    // debug(m);
    t1 *= 30;
    t2 *= 30;
    if (t1 == 360) {
        t1 = 0;
    }
    if (t2 == 360) {
        t2 = 0;
    }
    ll flag1 = 0, flag2 = 0, flag3 = 0;
    if (t1 < t2) {
        for (ll i = t1; i <= t2; ++i) {
            if (i == s) {
                flag3 = 1;
            }
        }
        if (t2 > h && t1 < h) {
            flag1 = 1;
        }
        if (t2 > m && t1 < m) {
            flag2 = 1;
        }
    } else {
        for (ll i = t2; i <= t1; ++i) {
            if (i == s) {
                flag3 = 1;
            }
        }
        if (t1 > h && t2 < h) {
            flag1 = 1;
        }
        if (t1 > m && t2 < m) {
            flag2 = 1;
        }
    }
    // debug(s);
    // debug(t1);
    // debug(t2);
    // debug(flag1);
    // debug(flag2);
    // debug(flag3);
    if (flag1 == 1 && flag2 == 1 && flag3 == 1) {
        cout << "YES";
    } else if (flag1 == 1 && flag2 == 1 && flag3 == 0) {
        cout << "NO";
    } else if (flag1 == 1 && flag2 == 0 && flag3 == 1) {
        cout << "NO";
    } else if (flag1 == 0 && flag2 == 1 && flag3 == 1) {
        cout << "NO";
    } else if (flag1 == 0 && flag2 == 0 && flag3 == 1) {
        cout << "NO";
    } else if (flag1 == 1 && flag2 == 0 && flag3 == 0) {
        cout << "NO";
    } else if (flag1 == 0 && flag2 == 1 && flag3 == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
