/*
lakshaygpt28
Lakshay Gupta
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair < ll, ll > pll;
typedef vector < vector < ll > > matrix;
typedef vector < ll > vll;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

vll g[N];
ll cats[N];
ll a[N];
bool vistited[N];

ll n, m;
ll cnt;

void dfs(ll node);
void dfs2(ll node);

int main() {
    fast_io();
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        cats[i] = a[i];
    }
    ll u, v;
    for (ll i = 0; i < n - 1; i++) {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs2(1);
    for (ll i = 1; i <= n; i++) {
        // cout << cats[i] << " ";
        vistited[i] = false;
    }
    // cout << "\n";
    dfs(1);
    cout << cnt << "\n";
    return 0;
}

void dfs(ll node) {
    vistited[node] = true;
    if (g[node].size() == 1 and node != 1) {
        cnt++;
        // debug(node);
    }
    for (auto x : g[node]) {
        if (!vistited[x] and cats[x] <= m) {
            dfs(x);
        }
    }
}

void dfs2(ll node) {
    vistited[node] = true;
    for (auto x : g[node]) {
        if (!vistited[x]) {
            if (a[node] == 1 and a[x] == 1) {
                cats[x] = cats[node] + 1;
            }
            dfs2(x);
        }
    }
}
