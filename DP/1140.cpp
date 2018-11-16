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
typedef tree < ll, null_type, less < ll >, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const db PI = acos(-1);
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ll N = 101;

ll a[N];

int main() {
    fast_io();
    ll n;
    cin >> n;
    ll tot_ones = 0;
    for (ll i = 0; i < n; ++i) {
    	cin >> a[i];
    	tot_ones += (a[i] == 1);
    }
    ll res = 0;
    for (ll i = 0; i < n; ++i) {
    	for (ll j = i; j < n; ++j) {
    		pll cnt = {0, 0};
    		for (ll k = i; k <= j; ++k) {
    			cnt.first += (a[k] == 0);
    			cnt.second += (a[k] == 1);
    		}
    		res = max(res, tot_ones + cnt.first - cnt.second);
    	}
    }
    cout << res << "\n";
    return 0;
}