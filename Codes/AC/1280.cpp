#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <queue>

#define ll long long
#define dd double
#define ff first
#define ss second
#define upi(init, n) for(ll i = init; i < n; ++i)
#define upj(init, n) for(ll j = init; j < n; ++j)
#define upk(init, n) for(ll k = init; k < n; ++k)
#define upl(init, n) for(ll l = init; l < n; ++l)
#define downi(init, n) for(ll i = init; i > n; --i)
#define downj(init, n) for(ll j = init; j > n; --j)
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define el '\n'
#define d4 10000

using namespace std;
ll n, m;
set<string> pol, enem, common;
string s;

int main() {
    cin.sync_with_stdio( 0 ); cin.tie( 0 );
    cin >> n >> m;
    upi(0, n) {
        cin >> s;
        pol.insert(s);
        common.insert(s);
    }
    upi(0, m) {
        cin >> s;
        enem.insert(s);
        common.insert(s);
    }
    ll p = pol.size(), e = enem.size(), cm = common.size();
    bool cur = 1;
    while (cm || (p && e)) {
        cur = !cur;
        if (cm) {
            --cm;
        } else if (cur) {
            --e;
        } else {
            --p;
        }
    }
    if (cur) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}