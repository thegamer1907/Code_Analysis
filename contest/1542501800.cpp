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
    string pass;
    cin >> pass;
    ll n;
    cin >> n;
    vector < string > s(n);
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (ll i = 0; i < n; i++) {
        if (pass == s[i] or (pass[0] == s[i][1] and pass[1] == s[i][0])) {
            cout << "YES\n";
            return 0;
        }
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            if ((pass[1] == s[i][0] and pass[0] == s[j][1]) or (pass[1] == s[j][0] and pass[0] == s[i][1])) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";

    return 0;
}
