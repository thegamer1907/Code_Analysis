/*
digu_J
Digvijay Janartha
*/

#include <bits/stdc++.h>
using namespace std;

typedef double db;
typedef long long ll;
typedef pair < ll, ll > pll;
typedef vector < ll > vll;

#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll INF = LLONG_MAX;
const ll N = 1e5 + 10;

int main() {
    fast_io();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll k, n, w;
    cin >> k >> n >> w;
    ll tot = k * w * (w + 1) / 2;
    if (tot < n) {
        cout << "0";
    } else {
        cout << tot - n;
    }
    return 0;
}
