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
map < ll, ll > cnt;

int main() {
    fast_io();
    ll n;
    cin >> n;
    for (ll i = 0; i < n; ++i) {
    	cin >> a[i];
    }
    sort(a, a + n);
    ll m;
    cin >> m;
    for (ll i = 0, x; i < m; ++i) {
    	cin >> x;
    	++cnt[x];
    }
    ll res = 0;
    for (ll i = 0; i < n; ++i) {
    	if (cnt.count(a[i] - 1)) {
    		++res;
    		--cnt[a[i] - 1];
    		if (cnt[a[i] - 1] == 0) {
    			cnt.erase(a[i] - 1);
    		}
    	} else if (cnt.count(a[i])) {
    		++res;
    		--cnt[a[i]];
    		if (cnt[a[i]] == 0) {
    			cnt.erase(a[i]);
    		}
    	} else if (cnt.count(a[i] + 1)) {
    		++res;
    		--cnt[a[i] + 1];
    		if (cnt[a[i] + 1] == 0) {
    			cnt.erase(a[i] + 1);
    		}
    	}
    }
    cout << res << "\n";
    return 0;
}