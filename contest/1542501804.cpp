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
    string password;
    cin >> password;
    ll n;
    cin >> n;
    string a[n];
    for (ll i = 0; i < n; ++i) {
    	cin >> a[i];
    }
    for (ll i = 0; i < n; ++i) {
    	for (ll j = 0; j < n; ++j) {
			string temp = a[i] + a[j];
			if (temp.find(password) != string :: npos) {
				cout << "YES\n";
				return 0;
			}
    	}
    }
    cout << "NO\n";
    return 0;
}