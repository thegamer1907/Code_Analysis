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
    string s;
    cin >> s;
    ll m, n = s.size();
    cin >> m;
    ll a[n - 1];
    for (ll i = 0; i < n - 1; ++i) {
        a[i] = (s[i] == s[i + 1]);
        // debug(a[i]);
    }
    ll ans[n];
    ans[0] = 0;
    for (ll i = 1; i < n; ++i) {
        ans[i] = ans[i - 1] + a[i - 1];
        // debug(ans[i]);
    }
    while (m > 0) {
        ll x, y;
        cin >> x >> y;
        cout << ans[y - 1] - ans[x - 1] << "\n";
        --m;
    }
    return;
}
