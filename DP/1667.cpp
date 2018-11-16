/*
digu_J - Digvijay Janartha
NIT Hamirpur - INDIA
*/

#include <bits/stdc++.h>
using namespace std;

typedef double db;
typedef long long ll;
typedef pair < ll, ll > pll;
typedef vector < ll > vll;
typedef map < ll, ll > mll;
typedef set < ll > sll;
typedef vll lnum;

#define pb push_back
#define F first
#define S second
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define in(x, n, a) for (ll i = x; i < n; ++i) cin >> a[i]

const ll INF = LLONG_MAX;
const ll base = 1e9;
const db PI = acos(-1);
const ll MOD = 1e9 + 7;
const ll N = 1e5 + 10;

void solve();

int main() {
    fast_io();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    solve();
    #ifndef ONLINE_JUDGE
            cout << "Time: " << (int)(clock() * 1000. / CLOCKS_PER_SEC) << "ms";
    #endif
    return 0;
}

void solve() {
    string s;
    cin >> s;
    if (s.size() < 4) {
        cout << "NO\n";
        return;
    }
    ll ab = 0, ba = 0, aba = 0, bab = 0, abab = 0, baba = 0;
    for (ll i = 0; i < s.size() - 1; ++i) {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            ++ab;
        }
        if (s[i] == 'B' && s[i + 1] == 'A') {
            ++ba;
        }
    }
    for (ll i = 0; i < s.size() - 2; ++i) {
        if (s[i] == 'B' && s[i + 1] == 'A' && s[i + 2] == 'B') {
            ++bab;
        }
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'A') {
            ++aba;
        }
    }
    for (ll i = 0; i < s.size() - 3; ++i) {
        if (s[i] == 'B' && s[i + 1] == 'A' && s[i + 2] == 'B' && s[i + 3] == 'A') {
            ++baba;
        }
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'A' && s[i + 3] == 'B') {
            ++abab;
        }
    }
    if (ab > 1 && ba > 1) {
        cout << "YES\n";
    } else if (ab == 1 && ba == 2 && (bab == 1 || aba == 1)) {
        if (!baba) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else if (ab == 2 && ba == 1 && (bab == 1 || aba == 1)) {
        if (!abab) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else if (!ab || !ba) {
        cout << "NO\n";
    } else if (ab == 1 && ba == 1 && (bab == 1 || aba == 1)) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
    return;
}
