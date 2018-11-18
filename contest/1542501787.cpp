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
    string s;
    cin >> s;
    char first = s[0];
    char last = s[1];
    ll n;
    cin >> n;
    char c[n][2];
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < 2; ++j) {
            cin >> c[i][j];
        }
    }
    for (ll i = 0; i < n; ++i) {
        if (first == c[i][0] && last == c[i][1]) {
            cout << "YES";
            return 0;
        }
    }
    // if (first == last) {
    //     for (ll i = 0; i < n; ++i) {
    //         if (last == c[i][1]) {
    //             cout << "YES";
    //             return 0;
    //         }
    //     }
    // }
    ll flag = 0, flag1 = 0;
    for (ll i = 0; i < n; ++i) {
        if (first == c[i][1]) {
            flag = 1;
        }
        if (last == c[i][0]) {
            flag1 = 1;
        }
    }
    if (flag1 && flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
