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
    ll n, m;
    cin >> n >> m;
    ll a[n];
    in(0, n, a);
    sll cnt;
    ll ans[n];
    for (ll i = n - 1; i >= 0; --i) {
        cnt.insert(a[i]);
        ans[i] = cnt.size();
    }
    while (m > 0) {
        ll q;
        cin >> q;
        cout << ans[q - 1] << "\n";
        --m;
    }
    return;
}
