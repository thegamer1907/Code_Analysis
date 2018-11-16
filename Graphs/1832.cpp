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
    ll n, m;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    cin >> m;
    pll b[m];
    for (ll i = 0; i < m; ++i) {
        cin >> b[i].F;
        b[i].S = 0;
    }
    sort(b, b + m);
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            if (a[i] - 1 == b[j].F || a[i] == b[j].F || a[i] + 1 == b[j].F) {
                if (!b[j].S) {
                    ++ans;
                    b[j].S = 1729; // Ramanujan xD
                    break;
                }
            }
        }
    }
    cout << ans << "\n";
    return;
}
