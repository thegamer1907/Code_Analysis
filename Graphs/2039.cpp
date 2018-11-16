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

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll INF = LLONG_MAX;
const db PI = acos(-1);
const ll MOD = 1e9 + 7;
const ll N = 1e5 + 10;

ll m, cnt;
ll cat[N];
bool vis[N];
vll tree[N];

void dfs(ll v);
void count_cats(ll v);

int main() {
    fast_io();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll n;
    cin >> n >> m;
    for (ll i = 1; i <= n; ++i) {
        cin >> cat[i];
    }
    for (ll i = 0, x, y; i < n - 1; ++i) {
        cin >> x >> y;
        tree[x].pb(y);
        tree[y].pb(x);
    }
    count_cats(1);
    for (ll i = 0; i < N; ++i) {
        vis[i] = false;
    }
    dfs(1);
    cout << cnt << "\n";
    // for (ll i = 1; i <= n; ++i) {
    //     cout << "Node " << i << "\n";
    //     for (auto &x : tree[i]) {
    //         cout << x << " ";
    //     }
    //     cout << "\n";
    // }
    // for (ll i = 1; i <= n; ++i) {
    //     cout << cat[i] << " ";
    // }
    return 0;
}

void dfs(ll v) {
    vis[v] = true;
    if (tree[v].size() == 1 && v != 1) {
        // cout << "Vertex: " << v << "\n";
        ++cnt;
    }
    // debug(v);
    for (ll u : tree[v]) {
        if (cat[u] > m) {
            continue;
        }
        if (!vis[u]) {
            // debug(u);
            dfs(u);
        }
    }
}

void count_cats(ll v) {
    vis[v] = true;
    for (ll u : tree[v]) {
        if (!vis[u]) {
            if (cat[u]) {
                cat[u] += cat[v];
            }
            count_cats(u);
        }
    }
}
