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
const ll N = 1e5 + 10;

ll a[N], suff[N];
set < ll > st;

int main() {
    fast_io();
    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= n; ++i) {
    	cin >> a[i];
    }
    for (ll i = n; i > 0; --i) {
    	st.insert(a[i]);
    	suff[i] = st.size();
    }
    for (ll i = 0, l; i < m; ++i) {
    	cin >> l;
    	cout << suff[l] << "\n";
    }
    return 0;
}