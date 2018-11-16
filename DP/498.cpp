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

ll a[N], b[N];

int main() {
    fast_io();
    ll n;
    cin >> n;
    for (ll i = 0; i < n; ++i) {
    	cin >> a[i];
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; ++i) {
    	cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    ll res = 0;
    for (ll i = 0; i < n; ++i) {
    	for (ll j = 0; j < m; ++j) {
    		if (abs(a[i] - b[j]) <= 1) {
    			++res;
    			b[j] = 102;
    			break;
    		}
    	}
    }
    cout << res << "\n";
    return 0;
}