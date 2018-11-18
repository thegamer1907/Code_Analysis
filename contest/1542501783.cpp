/*
rohit645
Rohit Kumar
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;
typedef pair < ll, ll > pll;
typedef vector < vector < ll > > matrix;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

int main (void) {
    fast_io();
    string str, str1;
    cin >> str;
    ll n;
    cin >> n;
    vector <pair < char,char > > vect(n);
    ll flag1 = 0;
    ll flag2 = 0;
    ll ime = 0;
    for (ll i = 0; i < n; i++) {
        cin >> str1;
        if (str1 == str) {
            ime = 1;
        }
        vect.pb(make_pair(str1[0],str1[1]));
        // vect.pb(make_pair(str1[0],str1[1]));
    }
    if (ime) {
        cout << "YES\n";
        return 0;
    }
     // ll temp = 0;
    // ll gb = 1;
    for (auto &v : vect) {
        if (str[0] == v.second and str[1] == v.first) {
            cout << "YES\n";
            return 0;
        }
        if (v.second == str[0]) {
            flag1 = 1;
            if (n != 1) {
                v.first = '@';
            }
        }
    }
    for (auto v : vect) {
        if (v.first == str[1]) {
            flag2 = 1;
        }
    }
    // for (auto v : vect) {
    //     cout << v.first << v.second;
    // }
    // cout << "\n";
    if (flag1 and flag2) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
